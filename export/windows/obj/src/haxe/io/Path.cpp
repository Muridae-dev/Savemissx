// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c76bafa893b9a603_76_new,"haxe.io.Path","new",0x1b96d677,"haxe.io.Path.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",76,0x4f1aa280)
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_115_toString,"haxe.io.Path","toString",0xc0ab5735,"haxe.io.Path.toString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",115,0x4f1aa280)
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_134_withoutDirectory,"haxe.io.Path","withoutDirectory",0xdf35ce8e,"haxe.io.Path.withoutDirectory","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",134,0x4f1aa280)
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_147_directory,"haxe.io.Path","directory",0xbcfe23c4,"haxe.io.Path.directory","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",147,0x4f1aa280)
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_190_join,"haxe.io.Path","join",0x05c781f3,"haxe.io.Path.join","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",190,0x4f1aa280)
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_189_join,"haxe.io.Path","join",0x05c781f3,"haxe.io.Path.join","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",189,0x4f1aa280)
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_210_normalize,"haxe.io.Path","normalize",0x585a68e4,"haxe.io.Path.normalize","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",210,0x4f1aa280)
static const ::String _hx_array_data_4ec6cf05_11[] = {
	HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_4ec6cf05_12[] = {
	HX_(":",3a,00,00,00),
};
static const ::String _hx_array_data_4ec6cf05_13[] = {
	HX_("/",2f,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_262_addTrailingSlash,"haxe.io.Path","addTrailingSlash",0x8b4f8e69,"haxe.io.Path.addTrailingSlash","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",262,0x4f1aa280)
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_287_removeTrailingSlashes,"haxe.io.Path","removeTrailingSlashes",0x2dc73462,"haxe.io.Path.removeTrailingSlashes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",287,0x4f1aa280)
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_301_isAbsolute,"haxe.io.Path","isAbsolute",0xb396db4a,"haxe.io.Path.isAbsolute","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",301,0x4f1aa280)
namespace haxe{
namespace io{

void Path_obj::__construct(::String path){
            	HX_STACKFRAME(&_hx_pos_c76bafa893b9a603_76_new)
HXLINE(  77)		::String _hx_switch_0 = path;
            		if (  (_hx_switch_0==HX_(".",2e,00,00,00)) ||  (_hx_switch_0==HX_("..",40,28,00,00)) ){
HXLINE(  79)			this->dir = path;
HXLINE(  80)			this->file = HX_("",00,00,00,00);
HXLINE(  81)			return;
HXLINE(  78)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  83)		int c1 = path.lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE(  84)		int c2 = path.lastIndexOf(HX_("\\",5c,00,00,00),null());
HXLINE(  85)		if ((c1 < c2)) {
HXLINE(  86)			this->dir = path.substr((int)0,c2);
HXLINE(  87)			path = path.substr((c2 + (int)1),null());
HXLINE(  88)			this->backslash = true;
            		}
            		else {
HXLINE(  89)			if ((c2 < c1)) {
HXLINE(  90)				this->dir = path.substr((int)0,c1);
HXLINE(  91)				path = path.substr((c1 + (int)1),null());
            			}
            			else {
HXLINE(  93)				this->dir = null();
            			}
            		}
HXLINE(  94)		int cp = path.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE(  95)		if ((cp != (int)-1)) {
HXLINE(  96)			this->ext = path.substr((cp + (int)1),null());
HXLINE(  97)			this->file = path.substr((int)0,cp);
            		}
            		else {
HXLINE(  99)			this->ext = null();
HXLINE( 100)			this->file = path;
            		}
            	}

Dynamic Path_obj::__CreateEmpty() { return new Path_obj; }

void *Path_obj::_hx_vtable = 0;

Dynamic Path_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Path_obj > _hx_result = new Path_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Path_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x044b6ab5;
}

::String Path_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c76bafa893b9a603_115_toString)
HXDLIN( 115)		::String _hx_tmp;
HXDLIN( 115)		if (hx::IsNull( this->dir )) {
HXDLIN( 115)			_hx_tmp = HX_("",00,00,00,00);
            		}
            		else {
HXDLIN( 115)			::String _hx_tmp1;
HXDLIN( 115)			if (this->backslash) {
HXDLIN( 115)				_hx_tmp1 = HX_("\\",5c,00,00,00);
            			}
            			else {
HXDLIN( 115)				_hx_tmp1 = HX_("/",2f,00,00,00);
            			}
HXDLIN( 115)			_hx_tmp = (this->dir + _hx_tmp1);
            		}
