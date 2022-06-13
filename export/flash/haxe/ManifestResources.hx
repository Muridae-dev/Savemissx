package;


import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#elseif (sys && windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end

		}

		Assets.defaultRootPath = rootPath;

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:sizezy4:typey4:TEXTy9:classNamey39:__ASSET__assets_data_data_goes_here_txty2:idy34:assets%2Fdata%2Fdata-goes-here.txtgoR0i3828R1R2R3y33:__ASSET__assets_data_firstmap_oepR5y28:assets%2Fdata%2Ffirstmap.oepgoR0i17564R1R2R3y31:__ASSET__assets_data_level1_oelR5y26:assets%2Fdata%2Flevel1.oelgoR0i3528R1R2R3y33:__ASSET__assets_data_room_001_oelR5y28:assets%2Fdata%2Froom-001.oelgoR0i4614R1R2R3y33:__ASSET__assets_data_room_002_oelR5y28:assets%2Fdata%2Froom-002.oelgoR0i3826R1R2R3y31:__ASSET__assets_data_world1_oepR5y26:assets%2Fdata%2Fworld1.oepgoR0i984R1y5:IMAGER3y31:__ASSET__assets_images_coin_pngR5y26:assets%2Fimages%2Fcoin.pnggoR0i2558R1R17R3y38:__ASSET__assets_images_enemyflying_pngR5y33:assets%2Fimages%2Fenemyflying.pnggoR0i735R1R17R3y40:__ASSET__assets_images_enemygrounded_pngR5y35:assets%2Fimages%2Fenemygrounded.pnggoR0i6172R1R17R3y37:__ASSET__assets_images_forestback_pngR5y32:assets%2Fimages%2Fforestback.pnggoR0i7799R1R17R3y40:__ASSET__assets_images_forestbackbig_pngR5y35:assets%2Fimages%2Fforestbackbig.pnggoR0i984R1R17R3y33:__ASSET__assets_images_health_pngR5y28:assets%2Fimages%2Fhealth.pnggoR0zR1R2R3y41:__ASSET__assets_images_images_go_here_txtR5y36:assets%2Fimages%2Fimages-go-here.txtgoR0i2661R1R17R3y33:__ASSET__assets_images_player_pngR5y28:assets%2Fimages%2Fplayer.pnggoR0i1876R1R17R3y36:__ASSET__assets_images_playerold_pngR5y31:assets%2Fimages%2Fplayerold.pnggoR0i992R1R17R3y34:__ASSET__assets_images_pointer_pngR5y29:assets%2Fimages%2Fpointer.pnggoR0i856R1R17R3y32:__ASSET__assets_images_tiles_pngR5y27:assets%2Fimages%2Ftiles.pnggoR0zR1R2R3y41:__ASSET__assets_music_music_goes_here_txtR5y36:assets%2Fmusic%2Fmusic-goes-here.txtgoR0i23978R1y5:SOUNDR3y31:__ASSET__assets_sounds_coin_wavR5y26:assets%2Fsounds%2Fcoin.wavgoR0i39300R1R42R3y33:__ASSET__assets_sounds_combat_wavR5y28:assets%2Fsounds%2Fcombat.wavgoR0i34298R1R42R3y31:__ASSET__assets_sounds_fled_wavR5y26:assets%2Fsounds%2Ffled.wavgoR0i20012R1R42R3y31:__ASSET__assets_sounds_hurt_wavR5y26:assets%2Fsounds%2Fhurt.wavgoR0i33516R1R42R3y31:__ASSET__assets_sounds_lose_wavR5y26:assets%2Fsounds%2Flose.wavgoR0i24158R1R42R3y31:__ASSET__assets_sounds_miss_wavR5y26:assets%2Fsounds%2Fmiss.wavgoR0i10518R1R42R3y33:__ASSET__assets_sounds_select_wavR5y28:assets%2Fsounds%2Fselect.wavgoR0zR1R2R3y41:__ASSET__assets_sounds_sounds_go_here_txtR5y36:assets%2Fsounds%2Fsounds-go-here.txtgoR0i10188R1R42R3y31:__ASSET__assets_sounds_step_wavR5y26:assets%2Fsounds%2Fstep.wavgoR0i54320R1R42R3y30:__ASSET__assets_sounds_win_wavR5y25:assets%2Fsounds%2Fwin.wavgoR0i2114R1y5:MUSICR3y31:__ASSET__flixel_sounds_beep_mp3R5y26:flixel%2Fsounds%2Fbeep.mp3goR0i39706R1R63R3y33:__ASSET__flixel_sounds_flixel_mp3R5y28:flixel%2Fsounds%2Fflixel.mp3goR0i15744R1y4:FONTR3y35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfgoR0i29724R1R68R3y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfgoR0i519R1R17R3y36:__ASSET__flixel_images_ui_button_pngR5y33:flixel%2Fimages%2Fui%2Fbutton.pnggoR0i3280R1R17R3y39:__ASSET__flixel_images_logo_default_pngR5y36:flixel%2Fimages%2Flogo%2Fdefault.pnggh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_data_data_goes_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_firstmap_oep extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level1_oel extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_room_001_oel extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_room_002_oel extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_world1_oep extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_coin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enemyflying_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enemygrounded_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_forestback_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_forestbackbig_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_health_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_images_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_player_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_playerold_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_pointer_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_goes_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_coin_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_combat_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_fled_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_hurt_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_lose_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_miss_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_select_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_step_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_win_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends flash.utils.ByteArray { }


