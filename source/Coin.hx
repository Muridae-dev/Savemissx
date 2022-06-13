package;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class Coin extends FlxSprite{

    //OVERRIDAR KILL SÅ VI FÅR FADEKILL
    //_________________________________________________________________________________________
    override public function kill():Void
    {
        alive = false;

        // .33 ÄR FADEOUT TIME
        FlxTween.tween(this, { alpha: 0, y: y - 16}, .33, { ease: FlxEase.circOut, onComplete: finishKill });
    }

    //DÖPER RECEIVE ARGUMENT TILL "_" FÖR VI BRYR OSS INTE OM DEN, VANLIGT ATT GÖRA I HAXE, FÖR COMPILER ÄR DET ETT ARGUMENT SOM HETER "_"
    //_________________________________________________________________________________________
    function finishKill(_):Void 
    {
        exists = false;
    }

    //_________________________________________________________________________________________
    public function new(X:Float=0, Y:Float=0)
    {
        super(X,Y);
        loadGraphic(AssetPaths.coin__png, false, 8, 8);
    }
    
}