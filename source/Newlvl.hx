package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class Newlvl extends FlxSprite{

    //_________________________________________________________________________________________
    override public function kill():Void
    {
        alive = false;
        exists = false;
    }

    //_________________________________________________________________________________________
    public function new(X:Float=0, Y:Float=0)
    {
        
        super(X,Y);
        makeGraphic(16, 16, FlxColor.YELLOW, true);
        
    }
    
}