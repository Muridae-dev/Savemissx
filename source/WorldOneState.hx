package;

import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.util.FlxAxes;
import flixel.util.FlxColor;


class WorldOneState extends FlxState
{
    var _btnPlayL1:FlxButton;
    var _btnPlayL2:FlxButton;
    var _btnPlayL3:FlxButton;
    var _btnPlayL4:FlxButton;
    var _btnPlayL5:FlxButton;
    var _btnPlayL6:FlxButton;
    var _btnPlayL7:FlxButton;
    var _btnPlayL8:FlxButton;
    var _btnPlayL9:FlxButton;
    var _btnPlayL10:FlxButton;
    var _btnPlayL11:FlxButton;
    var _levelSelector:Int=1;
    

    //_________________________________________________________________________________________
	override public function create():Void
	{
        _btnPlayL1 = new FlxButton(0, 0, "LEVEL 1", clickPlayL1);
        _btnPlayL1.color = FlxColor.WHITE;
        add(_btnPlayL1);

        _btnPlayL2 = new FlxButton(_btnPlayL1.x , (_btnPlayL1.y + 20), "LEVEL 2", clickPlayL2);
        add(_btnPlayL2);

        _btnPlayL3 = new FlxButton(_btnPlayL1.x , (_btnPlayL2.y + 20), "LEVEL 3", clickPlayL3);
        add(_btnPlayL3);

        _btnPlayL4 = new FlxButton(_btnPlayL1.x , (_btnPlayL3.y + 20), "LEVEL 4", clickPlayL4);
        add(_btnPlayL4);

        _btnPlayL5 = new FlxButton(_btnPlayL1.x , (_btnPlayL4.y + 20), "LEVEL 5", clickPlayL5);
        add(_btnPlayL5);

        _btnPlayL6 = new FlxButton(_btnPlayL1.x , (_btnPlayL5.y + 20), "LEVEL 6", clickPlayL6);
        add(_btnPlayL6);

        _btnPlayL7 = new FlxButton(_btnPlayL1.x , (_btnPlayL6.y + 20), "LEVEL 7", clickPlayL7);
        add(_btnPlayL7);

        _btnPlayL8 = new FlxButton(_btnPlayL1.x , (_btnPlayL7.y + 20), "LEVEL 8", clickPlayL8);
        add(_btnPlayL8);

        _btnPlayL9 = new FlxButton(_btnPlayL1.x , (_btnPlayL8.y + 20), "LEVEL 9", clickPlayL9);
        add(_btnPlayL9);

        _btnPlayL10 = new FlxButton(_btnPlayL1.x , (_btnPlayL9.y + 20), "LEVEL 10", clickPlayL10);
        add(_btnPlayL10);

        _btnPlayL11 = new FlxButton(_btnPlayL1.x , (_btnPlayL10.y + 20), "LEVEL 11", clickPlayL11);
        add(_btnPlayL11);

        _btnPlayL2.color = FlxColor.GRAY;
        _btnPlayL3.color = FlxColor.GRAY;
        _btnPlayL4.color = FlxColor.GRAY;
        _btnPlayL5.color = FlxColor.GRAY;
        _btnPlayL6.color = FlxColor.GRAY;
        _btnPlayL7.color = FlxColor.GRAY;
        _btnPlayL8.color = FlxColor.GRAY;
        _btnPlayL9.color = FlxColor.GRAY;
        _btnPlayL10.color = FlxColor.GRAY;
        _btnPlayL11.color = FlxColor.GRAY;
		super.create();
	}

    //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL1():Void
    {
        _levelSelector = 1;
        FlxG.switchState(new PlayState(_levelSelector));
    }

    //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL2():Void
    {
        _levelSelector = 2;
        FlxG.switchState(new PlayState(_levelSelector));
    }

    //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL3():Void
    {
        _levelSelector = 3;
        FlxG.switchState(new PlayState(_levelSelector));
    }

    //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL4():Void
    {
        _levelSelector = 4;
        FlxG.switchState(new PlayState(_levelSelector));
    }

    //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL5():Void
    {
        _levelSelector = 5;
        FlxG.switchState(new PlayState(_levelSelector));
    }

    //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL6():Void
    {
        _levelSelector = 6;
        FlxG.switchState(new PlayState(_levelSelector));
    }

    //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL7():Void
    {
        _levelSelector = 7;
        FlxG.switchState(new PlayState(_levelSelector));
    }

    //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL8():Void
    {
        _levelSelector = 8;
        FlxG.switchState(new PlayState(_levelSelector));
    }

        //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL9():Void
    {
        _levelSelector = 9;
        FlxG.switchState(new PlayState(_levelSelector));
    }

    //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL10():Void
    {
        _levelSelector = 10;
        FlxG.switchState(new PlayState(_levelSelector));
    }

