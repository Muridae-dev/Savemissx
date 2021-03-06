// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_FSM
#include <FSM.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c595a05c1c7a687d_14_new,"Enemy","new",0x35d4571a,"Enemy.new","Enemy.hx",14,0xbda88996)
static const int _hx_array_data_03a88228_1[] = {
	(int)0,(int)1,
};
static const int _hx_array_data_03a88228_2[] = {
	(int)2,(int)3,
};
static const int _hx_array_data_03a88228_3[] = {
	(int)4,(int)5,
};
static const int _hx_array_data_03a88228_4[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_03a88228_5[] = {
	(int)4,(int)5,(int)6,(int)7,
};
static const int _hx_array_data_03a88228_6[] = {
	(int)0,(int)1,(int)0,(int)2,
};
static const int _hx_array_data_03a88228_7[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_c595a05c1c7a687d_82_draw,"Enemy","draw",0xdd65880a,"Enemy.draw","Enemy.hx",82,0xbda88996)
HX_LOCAL_STACK_FRAME(_hx_pos_c595a05c1c7a687d_118_idle,"Enemy","idle",0xe0a9031a,"Enemy.idle","Enemy.hx",118,0xbda88996)
HX_LOCAL_STACK_FRAME(_hx_pos_c595a05c1c7a687d_167_chase,"Enemy","chase",0x416ec6e8,"Enemy.chase","Enemy.hx",167,0xbda88996)
HX_LOCAL_STACK_FRAME(_hx_pos_c595a05c1c7a687d_213_update,"Enemy","update",0xcf0e6f8f,"Enemy.update","Enemy.hx",213,0xbda88996)

void Enemy_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int EType){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_c595a05c1c7a687d_14_new)
HXLINE(  24)		this->seesPlayer = false;
HXLINE(  16)		this->speed = ((Float)80);
HXLINE(  30)		super::__construct(X,Y,null());
HXLINE(  33)		this->etype = EType;
HXLINE(  36)		if ((this->etype == (int)0)) {
HXLINE(  38)			this->ehealth = (int)2;
HXLINE(  39)			 ::flixel::math::FlxPoint _hx_tmp = this->drag;
HXDLIN(  39)			_hx_tmp->set_x(this->drag->set_y((int)10));
HXLINE(  40)			this->loadGraphic(((HX_("assets/images/enemy-",d0,c6,05,40) + this->etype) + HX_(".png",3b,2d,bd,1e)),true,(int)24,(int)24,null(),null());
HXLINE(  42)			this->animation->add(HX_("lr",86,5e,00,00),::Array_obj< int >::fromData( _hx_array_data_03a88228_1,2),(int)6,false,null(),null());
HXLINE(  43)			this->animation->add(HX_("u",75,00,00,00),::Array_obj< int >::fromData( _hx_array_data_03a88228_2,2),(int)6,false,null(),null());
HXLINE(  44)			this->animation->add(HX_("d",64,00,00,00),::Array_obj< int >::fromData( _hx_array_data_03a88228_3,2),(int)6,false,null(),null());
HXLINE(  48)			this->setSize((int)24,(int)24);
HXLINE(  49)			this->offset->set((int)4,(int)2);
            		}
HXLINE(  56)		if ((this->etype == (int)1)) {
HXLINE(  58)			this->ehealth = (int)4;
HXLINE(  59)			this->acceleration->set_y((int)700);
HXLINE(  60)			this->loadGraphic(((HX_("assets/images/enemy-",d0,c6,05,40) + this->etype) + HX_(".png",3b,2d,bd,1e)),true,(int)32,(int)32,null(),null());
HXLINE(  61)			this->animation->add(HX_("ie",dc,5b,00,00),::Array_obj< int >::fromData( _hx_array_data_03a88228_4,4),(int)10,false,null(),null());
HXLINE(  62)			this->animation->add(HX_("lr",86,5e,00,00),::Array_obj< int >::fromData( _hx_array_data_03a88228_5,4),(int)10,false,null(),null());
HXLINE(  63)			this->animation->add(HX_("d",64,00,00,00),::Array_obj< int >::fromData( _hx_array_data_03a88228_6,4),(int)6,false,null(),null());
HXLINE(  64)			this->animation->add(HX_("u",75,00,00,00),::Array_obj< int >::fromData( _hx_array_data_03a88228_7,1),(int)6,false,null(),null());
HXLINE(  66)			this->maxVelocity->set_x((int)150);
HXLINE(  67)			 ::flixel::math::FlxPoint _hx_tmp1 = this->drag;
HXDLIN(  67)			_hx_tmp1->set_x(this->drag->set_y((int)1600));
HXLINE(  68)			this->setSize((int)14,(int)30);
HXLINE(  69)			this->offset->set((int)9,(int)2);
            		}
