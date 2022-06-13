package;

import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxAxes;
import flixel.util.FlxColor;


class MenuState extends FlxState
{
    var _btnPlayL1:FlxButton;
    var _btnPlayL2:FlxButton;
    var _txtTitle:FlxText;
    var _levelSelector:Int=1;
    

    //_________________________________________________________________________________________
	override public function create():Void
	{
        _btnPlayL1 = new FlxButton(0, 0, "TESTLEVEL", clickPlayL1);
        _btnPlayL1.screenCenter();
        _btnPlayL1.color = FlxColor.GRAY;
        add(_btnPlayL1);
        

        _btnPlayL2 = new FlxButton(_btnPlayL1.x , (_btnPlayL1.y + 20), "WORLD ONE", clickPlayL2);
        _btnPlayL2.color = FlxColor.WHITE;
        add(_btnPlayL2);


        _txtTitle = new FlxText(0,20,0,"SAVE MISS X", 40);
        _txtTitle.alignment = CENTER;
        _txtTitle.screenCenter(FlxAxes.X);
        add(_txtTitle);

		super.create();
	}

    //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL1():Void
    {
        _levelSelector = 0;
        FlxG.switchState(new PlayState(_levelSelector));
    }

    //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL2():Void
    {
        FlxG.switchState(new WorldOneState());
    }


    //_________________________________________________________________________________________
	override public function update(elapsed:Float):Void
	{
        if(FlxG.keys.pressed.UP)
		{
            if(_btnPlayL2.color == FlxColor.WHITE){_btnPlayL1.color = FlxColor.WHITE; _btnPlayL2.color = FlxColor.GRAY;}
        }

                if(FlxG.keys.pressed.DOWN)
		{
            if(_btnPlayL1.color == FlxColor.WHITE){_btnPlayL2.color = FlxColor.WHITE; _btnPlayL1.color = FlxColor.GRAY;}
        }
        if(FlxG.keys.pressed.ENTER)
        {
            if(_btnPlayL1.color == FlxColor.WHITE)clickPlayL1();
            if(_btnPlayL2.color == FlxColor.WHITE)clickPlayL2();
        }
		super.update(elapsed);
	}
}
