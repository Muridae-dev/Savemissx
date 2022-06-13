package;

import flixel.FlxGame;
import openfl.display.Sprite;

//ÖPPNAS ALLTID PÅ MAIN
class Main extends Sprite
{
	//_________________________________________________________________________________________
	public function new()
	{
		super();

		//ÖPPNAR MENUSTATE MED WIDTH / HEIGHT  500 280
		addChild(new FlxGame(500, 280, MenuState));
	}
}