HXDLIN( 115)		::String _hx_tmp2;
HXDLIN( 115)		if (hx::IsNull( this->ext )) {
HXDLIN( 115)			_hx_tmp2 = HX_("",00,00,00,00);
            		}
            		else {
HXDLIN( 115)			_hx_tmp2 = (HX_(".",2e,00,00,00) + this->ext);
            		}
HXDLIN( 115)		return ((_hx_tmp + this->file) + _hx_tmp2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,toString,return )

::String Path_obj::withoutDirectory(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_c76bafa893b9a603_134_withoutDirectory)
HXLINE( 135)		 ::haxe::io::Path s =  ::haxe::io::Path_obj::__alloc( HX_CTX ,path);
HXLINE( 136)		s->dir = null();
HXLINE( 137)		return s->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,withoutDirectory,return )

::String Path_obj::directory(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_c76bafa893b9a603_147_directory)
HXLINE( 148)		 ::haxe::io::Path s =  ::haxe::io::Path_obj::__alloc( HX_CTX ,path);
HXLINE( 149)		if (hx::IsNull( s->dir )) {
HXLINE( 150)			return HX_("",00,00,00,00);
            		}
HXLINE( 151)		return s->dir;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,directory,return )

::String Path_obj::join(::Array< ::String > paths){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		bool _hx_run(::String s){
            			HX_STACKFRAME(&_hx_pos_c76bafa893b9a603_190_join)
HXLINE( 190)			if (hx::IsNotNull( s )) {
HXLINE( 190)				return (s != HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 190)				return false;
            			}
HXDLIN( 190)			return false;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_c76bafa893b9a603_189_join)
HXLINE( 190)		::Array< ::String > paths1 = paths->filter( ::Dynamic(new _hx_Closure_0()));
HXLINE( 191)		if ((paths1->length == (int)0)) {
HXLINE( 192)			return HX_("",00,00,00,00);
            		}
HXLINE( 194)		::String path = paths1->__get((int)0);
HXLINE( 195)		{
HXLINE( 195)			int _g1 = (int)1;
HXDLIN( 195)			int _g = paths1->length;
HXDLIN( 195)			while((_g1 < _g)){
HXLINE( 195)				_g1 = (_g1 + (int)1);
HXDLIN( 195)				int i = (_g1 - (int)1);
HXLINE( 196)				path = ::haxe::io::Path_obj::addTrailingSlash(path);
HXLINE( 197)				path = (path + paths1->__get(i));
            			}
            		}
HXLINE( 199)		return ::haxe::io::Path_obj::normalize(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,join,return )

::String Path_obj::normalize(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_c76bafa893b9a603_210_normalize)
HXLINE( 211)		::String slash = HX_("/",2f,00,00,00);
HXLINE( 212)		path = path.split(HX_("\\",5c,00,00,00))->join(slash);
HXLINE( 213)		if ((path == slash)) {
HXLINE( 213)			return slash;
            		}
HXLINE( 215)		::Array< ::String > target = ::Array_obj< ::String >::__new(0);
HXLINE( 217)		{
HXLINE( 217)			int _g = (int)0;
HXDLIN( 217)			::Array< ::String > _g1 = path.split(slash);
HXDLIN( 217)			while((_g < _g1->length)){
HXLINE( 217)				::String token = _g1->__get(_g);
HXDLIN( 217)				_g = (_g + (int)1);
HXLINE( 218)				bool _hx_tmp;
HXDLIN( 218)				bool _hx_tmp1;
HXDLIN( 218)				if ((token == HX_("..",40,28,00,00))) {
HXLINE( 218)					_hx_tmp1 = (target->length > (int)0);
            				}
            				else {
HXLINE( 218)					_hx_tmp1 = false;
            				}
HXDLIN( 218)				if (_hx_tmp1) {
HXLINE( 218)					_hx_tmp = (target->__get((target->length - (int)1)) != HX_("..",40,28,00,00));
            				}
            				else {
HXLINE( 218)					_hx_tmp = false;
            				}
HXDLIN( 218)				if (_hx_tmp) {
HXLINE( 219)					target->pop();
            				}
            				else {
HXLINE( 220)					if ((token != HX_(".",2e,00,00,00))) {
HXLINE( 221)						target->push(token);
            					}
            				}
            			}
            		}
HXLINE( 225)		::String tmp = target->join(slash);
HXLINE( 226)		 ::EReg regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("([^:])/+",d7,b8,64,f0),HX_("g",67,00,00,00));
HXLINE( 227)		::String result = regex->replace(tmp,(HX_("$1",8d,1f,00,00) + slash));
HXLINE( 228)		 ::StringBuf acc =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 229)		bool colon = false;
HXLINE( 230)		bool slashes = false;
HXLINE( 231)		{
HXLINE( 231)			int _g11 = (int)0;
HXDLIN( 231)			int _g2 = tmp.length;
HXDLIN( 231)			while((_g11 < _g2)){
HXLINE( 231)				_g11 = (_g11 + (int)1);
HXDLIN( 231)				int i = (_g11 - (int)1);
HXLINE( 232)				{
HXLINE( 232)					int _g21 = tmp.cca(i);
HXDLIN( 232)					switch((int)(_g21)){
            						case (int)47: {
HXLINE( 236)							if (!(colon)) {
HXLINE( 237)								slashes = true;
            							}
            							else {
HXLINE( 238)								int i1 = _g21;
HXDLIN( 238)								{
HXLINE( 239)									colon = false;
HXLINE( 240)									if (slashes) {
HXLINE( 241)										{
HXLINE( 241)											if (hx::IsNotNull( acc->charBuf )) {
HXLINE( 241)												acc->flush();
            											}
HXDLIN( 241)											if (hx::IsNull( acc->b )) {
HXLINE( 241)												acc->b = ::Array_obj< ::String >::fromData( _hx_array_data_4ec6cf05_11,1);
            											}
            											else {
HXLINE( 241)												acc->b->push(HX_("/",2f,00,00,00));
            											}
            										}
HXLINE( 242)										slashes = false;
            									}
HXLINE( 244)									{
HXLINE( 244)										if (hx::IsNull( acc->charBuf )) {
HXLINE( 244)											acc->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 244)										acc->charBuf->push(i1);
            									}
            								}
            							}
            						}
            						break;
            						case (int)58: {
HXLINE( 234)							{
HXLINE( 234)								if (hx::IsNotNull( acc->charBuf )) {
HXLINE( 234)									acc->flush();
            								}
HXDLIN( 234)								if (hx::IsNull( acc->b )) {
HXLINE( 234)									acc->b = ::Array_obj< ::String >::fromData( _hx_array_data_4ec6cf05_12,1);
            								}
            								else {
HXLINE( 234)									acc->b->push(HX_(":",3a,00,00,00));
            								}
            							}
HXLINE( 235)							colon = true;
            						}
            						break;
            						default:{
HXLINE( 238)							int i2 = _g21;
HXDLIN( 238)							{
HXLINE( 239)								colon = false;
HXLINE( 240)								if (slashes) {
HXLINE( 241)									{
HXLINE( 241)										if (hx::IsNotNull( acc->charBuf )) {
HXLINE( 241)											acc->flush();
            										}
HXDLIN( 241)										if (hx::IsNull( acc->b )) {
HXLINE( 241)											acc->b = ::Array_obj< ::String >::fromData( _hx_array_data_4ec6cf05_13,1);
            										}
            										else {
HXLINE( 241)											acc->b->push(HX_("/",2f,00,00,00));
            										}
            									}
HXLINE( 242)									slashes = false;
            								}
HXLINE( 244)								{
HXLINE( 244)									if (hx::IsNull( acc->charBuf )) {
HXLINE( 244)										acc->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 244)									acc->charBuf->push(i2);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 247)		return acc->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,normalize,return )

::String Path_obj::addTrailingSlash(::String path){
            	HX_STACKFRAME(&_hx_pos_c76bafa893b9a603_262_addTrailingSlash)
HXLINE( 263)		if ((path.length == (int)0)) {
HXLINE( 264)			return HX_("/",2f,00,00,00);
            		}
HXLINE( 265)		int c1 = path.lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE( 266)		int c2 = path.lastIndexOf(HX_("\\",5c,00,00,00),null());
HXLINE( 267)		if ((c1 < c2)) {
HXLINE( 268)			if ((c2 != (path.length - (int)1))) {
HXLINE( 268)				return (path + HX_("\\",5c,00,00,00));
            			}
            			else {
HXLINE( 269)				return path;
            			}
            		}
            		else {
HXLINE( 271)			if ((c1 != (path.length - (int)1))) {
HXLINE( 271)				return (path + HX_("/",2f,00,00,00));
            			}
            			else {
HXLINE( 272)				return path;
            			}
            		}
HXLINE( 267)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,addTrailingSlash,return )

::String Path_obj::removeTrailingSlashes(::String path){
            	HX_STACKFRAME(&_hx_pos_c76bafa893b9a603_287_removeTrailingSlashes)
HXLINE( 288)		while(true){
HXLINE( 289)			 ::Dynamic _g = path.charCodeAt((path.length - (int)1));
HXDLIN( 289)			if (hx::IsNull( _g )) {
HXLINE( 291)				goto _hx_goto_15;
            			}
            			else {
HXLINE( 289)				 ::Dynamic _hx_switch_0 = _g;
            				if (  (_hx_switch_0==(int)47) ||  (_hx_switch_0==(int)92) ){
HXLINE( 290)					path = path.substr((int)0,(int)-1);
HXDLIN( 290)					goto _hx_goto_16;
            				}
            				/* default */{
HXLINE( 291)					goto _hx_goto_15;
            				}
            				_hx_goto_16:;
            			}
            		}
            		_hx_goto_15:;
HXLINE( 294)		return path;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,removeTrailingSlashes,return )

bool Path_obj::isAbsolute(::String path){
            	HX_STACKFRAME(&_hx_pos_c76bafa893b9a603_301_isAbsolute)
HXLINE( 302)		if (::StringTools_obj::startsWith(path,HX_("/",2f,00,00,00))) {
HXLINE( 302)			return true;
            		}
HXLINE( 303)		if ((path.charAt((int)1) == HX_(":",3a,00,00,00))) {
HXLINE( 303)			return true;
            		}
HXLINE( 304)		if (::StringTools_obj::startsWith(path,HX_("\\\\",80,50,00,00))) {
HXLINE( 304)			return true;
            		}
HXLINE( 305)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,isAbsolute,return )


hx::ObjectPtr< Path_obj > Path_obj::__new(::String path) {
	hx::ObjectPtr< Path_obj > __this = new Path_obj();
	__this->__construct(path);
	return __this;
}

hx::ObjectPtr< Path_obj > Path_obj::__alloc(hx::Ctx *_hx_ctx,::String path) {
	Path_obj *__this = (Path_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Path_obj), true, "haxe.io.Path"));
	*(void **)__this = Path_obj::_hx_vtable;
	__this->__construct(path);
	return __this;
}

Path_obj::Path_obj()
{
}

void Path_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Path);
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(ext,"ext");
	HX_MARK_MEMBER_NAME(backslash,"backslash");
	HX_MARK_END_CLASS();
}

void Path_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(ext,"ext");
	HX_VISIT_MEMBER_NAME(backslash,"backslash");
}

