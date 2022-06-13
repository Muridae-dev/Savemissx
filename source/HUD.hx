package;

import flixel.FlxBasic;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.ui.FlxBar;
import flixel.util.FlxAxes;
using flixel.util.FlxSpriteUtil;

class HUD extends FlxTypedGroup<FlxSprite>
{

    var _sprBack:FlxSprite;
    var _sprHealth:FlxSprite;
    var _sprMoney:FlxSprite;

    var _txtHealth:FlxText;
    var _txtMoney:FlxText;
    var _txtRage:FlxText;

    var _barHP:FlxBar;
    public var _barRage:FlxBar;
    public var _barRoll:FlxBar;
    var _shake: Int = 1;

    //_________________________________________________________________________________________
    public function new()
    {
        super();
        //GÖR HUD RUTAN
        _sprBack = new FlxSprite().makeGraphic(FlxG.width, 20, FlxColor.WHITE, true);
        _sprBack.alpha = 0;
        //_sprBack.drawRect(0, 19, FlxG.width, 1, FlxColor.WHITE);

        //HP BAR
        _barHP = new FlxBar(0, 2, LEFT_TO_RIGHT, 50, 15, null, null, 0, 10);
        _barHP.createFilledBar(0xff560306 ,0xffa9141a, true, 0x66560306);
        _barHP.value = 10;

        //RAGE BAR
        _barRage = new FlxBar(0, 2, LEFT_TO_RIGHT, 100, 15, null, null, 0, 500);
        _barRage.createFilledBar(0xff560306 ,0xffa9141a, true, 0x66560306);
        _barRage.value = 0;
        _barRage.screenCenter(FlxAxes.X);

        //ROLLBAR
        _barRoll = new FlxBar(0, 2, RIGHT_TO_LEFT, 50 , 15, null, null, 0, 20);
        _barRoll.createFilledBar(0xff500079, 0xff2d0045, true, 0x80500079);
        _barRoll.value = 0;

        

        //TEXTER
        _txtHealth = new FlxText(16, 2, 0, "10 / 10", 8);
        _txtHealth.setBorderStyle(SHADOW, FlxColor.GRAY, 1, 1);
        _txtMoney = new FlxText(0, 2, 0, "0", 8);
        _txtMoney.setBorderStyle(SHADOW, FlxColor.GRAY, 1, 1);
        _txtRage = new FlxText(0, 2, 0, "RAGE", 8);
        _txtRage.screenCenter(FlxAxes.X);
        _txtRage.color = FlxColor.RED;
        _txtMoney.setBorderStyle(SHADOW, FlxColor.GRAY, 1, 1);

        //SPRITES
        _sprHealth = new FlxSprite(4, _txtHealth.y + (_txtHealth.height/2) - 4, AssetPaths.health__png);
        _sprMoney = new FlxSprite(FlxG.width - 12, _txtMoney.y + (_txtMoney.height/2) - 4, AssetPaths.coin__png);

        _txtMoney.alignment = RIGHT;
        _txtMoney.x = _sprMoney.x - _txtMoney.width - 4;

        _barHP.x = 15;
        _txtHealth.x = _barHP.x + 8;

        _barRoll.x = _txtMoney.x - 60;

        add(_barHP);
        add(_barRage);
        add(_barRoll);
        add(_sprBack);
        add(_sprHealth);
        add(_sprMoney);
        add(_txtHealth);
        add(_txtMoney);
        add(_txtRage);
        forEach(function(spr:FlxSprite)
        {
            spr.scrollFactor.set(0,0);
        });
    }
    
    //UPDATERA HEALTH/COIN
    //_________________________________________________________________________________________
    public function updateHUD(Health:Int = 0, Money:Int = 0, Rage:Int = 0):Void
    {
        _barHP.value = Health;
        _barRage.value = Rage;
        _barRoll.value = Money;

        _txtHealth.text = Std.string(Health) + " / 10";
        _txtMoney.text = Std.string(Money);
        _txtMoney.x = _sprMoney.x - _txtMoney.width - 4;

        if(_barRage.value == 500) {_txtRage.color = FlxColor.YELLOW;}
        if(_barRage.value < 500) {_txtRage.color = FlxColor.RED;}

    }
}