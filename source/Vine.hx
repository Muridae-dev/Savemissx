package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class Vine extends FlxSprite{

    //_________________________________________________________________________________________
    public function new(X:Float=0, Y:Float=0)
    {
        
        super(X,Y);
        loadGraphic(AssetPaths.climbable__png, false, 8, 16);
        
    }
    
}