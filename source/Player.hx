package;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.FlxObject;
import flixel.system.FlxSound;
import flixel.util.FlxTimer;

using flixel.util.FlxSpriteUtil;



class Player extends FlxSprite
{
    var _sndStep:FlxSound;
    public var _dbjump:Int = 0;
    public var _rageMultp:Float = 1;
    public var _charClimb:Int = 0;
    public var _grab:Bool = false;
    public var _grabOne:Bool = false;
    public var _rollCheck:Int = 0;

    //PUNCHTIMER 0 = INGEN ATTACK GÖRS, 1 = ATTACK GÖRS 
    public var _punchtmr:Float = 0;

    //FACEDIR = 0 BLIR LEFT, FACEDIR = 1 BLIR RIGHT
    public var _facedir:Float = 0;

    public var _uddir:Float = 0;

    //_________________________________________________________________________________________
    public function new(?X:Float=0, ?Y:Float=0)
    {
        super(X, Y);

        facing = FlxObject.RIGHT;

        loadGraphic(AssetPaths.playeralt__png, true, 32, 32);
        setFacingFlip(FlxObject.LEFT, false, false);
        setFacingFlip(FlxObject.RIGHT, true, false);

        _sndStep = FlxG.sound.load(AssetPaths.step__wav, 0.1);

        //___________________________ANIMATIONS___________________________
        //IDLE
        animation.add("ieR", [0, 1, 2, 3, 4, 5], 10, false);
        animation.add("ieL", [8, 9, 10, 11, 12, 13], 10, false);

        //RUN
        animation.add("runR", [16, 17, 18, 19, 20, 21, 20, 19, 18], 15, false);
        animation.add("runL", [24, 25, 26, 27, 28, 29, 28, 27, 26], 15, false);

        
        //JUMP
        animation.add("upR", [32], 10, false);
        animation.add("upL", [40], 10, false);
        //FALL
        animation.add("dwnR", [48], 10, false);
        animation.add("dwnL", [56], 10, false);
        //GROUNDPUNCH LEFTRIGHT
        animation.add("pncR", [64, 65, 66, 67], 10, false);
        animation.add("pncL", [72, 73, 74, 75], 10, false);
                       
        //GROUNDHEADBUTT UP
        animation.add("hbttR", [96, 97, 98, 99, 100], 15, false);
        animation.add("hbttL", [104, 105, 106, 107, 108], 15, false);
        //AIRKICK LEFTRIGHT
        animation.add("airkR", [80, 81, 82, 83, 84, 85, 81, 80], 18, false);
        animation.add("airkL", [88, 89, 90, 91, 92, 93, 89, 88], 18, false);
        //AIRKICK UP LEFTRIGHT
        animation.add("airkUR", [112, 112, 113, 114, 115, 115, 116, 117], 20, false);
        animation.add("airkUL", [120, 120, 121, 122, 123, 123, 124, 125], 20, false);
        //AIRKICK DOWN LEFTRIGHT
        animation.add("airkDR", [128, 129, 130, 130], 12, false);
        animation.add("airkDL", [136, 137, 138, 138], 12, false);
        //CLIMB
        animation.add("climbR", [144, 145, 146, 147, 148, 149], 5, false);
        //_________________________________________________________________



        //SÅ MAN FÅR LITE SLOWDOWN PÅ MOVEMENT STOP
        drag.x = drag.y = 1600;

        //SÅ MAN ENKLARE TAR SIG IGENOM DÖRRAR, SLIPPER SÄTTA PERFEKT PÅ PIXELN
        setSize(9, 30);
        offset.set(11,2);
        acceleration.y = 700;


    }

    //ATTACKSTOP FUNKTIONEN
    //_________________________________________________________________________________________
    function attackstop(Timer:FlxTimer):Void {
        _punchtmr = 0;
    }