HXLINE(  72)		::haxe::IMap_obj::set(this->_facingFlip,(int)1, ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),false)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  73)		::haxe::IMap_obj::set(this->_facingFlip,(int)16, ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  75)		this->_brain =  ::FSM_obj::__alloc( HX_CTX ,this->idle_dyn());
HXLINE(  76)		this->_idleTmr = (int)0;
HXLINE(  77)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  77)		point->_inPool = false;
HXDLIN(  77)		this->playerPos = point;
            	}

Dynamic Enemy_obj::__CreateEmpty() { return new Enemy_obj; }

void *Enemy_obj::_hx_vtable = 0;

Dynamic Enemy_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Enemy_obj > _hx_result = new Enemy_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Enemy_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b6ffd77) {
		if (inClassId<=(int)0x03a88228) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03a88228;
		} else {
			return inClassId==(int)0x0b6ffd77;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x2e105115;
	}
}

void Enemy_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_c595a05c1c7a687d_82_draw)
HXLINE(  84)		bool _hx_tmp;
HXDLIN(  84)		bool _hx_tmp1;
HXDLIN(  84)		if ((this->velocity->x == (int)0)) {
HXLINE(  84)			_hx_tmp1 = (this->velocity->y != (int)0);
            		}
            		else {
HXLINE(  84)			_hx_tmp1 = true;
            		}
HXDLIN(  84)		if (_hx_tmp1) {
HXLINE(  84)			_hx_tmp = (this->touching == (int)0);
            		}
            		else {
HXLINE(  84)			_hx_tmp = false;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  86)			Float _hx_tmp2 = ::Math_obj::abs(this->velocity->x);
HXDLIN(  86)			if ((_hx_tmp2 > ::Math_obj::abs(this->velocity->y))) {
HXLINE(  88)				if ((this->velocity->x < (int)0)) {
HXLINE(  89)					this->set_facing((int)1);
            				}
            				else {
HXLINE(  91)					this->set_facing((int)16);
            				}
            			}
            			else {
HXLINE(  95)				if ((this->velocity->y < (int)0)) {
HXLINE(  96)					this->set_facing((int)256);
            				}
            				else {
HXLINE(  98)					this->set_facing((int)4096);
            				}
            			}
            		}
HXLINE( 102)		bool _hx_tmp3;
HXDLIN( 102)		if ((this->velocity->x == (int)0)) {
HXLINE( 102)			_hx_tmp3 = (this->velocity->y != (int)0);
            		}
            		else {
HXLINE( 102)			_hx_tmp3 = true;
            		}
HXDLIN( 102)		if (_hx_tmp3) {
HXLINE( 104)			bool _hx_tmp4;
HXDLIN( 104)			if ((this->facing != (int)16)) {
HXLINE( 104)				_hx_tmp4 = (this->facing == (int)1);
            			}
            			else {
HXLINE( 104)				_hx_tmp4 = true;
            			}
HXDLIN( 104)			if (_hx_tmp4) {
HXLINE( 104)				this->animation->play(HX_("lr",86,5e,00,00),null(),null(),null());
            			}
HXLINE( 107)			if ((this->facing == (int)256)) {
HXLINE( 107)				this->animation->play(HX_("u",75,00,00,00),null(),null(),null());
            			}
HXLINE( 110)			if ((this->facing == (int)4096)) {
HXLINE( 110)				this->animation->play(HX_("d",64,00,00,00),null(),null(),null());
            			}
            		}
HXLINE( 113)		this->super::draw();
            	}


