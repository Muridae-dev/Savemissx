// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_95981fe4948a3fc6_3_new,"flixel.input.FlxInput","new",0x726ed100,"flixel.input.FlxInput.new","flixel/input/FlxInput.hx",3,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_21_press,"flixel.input.FlxInput","press",0x37dcbc23,"flixel.input.FlxInput.press","flixel/input/FlxInput.hx",21,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_27_release,"flixel.input.FlxInput","release",0x94a55667,"flixel.input.FlxInput.release","flixel/input/FlxInput.hx",27,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_33_update,"flixel.input.FlxInput","update",0x818ca969,"flixel.input.FlxInput.update","flixel/input/FlxInput.hx",33,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_47_reset,"flixel.input.FlxInput","reset",0x561cb26f,"flixel.input.FlxInput.reset","flixel/input/FlxInput.hx",47,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_54_hasState,"flixel.input.FlxInput","hasState",0x15827bb7,"flixel.input.FlxInput.hasState","flixel/input/FlxInput.hx",54,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_65_get_justReleased,"flixel.input.FlxInput","get_justReleased",0x305322f2,"flixel.input.FlxInput.get_justReleased","flixel/input/FlxInput.hx",65,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_70_get_released,"flixel.input.FlxInput","get_released",0x4d112826,"flixel.input.FlxInput.get_released","flixel/input/FlxInput.hx",70,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_75_get_pressed,"flixel.input.FlxInput","get_pressed",0x1bddd359,"flixel.input.FlxInput.get_pressed","flixel/input/FlxInput.hx",75,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_80_get_justPressed,"flixel.input.FlxInput","get_justPressed",0xfa72360d,"flixel.input.FlxInput.get_justPressed","flixel/input/FlxInput.hx",80,0xe8bdaaee)
namespace flixel{
namespace input{

void FlxInput_obj::__construct( ::Dynamic ID){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_3_new)
HXLINE(  13)		this->last = (int)0;
HXLINE(  12)		this->current = (int)0;
HXLINE(  17)		this->ID = ID;
            	}

Dynamic FlxInput_obj::__CreateEmpty() { return new FlxInput_obj; }

void *FlxInput_obj::_hx_vtable = 0;

Dynamic FlxInput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxInput_obj > _hx_result = new FlxInput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxInput_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5de9f106;
}

static ::flixel::input::IFlxInput_obj _hx_flixel_input_FlxInput__hx_flixel_input_IFlxInput= {
	( bool (hx::Object::*)())&::flixel::input::FlxInput_obj::get_justPressed,
	( bool (hx::Object::*)())&::flixel::input::FlxInput_obj::get_pressed,
	( bool (hx::Object::*)())&::flixel::input::FlxInput_obj::get_released,
	( bool (hx::Object::*)())&::flixel::input::FlxInput_obj::get_justReleased,
};

void *FlxInput_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x52baf533: return &_hx_flixel_input_FlxInput__hx_flixel_input_IFlxInput;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxInput_obj::press(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_21_press)
HXLINE(  22)		this->last = this->current;
HXLINE(  23)		int _hx_tmp;
HXDLIN(  23)		bool _hx_tmp1;
HXDLIN(  23)		if ((this->current != (int)1)) {
HXLINE(  23)			_hx_tmp1 = (this->current == (int)2);
            		}
            		else {
HXLINE(  23)			_hx_tmp1 = true;
            		}
HXDLIN(  23)		if (_hx_tmp1) {
HXLINE(  23)			_hx_tmp = (int)1;
            		}
            		else {
HXLINE(  23)			_hx_tmp = (int)2;
            		}
HXDLIN(  23)		this->current = _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,press,(void))

void FlxInput_obj::release(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_27_release)
HXLINE(  28)		this->last = this->current;
HXLINE(  29)		int _hx_tmp;
HXDLIN(  29)		bool _hx_tmp1;
HXDLIN(  29)		if ((this->current != (int)1)) {
HXLINE(  29)			_hx_tmp1 = (this->current == (int)2);
            		}
            		else {
HXLINE(  29)			_hx_tmp1 = true;
            		}
HXDLIN(  29)		if (_hx_tmp1) {
HXLINE(  29)			_hx_tmp = (int)-1;
            		}
            		else {
HXLINE(  29)			_hx_tmp = (int)0;
            		}
HXDLIN(  29)		this->current = _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,release,(void))

void FlxInput_obj::update(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_33_update)
HXLINE(  34)		bool _hx_tmp;
HXDLIN(  34)		if ((this->last == (int)-1)) {
HXLINE(  34)			_hx_tmp = (this->current == (int)-1);
            		}
            		else {
HXLINE(  34)			_hx_tmp = false;
            		}
