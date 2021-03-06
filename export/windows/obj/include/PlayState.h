// Generated by Haxe 3.4.7
#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Attack)
HX_DECLARE_CLASS0(Coin)
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(HUD)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Rage)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS4(flixel,addons,editors,ogmo,FlxOgmoLoader)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x46c2835d };

		void __construct(int Levelselector);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static hx::ObjectPtr< PlayState_obj > __new(int Levelselector);
		static hx::ObjectPtr< PlayState_obj > __alloc(hx::Ctx *_hx_ctx,int Levelselector);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"); }

		 ::Player _player;
		 ::Attack _attack;
		 ::Rage _classrage;
		 ::flixel::addons::editors::ogmo::FlxOgmoLoader _map;
		 ::flixel::tile::FlxTilemap _mWalls;
		 ::flixel::tile::FlxTilemap _mBack;
		 ::flixel::tile::FlxTilemap _mPlatf;
		 ::flixel::group::FlxTypedGroup _grpCoins;
		 ::flixel::group::FlxTypedGroup _grpEnemies;
		 ::HUD _hud;
		int _money;
		int _health;
		int _rage;
		 ::flixel::_hx_system::FlxSound _combatSound;
		 ::flixel::_hx_system::FlxSound _deathSound;
		Float mA;
		 ::flixel::_hx_system::FlxSound _sndCoin;
		int _levelSelector;
		int _dmgMultp;
		void create();

		void falldeath( ::flixel::FlxObject Tile, ::flixel::FlxObject Particle);
		::Dynamic falldeath_dyn();

		void nextlevel( ::flixel::FlxObject Tile, ::flixel::FlxObject Particle);
		::Dynamic nextlevel_dyn();

		void placeEntities(::String entityName, ::Xml entityData);
		::Dynamic placeEntities_dyn();

		void playerTouchCoin( ::Player P, ::Coin C);
		::Dynamic playerTouchCoin_dyn();

		void checkEnemyVision( ::Enemy e);
		::Dynamic checkEnemyVision_dyn();

		void attackDir( ::Player p, ::Attack a, ::Rage r);
		::Dynamic attackDir_dyn();

		void playerTouchEnemy( ::Player P, ::Enemy E);
		::Dynamic playerTouchEnemy_dyn();

		void doneFadeGO();
		::Dynamic doneFadeGO_dyn();

		void playerTouchAttack( ::Attack A, ::Enemy E);
		::Dynamic playerTouchAttack_dyn();

		void enemyNoStun( ::Enemy E);
		::Dynamic enemyNoStun_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_PlayState */ 