void Enemy_obj::idle(){
            	HX_STACKFRAME(&_hx_pos_c595a05c1c7a687d_118_idle)
HXLINE( 120)		if (this->seesPlayer) {
HXLINE( 122)			this->_brain->activeState = this->chase_dyn();
            		}
HXLINE( 125)		if ((this->etype == (int)1)) {
HXLINE( 126)			this->animation->play(HX_("ie",dc,5b,00,00),null(),null(),null());
HXLINE( 127)			this->velocity->set_x((int)0);
HXLINE( 128)			this->acceleration->set_x((int)0);
            		}
            		else {
HXLINE( 132)			if ((this->_idleTmr <= (int)0)) {
HXLINE( 134)				if ((this->etype == (int)0)) {
HXLINE( 136)					if ((::flixel::FlxG_obj::random->_hx_float((int)0,(int)100,null()) < (int)1)) {
HXLINE( 138)						this->_moveDir = (int)-1;
HXLINE( 139)						 ::flixel::math::FlxPoint _hx_tmp = this->velocity;
HXDLIN( 139)						_hx_tmp->set_x(this->velocity->set_y((int)0));
            					}
            					else {
HXLINE( 146)						this->_moveDir = (::flixel::FlxG_obj::random->_hx_int((int)0,(int)8,null()) * (int)45);
HXLINE( 148)						 ::flixel::math::FlxPoint _hx_tmp1 = this->velocity;
HXDLIN( 148)						_hx_tmp1->set((this->speed * ((Float)0.5)),(int)0);
HXLINE( 149)						 ::flixel::math::FlxPoint _hx_tmp2 = this->velocity;
HXDLIN( 149)						 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 149)						point->_inPool = false;
HXDLIN( 149)						 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 149)						point1->_weak = true;
HXDLIN( 149)						_hx_tmp2->rotate(point1,this->_moveDir);
            					}
            				}
HXLINE( 153)				this->_idleTmr = ::flixel::FlxG_obj::random->_hx_int((int)1,(int)4,null());
            			}
            			else {
HXLINE( 158)				 ::Enemy _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 158)				_hx_tmp3->_idleTmr = (_hx_tmp3->_idleTmr - ::flixel::FlxG_obj::elapsed);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,idle,(void))