HXDLIN(  34)		if (_hx_tmp) {
HXLINE(  36)			this->current = (int)0;
            		}
            		else {
HXLINE(  38)			bool _hx_tmp1;
HXDLIN(  38)			if ((this->last == (int)2)) {
HXLINE(  38)				_hx_tmp1 = (this->current == (int)2);
            			}
            			else {
HXLINE(  38)				_hx_tmp1 = false;
            			}
HXDLIN(  38)			if (_hx_tmp1) {
HXLINE(  40)				this->current = (int)1;
            			}
            		}
HXLINE(  43)		this->last = this->current;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,update,(void))

void FlxInput_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_47_reset)
HXLINE(  48)		this->current = (int)0;
HXLINE(  49)		this->last = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,reset,(void))

bool FlxInput_obj::hasState(int state){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_54_hasState)
HXDLIN(  54)		switch((int)(state)){
            			case (int)-1: {
HXLINE(  56)				return (this->current == (int)-1);
            			}
            			break;
            			case (int)0: {
HXLINE(  57)				if ((this->current != (int)0)) {
HXLINE(  57)					return (this->current == (int)-1);
            				}
            				else {
HXLINE(  57)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  58)				if ((this->current != (int)1)) {
HXLINE(  58)					return (this->current == (int)2);
            				}
            				else {
HXLINE(  58)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  59)				return (this->current == (int)2);
            			}
            			break;
            		}
HXLINE(  54)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInput_obj,hasState,return )

bool FlxInput_obj::get_justReleased(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_65_get_justReleased)
HXDLIN(  65)		return (this->current == (int)-1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_justReleased,return )

bool FlxInput_obj::get_released(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_70_get_released)
HXDLIN(  70)		if ((this->current != (int)0)) {
HXDLIN(  70)			return (this->current == (int)-1);
            		}
            		else {
HXDLIN(  70)			return true;
            		}
HXDLIN(  70)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_released,return )

bool FlxInput_obj::get_pressed(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_75_get_pressed)
HXDLIN(  75)		if ((this->current != (int)1)) {
HXDLIN(  75)			return (this->current == (int)2);
            		}
            		else {
HXDLIN(  75)			return true;
            		}
HXDLIN(  75)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_pressed,return )

bool FlxInput_obj::get_justPressed(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_80_get_justPressed)
HXDLIN(  80)		return (this->current == (int)2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_justPressed,return )


hx::ObjectPtr< FlxInput_obj > FlxInput_obj::__new( ::Dynamic ID) {
	hx::ObjectPtr< FlxInput_obj > __this = new FlxInput_obj();
	__this->__construct(ID);
	return __this;
}

hx::ObjectPtr< FlxInput_obj > FlxInput_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic ID) {
	FlxInput_obj *__this = (FlxInput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxInput_obj), true, "flixel.input.FlxInput"));
	*(void **)__this = FlxInput_obj::_hx_vtable;
	__this->__construct(ID);
	return __this;
}

FlxInput_obj::FlxInput_obj()
{
}

void FlxInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInput);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_END_CLASS();
}

void FlxInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(last,"last");
}

hx::Val FlxInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return hx::Val( ID ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return hx::Val( last ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return hx::Val( press_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_pressed() ); }
		if (HX_FIELD_EQ(inName,"current") ) { return hx::Val( current ); }
		if (HX_FIELD_EQ(inName,"release") ) { return hx::Val( release_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_released() ); }
		if (HX_FIELD_EQ(inName,"hasState") ) { return hx::Val( hasState_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_justPressed() ); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return hx::Val( get_pressed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_justReleased() ); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return hx::Val( get_released_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return hx::Val( get_justPressed_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return hx::Val( get_justReleased_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxInput_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxInput_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxInput_obj,ID),HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxInput_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsInt,(int)offsetof(FlxInput_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxInput_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxInput_obj_sMemberFields[] = {
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("press","\x83","\x53","\x88","\xc8"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("hasState","\x57","\xc0","\x63","\x10"),
	HX_HCSTRING("get_justReleased","\x92","\x07","\xfa","\x6a"),
	HX_HCSTRING("get_released","\xc6","\x3c","\x01","\x2c"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_justPressed","\x6d","\xc5","\x88","\xb3"),
	::String(null()) };

static void FlxInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInput_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxInput_obj::__mClass;

void FlxInput_obj::__register()
{
	hx::Object *dummy = new FlxInput_obj;
	FlxInput_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxInput","\x0e","\x91","\xfa","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxInput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxInput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxInput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxInput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
