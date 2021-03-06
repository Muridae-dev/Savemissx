package;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;
using flixel.util.FlxSpriteUtil;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.system.FlxSound;

class Enemy extends FlxSprite
{
    public var speed:Float = 80;
    public var etype(default, null):Int;
    public var ehealth:Int;
    public var _takeDmg:Int = 0;
    var _sndStep:FlxSound;

    var _brain:FSM;
    var _idleTmr:Float;
    var _moveDir:Float;
    public var seesPlayer:Bool = false;
    public var playerPos(default, null):FlxPoint;

    //_________________________________________________________________________________________
    public function new(X:Float=0, Y:Float=0, EType:Int)
    {
        super(X, Y);

        //etype = VILKEN ENEMY 0, 1, 2, 3 ETC
        etype = EType;

        //FLYING ENEMY
        if(etype == 0) 
        {
            ehealth = 2;
            drag.x = drag.y = 10;
            loadGraphic("assets/images/enemy-" + etype + ".png", true, 24, 24);

            animation.add("lr", [0, 1], 6, true);
            animation.add("u", [2, 3], 6, true);
            animation.add("d", [4, 5], 6, true);
            animation.add("hit", [6, 7, 8, 9, 10, 11], 6, true);
            
            

            setSize(24, 24);
            offset.set(4,2);

        }



        //GROUNDED ENEMY
        if(etype == 1) 
        {
            ehealth = 2;
            acceleration.y = 700;
            loadGraphic("assets/images/enemy-" + etype + ".png", true, 32, 32);
            animation.add("ie", [0, 1, 2, 3], 10, false);
            animation.add("lr", [4, 5, 6, 7], 10, false);
            animation.add("d", [0, 1, 0, 2], 6, false);
            animation.add("u", [0], 6, false);

            maxVelocity.x = 120;
            drag.x = drag.y = 1600;
            setSize(14, 30);
            offset.set(9,2);
        }

        setFacingFlip(FlxObject.LEFT, false, false);
        setFacingFlip(FlxObject.RIGHT, true, false);

        _brain = new FSM(idle);
        _idleTmr = 0;
        playerPos = FlxPoint.get();
    }

    //_________________________________________________________________________________________
    override public function draw():Void
    {
            //OM ENEMY G??R OCH INTE G??R IN I EN V??GG K??R VI ANIMATION
            if((velocity.x != 0 || velocity.y != 0) && touching == FlxObject.NONE)
            {
                if(Math.abs(velocity.x) > Math.abs(velocity.y))
                {
                    if (velocity.x < 0)
                        facing = FlxObject.LEFT;
                    else
                        facing = FlxObject.RIGHT;
                }
                else
                {
                    if (velocity.y < 0)
                        facing = FlxObject.UP;
                    else
                        facing = FlxObject.DOWN;
                }
            }

            if(_takeDmg == 1) {animation.play("hit"); }


            if(velocity.x != 0 || velocity.y != 0 && _takeDmg == 0){
                //LEFT&RIGHT
                if (facing == FlxObject.RIGHT || facing == FlxObject.LEFT){animation.play("lr");}
                
                //UP
                if (facing == FlxObject.UP) {animation.play("u");}

                //DOWN
                if (facing == FlxObject.DOWN){animation.play("d");}
            }
        
                super.draw();
    }

        //_________________________________________________________________________________________
        public function idle():Void
        {
            //OM PLAYER SES S??TT P?? CHASE
            if (seesPlayer)
            {
                _brain.activeState = chase;
            }

            if(etype == 1) {
                animation.play("ie");
                velocity.x = 0;
                acceleration.x = 0;
            }

            //OM IDLE ??R IG??NG
            else if (_idleTmr <= 0)
            {
                if(etype == 0) {
                        //EN 1% CHANS ATT ST?? STILLA
                        if (FlxG.random.bool(1))
                        {
                            _moveDir = -1;
                            velocity.x = velocity.y = 0;
                        }

                        //OM DEN G??R
                        else
                        {
                            //GER EN RANDOM VINKEL MELLAN "0 till 8 * 45 GRADER"
                            _moveDir = FlxG.random.int(0, 8) * 45;

                            velocity.set(speed * 0.2, 0);
                            velocity.rotate(FlxPoint.weak(), _moveDir);
                        }
                }
                    //GER EN RANDOM TID MELLAN 1 - 4 INNAN MOVEMENT K??RS IGEN
                    _idleTmr = FlxG.random.int(1, 4);
                }

                    
            
                else _idleTmr -= FlxG.elapsed;
                //FORTS??TTER TILLS DEN G??R TILL 0 S?? K??RS MOVEMENT IGEN
                


        }

        //_________________________________________________________________________________________
        public function chase():Void
        {
            //OM ENEMY INTE SER PLAYER OCH ??R INOM 300 PX S??TT P?? IDLE IGEN
            if(!seesPlayer && playerPos.distanceTo(this.getPosition()) >= 200)
            {
                _brain.activeState = idle;
            }

            //GROUNDED ENEMY UTANF??R 175 PX TAPPAR VISION
            if(playerPos.distanceTo(this.getPosition()) >= 175 && etype == 1)
            {
                _brain.activeState = idle;
            }
            
            //FLYING ENEMY
            if (seesPlayer == true && playerPos.distanceTo(this.getPosition()) < 200 && etype == 0)
            {
                FlxVelocity.moveTowardsPoint(this, playerPos, Std.int(speed));
            }

            //GROUNDED ENEMY
            if (seesPlayer == true && playerPos.distanceTo(this.getPosition()) < 175 && etype == 1 && !isFlickering())
            {
                //CHASE LEFT
                if(playerPos.x < this.x)
                {
                //SNABB TURN OM MAN SPRINGER ??T ANDRA H??LLET
                if(velocity.x >= 0) { velocity.x = -10; acceleration.x = -500; }
                acceleration.x -= 50;

                facing = FlxObject.LEFT;

                }

                //CHASE RIGHT
                if(playerPos.x > this.x)
                {
                //SNABB TURN OM MAN SPRINGER ??T ANDRA H??LLET, OM VI HOPPAR V??NDER VI JUMP/FALL ??T R??TT H??LL
                if(velocity.x <= 0) { velocity.x = 10; acceleration.x = 500; }
                acceleration.x += 50;

                facing = FlxObject.RIGHT;
                }
            }
        }

        public function enemyhurt():Void {
            if(etype == 0)
            {
                _takeDmg = 1;
            }
        }
        //_________________________________________________________________________________________
        override public function update(elapsed:Float):Void
        {
            
            _brain.update();
            super.update(elapsed);

            //OUT OF BOUNDS = KILL
            if(this.y > 720) {this.kill();}


            /*STEPSOUNDS
            if((velocity.x != 0 || velocity.y != 0) && touching == FlxObject.NONE)
            {
                _sndStep.setPosition(x + frameWidth / 2, y + height);
                _sndStep.play();
            }*/
        }

    }