hx::Val Path_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return hx::Val( dir ); }
		if (HX_FIELD_EQ(inName,"ext") ) { return hx::Val( ext ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return hx::Val( file ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { return hx::Val( backslash ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Path_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"join") ) { outValue = join_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { outValue = directory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"normalize") ) { outValue = normalize_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isAbsolute") ) { outValue = isAbsolute_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"withoutDirectory") ) { outValue = withoutDirectory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addTrailingSlash") ) { outValue = addTrailingSlash_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeTrailingSlashes") ) { outValue = removeTrailingSlashes_dyn(); return true; }
	}
	return false;
}

hx::Val Path_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ext") ) { ext=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { backslash=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Path_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00"));
	outFields->push(HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Path_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Path_obj,dir),HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00")},
	{hx::fsString,(int)offsetof(Path_obj,file),HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{hx::fsString,(int)offsetof(Path_obj,ext),HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00")},
	{hx::fsBool,(int)offsetof(Path_obj,backslash),HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Path_obj_sStaticStorageInfo = 0;
#endif

static ::String Path_obj_sMemberFields[] = {
	HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"),
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00"),
	HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void Path_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Path_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#endif

hx::Class Path_obj::__mClass;

static ::String Path_obj_sStaticFields[] = {
	HX_HCSTRING("withoutDirectory","\x05","\x17","\xd2","\x7a"),
	HX_HCSTRING("directory","\x6d","\xf2","\x44","\x10"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("addTrailingSlash","\xe0","\xd6","\xeb","\x26"),
	HX_HCSTRING("removeTrailingSlashes","\x8b","\xdc","\x1d","\x43"),
	HX_HCSTRING("isAbsolute","\x81","\xe0","\x44","\x3e"),
	::String(null())
};

void Path_obj::__register()
{
	hx::Object *dummy = new Path_obj;
	Path_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Path","\x05","\xcf","\xc6","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Path_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Path_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Path_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Path_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Path_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Path_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Path_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Path_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
