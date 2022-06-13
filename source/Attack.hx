package;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.FlxObject;
import flixel.math.FlxVelocity;

class Attack extends FlxSprite
{

    //_________________________________________________________________________________________
    public function new(?X:Float=0, ?Y:Float=0)
    {
        super(X, Y);
        makeGraphic(32, 32, FlxColor.RED, true);
        alpha = 0.2;
        
    }

    //_________________________________________________________________________________________
    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
    }

}