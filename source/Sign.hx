package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class Sign extends FlxSprite{

    //_________________________________________________________________________________________
    public function new(X:Float=0, Y:Float=0)
    {
        
        super(X,Y);
        loadGraphic(AssetPaths.sign__png, false, 32, 32);
        
    }
    
}