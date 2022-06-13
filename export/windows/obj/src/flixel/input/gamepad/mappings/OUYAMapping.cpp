// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_OUYAID
#include <flixel/input/gamepad/id/OUYAID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_OUYAMapping
#include <flixel/input/gamepad/mappings/OUYAMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb034decec2e0057_6_new,"flixel.input.gamepad.mappings.OUYAMapping","new",0x98fc348c,"flixel.input.gamepad.mappings.OUYAMapping.new","flixel/input/gamepad/mappings/OUYAMapping.hx",6,0xfd22efc2)
HX_LOCAL_STACK_FRAME(_hx_pos_cb034decec2e0057_17_initValues,"flixel.input.gamepad.mappings.OUYAMapping","initValues",0x29941866,"flixel.input.gamepad.mappings.OUYAMapping.initValues","flixel/input/gamepad/mappings/OUYAMapping.hx",17,0xfd22efc2)
HX_LOCAL_STACK_FRAME(_hx_pos_cb034decec2e0057_24_getID,"flixel.input.gamepad.mappings.OUYAMapping","getID",0xf00b591d,"flixel.input.gamepad.mappings.OUYAMapping.getID","flixel/input/gamepad/mappings/OUYAMapping.hx",24,0xfd22efc2)
HX_LOCAL_STACK_FRAME(_hx_pos_cb034decec2e0057_55_getRawID,"flixel.input.gamepad.mappings.OUYAMapping","getRawID",0x921e6ba1,"flixel.input.gamepad.mappings.OUYAMapping.getRawID","flixel/input/gamepad/mappings/OUYAMapping.hx",55,0xfd22efc2)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void OUYAMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_6_new)
HXDLIN(   6)		super::__construct(attachment);
            	}

Dynamic OUYAMapping_obj::__CreateEmpty() { return new OUYAMapping_obj; }

void *OUYAMapping_obj::_hx_vtable = 0;

Dynamic OUYAMapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OUYAMapping_obj > _hx_result = new OUYAMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OUYAMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4f98b2a8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4f98b2a8;
	} else {
		return inClassId==(int)0x5f3facff;
	}
}

void OUYAMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_17_initValues)
HXLINE(  18)		this->leftStick = ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK;
HXLINE(  19)		this->rightStick = ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK;
            	}


int OUYAMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_24_getID)
HXDLIN(  24)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  26)				return (int)0;
            			}
            			break;
            			case (int)1: {
HXLINE(  27)				return (int)1;
            			}
            			break;
            			case (int)2: {
HXLINE(  30)				return (int)10;
            			}
            			break;
            			case (int)3: {
HXLINE(  28)				return (int)2;
            			}
            			break;
            			case (int)4: {
HXLINE(  29)				return (int)3;
            			}
            			break;
            			case (int)6: {
HXLINE(  33)				return (int)4;
            			}
            			break;
            			case (int)7: {
HXLINE(  34)				return (int)5;
            			}
            			break;
            			case (int)8: {
HXLINE(  35)				return (int)17;
            			}
            			break;
            			case (int)9: {
HXLINE(  36)				return (int)18;
            			}
            			break;
            			case (int)10: {
HXLINE(  31)				return (int)8;
            			}
            			break;
            			case (int)11: {
HXLINE(  32)				return (int)9;
            			}
            			break;
            			case (int)13: {
HXLINE(  39)				return (int)13;
            			}
            			break;
            			case (int)14: {
HXLINE(  40)				return (int)14;
            			}
            			break;
            			case (int)15: {
HXLINE(  38)				return (int)12;
            			}
            			break;
            			case (int)16: {
HXLINE(  37)				return (int)11;
            			}
            			break;
            			default:{
HXLINE(  41)				int id = rawID;
HXDLIN(  41)				if ((id == this->leftStick->rawUp)) {
HXLINE(  41)					return (int)34;
            				}
            				else {
HXLINE(  42)					int id1 = rawID;
HXDLIN(  42)					if ((id1 == this->leftStick->rawDown)) {
HXLINE(  42)						return (int)36;
            					}
            					else {
HXLINE(  43)						int id2 = rawID;
HXDLIN(  43)						if ((id2 == this->leftStick->rawLeft)) {
HXLINE(  43)							return (int)37;
            						}
            						else {
HXLINE(  44)							int id3 = rawID;
HXDLIN(  44)							if ((id3 == this->leftStick->rawRight)) {
HXLINE(  44)								return (int)35;
            							}
            							else {
HXLINE(  45)								int id4 = rawID;
HXDLIN(  45)								if ((id4 == this->rightStick->rawUp)) {
HXLINE(  45)									return (int)38;
            								}
            								else {
HXLINE(  46)									int id5 = rawID;
HXDLIN(  46)									if ((id5 == this->rightStick->rawDown)) {
HXLINE(  46)										return (int)40;
            									}
            									else {
HXLINE(  47)										int id6 = rawID;
HXDLIN(  47)										if ((id6 == this->rightStick->rawLeft)) {
HXLINE(  47)											return (int)41;
            										}
            										else {
HXLINE(  48)											int id7 = rawID;
HXDLIN(  48)											if ((id7 == this->rightStick->rawRight)) {
HXLINE(  48)												return (int)39;
            											}
            											else {
HXLINE(  49)												return (int)-1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  24)		return null();
            	}


int OUYAMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_55_getRawID)
HXDLIN(  55)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  57)				return (int)0;
            			}
            			break;
            			case (int)1: {
HXLINE(  58)				return (int)1;
            			}
            			break;
            			case (int)2: {
HXLINE(  59)				return (int)3;
            			}
            			break;
            			case (int)3: {
HXLINE(  60)				return (int)4;
            			}
            			break;
            			case (int)4: {
HXLINE(  64)				return (int)6;
            			}
            			break;
            			case (int)5: {
HXLINE(  65)				return (int)7;
            			}
            			break;
            			case (int)8: {
HXLINE(  62)				return (int)10;
            			}
            			break;
            			case (int)9: {
HXLINE(  63)				return (int)11;
            			}
            			break;
            			case (int)10: {
HXLINE(  61)				return (int)2;
            			}
            			break;
            			case (int)11: {
HXLINE(  66)				return (int)16;
            			}
            			break;
            			case (int)12: {
HXLINE(  67)				return (int)15;
            			}
            			break;
            			case (int)13: {
HXLINE(  68)				return (int)13;
            			}
            			break;
            			case (int)14: {
HXLINE(  69)				return (int)14;
            			}
            			break;
            			case (int)17: {
HXLINE(  70)				return (int)8;
            			}
            			break;
            			case (int)18: {
HXLINE(  71)				return (int)9;
            			}
            			break;
            			case (int)34: {
HXLINE(  72)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  75)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  73)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  74)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  76)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  79)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  77)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  78)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  80)				return (int)-1;
            			}
            		}
HXLINE(  55)		return (int)0;
            	}



hx::ObjectPtr< OUYAMapping_obj > OUYAMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	hx::ObjectPtr< OUYAMapping_obj > __this = new OUYAMapping_obj();
	__this->__construct(attachment);
	return __this;
}

hx::ObjectPtr< OUYAMapping_obj > OUYAMapping_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	OUYAMapping_obj *__this = (OUYAMapping_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OUYAMapping_obj), true, "flixel.input.gamepad.mappings.OUYAMapping"));
	*(void **)__this = OUYAMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

OUYAMapping_obj::OUYAMapping_obj()
{
}

hx::Val OUYAMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return hx::Val( getRawID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return hx::Val( initValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *OUYAMapping_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *OUYAMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String OUYAMapping_obj_sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	::String(null()) };

static void OUYAMapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OUYAMapping_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OUYAMapping_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OUYAMapping_obj::__mClass,"__mClass");
};

#endif

hx::Class OUYAMapping_obj::__mClass;

void OUYAMapping_obj::__register()
{
	hx::Object *dummy = new OUYAMapping_obj;
	OUYAMapping_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.OUYAMapping","\x9a","\x3e","\x94","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OUYAMapping_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OUYAMapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OUYAMapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OUYAMapping_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OUYAMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OUYAMapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