    //MOVEMENT FUNKTIONEN
    //_________________________________________________________________________________________
    function movement():Void {

        //___________________________MOVEMENT___________________________
        var _up:Bool = false;
        var _upH:Bool = false;
        var _dubW:Bool = false;
        var _dubWone:Bool = false;
        var _down:Bool = false;
        var _downH:Bool = false;
        var _right:Bool = false;
        var _left:Bool = false;
        var _roll:Bool = false;
        var _rightone:Bool = false;
        var _leftone:Bool = false;
        var _run:Bool = false;

        _up = FlxG.keys.anyJustPressed([SPACE]);
        _upH = FlxG.keys.anyPressed([SPACE]);

        _dubW = FlxG.keys.anyPressed([W]);
        _dubWone = FlxG.keys.anyJustPressed([W]);

        _down = FlxG.keys.anyJustPressed([S]);
        _downH = FlxG.keys.anyPressed([S]);

        _right = FlxG.keys.anyPressed([D]);
        _left = FlxG.keys.anyPressed([A]);

        _roll = FlxG.keys.anyJustPressed([E]);
        _run = FlxG.keys.anyPressed([TAB]);

        _rightone = FlxG.keys.anyJustPressed([D]);
        _leftone = FlxG.keys.anyJustPressed([A]);

        _grab = FlxG.keys.anyPressed([SHIFT]);
        _grabOne = FlxG.keys.anyJustPressed([CONTROL]);
        //_____________________________________________________________


        //___________________________ATTACKS___________________________
        var _lattack:Bool = false;
        var _rattack:Bool = false;
        var _upattack:Bool = false;
        var _dnattack:Bool = false;

        _lattack = FlxG.keys.anyJustPressed([LEFT]);
        _rattack = FlxG.keys.anyJustPressed([RIGHT]);
        _upattack = FlxG.keys.anyJustPressed([UP]);
        _dnattack = FlxG.keys.anyJustPressed([DOWN]);
        //_____________________________________________________________

            //ROLL OM DET GÅR
            if (_roll && _rollCheck > 0)
                {
                    flicker(0.5);
                    
                }

            //OM MAN HÅLLER IN SHIFT KAN MAN SPRINGA SNABBARE
            if(_run == true) {maxVelocity.x = 150 * _rageMultp;}
            if(_run == false) {maxVelocity.x = 250 * _rageMultp;}

            //DOUBLEJUMP
            if(velocity.y == 0 && _uddir == 0) {_dbjump = 0;}
        

            //OM VI SLÄPPER HÖGER OCH VÄNSTER RESETTAR VI AXX
            if(_right != true && _left != true)
            {
                acceleration.x = 0;
            }

            //NÄR VI TRYCKER PÅ LEFT/RIGHT RESETTAR VI AXX
            if(_rightone || _leftone){
                acceleration.x = 0;
            }

            //JUMP OCH FALL ANIMATION
            if(velocity.y < 0 && _punchtmr == 0) {facing = FlxObject.UP;}
            if(velocity.y > 0 && _punchtmr == 0) {facing = FlxObject.DOWN;}

            //IDLE ANIMATION
            if(velocity.y == 0 && velocity.x == 0 && _punchtmr == 0) {
                if(_facedir == 1){animation.play("ieR"); _uddir = 0;}
                if(_facedir == 0){animation.play("ieL"); _uddir = 0;}
                
            }


        //___________________________MOVEMENT___________________________
        //OM VI TRYCKER PÅ UP/DOWN/LEFT/RIGHT
        if(_charClimb == 0){
        if (_up || _down || _left || _right || velocity.y > 0 || velocity.y < 0) {

            //HOPPAR OCH SER TILL ATT MAN INTE KAN DIREKTDUBBELHOPPA
            if (_up && velocity.y >= -280)
            {
                //DOUBLEJUMP
                if(_dbjump <= 1) {
                    velocity.y = -300;
                    _dbjump++;
                }
            }

            //GÅR DOWN
            else if (_down)
            {
                if(velocity.y != 0) {velocity.y = 300;}
            }

            //GÅR LEFT
            else if (_left) {
                
                //SNABB TURN OM MAN SPRINGER ÅT ANDRA HÅLLET
                if(velocity.x >= 0) { velocity.x = -10; acceleration.x = -500; }
                
                _facedir = 0;
                acceleration.x -= 50;

                //OM VI INTE HOPPAR ELLER SLÅR KÖR VI GÅ ANIMATION, OM VI HOPPAR VÄNDER VI JUMP/FALL ÅT RÄTT HÅLL
                if(velocity.y == 0 && _punchtmr == 0){facing = FlxObject.LEFT; _sndStep.play();}
                if(velocity.y < 0 || velocity.y > 0){setFacingFlip(FlxObject.UP, false, false); setFacingFlip(FlxObject.DOWN, false, false);}


                }

            //GÅR RIGHT
            else if (_right) {

                //SNABB TURN OM MAN SPRINGER ÅT ANDRA HÅLLET, OM VI HOPPAR VÄNDER VI JUMP/FALL ÅT RÄTT HÅLL
                if(velocity.x <= 0) { velocity.x = 10; acceleration.x = 500; }

                _facedir = 1;
                acceleration.x += 50;
                
                //OM VI INTE HOPPAR ELLER SLÅR KÖR VI GÅ ANIMATION, OM VI HOPPAR VÄNDER VI JUMP/FALL ÅT RÄTT HÅLL
                if(velocity.y == 0 && _punchtmr == 0){facing = FlxObject.RIGHT; _sndStep.play();}
                if(velocity.y < 0 || velocity.y > 0){setFacingFlip(FlxObject.UP, true, false); setFacingFlip(FlxObject.DOWN, true, false);}
                
                
                }

            //OM PLAYER GÅR OCH INTE GÅR IN I EN VÄGG KÖR VI ANIMATION
            if(_punchtmr == 0)
            {
                if(velocity.x != 0 || velocity.y != 0){
                        //RIGHT
                        if (facing == FlxObject.RIGHT){animation.play("runR"); _uddir = 0;}
                        //LEFT
                        if (facing == FlxObject.LEFT){animation.play("runL"); _uddir = 0;}
                        //JUMP
                        if (facing == FlxObject.UP)
                        {
                            //JUMPRIGHT
                            if(_facedir == 1) {animation.play("upR"); setFacingFlip(FlxObject.UP, true, false); setFacingFlip(FlxObject.DOWN, true, false);}
                            //JUMPLEFT
                            if(_facedir == 0) {animation.play("upL"); setFacingFlip(FlxObject.UP, false, false); setFacingFlip(FlxObject.DOWN, false, false);}
                            _uddir = 1;
                        }
                        //FALL
                        if (facing == FlxObject.DOWN)
                        {
                            //FALLRIGHT
                            if(_facedir == 1) {animation.play("dwnR"); setFacingFlip(FlxObject.UP, true, false); setFacingFlip(FlxObject.DOWN, true, false);}
                            //FALLLEFT
                            if(_facedir == 0) {animation.play("dwnL"); setFacingFlip(FlxObject.UP, false, false); setFacingFlip(FlxObject.DOWN, false, false);}
                            _uddir = 1;
                        }
                    
                    
                }
            }
        }}
        //_____________________________________________________________

        //___________________________CLIMBING__________________________
        if(_charClimb == 1) {
            acceleration.y = 0;
            maxVelocity.y = 140;
            velocity.x = 0;
            acceleration.x = 0;
            animation.play("climbR");

            if(_dubW || _upH) {
                //if(velocity.y >= 0) {acceleration.y = -500; velocity.y = -10;}
                velocity.y -= 100;
                }
            if(_downH) {
                //if(velocity.y <= 0) {acceleration.y = 500; velocity.y = 10;}
                velocity.y += 100;
                }

        }

        if(_charClimb == 0) {
            acceleration.y = 700;
            maxVelocity.y = 1000;
        }
        //_____________________________________________________________

        //___________________________ATTACKS___________________________
        if(_lattack || _rattack || _upattack || _dnattack)
        {
            //LEFT ATTACKS
            if (_lattack  && _punchtmr == 0)
            {
                facing = FlxObject.LEFT;
                _facedir = 0;
                //LEFT PUNCH
                if (velocity.y == 0) {animation.play("pncL");}
                //LEFT AIRKICK
                if (velocity.y != 0) {animation.play("airkL");}
                _punchtmr = 1;
                new FlxTimer().start(0.4, attackstop , 1);
            }

            //RIGHT ATTACKS
            if (_rattack && _punchtmr == 0)
            {
                facing = FlxObject.RIGHT;
                _facedir = 1;
                //RIGHT PUNCH
                if (velocity.y == 0) {animation.play("pncR");}
                //LEFT AIRKICK
                if (velocity.y != 0) {animation.play("airkR");}

                _punchtmr = 1;
                new FlxTimer().start(0.4, attackstop , 1);
            }

            //UP ATTACKS
            if (_upattack && _punchtmr == 0)
            {
                //HEADBUTT
                if (velocity.y == 0 && _facedir == 1) {animation.play("hbttR");}
                if (velocity.y == 0 && _facedir == 0) {animation.play("hbttL");}
                //AIRFLIPKICK
                if (velocity.y != 0 && _facedir == 1) {animation.play("airkUR");}
                if (velocity.y != 0 && _facedir == 0) {animation.play("airkUL");}

                _punchtmr = 1;
                new FlxTimer().start(0.4, attackstop , 1);
            }

            //DOWN ATTACKS
            if (_dnattack && _punchtmr == 0)
            {
                if (velocity.y != 0 && _facedir == 1) {animation.play("airkDR");}
                if (velocity.y != 0 && _facedir == 0) {animation.play("airkDL");}

                _punchtmr = 1;
                new FlxTimer().start(0.4, attackstop , 1);

            }

        }
        //_____________________________________________________________

    }

    //_________________________________________________________________________________________
	override public function update(elapsed:Float):Void
	{
        movement();
		super.update(elapsed);

        if(this.y > 790) {this.kill();}
        
	}
}