void Enemy_obj::chase(){
            	HX_STACKFRAME(&_hx_pos_c595a05c1c7a687d_167_chase)
HXLINE( 169)		bool _hx_tmp;
HXDLIN( 169)		if (!(this->seesPlayer)) {
HXLINE( 169)			 ::flixel::math::FlxPoint _hx_tmp1 = this->playerPos;
HXDLIN( 169)			_hx_tmp = (_hx_tmp1->distanceTo(this->getPosition(null())) >= (int)200);
            		}
            		else {
HXLINE( 169)			_hx_tmp = false;
            		}
HXDLIN( 169)		if (_hx_tmp) {
HXLINE( 171)			this->_brain->activeState = this->idle_dyn();
            		}
HXLINE( 174)		bool _hx_tmp2;
HXDLIN( 174)		 ::flixel::math::FlxPoint _hx_tmp3 = this->playerPos;
HXDLIN( 174)		if ((_hx_tmp3->distanceTo(this->getPosition(null())) >= (int)150)) {
HXLINE( 174)			_hx_tmp2 = (this->etype == (int)1);
            		}
            		else {
HXLINE( 174)			_hx_tmp2 = false;
            		}
HXDLIN( 174)		if (_hx_tmp2) {
HXLINE( 176)			this->_brain->activeState = this->idle_dyn();
            		}
HXLINE( 180)		bool _hx_tmp4;
HXDLIN( 180)		bool _hx_tmp5;
HXDLIN( 180)		if ((this->seesPlayer == true)) {
HXLINE( 180)			 ::flixel::math::FlxPoint _hx_tmp6 = this->playerPos;
HXDLIN( 180)			_hx_tmp5 = (_hx_tmp6->distanceTo(this->getPosition(null())) < (int)200);
            		}
            		else {
HXLINE( 180)			_hx_tmp5 = false;
            		}
HXDLIN( 180)		if (_hx_tmp5) {
HXLINE( 180)			_hx_tmp4 = (this->etype == (int)0);
            		}
            		else {
HXLINE( 180)			_hx_tmp4 = false;
            		}
HXDLIN( 180)		if (_hx_tmp4) {
HXLINE( 182)			 ::flixel::math::FlxPoint _hx_tmp7 = this->playerPos;
HXDLIN( 182)			::flixel::math::FlxVelocity_obj::moveTowardsPoint(hx::ObjectPtr<OBJ_>(this),_hx_tmp7,::Std_obj::_hx_int(this->speed),null());
            		}
HXLINE( 186)		bool _hx_tmp8;
HXDLIN( 186)		bool _hx_tmp9;
HXDLIN( 186)		bool _hx_tmp10;
HXDLIN( 186)		if ((this->seesPlayer == true)) {
HXLINE( 186)			 ::flixel::math::FlxPoint _hx_tmp11 = this->playerPos;
HXDLIN( 186)			_hx_tmp10 = (_hx_tmp11->distanceTo(this->getPosition(null())) < (int)150);
            		}
            		else {
HXLINE( 186)			_hx_tmp10 = false;
            		}
HXDLIN( 186)		if (_hx_tmp10) {
HXLINE( 186)			_hx_tmp9 = (this->etype == (int)1);
            		}
            		else {
HXLINE( 186)			_hx_tmp9 = false;
            		}
HXDLIN( 186)		if (_hx_tmp9) {
HXLINE( 186)			_hx_tmp8 = !(::flixel::effects::FlxFlicker_obj::isFlickering(hx::ObjectPtr<OBJ_>(this)));
            		}
            		else {
HXLINE( 186)			_hx_tmp8 = false;
            		}
HXDLIN( 186)		if (_hx_tmp8) {
HXLINE( 189)			if ((this->playerPos->x < this->x)) {
HXLINE( 192)				if ((this->velocity->x >= (int)0)) {
HXLINE( 192)					this->velocity->set_x((int)-10);
HXDLIN( 192)					this->acceleration->set_x((int)-500);
            				}
HXLINE( 193)				{
HXLINE( 193)					 ::flixel::math::FlxPoint _g = this->acceleration;
HXDLIN( 193)					_g->set_x((_g->x - (int)50));
            				}
HXLINE( 195)				this->set_facing((int)1);
            			}
HXLINE( 200)			if ((this->playerPos->x > this->x)) {
HXLINE( 203)				if ((this->velocity->x <= (int)0)) {
HXLINE( 203)					this->velocity->set_x((int)10);
HXDLIN( 203)					this->acceleration->set_x((int)500);
            				}
HXLINE( 204)				{
HXLINE( 204)					 ::flixel::math::FlxPoint _g1 = this->acceleration;
HXDLIN( 204)					_g1->set_x((_g1->x + (int)50));
            				}
HXLINE( 206)				this->set_facing((int)16);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,chase,(void))

void Enemy_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c595a05c1c7a687d_213_update)
HXLINE( 215)		this->_brain->update();
HXLINE( 216)		this->super::update(elapsed);
            	}



hx::ObjectPtr< Enemy_obj > Enemy_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int EType) {
	hx::ObjectPtr< Enemy_obj > __this = new Enemy_obj();
	__this->__construct(__o_X,__o_Y,EType);
	return __this;
}

