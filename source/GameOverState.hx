package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxAxes;
import flixel.util.FlxColor;
import flixel.util.FlxSave;

class GameOverState extends FlxState
{
    var _score:Int = 0;
    var _txtTitle:FlxText;
    var _txtMessage:FlxText;
    var _sprScore:FlxSprite;
    var _txtScore:FlxText;
    var _txtHiScore:FlxText;
    var _btnMainMenu:FlxButton;

    /**
     * CALLED FRÅN PLAYSTATE
     * @param Score 
     */

    //_________________________________________________________________________________________
    public function new(Score:Int)
    {
        _score = Score;
        super();
    }

    //SKAPA HIGHSCORESCREEN FUNKTIONEN
    //_________________________________________________________________________________________
    override public function create():Void
    {
        #if FLX_MOUSE
        FlxG.mouse.visible = true;
        #end

        //GAME OVER TITLE
        _txtTitle = new FlxText(0,20,0,"GAME OVER!", 22);
        _txtTitle.alignment = CENTER;
        _txtTitle.screenCenter(FlxAxes.X);
        add(_txtTitle);

        //SCORE TITLE
        _txtMessage = new FlxText(0, (FlxG.height / 2) - 18, 0, "FINAL SCORE:", 8);
        _txtMessage.alignment = CENTER;
        _txtMessage.screenCenter(FlxAxes.X);
        add(_txtMessage);

        //SCORESPRITE
        _sprScore = new FlxSprite((FlxG.width / 2) - 8, 0, AssetPaths.coin__png);
        _sprScore.screenCenter(FlxAxes.Y);
        add(_sprScore);

        //SCORE NR
        _txtScore = new FlxText((FlxG.height / 2), 0, 0, Std.string(_score), 8);
        _txtScore.screenCenter(FlxAxes.Y);
        add(_txtScore);

        //VAD ÄR HIGHSCORE?
        var _hiScore = checkHiScore(_score);

        _txtHiScore = new FlxText(0, (FlxG.height / 2) + 10, 0, "HI-SCORE: " + _hiScore, 8);
        _txtHiScore.alignment = CENTER;
        _txtHiScore.screenCenter(FlxAxes.Y);
        add(_txtHiScore);

        _btnMainMenu = new FlxButton(0, FlxG.height - 32, "MAIN MENU", goMainMenu);
        _btnMainMenu.screenCenter(FlxAxes.X);
        _btnMainMenu.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
        _btnMainMenu.color = FlxColor.WHITE;
        add(_btnMainMenu);

        FlxG.camera.fade(FlxColor.BLACK, .33, true);

        super.create();
        
    }

    /**
     * OM NYA HIGHSCORE ÄR HÖGRE ÄN GAMLA SPARAR VI NYA ANNARS RETURNAR VI DET GAMLA HIGHSCORET
     * @param Score 
     * @return
     */

    //KOLLA HIGHSCORE FUNCTIONEN
    //_________________________________________________________________________________________
    function checkHiScore(Score:Int):Int
    {
        var _hi:Int = Score;
        var _save:FlxSave = new FlxSave();
        if(_save.bind("Savemissx"))
        {
            //OM NYA E KEFFARE
            if (_save.data.hiscore != null && _save.data.hiscore > _hi)
            {
                _hi = _save.data.hiscore;
            }

            //OM NYA SCORE ÄR HÖGRE ÄN HIGHSCORE
            else
            {
                _save.data.hiscore = _hi;
            }
        }
        
        
        _save.close();
        return _hi;

    }

        //GOMAINMENU FUNKTIONEN
        //_________________________________________________________________________________________
        function goMainMenu():Void
        {
            FlxG.camera.fade(FlxColor.BLACK, .33, false, function()
            {
                FlxG.switchState(new MenuState());
            
            
            });
        }

        //_________________________________________________________________________________________
        override public function update(elapsed:Float):Void
	{
        if(FlxG.keys.anyJustPressed([ENTER]))goMainMenu();
        super.update(elapsed);
    }
}