package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class Gate extends FlxSprite{

    //_________________________________________________________________________________________
    public function new(X:Float=0, Y:Float=0)
    {
        
        super(X,Y);
        loadGraphic(AssetPaths.gate__png, false, 450, 320);
        
    }
    
}