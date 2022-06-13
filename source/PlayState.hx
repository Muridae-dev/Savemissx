package;

import flixel.FlxState;
//import flixel.text.FlxText;
//import flixel.FlxSprite;
import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.tile.FlxTilemap;
import flixel.FlxObject;
import flixel.FlxG;
//import flixel.tweens.FlxTween;
import flixel.system.FlxSound;
//import flixel.math.FlxPoint;
import flixel.util.FlxTimer;
import flixel.util.FlxColor;
import flixel.addons.display.FlxBackdrop;

using flixel.util.FlxSpriteUtil;


//EN ARRAY AV FLIXEL OBJECT
import flixel.group.FlxGroup;


class PlayState extends FlxState
{
	public var _player:Player;
	var _attack:Attack;
	var _classrage:Rage;

	var _map:FlxOgmoLoader;
	var _mWalls:FlxTilemap;
	var _mBack:FlxTilemap;
	var _mPlatf:FlxTilemap;
	var _mSpecc:FlxTilemap;

	var _blockTimer:FlxTimer;

	var _grpCoins:FlxTypedGroup<Coin>;
	var _newlvl:FlxTypedGroup<Newlvl>;
	var _grpEnemies:FlxTypedGroup<Enemy>;
	var _grpClimbable:FlxTypedGroup<Vine>;
	var _grpSign:FlxTypedGroup<Sign>;
	var _grpGate:FlxTypedGroup<Gate>;

	var _hud:HUD;
	var _money:Int = 0;
	var _health:Int = 10;
	var _rage:Int = 0;

	var _sndCoin:FlxSound;
	var _combatSound:FlxSound;
	var _deathSound:FlxSound;

	var mA:Float = 0;
	
	var _levelSelector:Int;
	var _dmgMultp:Int = 1;

	var _inDialogue:Bool = false;
 	var _dialogue:Dialogue;

	/**
	 * SKICKAR MED LEVELSELECTOR VÄRDET FRÅN MENUSTATE KNAPPARNA
	 * @param Levelselector
	 */
	
	//TAR EMOT LEVELSELECTOR OCH SÄTTER DEN I EN NY VAR
	//_________________________________________________________________________________________
	public function new(Levelselector:Int)
    {
        _levelSelector = Levelselector;
        super();
    }

