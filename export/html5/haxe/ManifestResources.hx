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

		data = '{"name":null,"assets":"aoy4:pathy34:assets%2Fdata%2Fdata-goes-here.txty4:sizezy4:typey4:TEXTy2:idR1y7:preloadtgoR0y26:assets%2Fdata%2Flevel1.oelR2i306258R3R4R5R7R6tgoR0y27:assets%2Fdata%2Flevel10.oelR2i307640R3R4R5R8R6tgoR0y27:assets%2Fdata%2Flevel11.oelR2i613983R3R4R5R9R6tgoR0y26:assets%2Fdata%2Flevel2.oelR2i308675R3R4R5R10R6tgoR0y26:assets%2Fdata%2Flevel3.oelR2i308562R3R4R5R11R6tgoR0y26:assets%2Fdata%2Flevel4.oelR2i303484R3R4R5R12R6tgoR0y26:assets%2Fdata%2Flevel5.oelR2i305841R3R4R5R13R6tgoR0y26:assets%2Fdata%2Flevel6.oelR2i304922R3R4R5R14R6tgoR0y26:assets%2Fdata%2Flevel7.oelR2i304262R3R4R5R15R6tgoR0y26:assets%2Fdata%2Flevel8.oelR2i310189R3R4R5R16R6tgoR0y26:assets%2Fdata%2Flevel9.oelR2i303821R3R4R5R17R6tgoR0y26:assets%2Fdata%2Fworld1.oepR2i8154R3R4R5R18R6tgoR0y32:assets%2Fimages%2F64lil.asepriteR2i4009R3y6:BINARYR5R19R6tgoR0y38:assets%2Fimages%2F64x64player.asepriteR2i18081R3R20R5R21R6tgoR0y32:assets%2Fimages%2Fautumnback.pngR2i61458R3y5:IMAGER5R22R6tgoR0y35:assets%2Fimages%2Fcaveback.asepriteR2i11599R3R20R5R24R6tgoR0y31:assets%2Fimages%2Fclimbable.pngR2i130R3R23R5R25R6tgoR0y26:assets%2Fimages%2Fcoin.pngR2i162R3R23R5R26R6tgoR0y29:assets%2Fimages%2Fenemy-0.pngR2i1237R3R23R5R27R6tgoR0y29:assets%2Fimages%2Fenemy-1.pngR2i1305R3R23R5R28R6tgoR0y32:assets%2Fimages%2Fforestback.pngR2i6172R3R23R5R29R6tgoR0y38:assets%2Fimages%2Fforestback2.asepriteR2i60782R3R20R5R30R6tgoR0y35:assets%2Fimages%2Fforestbackbig.pngR2i7799R3R23R5R31R6tgoR0y26:assets%2Fimages%2Fgate.pngR2i3710R3R23R5R32R6tgoR0y32:assets%2Fimages%2Fgates.asepriteR2i2321R3R20R5R33R6tgoR0y36:assets%2Fimages%2Fgatesalt1.asepriteR2i2346R3R20R5R34R6tgoR0y28:assets%2Fimages%2Fhealth.pngR2i145R3R23R5R35R6tgoR0y30:assets%2Fimages%2Fhus.asepriteR2i1700R3R20R5R36R6tgoR0y36:assets%2Fimages%2Fimages-go-here.txtR2zR3R4R5R37R6tgoR0y35:assets%2Fimages%2Fislandbg.asepriteR2i43687R3R20R5R38R6tgoR0y30:assets%2Fimages%2Fislandbg.pngR2i29038R3R23R5R39R6tgoR0y31:assets%2Fimages%2Fislandbg1.pngR2i43512R3R23R5R40R6tgoR0y31:assets%2Fimages%2Fislandbg2.pngR2i5894R3R23R5R41R6tgoR0y39:assets%2Fimages%2Fmushroomback.asepriteR2i19390R3R20R5R42R6tgoR0y28:assets%2Fimages%2Fplayer.pngR2i17937R3R23R5R43R6tgoR0y30:assets%2Fimages%2Fplayer64.pngR2i4496R3R23R5R44R6tgoR0y31:assets%2Fimages%2Fplayeralt.pngR2i17464R3R23R5R45R6tgoR0y37:assets%2Fimages%2Fplayerkhan.asepriteR2i11395R3R20R5R46R6tgoR0y32:assets%2Fimages%2Fplayerkhan.pngR2i3666R3R23R5R47R6tgoR0y42:assets%2Fimages%2Fplayerkhanfront.asepriteR2i727R3R20R5R48R6tgoR0y36:assets%2Fimages%2Fplayerkhanidle.pngR2i686R3R23R5R49R6tgoR0y37:assets%2Fimages%2Fplayerkhanpunch.pngR2i998R3R23R5R50R6tgoR0y35:assets%2Fimages%2Fplayerkhanrun.pngR2i1900R3R23R5R51R6tgoR0y29:assets%2Fimages%2Fpointer.pngR2i992R3R23R5R52R6tgoR0y26:assets%2Fimages%2Frage.pngR2i2636R3R23R5R53R6tgoR0y26:assets%2Fimages%2Fsign.pngR2i343R3R23R5R54R6tgoR0y38:assets%2Fimages%2Fswampsprite.asepriteR2i79263R3R20R5R55R6tgoR0y34:assets%2Fimages%2Fswampsprite1.pngR2i9656R3R23R5R56R6tgoR0y34:assets%2Fimages%2Fswampsprite2.pngR2i11150R3R23R5R57R6tgoR0y34:assets%2Fimages%2Fswampsprite3.pngR2i41429R3R23R5R58R6tgoR0y41:assets%2Fimages%2Fswampspritealt.asepriteR2i57043R3R20R5R59R6tgoR0y27:assets%2Fimages%2Ftiles.pngR2i1810R3R23R5R60R6tgoR0y31:assets%2Fimages%2Ftilesback.pngR2i1579R3R23R5R61R6tgoR0y32:assets%2Fimages%2Ftilesbeach.pngR2i1810R3R23R5R62R6tgoR0y32:assets%2Fimages%2Ftilessmall.pngR2i417R3R23R5R63R6tgoR0y32:assets%2Fimages%2Ftilesspeci.pngR2i275R3R23R5R64R6tgoR0y37:assets%2Fimages%2Ftribalchar.asepriteR2i1115R3R20R5R65R6tgoR0y36:assets%2Fmusic%2Fmusic-goes-here.txtR2zR3R4R5R66R6tgoR2i23978R3y5:SOUNDR5y26:assets%2Fsounds%2Fcoin.wavy9:pathGroupaR68hR6tgoR2i39300R3R67R5y28:assets%2Fsounds%2Fcombat.wavR69aR70hR6tgoR2i34298R3R67R5y26:assets%2Fsounds%2Ffled.wavR69aR71hR6tgoR2i20012R3R67R5y26:assets%2Fsounds%2Fhurt.wavR69aR72hR6tgoR2i33516R3R67R5y26:assets%2Fsounds%2Flose.wavR69aR73hR6tgoR2i24158R3R67R5y26:assets%2Fsounds%2Fmiss.wavR69aR74hR6tgoR2i10518R3R67R5y28:assets%2Fsounds%2Fselect.wavR69aR75hR6tgoR0y36:assets%2Fsounds%2Fsounds-go-here.txtR2zR3R4R5R76R6tgoR2i10188R3R67R5y26:assets%2Fsounds%2Fstep.wavR69aR77hR6tgoR2i54320R3R67R5y25:assets%2Fsounds%2Fwin.wavR69aR78hR6tgoR2i2114R3y5:MUSICR5y26:flixel%2Fsounds%2Fbeep.mp3R69aR80y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R79R5y28:flixel%2Fsounds%2Fflixel.mp3R69aR82y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i5794R3R67R5R81R69aR80R81hgoR2i33629R3R67R5R83R69aR82R83hgoR2i15744R3y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R84R85y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i519R3R23R5R90R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i3280R3R23R5R91R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
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

