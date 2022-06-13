// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1154_new,"openfl.display.InteractiveObject","new",0x042d7309,"openfl.display.InteractiveObject.new","openfl/display/InteractiveObject.hx",1154,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1183_requestSoftKeyboard,"openfl.display.InteractiveObject","requestSoftKeyboard",0x985d3a49,"openfl.display.InteractiveObject.requestSoftKeyboard","openfl/display/InteractiveObject.hx",1183,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1193___allowMouseFocus,"openfl.display.InteractiveObject","__allowMouseFocus",0x4a3f2aa5,"openfl.display.InteractiveObject.__allowMouseFocus","openfl/display/InteractiveObject.hx",1193,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1198___getInteractive,"openfl.display.InteractiveObject","__getInteractive",0xf3ec43c3,"openfl.display.InteractiveObject.__getInteractive","openfl/display/InteractiveObject.hx",1198,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1217___hitTest,"openfl.display.InteractiveObject","__hitTest",0x5938388e,"openfl.display.InteractiveObject.__hitTest","openfl/display/InteractiveObject.hx",1217,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1227___tabTest,"openfl.display.InteractiveObject","__tabTest",0xbc287590,"openfl.display.InteractiveObject.__tabTest","openfl/display/InteractiveObject.hx",1227,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1245_get_tabEnabled,"openfl.display.InteractiveObject","get_tabEnabled",0x09837aec,"openfl.display.InteractiveObject.get_tabEnabled","openfl/display/InteractiveObject.hx",1245,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1250_set_tabEnabled,"openfl.display.InteractiveObject","set_tabEnabled",0x29a36360,"openfl.display.InteractiveObject.set_tabEnabled","openfl/display/InteractiveObject.hx",1250,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1266_get_tabIndex,"openfl.display.InteractiveObject","get_tabIndex",0x2bde10bd,"openfl.display.InteractiveObject.get_tabIndex","openfl/display/InteractiveObject.hx",1266,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1271_set_tabIndex,"openfl.display.InteractiveObject","set_tabIndex",0x40d73431,"openfl.display.InteractiveObject.set_tabIndex","openfl/display/InteractiveObject.hx",1271,0x983a3689)
namespace openfl{
namespace display{

void InteractiveObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1154_new)
HXLINE(1156)		super::__construct();
HXLINE(1158)		this->doubleClickEnabled = false;
HXLINE(1159)		this->mouseEnabled = true;
HXLINE(1160)		this->needsSoftKeyboard = false;
HXLINE(1161)		this->_hx___tabEnabled = null();
HXLINE(1162)		this->_hx___tabIndex = (int)-1;
            	}

Dynamic InteractiveObject_obj::__CreateEmpty() { return new InteractiveObject_obj; }

void *InteractiveObject_obj::_hx_vtable = 0;

Dynamic InteractiveObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InteractiveObject_obj > _hx_result = new InteractiveObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InteractiveObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19c29573) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19c29573;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x3f2b00af;
	}
}

bool InteractiveObject_obj::requestSoftKeyboard(){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1183_requestSoftKeyboard)
HXLINE(1185)		::openfl::_internal::Lib_obj::notImplemented(hx::SourceInfo(HX_("InteractiveObject.hx",3d,87,79,89),1185,HX_("openfl.display.InteractiveObject",97,3a,cb,f4),HX_("requestSoftKeyboard",a0,f5,a9,d4)));
HXLINE(1186)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,requestSoftKeyboard,return )

bool InteractiveObject_obj::_hx___allowMouseFocus(){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1193___allowMouseFocus)
HXDLIN(1193)		return this->get_tabEnabled();
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,_hx___allowMouseFocus,return )

bool InteractiveObject_obj::_hx___getInteractive(::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1198___getInteractive)
HXLINE(1200)		if (hx::IsNotNull( stack )) {
HXLINE(1202)			stack->push(hx::ObjectPtr<OBJ_>(this));
HXLINE(1204)			if (hx::IsNotNull( this->parent )) {
HXLINE(1206)				this->parent->_hx___getInteractive(stack);
            			}
            		}
HXLINE(1212)		return true;
            	}