hx::ObjectPtr< Enemy_obj > Enemy_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int EType) {
	Enemy_obj *__this = (Enemy_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Enemy_obj), true, "Enemy"));
	*(void **)__this = Enemy_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,EType);
	return __this;
}

Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(etype,"etype");
	HX_MARK_MEMBER_NAME(ehealth,"ehealth");
	HX_MARK_MEMBER_NAME(_sndStep,"_sndStep");
	HX_MARK_MEMBER_NAME(_brain,"_brain");
	HX_MARK_MEMBER_NAME(_idleTmr,"_idleTmr");
	HX_MARK_MEMBER_NAME(_moveDir,"_moveDir");
	HX_MARK_MEMBER_NAME(seesPlayer,"seesPlayer");
	HX_MARK_MEMBER_NAME(playerPos,"playerPos");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(etype,"etype");
	HX_VISIT_MEMBER_NAME(ehealth,"ehealth");
	HX_VISIT_MEMBER_NAME(_sndStep,"_sndStep");
	HX_VISIT_MEMBER_NAME(_brain,"_brain");
	HX_VISIT_MEMBER_NAME(_idleTmr,"_idleTmr");
	HX_VISIT_MEMBER_NAME(_moveDir,"_moveDir");
	HX_VISIT_MEMBER_NAME(seesPlayer,"seesPlayer");
	HX_VISIT_MEMBER_NAME(playerPos,"playerPos");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Enemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"idle") ) { return hx::Val( idle_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"etype") ) { return hx::Val( etype ); }
		if (HX_FIELD_EQ(inName,"chase") ) { return hx::Val( chase_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_brain") ) { return hx::Val( _brain ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ehealth") ) { return hx::Val( ehealth ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sndStep") ) { return hx::Val( _sndStep ); }
		if (HX_FIELD_EQ(inName,"_idleTmr") ) { return hx::Val( _idleTmr ); }
		if (HX_FIELD_EQ(inName,"_moveDir") ) { return hx::Val( _moveDir ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playerPos") ) { return hx::Val( playerPos ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"seesPlayer") ) { return hx::Val( seesPlayer ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Enemy_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"etype") ) { etype=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_brain") ) { _brain=inValue.Cast<  ::FSM >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ehealth") ) { ehealth=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sndStep") ) { _sndStep=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_idleTmr") ) { _idleTmr=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveDir") ) { _moveDir=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playerPos") ) { playerPos=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"seesPlayer") ) { seesPlayer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("etype","\x9f","\x89","\x81","\x74"));
	outFields->push(HX_HCSTRING("ehealth","\xc1","\x02","\xfe","\x64"));
	outFields->push(HX_HCSTRING("_sndStep","\xd6","\x78","\x65","\xae"));
	outFields->push(HX_HCSTRING("_brain","\xf7","\x69","\xd0","\xb4"));
	outFields->push(HX_HCSTRING("_idleTmr","\xa6","\x73","\xff","\xb5"));
	outFields->push(HX_HCSTRING("_moveDir","\x3d","\xec","\x37","\x84"));
	outFields->push(HX_HCSTRING("seesPlayer","\x01","\x05","\x0b","\x46"));
	outFields->push(HX_HCSTRING("playerPos","\xb3","\xbc","\xc6","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Enemy_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Enemy_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsInt,(int)offsetof(Enemy_obj,etype),HX_HCSTRING("etype","\x9f","\x89","\x81","\x74")},
	{hx::fsInt,(int)offsetof(Enemy_obj,ehealth),HX_HCSTRING("ehealth","\xc1","\x02","\xfe","\x64")},
	{hx::fsObject /*::flixel::_hx_system::FlxSound*/ ,(int)offsetof(Enemy_obj,_sndStep),HX_HCSTRING("_sndStep","\xd6","\x78","\x65","\xae")},
	{hx::fsObject /*::FSM*/ ,(int)offsetof(Enemy_obj,_brain),HX_HCSTRING("_brain","\xf7","\x69","\xd0","\xb4")},
	{hx::fsFloat,(int)offsetof(Enemy_obj,_idleTmr),HX_HCSTRING("_idleTmr","\xa6","\x73","\xff","\xb5")},
	{hx::fsFloat,(int)offsetof(Enemy_obj,_moveDir),HX_HCSTRING("_moveDir","\x3d","\xec","\x37","\x84")},
	{hx::fsBool,(int)offsetof(Enemy_obj,seesPlayer),HX_HCSTRING("seesPlayer","\x01","\x05","\x0b","\x46")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(Enemy_obj,playerPos),HX_HCSTRING("playerPos","\xb3","\xbc","\xc6","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Enemy_obj_sStaticStorageInfo = 0;
#endif

static ::String Enemy_obj_sMemberFields[] = {
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("etype","\x9f","\x89","\x81","\x74"),
	HX_HCSTRING("ehealth","\xc1","\x02","\xfe","\x64"),
	HX_HCSTRING("_sndStep","\xd6","\x78","\x65","\xae"),
	HX_HCSTRING("_brain","\xf7","\x69","\xd0","\xb4"),
	HX_HCSTRING("_idleTmr","\xa6","\x73","\xff","\xb5"),
	HX_HCSTRING("_moveDir","\x3d","\xec","\x37","\x84"),
	HX_HCSTRING("seesPlayer","\x01","\x05","\x0b","\x46"),
	HX_HCSTRING("playerPos","\xb3","\xbc","\xc6","\x00"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),
	HX_HCSTRING("chase","\xae","\x9d","\xb3","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void Enemy_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Enemy_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#endif

hx::Class Enemy_obj::__mClass;

void Enemy_obj::__register()
{
	hx::Object *dummy = new Enemy_obj;
	Enemy_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Enemy_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Enemy_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Enemy_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Enemy_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Enemy_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Enemy_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

