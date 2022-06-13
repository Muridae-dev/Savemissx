package;


import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.addons.text.FlxTypeText;

import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.FlxG;

using flixel.util.FlxSpriteUtil;

import flash.filters.ColorMatrixFilter;
import flash.geom.Matrix;
import flash.geom.Point;
import flixel.system.FlxSound;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxBar;
using flixel.util.FlxSpriteUtil;
import flixel.util.FlxAxes;
import flixel.addons.effects.chainable.FlxEffectSprite;
import flixel.addons.effects.chainable.FlxWaveEffect;

class Dialogue extends FlxTypedGroup<FlxSprite>
{

    var _diaBack:FlxSprite;
    var _diaTxt:FlxTypeText;
    var _diaExit:Bool = false;


    //_________________________________________________________________________________________
    public function new()
    {
        super();
        
        _diaExit = FlxG.keys.anyJustPressed([SPACE]);

        //DIALOGRUTANS BAKGRUND
        _diaBack = new FlxSprite().makeGraphic(300, 100, FlxColor.GRAY, true);
        _diaBack.screenCenter();

        //DIALOGRUTANSTEXT
        _diaTxt = new FlxTypeText(16, 2, 0, "asdasdasdasdasda", 8);
        _diaTxt.color = FlxColor.RED;
        _diaTxt.setBorderStyle(SHADOW, FlxColor.BLACK, 1, 1);
        _diaTxt.delay = 0.1;

        //TEXTEN HAMNAR I RUTAN
        _diaTxt.x = _diaBack.x;
        _diaTxt.y = _diaBack.y;

        add(_diaBack);
        add(_diaTxt);

        //SÅ RUTAN EJ SYNS NÄR VI INTE KALLAR PÅ DEN
        active = false;
        visible = false;

        //SÄTTER VARJE OBJEKT FRAMFÖR VARANN I TURORDNING AV HUR MAN LÄGGER TILL DEM
        forEach(function(spr:FlxSprite)
        {
            spr.scrollFactor.set(0,0);
        });
        
    }

    	/**
	 * This function will be called from PlayState when we want to start combat. It will setup the screen and make sure everything is ready.
	 * @param	DiaID	The amount of health the player is starting with
	 */
    
    public function initDialogue(DiaID:Int):Void
    {
        
        active = true;
        visible = true;
        alive = true;
        if(DiaID == 1){_diaTxt.text = "Hello I am a sign, a sign is what I am

        This level is very level, a level of levels with level design
        on a next level level. Therefor I suggest you proceed with
        extreme caution through this level." ; }
        
    }

    public function exitDialogue():Void
    {
        active = false;
        visible = false;
        alive = false;
    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
        if(_diaExit){exitDialogue();}
    }
}