#elseif (desktop || cpp)

@:keep @:file("assets/data/data-goes-here.txt") #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/firstmap.oep") #if display private #end class __ASSET__assets_data_firstmap_oep extends haxe.io.Bytes {}
@:keep @:file("assets/data/level1.oel") #if display private #end class __ASSET__assets_data_level1_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/room-001.oel") #if display private #end class __ASSET__assets_data_room_001_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/room-002.oel") #if display private #end class __ASSET__assets_data_room_002_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/world1.oep") #if display private #end class __ASSET__assets_data_world1_oep extends haxe.io.Bytes {}
@:keep @:image("assets/images/coin.png") #if display private #end class __ASSET__assets_images_coin_png extends lime.graphics.Image {}
@:keep @:image("assets/images/enemyflying.png") #if display private #end class __ASSET__assets_images_enemyflying_png extends lime.graphics.Image {}
@:keep @:image("assets/images/enemygrounded.png") #if display private #end class __ASSET__assets_images_enemygrounded_png extends lime.graphics.Image {}
@:keep @:image("assets/images/forestback.png") #if display private #end class __ASSET__assets_images_forestback_png extends lime.graphics.Image {}
@:keep @:image("assets/images/forestbackbig.png") #if display private #end class __ASSET__assets_images_forestbackbig_png extends lime.graphics.Image {}
@:keep @:image("assets/images/health.png") #if display private #end class __ASSET__assets_images_health_png extends lime.graphics.Image {}
@:keep @:file("assets/images/images-go-here.txt") #if display private #end class __ASSET__assets_images_images_go_here_txt extends haxe.io.Bytes {}
@:keep @:image("assets/images/player.png") #if display private #end class __ASSET__assets_images_player_png extends lime.graphics.Image {}
@:keep @:image("assets/images/playerold.png") #if display private #end class __ASSET__assets_images_playerold_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pointer.png") #if display private #end class __ASSET__assets_images_pointer_png extends lime.graphics.Image {}
@:keep @:image("assets/images/tiles.png") #if display private #end class __ASSET__assets_images_tiles_png extends lime.graphics.Image {}
@:keep @:file("assets/music/music-goes-here.txt") #if display private #end class __ASSET__assets_music_music_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/coin.wav") #if display private #end class __ASSET__assets_sounds_coin_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/combat.wav") #if display private #end class __ASSET__assets_sounds_combat_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/fled.wav") #if display private #end class __ASSET__assets_sounds_fled_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/hurt.wav") #if display private #end class __ASSET__assets_sounds_hurt_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/lose.wav") #if display private #end class __ASSET__assets_sounds_lose_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/miss.wav") #if display private #end class __ASSET__assets_sounds_miss_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/select.wav") #if display private #end class __ASSET__assets_sounds_select_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sounds-go-here.txt") #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/step.wav") #if display private #end class __ASSET__assets_sounds_step_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/win.wav") #if display private #end class __ASSET__assets_sounds_win_wav extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,5,1/assets/sounds/beep.mp3") #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,5,1/assets/sounds/flixel.mp3") #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:font("C:/HaxeToolkit/haxe/lib/flixel/4,5,1/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("C:/HaxeToolkit/haxe/lib/flixel/4,5,1/assets/fonts/monsterrat.ttf") #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,5,1/assets/images/ui/button.png") #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,5,1/assets/images/logo/default.png") #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end