@:keep @:bind #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level1_oel extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level10_oel extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level11_oel extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level2_oel extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level3_oel extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level4_oel extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level5_oel extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level6_oel extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level7_oel extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level8_oel extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level9_oel extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_world1_oep extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_64lil_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_64x64player_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_autumnback_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_caveback_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_climbable_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_coin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enemy_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enemy_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_forestback_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_forestback2_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_forestbackbig_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_gate_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_gates_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_gatesalt1_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_health_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_hus_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_images_go_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_islandbg_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_islandbg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_islandbg1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_islandbg2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_mushroomback_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_player_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_player64_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_playeralt_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_playerkhan_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_playerkhan_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_playerkhanfront_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_playerkhanidle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_playerkhanpunch_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_playerkhanrun_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_pointer_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_rage_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sign_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_swampsprite_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_swampsprite1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_swampsprite2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_swampsprite3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_swampspritealt_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_tilesback_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_tilesbeach_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_tilessmall_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_tilesspeci_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_tribalchar_aseprite extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_coin_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_combat_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_fled_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_hurt_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_lose_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_miss_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_select_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_step_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_win_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/data/data-goes-here.txt") #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/level1.oel") #if display private #end class __ASSET__assets_data_level1_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/level10.oel") #if display private #end class __ASSET__assets_data_level10_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/level11.oel") #if display private #end class __ASSET__assets_data_level11_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/level2.oel") #if display private #end class __ASSET__assets_data_level2_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/level3.oel") #if display private #end class __ASSET__assets_data_level3_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/level4.oel") #if display private #end class __ASSET__assets_data_level4_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/level5.oel") #if display private #end class __ASSET__assets_data_level5_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/level6.oel") #if display private #end class __ASSET__assets_data_level6_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/level7.oel") #if display private #end class __ASSET__assets_data_level7_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/level8.oel") #if display private #end class __ASSET__assets_data_level8_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/level9.oel") #if display private #end class __ASSET__assets_data_level9_oel extends haxe.io.Bytes {}
@:keep @:file("assets/data/world1.oep") #if display private #end class __ASSET__assets_data_world1_oep extends haxe.io.Bytes {}
@:keep @:file("assets/images/64lil.aseprite") #if display private #end class __ASSET__assets_images_64lil_aseprite extends haxe.io.Bytes {}
@:keep @:file("assets/images/64x64player.aseprite") #if display private #end class __ASSET__assets_images_64x64player_aseprite extends haxe.io.Bytes {}
@:keep @:image("assets/images/autumnback.png") #if display private #end class __ASSET__assets_images_autumnback_png extends lime.graphics.Image {}
@:keep @:file("assets/images/caveback.aseprite") #if display private #end class __ASSET__assets_images_caveback_aseprite extends haxe.io.Bytes {}
@:keep @:image("assets/images/climbable.png") #if display private #end class __ASSET__assets_images_climbable_png extends lime.graphics.Image {}
@:keep @:image("assets/images/coin.png") #if display private #end class __ASSET__assets_images_coin_png extends lime.graphics.Image {}
@:keep @:image("assets/images/enemy-0.png") #if display private #end class __ASSET__assets_images_enemy_0_png extends lime.graphics.Image {}
@:keep @:image("assets/images/enemy-1.png") #if display private #end class __ASSET__assets_images_enemy_1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/forestback.png") #if display private #end class __ASSET__assets_images_forestback_png extends lime.graphics.Image {}
@:keep @:file("assets/images/forestback2.aseprite") #if display private #end class __ASSET__assets_images_forestback2_aseprite extends haxe.io.Bytes {}
@:keep @:image("assets/images/forestbackbig.png") #if display private #end class __ASSET__assets_images_forestbackbig_png extends lime.graphics.Image {}
@:keep @:image("assets/images/gate.png") #if display private #end class __ASSET__assets_images_gate_png extends lime.graphics.Image {}
@:keep @:file("assets/images/gates.aseprite") #if display private #end class __ASSET__assets_images_gates_aseprite extends haxe.io.Bytes {}
@:keep @:file("assets/images/gatesalt1.aseprite") #if display private #end class __ASSET__assets_images_gatesalt1_aseprite extends haxe.io.Bytes {}
@:keep @:image("assets/images/health.png") #if display private #end class __ASSET__assets_images_health_png extends lime.graphics.Image {}
@:keep @:file("assets/images/hus.aseprite") #if display private #end class __ASSET__assets_images_hus_aseprite extends haxe.io.Bytes {}
@:keep @:file("assets/images/images-go-here.txt") #if display private #end class __ASSET__assets_images_images_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/images/islandbg.aseprite") #if display private #end class __ASSET__assets_images_islandbg_aseprite extends haxe.io.Bytes {}
@:keep @:image("assets/images/islandbg.png") #if display private #end class __ASSET__assets_images_islandbg_png extends lime.graphics.Image {}
@:keep @:image("assets/images/islandbg1.png") #if display private #end class __ASSET__assets_images_islandbg1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/islandbg2.png") #if display private #end class __ASSET__assets_images_islandbg2_png extends lime.graphics.Image {}
@:keep @:file("assets/images/mushroomback.aseprite") #if display private #end class __ASSET__assets_images_mushroomback_aseprite extends haxe.io.Bytes {}
@:keep @:image("assets/images/player.png") #if display private #end class __ASSET__assets_images_player_png extends lime.graphics.Image {}
@:keep @:image("assets/images/player64.png") #if display private #end class __ASSET__assets_images_player64_png extends lime.graphics.Image {}
@:keep @:image("assets/images/playeralt.png") #if display private #end class __ASSET__assets_images_playeralt_png extends lime.graphics.Image {}
@:keep @:file("assets/images/playerkhan.aseprite") #if display private #end class __ASSET__assets_images_playerkhan_aseprite extends haxe.io.Bytes {}
@:keep @:image("assets/images/playerkhan.png") #if display private #end class __ASSET__assets_images_playerkhan_png extends lime.graphics.Image {}
@:keep @:file("assets/images/playerkhanfront.aseprite") #if display private #end class __ASSET__assets_images_playerkhanfront_aseprite extends haxe.io.Bytes {}
@:keep @:image("assets/images/playerkhanidle.png") #if display private #end class __ASSET__assets_images_playerkhanidle_png extends lime.graphics.Image {}
@:keep @:image("assets/images/playerkhanpunch.png") #if display private #end class __ASSET__assets_images_playerkhanpunch_png extends lime.graphics.Image {}
@:keep @:image("assets/images/playerkhanrun.png") #if display private #end class __ASSET__assets_images_playerkhanrun_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pointer.png") #if display private #end class __ASSET__assets_images_pointer_png extends lime.graphics.Image {}
@:keep @:image("assets/images/rage.png") #if display private #end class __ASSET__assets_images_rage_png extends lime.graphics.Image {}
@:keep @:image("assets/images/sign.png") #if display private #end class __ASSET__assets_images_sign_png extends lime.graphics.Image {}
@:keep @:file("assets/images/swampsprite.aseprite") #if display private #end class __ASSET__assets_images_swampsprite_aseprite extends haxe.io.Bytes {}
@:keep @:image("assets/images/swampsprite1.png") #if display private #end class __ASSET__assets_images_swampsprite1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/swampsprite2.png") #if display private #end class __ASSET__assets_images_swampsprite2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/swampsprite3.png") #if display private #end class __ASSET__assets_images_swampsprite3_png extends lime.graphics.Image {}
@:keep @:file("assets/images/swampspritealt.aseprite") #if display private #end class __ASSET__assets_images_swampspritealt_aseprite extends haxe.io.Bytes {}
@:keep @:image("assets/images/tiles.png") #if display private #end class __ASSET__assets_images_tiles_png extends lime.graphics.Image {}
@:keep @:image("assets/images/tilesback.png") #if display private #end class __ASSET__assets_images_tilesback_png extends lime.graphics.Image {}
@:keep @:image("assets/images/tilesbeach.png") #if display private #end class __ASSET__assets_images_tilesbeach_png extends lime.graphics.Image {}
@:keep @:image("assets/images/tilessmall.png") #if display private #end class __ASSET__assets_images_tilessmall_png extends lime.graphics.Image {}
@:keep @:image("assets/images/tilesspeci.png") #if display private #end class __ASSET__assets_images_tilesspeci_png extends lime.graphics.Image {}
@:keep @:file("assets/images/tribalchar.aseprite") #if display private #end class __ASSET__assets_images_tribalchar_aseprite extends haxe.io.Bytes {}
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
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,5,1/assets/sounds/beep.ogg") #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,5,1/assets/sounds/flixel.ogg") #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,5,1/assets/images/ui/button.png") #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,5,1/assets/images/logo/default.png") #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


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