	//STARTFUNKTIONEN
	//_________________________________________________________________________________________
	override public function create():Void
	{
		/*var bg:FlxSprite = new FlxSprite(0,500);
		bg.loadGraphic(AssetPaths.forestback__png);
		bg.scrollFactor.x = 2;
		add(bg);*/

		FlxG.mouse.visible = false;

		//FADEIN
		FlxG.camera.fade(FlxColor.BLACK, .10, true);
		
		//KOLLAR VILKEN LEVEL DET ÄR SEN SKRIVER UT RÄTT MAP
		/*if(_levelSelector == 0)
		{
			_map = new FlxOgmoLoader(AssetPaths.testlevel__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");

			var bg:FlxBackdrop = new FlxBackdrop(AssetPaths.forestbackbig__png, 0.5, 0, true, false);
		    add(bg);

		}*/

		if(_levelSelector == 1)
		{
			_map = new FlxOgmoLoader(AssetPaths.level1__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");

			var bg:FlxBackdrop = new FlxBackdrop(AssetPaths.forestbackbig__png, 0.5, 0, true, false);
		    add(bg);

		}

		if(_levelSelector == 2)
		{
			_map = new FlxOgmoLoader(AssetPaths.level2__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");
		}

		if(_levelSelector == 3)
		{
			_map = new FlxOgmoLoader(AssetPaths.level3__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");

			var bg1:FlxBackdrop = new FlxBackdrop(AssetPaths.islandbg2__png, 0.6, 0, true, false);
			var bg2:FlxBackdrop = new FlxBackdrop(AssetPaths.islandbg1__png, 0.55, 0, true, false);
			bg1.y = bg1.y - 70;
			bg2.y = bg2.y - 70;
		    add(bg1);
			add(bg2);
		}

				if(_levelSelector == 4)
		{
			_map = new FlxOgmoLoader(AssetPaths.level4__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");

			var bg:FlxBackdrop = new FlxBackdrop(AssetPaths.forestbackbig__png, 0.5, 0, true, false);
		    add(bg);
		}

		
				if(_levelSelector == 5)
		{
			_map = new FlxOgmoLoader(AssetPaths.level5__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");

			var bg:FlxBackdrop = new FlxBackdrop(AssetPaths.forestbackbig__png, 0.5, 0, true, false);
		    add(bg);
		}

				if(_levelSelector == 6)
		{
			_map = new FlxOgmoLoader(AssetPaths.level6__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");

			var bg:FlxBackdrop = new FlxBackdrop(AssetPaths.forestbackbig__png, 0.5, 0, true, false);
		    add(bg);
		}

		
				if(_levelSelector == 7)
		{
			_map = new FlxOgmoLoader(AssetPaths.level7__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");

			var bg:FlxBackdrop = new FlxBackdrop(AssetPaths.forestbackbig__png, 0.5, 0, true, false);
		    add(bg);
		}

		if(_levelSelector == 8)
		{
			_map = new FlxOgmoLoader(AssetPaths.level8__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");

			var bg:FlxBackdrop = new FlxBackdrop(AssetPaths.forestbackbig__png, 0.5, 0, true, false);
		    add(bg);
		}

		if(_levelSelector == 9)
		{
			_map = new FlxOgmoLoader(AssetPaths.level9__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");

			var bg:FlxBackdrop = new FlxBackdrop(AssetPaths.forestbackbig__png, 0.5, 0, true, false);
		    add(bg);
		}

		if(_levelSelector == 10)
		{
			_map = new FlxOgmoLoader(AssetPaths.level10__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");

			var bg1:FlxBackdrop = new FlxBackdrop(AssetPaths.swampsprite1__png, 0.6, 0, true, false);
			var bg2:FlxBackdrop = new FlxBackdrop(AssetPaths.swampsprite2__png, 0.55, 0, true, false);
			var bg3:FlxBackdrop = new FlxBackdrop(AssetPaths.swampsprite3__png, 0.5, 0, true, false);
		    add(bg1);
			add(bg2);
			add(bg3);
			
		}

		
		if(_levelSelector == 11)
		{
			_map = new FlxOgmoLoader(AssetPaths.level11__oel);
			_mBack = _map.loadTilemap(AssetPaths.tilesback__png, 16, 16, "background");
			_mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
			_mPlatf = _map.loadTilemap(AssetPaths.tilessmall__png, 16, 8, "platforms");
			_mSpecc = _map.loadTilemap(AssetPaths.tilesspeci__png, 16, 8, "specialtiles");

			var bg1:FlxBackdrop = new FlxBackdrop(AssetPaths.swampsprite1__png, 0.6, 0, true, false);
			var bg2:FlxBackdrop = new FlxBackdrop(AssetPaths.swampsprite2__png, 0.55, 0, true, false);
			var bg3:FlxBackdrop = new FlxBackdrop(AssetPaths.swampsprite3__png, 0.5, 0, true, false);
		    add(bg1);
			add(bg2);
			add(bg3);
			
		}
		_mBack.follow();
		_mWalls.follow();
		_mPlatf.follow();
		_mSpecc.follow();

		//VAD TILESEN GÖR. NONE = NOT COLLIDE, ANY = COLLIDmE
		//BACKGROUND TILES
		_mBack.setTileProperties(1, FlxObject.NONE);
		_mBack.setTileProperties(2, FlxObject.NONE);
		_mBack.setTileProperties(3, FlxObject.NONE);
		add(_mBack);

		//WALLS TILES
		_mWalls.setTileProperties(1, FlxObject.NONE, falldeath, Player);
		_mWalls.setTileProperties(2, FlxObject.ANY);
		_mWalls.setTileProperties(3, FlxObject.ANY);
		_mWalls.setTileProperties(4, FlxObject.ANY);
		_mWalls.setTileProperties(5, FlxObject.ANY);
		_mWalls.setTileProperties(6, FlxObject.ANY);
		_mWalls.setTileProperties(7, FlxObject.ANY);
		_mWalls.setTileProperties(8, FlxObject.ANY);
		_mWalls.setTileProperties(9, FlxObject.ANY);
		_mWalls.setTileProperties(10, FlxObject.ANY);
		_mWalls.setTileProperties(11, FlxObject.ANY);
		_mWalls.setTileProperties(12, FlxObject.ANY);

		_mWalls.setTileProperties(17, FlxObject.NONE);
		add(_mWalls);

		//PLATFORM TILES
		_mPlatf.setTileProperties(1, FlxObject.UP);
		_mPlatf.setTileProperties(2, FlxObject.UP);
		add(_mPlatf);

		//SPECIAL TILES
		_mSpecc.setTileProperties(1, FlxObject.UP, timeblock, Player);
		_mSpecc.setTileProperties(2, FlxObject.UP, timeblock, Player);
		_mSpecc.setTileProperties(3, FlxObject.UP, timeblock, Player);

		_mSpecc.setTileProperties(4, FlxObject.UP, bounceblock, Player);
		_mSpecc.setTileProperties(5, FlxObject.UP, bounceblock, Player);
		_mSpecc.setTileProperties(6, FlxObject.UP, bounceblock, Player);

		_mSpecc.setTileProperties(7, FlxObject.DOWN, bounceblockdown, Player);
		_mSpecc.setTileProperties(8, FlxObject.DOWN, bounceblockdown, Player);
		_mSpecc.setTileProperties(9, FlxObject.DOWN, bounceblockdown, Player);
		add(_mSpecc);
		
		_grpGate = new FlxTypedGroup<Gate>();
		add(_grpGate);


		//COINS
		_grpCoins = new FlxTypedGroup<Coin>();
		add(_grpCoins);

		//NEXTLEVEL
		_newlvl = new FlxTypedGroup<Newlvl>();
		add(_newlvl);

		//ENEMIES
		_grpEnemies = new FlxTypedGroup<Enemy>();
		add(_grpEnemies);

		//CLIMBABLE
		_grpClimbable = new FlxTypedGroup<Vine>();
		add(_grpClimbable);

		_grpSign = new FlxTypedGroup<Sign>();
		add(_grpSign);

		


		//ÖPPNAR PLAYER VIA "PLAYER.HX" OCH GER DEN X OCH Y VÄRDEN GENOM "PLACEENTITIES"-FUNKTIONEN
		_player = new Player();
		_map.loadEntities(placeEntities, "entities");
		_map.loadEntities(placeEntities, "climbable");
 		add(_player);

		
		//ATTACK
		_attack = new Attack(_player.x, _player.y);
		add(_attack);

		//RAGE
		_classrage = new Rage(_player.x, _player.y);
		add(_classrage);

		//FÖLJER PLAYER MED KAMERAN
		FlxG.camera.follow(_player, TOPDOWN_TIGHT, 1);

		//HUD
		_hud = new HUD();
		add(_hud);

		 _dialogue = new Dialogue();
 		add(_dialogue);

		//LJUD
		_combatSound = FlxG.sound.load(AssetPaths.hurt__wav, 0.4);
		_deathSound = FlxG.sound.load(AssetPaths.lose__wav, 0.4);
		_sndCoin = FlxG.sound.load(AssetPaths.coin__wav, 0.4);

		super.create();
	}

	//FALLDEATH FUNKTIONEN
	//_________________________________________________________________________________________
	function falldeath(Tile:FlxObject, Particle:FlxObject):Void
	{
		Particle.kill();
		
	}

	//TIMEBLOCKS FUNKTIONEN
	function timeblock(Brick:FlxObject, Particle:FlxObject):Void
	{
		//RETURN BLOCK
		function appe(Timer:FlxTimer):Void{ Brick.visible = true; Brick.solid = true;}
		//DISSAPEAR BLOCK
		function dissapea(Timer:FlxTimer):Void{ Brick.visible = false; Brick.solid = false; new FlxTimer().start(2, appe, 1); }

		if(Brick.visible == true) {
			new FlxTimer().start(2, dissapea, 1);
		}
		
	} 

	//BOUNCEBLOCK FUNKTIONEN
	function bounceblock(Brick:FlxObject, Particle:FlxObject):Void
	{
		//BOUNCYBLOCKS
		Particle.velocity.y = -400;
	}

	function bounceblockdown(Brick:FlxObject, Particle:FlxObject):Void{

		Particle.velocity.y = 200;
	}

	//CLIMBBLOCK FUNKTIONEN
	function climbblock(P:Player, Brick:FlxObject):Void
	{
		//OM MAN TRYCKER Q OCH ÄR PÅ EN VINE SÄTTS CLIMB IGÅNG
		if (P._grab == true && P._charClimb == 0)
		{
			P._charClimb = 1;

			//SÅ PLAYER ALLTID ÄR PÅ SAMMA PLATS NÄR MAN GRABBAR VINES
			P.x = Brick.x;
		}
		
		if (P._grab == false)
		{
			P._charClimb = 0;
		}
	}

	//ENDLEVEL/NEXTLEVEL FUNKTIONEN
	//_________________________________________________________________________________________
	function nextlevel(P:Player, N:Newlvl):Void
	{
		N.kill();
		_levelSelector++;
		FlxG.switchState(new PlayState(_levelSelector));
		

	}

	//SÄTTER UT ENTITIES EX PLAYER, ENEMY
	//_________________________________________________________________________________________
	function placeEntities(entityName:String, entityData:Xml):Void
	{
		var x:Int = Std.parseInt(entityData.get("x"));
		var y:Int = Std.parseInt(entityData.get("y"));

		//PLAYER
		if (entityName == "player"){
			_player.x = x;
			_player.y = y;
		}

		//VINE
		if (entityName == "vine"){
			_grpClimbable.add(new Vine(x, y));
		}

		//COIN
		else if (entityName == "coin")
		{
			//+4 för att sätta den i mitten (16 bit coin = 8 bit)
			_grpCoins.add(new Coin(x + 4, y + 4));
		}

		//NEWLEVEL
		else if (entityName == "newlvl")
		{
			_newlvl.add(new Newlvl(x, y));
		}

		//ENEMY
		else if (entityName == "enemy")
		{
			_grpEnemies.add(new Enemy(x + 4, y, Std.parseInt(entityData.get("etype"))));
		}

		else if (entityName == "sign")
		{
			_grpSign.add(new Sign(x, y));
		}

		else if (entityName == "gate")
		{
			_grpGate.add(new Gate(x,y));
		}
	}

	//TOUCH COIN FUNKTIONEN
	//_________________________________________________________________________________________
	function playerTouchCoin(P:Player, C:Coin):Void{
		if (P.alive && P.exists && C.alive && C.exists){
			C.kill();
			_sndCoin.play(true);

			//UPDATERAR HUD NÄR MAN TAR EN COIN
			_money++;
			P._rollCheck = _money;
			_hud.updateHUD(_health, _money, _rage);
			
		}
	}

	//ENEMYVISION FUNKTIONEN
	//_________________________________________________________________________________________
	function checkEnemyVision(e:Enemy):Void
	{
		if (_mWalls.ray(e.getMidpoint(), _player.getMidpoint()) && _mPlatf.ray(e.getMidpoint(), _player.getMidpoint()))
		{
			e.seesPlayer = true;
			e.playerPos.copyFrom(_player.getMidpoint());
		}
		else
			e.seesPlayer = false;


	}


	//ATTACKDIRECTION FUNKTIONEN
	//_________________________________________________________________________________________
	function attackDir(p:Player, a:Attack, r:Rage):Void
	{
		//ROLLCHECK/ROLLREMOVE
		if(FlxG.keys.justPressed.E && _money > 0){_money--; p._rollCheck = _money;_hud.updateHUD(_health, _money, _rage);}

		//RAGEACTIVATOR
		if(FlxG.keys.pressed.R && _rage >= 500) {p._rageMultp = 1.2; _dmgMultp = 2;  r.exists = true; r.alive = true;}
		if(_rage <= 0) {p._rageMultp = 1;_dmgMultp = 1; r.exists = false; r.alive = false;}
		if(_dmgMultp == 2) {_rage--; _hud.updateHUD(_health, _money, _rage); r.x = p.x - 11; r.y = p.y - 8;}

		//NÄR VI SLÅR ÄR ATTACKRUTAN AKTIV
		if (p._punchtmr == 1) {
			a.alive = true;
			a.exists = true;
		}

		//NÄR ATTACKEN SLUTAR ÄR DEN INAKTIV
		if(p._punchtmr == 0 || !FlxG.keys.pressed.UP && !FlxG.keys.pressed.DOWN && !FlxG.keys.pressed.LEFT && !FlxG.keys.pressed.RIGHT)
		{ 		
			a.alive = false;
			a.exists = false;

		}

		//UP ATTACKS
		if(FlxG.keys.pressed.UP)
		{
			//GROUND
			if (p.velocity.y == 0) {
				//LEFT HEADBUTT
				if (p._facedir == 0){
					a.y = p.y - 6;
					a.x = p.x - 13;
				}

				//RIGHT HEADBUTT
				if (p._facedir == 1){
					a.y = p.y - 6;
					a.x = p.x + 4;
				}
				a.scale.set(0.6, 0.6);
			}

			//AIR
			if (p.velocity.y != 0) {
				//LEFT AIRFLIPKICK
				if (p._facedir == 0 && p.velocity.y != 0){
					a.y = p.y - 10;
					a.x = p.x - 11;
				}

				//RIGHT AIRFLIPKICK
				if (p._facedir == 1 && p.velocity.y != 0){
					a.y = p.y - 10;
					a.x = p.x - 13;
				}
				a.scale.set(1, 0.8);
			}
			a.updateHitbox();
		}

		//DOWN ATTACKS
		if(FlxG.keys.pressed.DOWN)
		{
			//LEFT DOWNKICK
			if(p._facedir == 0 && p.velocity.y != 0){
				a.y = p.y + 18;
				a.x = p.x - 6;
			}

			//RIGHT DOWNKICK
			if(p._facedir == 1 && p.velocity.y != 0){
				a.y = p.y + 18;
				a.x = p.x - 2;
			}


			a.scale.set(0.6, 0.8);
			a.updateHitbox();
		}

		//LEFT ATTACKS
		if(FlxG.keys.pressed.LEFT)
		{
			//LEFT PUNCH
			if(p.velocity.y == 0)
			{
				a.x = p.x - 21;
				a.y = p.y + 5;
			}

			//LEFT AIRKICK
			if(p.velocity.y != 0)
			{
				a.x = p.x - 21;
				a.y = p.y;
			}


			a.scale.set(0.6, 0.6);
			a.updateHitbox();
		}

		//RIGHT ATTACKS
		if(FlxG.keys.pressed.RIGHT)
		{
			//RIGHT PUNCH
			if(p.velocity.y == 0)
			{
				a.x = p.x + 13;
				a.y = p.y + 5;
			}

			//RIGHT AIRKICK
			if(p.velocity.y != 0)
			{
				a.x = p.x + 13;
				a.y = p.y;
			}

			a.scale.set(0.6, 0.6);
			a.updateHitbox();
		}

		//DUBBEL SPEED AV PLAYER (400)
		/*a.velocity.set(400, 0);
        a.velocity.rotate(FlxPoint.weak(0, 0), mA);*/
	}

	//ENEMY PLAYER TOUCH FUNKTIONEN
	//_________________________________________________________________________________________
	function playerTouchEnemy(P:Player, E:Enemy):Void
	{
		//OM PLAYER OCH ENEMY LEVER OCH INTE FLICKRAR
		if(P.alive && P.exists && E.alive && E.exists && !E.isFlickering() && !P.isFlickering())
		{
			//RAGE
			_health--;
			if(_rage < 500 && _dmgMultp == 1) {_rage+=50;}
			_hud.updateHUD(_health, _money, _rage);

			if(_health > 0)
			{
			P.flicker(0.5);
			FlxG.camera.shake(0.01, 0.2);
			}

			if(_health == 0) 
			{
				P.kill();

			}

		}
	}

	//SWITCH GAMEOVERSTATE FUNKTIONEN
	//_________________________________________________________________________________________
	function doneFadeGO():Void
	{
		FlxG.switchState(new GameOverState(_money));
	}

	//ENEMY ATTACK TOUCH FUNKTIONEN
	//_________________________________________________________________________________________
	function playerTouchAttack(A:Attack, E:Enemy):Void
	{
		if(A.alive && A.exists && E.alive && E.exists && !E.isFlickering())
		{
			//DMG + RAGE
			E.ehealth -= (1 * _dmgMultp);
			if(_rage < 500 && _dmgMultp == 1) {_rage+=50;}
			_hud.updateHUD(_health, _money, _rage);

			//OM ENEMY HP ÄR ÖVER 0 BLIR DEN STUNNED OCH GÖR ETT LJUD
			if(E.ehealth > 0)
			{
				E.flicker(0.4);
				E.enemyhurt();

				//HITMOVE
				if (E.facing == FlxObject.LEFT) {E.x += 30;}
				if (E.facing == FlxObject.RIGHT) {E.x -= 30;}
				if (E.facing == FlxObject.DOWN) {E.y -= 40;}
				if (E.facing == FlxObject.UP) {E.y += 30;}
				
				
				E.last.set(E.x, E.y);
				
				_combatSound.play(true);
				E.alive = false;
				E.speed = 0;
				E.acceleration.x = 0;
				E.velocity.x = 0;

			}

			//OM ENEMY HAR 0 HP DÖR DEN OCH SPAWNAR EN COIN
			if(E.ehealth <= 0 && E.alive)
			{
				E.alive = false;
				_grpCoins.add(new Coin(E.x + 4, E.y + 4));
				E.kill();
				_deathSound.play(true);
			} 
		}
		
	}

	function playerStartDialogue(P:Player, D:Sign):Void
	{
		if (P.alive && P.exists)
		{
			startDialogue(D);
		}
	}

	function startDialogue(D:Sign):Void
	{
		_inDialogue = true;
		_player.active = false;
		_grpEnemies.active = false;
		_dialogue.initDialogue(1);
	}

	//ENEMYNOSTUN
	//_________________________________________________________________________________________
	function enemyNoStun(E:Enemy):Void {
		if(!E.isFlickering()){
			E.alive = true;
			E.speed = 80;
			E._takeDmg = 0;

		}
	}


	//UPDATEFUNKTIONEN
	//_________________________________________________________________________________________
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);


		//SÅ PLAYER COLLIDEAR
		FlxG.collide(_player, _mWalls);
		FlxG.collide(_player, _mPlatf);
		FlxG.collide(_player, _mSpecc);

		FlxG.overlap(_player, _grpClimbable, climbblock);
		if(FlxG.overlap(_player, _grpClimbable) == false) {_player._charClimb = 0;}

		//SÅ MAN KAN TA COINS
		FlxG.overlap(_player, _grpCoins, playerTouchCoin);
		FlxG.overlap(_player, _newlvl, nextlevel);

		//SÅ ENEMIES COLLIDEAR OCH KOLLAR DERAS VISION
		FlxG.collide(_grpEnemies, _mWalls);
		FlxG.collide(_grpEnemies, _mPlatf);
		_grpEnemies.forEachAlive(checkEnemyVision);

		//TOUCHENEMIES
		FlxG.overlap(_player, _grpEnemies, playerTouchEnemy);
		FlxG.overlap(_attack, _grpEnemies, playerTouchAttack);
		_grpEnemies.forEachDead(enemyNoStun);

		//TOUCHSIGNS
		FlxG.overlap(_player, _grpSign, playerStartDialogue);

		attackDir(_player, _attack, _classrage);


		if(_player.alive == false) {
			FlxG.camera.fade(FlxColor.BLACK, .33, false, doneFadeGO);
		}
	}
}