        //FUNKTION TILL KNAPP "PLAY"
    function clickPlayL11():Void
    {
        _levelSelector = 11;
        FlxG.switchState(new PlayState(_levelSelector));
    }

    //_________________________________________________________________________________________
	override public function update(elapsed:Float):Void
	{
        if(FlxG.keys.anyJustPressed([UP]))
		{
            if(_btnPlayL2.color == FlxColor.WHITE){_btnPlayL1.color = FlxColor.WHITE; _btnPlayL2.color = FlxColor.GRAY;}
            if(_btnPlayL3.color == FlxColor.WHITE){_btnPlayL2.color = FlxColor.WHITE; _btnPlayL3.color = FlxColor.GRAY;}
            if(_btnPlayL4.color == FlxColor.WHITE){_btnPlayL3.color = FlxColor.WHITE; _btnPlayL4.color = FlxColor.GRAY;}
            if(_btnPlayL5.color == FlxColor.WHITE){_btnPlayL4.color = FlxColor.WHITE; _btnPlayL5.color = FlxColor.GRAY;}
            if(_btnPlayL6.color == FlxColor.WHITE){_btnPlayL5.color = FlxColor.WHITE; _btnPlayL6.color = FlxColor.GRAY;}
            if(_btnPlayL7.color == FlxColor.WHITE){_btnPlayL6.color = FlxColor.WHITE; _btnPlayL7.color = FlxColor.GRAY;}
            if(_btnPlayL8.color == FlxColor.WHITE){_btnPlayL7.color = FlxColor.WHITE; _btnPlayL8.color = FlxColor.GRAY;}
            if(_btnPlayL9.color == FlxColor.WHITE){_btnPlayL8.color = FlxColor.WHITE; _btnPlayL9.color = FlxColor.GRAY;}
            if(_btnPlayL10.color == FlxColor.WHITE){_btnPlayL9.color = FlxColor.WHITE; _btnPlayL10.color = FlxColor.GRAY;}
            if(_btnPlayL11.color == FlxColor.WHITE){_btnPlayL9.color = FlxColor.WHITE; _btnPlayL11.color = FlxColor.GRAY;}
        }

        if(FlxG.keys.anyJustPressed([DOWN]))
		{
            
            if(_btnPlayL9.color == FlxColor.WHITE){_btnPlayL10.color = FlxColor.WHITE; _btnPlayL9.color = FlxColor.GRAY;}
            if(_btnPlayL8.color == FlxColor.WHITE){_btnPlayL9.color = FlxColor.WHITE; _btnPlayL8.color = FlxColor.GRAY;}
            if(_btnPlayL7.color == FlxColor.WHITE){_btnPlayL8.color = FlxColor.WHITE; _btnPlayL7.color = FlxColor.GRAY;}
            if(_btnPlayL6.color == FlxColor.WHITE){_btnPlayL7.color = FlxColor.WHITE; _btnPlayL6.color = FlxColor.GRAY;}
            if(_btnPlayL5.color == FlxColor.WHITE){_btnPlayL6.color = FlxColor.WHITE; _btnPlayL5.color = FlxColor.GRAY;}
            if(_btnPlayL4.color == FlxColor.WHITE){_btnPlayL5.color = FlxColor.WHITE; _btnPlayL4.color = FlxColor.GRAY;}
            if(_btnPlayL3.color == FlxColor.WHITE){_btnPlayL4.color = FlxColor.WHITE; _btnPlayL3.color = FlxColor.GRAY;}
            if(_btnPlayL2.color == FlxColor.WHITE){_btnPlayL3.color = FlxColor.WHITE; _btnPlayL2.color = FlxColor.GRAY;}
            if(_btnPlayL1.color == FlxColor.WHITE){_btnPlayL2.color = FlxColor.WHITE; _btnPlayL1.color = FlxColor.GRAY;}
        }

        if(FlxG.keys.pressed.ENTER)
		{
            if(_btnPlayL1.color == FlxColor.WHITE){clickPlayL1();}
            if(_btnPlayL2.color == FlxColor.WHITE){clickPlayL2();}
            if(_btnPlayL3.color == FlxColor.WHITE){clickPlayL3();}
            if(_btnPlayL4.color == FlxColor.WHITE){clickPlayL4();}
            if(_btnPlayL5.color == FlxColor.WHITE){clickPlayL5();}
            if(_btnPlayL6.color == FlxColor.WHITE){clickPlayL6();}
            if(_btnPlayL7.color == FlxColor.WHITE){clickPlayL7();}
            if(_btnPlayL8.color == FlxColor.WHITE){clickPlayL8();}
            if(_btnPlayL9.color == FlxColor.WHITE){clickPlayL9();}
            if(_btnPlayL10.color == FlxColor.WHITE){clickPlayL10();}
            if(_btnPlayL11.color == FlxColor.WHITE){clickPlayL11();}
        }
		super.update(elapsed);
	}
}
