package;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.FlxObject;
import flixel.FlxG;

class FSM
{
    public var activeState:Void->Void;

    //_________________________________________________________________________________________
    public function new(?InitState:Void->Void):Void
    {
        activeState = InitState;
    }

    //_________________________________________________________________________________________
    public function update():Void
    {
        if (activeState != null)
            activeState();
    }
}