bool InteractiveObject_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1217___hitTest)
HXLINE(1219)		bool _hx_tmp;
HXDLIN(1219)		bool _hx_tmp1;
HXDLIN(1219)		if (!(!(hitObject->get_visible()))) {
HXLINE(1219)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE(1219)			_hx_tmp1 = true;
            		}
HXDLIN(1219)		if (!(_hx_tmp1)) {
HXLINE(1219)			if (interactiveOnly) {
HXLINE(1219)				_hx_tmp = !(this->mouseEnabled);
            			}
            			else {
HXLINE(1219)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(1219)			_hx_tmp = true;
            		}
HXDLIN(1219)		if (_hx_tmp) {
HXLINE(1219)			return false;
            		}
HXLINE(1220)		return this->super::_hx___hitTest(x,y,shapeFlag,stack,interactiveOnly,hitObject);
            	}


void InteractiveObject_obj::_hx___tabTest(::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1227___tabTest)
HXDLIN(1227)		if (this->get_tabEnabled()) {
HXLINE(1229)			stack->push(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,_hx___tabTest,(void))

bool InteractiveObject_obj::get_tabEnabled(){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1245_get_tabEnabled)
HXDLIN(1245)		if (hx::IsEq( this->_hx___tabEnabled,true )) {
HXDLIN(1245)			return true;
            		}
            		else {
HXDLIN(1245)			return false;
            		}
HXDLIN(1245)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_tabEnabled,return )

bool InteractiveObject_obj::set_tabEnabled(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1250_set_tabEnabled)
HXLINE(1252)		if (hx::IsNotEq( this->_hx___tabEnabled,value )) {
HXLINE(1254)			this->_hx___tabEnabled = value;
HXLINE(1256)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("tabEnabledChange",3c,45,98,72),true,false));
            		}
HXLINE(1259)		return this->_hx___tabEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_tabEnabled,return )

int InteractiveObject_obj::get_tabIndex(){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1266_get_tabIndex)
HXDLIN(1266)		return this->_hx___tabIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_tabIndex,return )

int InteractiveObject_obj::set_tabIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1271_set_tabIndex)
HXLINE(1273)		if ((this->_hx___tabIndex != value)) {
HXLINE(1275)			if ((value < (int)-1)) {
HXLINE(1275)				HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,(HX_("Parameter tabIndex must be a non-negative number; got ",9c,f8,24,a4) + value)));
            			}
HXLINE(1277)			this->_hx___tabIndex = value;
HXLINE(1279)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("tabIndexChange",cd,1d,78,90),true,false));
            		}
HXLINE(1282)		return this->_hx___tabIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_tabIndex,return )


hx::ObjectPtr< InteractiveObject_obj > InteractiveObject_obj::__new() {
	hx::ObjectPtr< InteractiveObject_obj > __this = new InteractiveObject_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< InteractiveObject_obj > InteractiveObject_obj::__alloc(hx::Ctx *_hx_ctx) {
	InteractiveObject_obj *__this = (InteractiveObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InteractiveObject_obj), true, "openfl.display.InteractiveObject"));
	*(void **)__this = InteractiveObject_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InteractiveObject_obj::InteractiveObject_obj()
{
}

void InteractiveObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractiveObject);
	HX_MARK_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_MARK_MEMBER_NAME(focusRect,"focusRect");
	HX_MARK_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_MARK_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_MARK_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_MARK_MEMBER_NAME(_hx___tabEnabled,"__tabEnabled");
	HX_MARK_MEMBER_NAME(_hx___tabIndex,"__tabIndex");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InteractiveObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_VISIT_MEMBER_NAME(focusRect,"focusRect");
	HX_VISIT_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_VISIT_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_VISIT_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_VISIT_MEMBER_NAME(_hx___tabEnabled,"__tabEnabled");
	HX_VISIT_MEMBER_NAME(_hx___tabIndex,"__tabIndex");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val InteractiveObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tabIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_tabIndex() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusRect") ) { return hx::Val( focusRect ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"__tabTest") ) { return hx::Val( _hx___tabTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_tabEnabled() ); }
		if (HX_FIELD_EQ(inName,"__tabIndex") ) { return hx::Val( _hx___tabIndex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return hx::Val( mouseEnabled ); }
		if (HX_FIELD_EQ(inName,"__tabEnabled") ) { return hx::Val( _hx___tabEnabled ); }
		if (HX_FIELD_EQ(inName,"get_tabIndex") ) { return hx::Val( get_tabIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabIndex") ) { return hx::Val( set_tabIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return hx::Val( get_tabEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabEnabled") ) { return hx::Val( set_tabEnabled_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return hx::Val( _hx___getInteractive_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { return hx::Val( needsSoftKeyboard ); }
		if (HX_FIELD_EQ(inName,"__allowMouseFocus") ) { return hx::Val( _hx___allowMouseFocus_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { return hx::Val( doubleClickEnabled ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"requestSoftKeyboard") ) { return hx::Val( requestSoftKeyboard_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { return hx::Val( softKeyboardInputAreaOfInterest ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val InteractiveObject_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tabIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_tabIndex(inValue.Cast< int >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusRect") ) { focusRect=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_tabEnabled(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__tabIndex") ) { _hx___tabIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { mouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tabEnabled") ) { _hx___tabEnabled=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { needsSoftKeyboard=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { doubleClickEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { softKeyboardInputAreaOfInterest=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractiveObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"));
	outFields->push(HX_HCSTRING("focusRect","\x1c","\xa5","\x32","\x23"));
	outFields->push(HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f"));
	outFields->push(HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9"));
	outFields->push(HX_HCSTRING("softKeyboardInputAreaOfInterest","\x47","\x41","\x03","\xf6"));
	outFields->push(HX_HCSTRING("tabEnabled","\xac","\xf6","\x08","\x40"));
	outFields->push(HX_HCSTRING("tabIndex","\x7d","\x1c","\xb9","\x2c"));
	outFields->push(HX_HCSTRING("__tabEnabled","\xcc","\x71","\x9c","\x78"));
	outFields->push(HX_HCSTRING("__tabIndex","\x9d","\x8f","\xf1","\xcf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo InteractiveObject_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,doubleClickEnabled),HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(InteractiveObject_obj,focusRect),HX_HCSTRING("focusRect","\x1c","\xa5","\x32","\x23")},
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,mouseEnabled),HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f")},
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,needsSoftKeyboard),HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(InteractiveObject_obj,softKeyboardInputAreaOfInterest),HX_HCSTRING("softKeyboardInputAreaOfInterest","\x47","\x41","\x03","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(InteractiveObject_obj,_hx___tabEnabled),HX_HCSTRING("__tabEnabled","\xcc","\x71","\x9c","\x78")},
	{hx::fsInt,(int)offsetof(InteractiveObject_obj,_hx___tabIndex),HX_HCSTRING("__tabIndex","\x9d","\x8f","\xf1","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *InteractiveObject_obj_sStaticStorageInfo = 0;
#endif

static ::String InteractiveObject_obj_sMemberFields[] = {
	HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"),
	HX_HCSTRING("focusRect","\x1c","\xa5","\x32","\x23"),
	HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f"),
	HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9"),
	HX_HCSTRING("softKeyboardInputAreaOfInterest","\x47","\x41","\x03","\xf6"),
	HX_HCSTRING("__tabEnabled","\xcc","\x71","\x9c","\x78"),
	HX_HCSTRING("__tabIndex","\x9d","\x8f","\xf1","\xcf"),
	HX_HCSTRING("requestSoftKeyboard","\xa0","\xf5","\xa9","\xd4"),
	HX_HCSTRING("__allowMouseFocus","\x3c","\x92","\x71","\x07"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__tabTest","\x27","\xee","\xbd","\xc6"),
	HX_HCSTRING("get_tabEnabled","\xf5","\x7e","\xfe","\xb5"),
	HX_HCSTRING("set_tabEnabled","\x69","\x67","\x1e","\xd6"),
	HX_HCSTRING("get_tabIndex","\x86","\xd0","\xd2","\xe1"),
	HX_HCSTRING("set_tabIndex","\xfa","\xf3","\xcb","\xf6"),
	::String(null()) };

static void InteractiveObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InteractiveObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
};

#endif

hx::Class InteractiveObject_obj::__mClass;

void InteractiveObject_obj::__register()
{
	hx::Object *dummy = new InteractiveObject_obj;
	InteractiveObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.InteractiveObject","\x97","\x3a","\xcb","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InteractiveObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InteractiveObject_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractiveObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InteractiveObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InteractiveObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InteractiveObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
