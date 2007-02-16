// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/.svn/text-base/CopyOp.svn-base>
#include <osg/.svn/text-base/Fog.svn-base>
#include <osg/.svn/text-base/Object.svn-base>
#include <osg/.svn/text-base/StateAttribute.svn-base>
#include <osg/.svn/text-base/Vec4.svn-base>
#include <osg/Fog>
#include <osg/State>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::Fog::Mode)
	I_EnumLabel(osg::Fog::LINEAR);
	I_EnumLabel(osg::Fog::EXP);
	I_EnumLabel(osg::Fog::EXP2);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::Fog::FogCoordinateSource)
	I_EnumLabel(osg::Fog::FOG_COORDINATE);
	I_EnumLabel(osg::Fog::FRAGMENT_DEPTH);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Fog)
	I_BaseType(osg::StateAttribute);
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____Fog,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Fog &, fog, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Fog__C5_Fog_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(bool, getModeUsage, IN, osg::StateAttribute::ModeUsage &, usage,
	          Properties::VIRTUAL,
	          __bool__getModeUsage__ModeUsage_R1,
	          "",
	          "");
	I_Method1(void, setMode, IN, osg::Fog::Mode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setMode__Mode,
	          "",
	          "");
	I_Method0(osg::Fog::Mode, getMode,
	          Properties::NON_VIRTUAL,
	          __Mode__getMode,
	          "",
	          "");
	I_Method1(void, setDensity, IN, float, density,
	          Properties::NON_VIRTUAL,
	          __void__setDensity__float,
	          "",
	          "");
	I_Method0(float, getDensity,
	          Properties::NON_VIRTUAL,
	          __float__getDensity,
	          "",
	          "");
	I_Method1(void, setStart, IN, float, start,
	          Properties::NON_VIRTUAL,
	          __void__setStart__float,
	          "",
	          "");
	I_Method0(float, getStart,
	          Properties::NON_VIRTUAL,
	          __float__getStart,
	          "",
	          "");
	I_Method1(void, setEnd, IN, float, end,
	          Properties::NON_VIRTUAL,
	          __void__setEnd__float,
	          "",
	          "");
	I_Method0(float, getEnd,
	          Properties::NON_VIRTUAL,
	          __float__getEnd,
	          "",
	          "");
	I_Method1(void, setColor, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setColor__C5_Vec4_R1,
	          "",
	          "");
	I_Method0(const osg::Vec4 &, getColor,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getColor,
	          "",
	          "");
	I_Method1(void, setFogCoordinateSource, IN, GLint, source,
	          Properties::NON_VIRTUAL,
	          __void__setFogCoordinateSource__GLint,
	          "",
	          "");
	I_Method0(GLint, getFogCoordinateSource,
	          Properties::NON_VIRTUAL,
	          __GLint__getFogCoordinateSource,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_Constructor0(____Fog,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Fog &, fog, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Fog__C5_Fog_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(bool, getModeUsage, IN, osg::StateAttribute::ModeUsage &, usage,
	          Properties::VIRTUAL,
	          __bool__getModeUsage__ModeUsage_R1,
	          "",
	          "");
	I_Method1(void, setMode, IN, osg::Fog::Mode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setMode__Mode,
	          "",
	          "");
	I_Method0(osg::Fog::Mode, getMode,
	          Properties::NON_VIRTUAL,
	          __Mode__getMode,
	          "",
	          "");
	I_Method1(void, setDensity, IN, float, density,
	          Properties::NON_VIRTUAL,
	          __void__setDensity__float,
	          "",
	          "");
	I_Method0(float, getDensity,
	          Properties::NON_VIRTUAL,
	          __float__getDensity,
	          "",
	          "");
	I_Method1(void, setStart, IN, float, start,
	          Properties::NON_VIRTUAL,
	          __void__setStart__float,
	          "",
	          "");
	I_Method0(float, getStart,
	          Properties::NON_VIRTUAL,
	          __float__getStart,
	          "",
	          "");
	I_Method1(void, setEnd, IN, float, end,
	          Properties::NON_VIRTUAL,
	          __void__setEnd__float,
	          "",
	          "");
	I_Method0(float, getEnd,
	          Properties::NON_VIRTUAL,
	          __float__getEnd,
	          "",
	          "");
	I_Method1(void, setColor, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setColor__C5_Vec4_R1,
	          "",
	          "");
	I_Method0(const osg::Vec4 &, getColor,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getColor,
	          "",
	          "");
	I_Method1(void, setFogCoordinateSource, IN, GLint, source,
	          Properties::NON_VIRTUAL,
	          __void__setFogCoordinateSource__GLint,
	          "",
	          "");
	I_Method0(GLint, getFogCoordinateSource,
	          Properties::NON_VIRTUAL,
	          __GLint__getFogCoordinateSource,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec4 &, Color, 
	                 __C5_Vec4_R1__getColor, 
	                 __void__setColor__C5_Vec4_R1);
	I_SimpleProperty(float, Density, 
	                 __float__getDensity, 
	                 __void__setDensity__float);
	I_SimpleProperty(float, End, 
	                 __float__getEnd, 
	                 __void__setEnd__float);
	I_SimpleProperty(GLint, FogCoordinateSource, 
	                 __GLint__getFogCoordinateSource, 
	                 __void__setFogCoordinateSource__GLint);
	I_SimpleProperty(osg::Fog::Mode, Mode, 
	                 __Mode__getMode, 
	                 __void__setMode__Mode);
	I_SimpleProperty(float, Start, 
	                 __float__getStart, 
	                 __void__setStart__float);
	I_SimpleProperty(Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::Fog::Mode)
	I_EnumLabel(osg::Fog::LINEAR);
	I_EnumLabel(osg::Fog::EXP);
	I_EnumLabel(osg::Fog::EXP2);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::Fog::FogCoordinateSource)
	I_EnumLabel(osg::Fog::FOG_COORDINATE);
	I_EnumLabel(osg::Fog::FRAGMENT_DEPTH);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Fog)
	I_BaseType(osg::StateAttribute);
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____Fog,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Fog &, fog, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Fog__C5_Fog_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(bool, getModeUsage, IN, osg::StateAttribute::ModeUsage &, usage,
	          Properties::VIRTUAL,
	          __bool__getModeUsage__ModeUsage_R1,
	          "",
	          "");
	I_Method1(void, setMode, IN, osg::Fog::Mode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setMode__Mode,
	          "",
	          "");
	I_Method0(osg::Fog::Mode, getMode,
	          Properties::NON_VIRTUAL,
	          __Mode__getMode,
	          "",
	          "");
	I_Method1(void, setDensity, IN, float, density,
	          Properties::NON_VIRTUAL,
	          __void__setDensity__float,
	          "",
	          "");
	I_Method0(float, getDensity,
	          Properties::NON_VIRTUAL,
	          __float__getDensity,
	          "",
	          "");
	I_Method1(void, setStart, IN, float, start,
	          Properties::NON_VIRTUAL,
	          __void__setStart__float,
	          "",
	          "");
	I_Method0(float, getStart,
	          Properties::NON_VIRTUAL,
	          __float__getStart,
	          "",
	          "");
	I_Method1(void, setEnd, IN, float, end,
	          Properties::NON_VIRTUAL,
	          __void__setEnd__float,
	          "",
	          "");
	I_Method0(float, getEnd,
	          Properties::NON_VIRTUAL,
	          __float__getEnd,
	          "",
	          "");
	I_Method1(void, setColor, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setColor__C5_Vec4_R1,
	          "",
	          "");
	I_Method0(const osg::Vec4 &, getColor,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getColor,
	          "",
	          "");
	I_Method1(void, setFogCoordinateSource, IN, GLint, source,
	          Properties::NON_VIRTUAL,
	          __void__setFogCoordinateSource__GLint,
	          "",
	          "");
	I_Method0(GLint, getFogCoordinateSource,
	          Properties::NON_VIRTUAL,
	          __GLint__getFogCoordinateSource,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_Constructor0(____Fog,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Fog &, fog, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Fog__C5_Fog_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(bool, getModeUsage, IN, osg::StateAttribute::ModeUsage &, usage,
	          Properties::VIRTUAL,
	          __bool__getModeUsage__ModeUsage_R1,
	          "",
	          "");
	I_Method1(void, setMode, IN, osg::Fog::Mode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setMode__Mode,
	          "",
	          "");
	I_Method0(osg::Fog::Mode, getMode,
	          Properties::NON_VIRTUAL,
	          __Mode__getMode,
	          "",
	          "");
	I_Method1(void, setDensity, IN, float, density,
	          Properties::NON_VIRTUAL,
	          __void__setDensity__float,
	          "",
	          "");
	I_Method0(float, getDensity,
	          Properties::NON_VIRTUAL,
	          __float__getDensity,
	          "",
	          "");
	I_Method1(void, setStart, IN, float, start,
	          Properties::NON_VIRTUAL,
	          __void__setStart__float,
	          "",
	          "");
	I_Method0(float, getStart,
	          Properties::NON_VIRTUAL,
	          __float__getStart,
	          "",
	          "");
	I_Method1(void, setEnd, IN, float, end,
	          Properties::NON_VIRTUAL,
	          __void__setEnd__float,
	          "",
	          "");
	I_Method0(float, getEnd,
	          Properties::NON_VIRTUAL,
	          __float__getEnd,
	          "",
	          "");
	I_Method1(void, setColor, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setColor__C5_Vec4_R1,
	          "",
	          "");
	I_Method0(const osg::Vec4 &, getColor,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getColor,
	          "",
	          "");
	I_Method1(void, setFogCoordinateSource, IN, GLint, source,
	          Properties::NON_VIRTUAL,
	          __void__setFogCoordinateSource__GLint,
	          "",
	          "");
	I_Method0(GLint, getFogCoordinateSource,
	          Properties::NON_VIRTUAL,
	          __GLint__getFogCoordinateSource,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec4 &, Color, 
	                 __C5_Vec4_R1__getColor, 
	                 __void__setColor__C5_Vec4_R1);
	I_SimpleProperty(float, Density, 
	                 __float__getDensity, 
	                 __void__setDensity__float);
	I_SimpleProperty(float, End, 
	                 __float__getEnd, 
	                 __void__setEnd__float);
	I_SimpleProperty(GLint, FogCoordinateSource, 
	                 __GLint__getFogCoordinateSource, 
	                 __void__setFogCoordinateSource__GLint);
	I_SimpleProperty(osg::Fog::Mode, Mode, 
	                 __Mode__getMode, 
	                 __void__setMode__Mode);
	I_SimpleProperty(float, Start, 
	                 __float__getStart, 
	                 __void__setStart__float);
	I_SimpleProperty(Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

