package;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.FlxObject;
import flixel.math.FlxVelocity;

class Rage extends FlxSprite
{

    //_________________________________________________________________________________________
    public function new(?X:Float=0, ?Y:Float=0)
    {
        super(X, Y);
        loadGraphic(AssetPaths.rage__png, true, 32, 40);
        animation.add("rge", [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13], 10, true);
        animation.play("rge");
        
    }

    //_________________________________________________________________________________________
    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
    }

}