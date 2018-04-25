#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Cog
struct Cog_t3867611630;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// CogSpinner
struct CogSpinner_t1833155732;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// MouseInput
struct MouseInput_t1323302159;
// UnityEngine.Camera
struct Camera_t4157153871;
// TouchDrag
struct TouchDrag_t2986278293;
// TouchSprite
struct TouchSprite_t2504487633;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t3581341831;
// TouchInput
struct TouchInput_t993008067;
// TouchManeger
struct TouchManeger_t3418227028;
// UnityEngine.GUITexture
struct GUITexture_t951903601;
// UnityEngine.GUIElement
struct GUIElement_t3567083079;
// System.String
struct String_t;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Object
struct Object_t631007953;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;

extern const RuntimeMethod* Component_GetComponent_TisCog_t3867611630_m2655900379_RuntimeMethod_var;
extern const uint32_t CogSpinner_OnCollisionEnter2D_m3129133097_MetadataUsageId;
extern const uint32_t CogSpinner_OnCollisionStay2D_m2486239500_MetadataUsageId;
extern const uint32_t CogSpinner_OnCollisionExit2D_m3847853736_MetadataUsageId;
extern const uint32_t CogSpinner_Start_m2788756141_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t MouseInput_OnMouseDrag_m4098595963_MetadataUsageId;
extern RuntimeClass* TouchSprite_t2504487633_il2cpp_TypeInfo_var;
extern const uint32_t TouchDrag__ctor_m2011918514_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var;
extern const uint32_t TouchDrag_Start_m146109718_MetadataUsageId;
extern const uint32_t TouchDrag_Update_m4035149882_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t TouchDrag_OnFirstTouch_m401218933_MetadataUsageId;
extern const uint32_t TouchInput_Update_m1292529067_MetadataUsageId;
extern RuntimeClass* TouchManeger_t3418227028_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2120546638;
extern String_t* _stringLiteral3641333845;
extern String_t* _stringLiteral2886121238;
extern String_t* _stringLiteral593700120;
extern String_t* _stringLiteral2471122678;
extern String_t* _stringLiteral2194289510;
extern String_t* _stringLiteral900496469;
extern String_t* _stringLiteral108775711;
extern String_t* _stringLiteral479379832;
extern String_t* _stringLiteral3681373405;
extern const uint32_t TouchManeger_TouchInput_m3170751592_MetadataUsageId;
extern const uint32_t TouchManeger__cctor_m3039632454_MetadataUsageId;
extern RuntimeClass* Physics2D_t1528932956_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t TouchSprite_TouchInput_m1851849982_MetadataUsageId;
extern const uint32_t TouchSprite__cctor_m549566401_MetadataUsageId;
struct ContactPoint2D_t3390240644 ;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745540_H
#define U3CMODULEU3E_T692745540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745540 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745540_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_3)); }
	inline Vector3_t3722313464  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t3722313464  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_4)); }
	inline Vector3_t3722313464  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t3722313464 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t3722313464  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_5)); }
	inline Vector3_t3722313464  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t3722313464 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t3722313464  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_6)); }
	inline Vector3_t3722313464  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t3722313464 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t3722313464  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_7)); }
	inline Vector3_t3722313464  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t3722313464 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t3722313464  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_8)); }
	inline Vector3_t3722313464  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t3722313464 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t3722313464  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_9)); }
	inline Vector3_t3722313464  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t3722313464  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_10)); }
	inline Vector3_t3722313464  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t3722313464 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t3722313464  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T72348083_H
#ifndef SENDMESSAGEOPTIONS_T3580193095_H
#define SENDMESSAGEOPTIONS_T3580193095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t3580193095 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t3580193095, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T3580193095_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t96683501* ___m_Contacts_4;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_6;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Contacts_4)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_5)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_5() const { return ___m_RelativeVelocity_5; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_5() { return &___m_RelativeVelocity_5; }
	inline void set_m_RelativeVelocity_5(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_6)); }
	inline int32_t get_m_Enabled_6() const { return ___m_Enabled_6; }
	inline int32_t* get_address_of_m_Enabled_6() { return &___m_Enabled_6; }
	inline void set_m_Enabled_6(int32_t value)
	{
		___m_Enabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
#endif // COLLISION2D_T2842956331_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2034578258_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef GUIELEMENT_T3567083079_H
#define GUIELEMENT_T3567083079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t3567083079  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T3567083079_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef MOUSEINPUT_T1323302159_H
#define MOUSEINPUT_T1323302159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MouseInput
struct  MouseInput_t1323302159  : public MonoBehaviour_t3962482529
{
public:
	// System.Single MouseInput::dist
	float ___dist_2;

public:
	inline static int32_t get_offset_of_dist_2() { return static_cast<int32_t>(offsetof(MouseInput_t1323302159, ___dist_2)); }
	inline float get_dist_2() const { return ___dist_2; }
	inline float* get_address_of_dist_2() { return &___dist_2; }
	inline void set_dist_2(float value)
	{
		___dist_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOUSEINPUT_T1323302159_H
#ifndef COG_T3867611630_H
#define COG_T3867611630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cog
struct  Cog_t3867611630  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 Cog::InitialSpeed
	int32_t ___InitialSpeed_2;
	// System.Int32 Cog::Speed
	int32_t ___Speed_3;

public:
	inline static int32_t get_offset_of_InitialSpeed_2() { return static_cast<int32_t>(offsetof(Cog_t3867611630, ___InitialSpeed_2)); }
	inline int32_t get_InitialSpeed_2() const { return ___InitialSpeed_2; }
	inline int32_t* get_address_of_InitialSpeed_2() { return &___InitialSpeed_2; }
	inline void set_InitialSpeed_2(int32_t value)
	{
		___InitialSpeed_2 = value;
	}

	inline static int32_t get_offset_of_Speed_3() { return static_cast<int32_t>(offsetof(Cog_t3867611630, ___Speed_3)); }
	inline int32_t get_Speed_3() const { return ___Speed_3; }
	inline int32_t* get_address_of_Speed_3() { return &___Speed_3; }
	inline void set_Speed_3(int32_t value)
	{
		___Speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COG_T3867611630_H
#ifndef COGSPINNER_T1833155732_H
#define COGSPINNER_T1833155732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CogSpinner
struct  CogSpinner_t1833155732  : public MonoBehaviour_t3962482529
{
public:
	// Cog CogSpinner::cog
	Cog_t3867611630 * ___cog_2;

public:
	inline static int32_t get_offset_of_cog_2() { return static_cast<int32_t>(offsetof(CogSpinner_t1833155732, ___cog_2)); }
	inline Cog_t3867611630 * get_cog_2() const { return ___cog_2; }
	inline Cog_t3867611630 ** get_address_of_cog_2() { return &___cog_2; }
	inline void set_cog_2(Cog_t3867611630 * value)
	{
		___cog_2 = value;
		Il2CppCodeGenWriteBarrier((&___cog_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COGSPINNER_T1833155732_H
#ifndef TOUCHINPUT_T993008067_H
#define TOUCHINPUT_T993008067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchInput
struct  TouchInput_t993008067  : public MonoBehaviour_t3962482529
{
public:
	// System.Single TouchInput::speed
	float ___speed_2;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(TouchInput_t993008067, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHINPUT_T993008067_H
#ifndef TOUCHSPRITE_T2504487633_H
#define TOUCHSPRITE_T2504487633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchSprite
struct  TouchSprite_t2504487633  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct TouchSprite_t2504487633_StaticFields
{
public:
	// System.Boolean TouchSprite::guiTouch
	bool ___guiTouch_2;

public:
	inline static int32_t get_offset_of_guiTouch_2() { return static_cast<int32_t>(offsetof(TouchSprite_t2504487633_StaticFields, ___guiTouch_2)); }
	inline bool get_guiTouch_2() const { return ___guiTouch_2; }
	inline bool* get_address_of_guiTouch_2() { return &___guiTouch_2; }
	inline void set_guiTouch_2(bool value)
	{
		___guiTouch_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSPRITE_T2504487633_H
#ifndef BOXCOLLIDER2D_T3581341831_H
#define BOXCOLLIDER2D_T3581341831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t3581341831  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER2D_T3581341831_H
#ifndef GUITEXTURE_T951903601_H
#define GUITEXTURE_T951903601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUITexture
struct  GUITexture_t951903601  : public GUIElement_t3567083079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITEXTURE_T951903601_H
#ifndef TOUCHMANEGER_T3418227028_H
#define TOUCHMANEGER_T3418227028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchManeger
struct  TouchManeger_t3418227028  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct TouchManeger_t3418227028_StaticFields
{
public:
	// System.Boolean TouchManeger::guiTouch
	bool ___guiTouch_2;

public:
	inline static int32_t get_offset_of_guiTouch_2() { return static_cast<int32_t>(offsetof(TouchManeger_t3418227028_StaticFields, ___guiTouch_2)); }
	inline bool get_guiTouch_2() const { return ___guiTouch_2; }
	inline bool* get_address_of_guiTouch_2() { return &___guiTouch_2; }
	inline void set_guiTouch_2(bool value)
	{
		___guiTouch_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHMANEGER_T3418227028_H
#ifndef TOUCHDRAG_T2986278293_H
#define TOUCHDRAG_T2986278293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchDrag
struct  TouchDrag_t2986278293  : public TouchSprite_t2504487633
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHDRAG_T2986278293_H


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C"  void Transform_Rotate_m720511863 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
extern "C"  Transform_t3600365921 * Collision2D_get_transform_m2670923831 (Collision2D_t2842956331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Cog>()
#define Component_GetComponent_TisCog_t3867611630_m2655900379(__this, method) ((  Cog_t3867611630 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TouchSprite::.ctor()
extern "C"  void TouchSprite__ctor_m3351503588 (TouchSprite_t2504487633 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
#define Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, method) ((  BoxCollider2D_t3581341831 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void TouchSprite::TouchInput(UnityEngine.BoxCollider2D)
extern "C"  void TouchSprite_TouchInput_m1851849982 (TouchSprite_t2504487633 * __this, BoxCollider2D_t3581341831 * ___collider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C"  Touch_t1921856868  Input_GetTouch_m2192712756 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C"  Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C"  int32_t Input_get_touchCount_m3403849067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C"  int32_t Touch_get_phase_m214549210 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C"  Vector2_t2156229523  Touch_get_deltaPosition_m2389653382 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Translate_m3762500149 (Transform_t3600365921 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIElement::HitTest(UnityEngine.Vector3)
extern "C"  bool GUIElement_HitTest_m3916646804 (GUIElement_t3567083079 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m1441147224 (Component_t1923634451 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapPoint(UnityEngine.Vector2)
extern "C"  Collider2D_t2806799626 * Physics2D_OverlapPoint_m233417506 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cog::.ctor()
extern "C"  void Cog__ctor_m2204051317 (Cog_t3867611630 * __this, const RuntimeMethod* method)
{
	{
		// public int InitialSpeed = 0;
		__this->set_InitialSpeed_2(0);
		// public int Speed = 0;// { get{ return 1.0f;} set{ this.Speed = value;}}
		__this->set_Speed_3(0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cog::Start()
extern "C"  void Cog_Start_m2129967151 (Cog_t3867611630 * __this, const RuntimeMethod* method)
{
	{
		// Speed = InitialSpeed;
		int32_t L_0 = __this->get_InitialSpeed_2();
		__this->set_Speed_3(L_0);
		// }
		return;
	}
}
// System.Void Cog::Update()
extern "C"  void Cog_Update_m2755383969 (Cog_t3867611630 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate (new Vector3 (0, 0, Speed * Time.deltaTime));
		// transform.Rotate (new Vector3 (0, 0, Speed * Time.deltaTime));
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_Speed_3();
		// transform.Rotate (new Vector3 (0, 0, Speed * Time.deltaTime));
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		// transform.Rotate (new Vector3 (0, 0, Speed * Time.deltaTime));
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_1))), (float)L_2)), /*hidden argument*/NULL);
		// transform.Rotate (new Vector3 (0, 0, Speed * Time.deltaTime));
		NullCheck(L_0);
		Transform_Rotate_m720511863(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CogSpinner::.ctor()
extern "C"  void CogSpinner__ctor_m466208089 (CogSpinner_t1833155732 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CogSpinner::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void CogSpinner_OnCollisionEnter2D_m3129133097 (CogSpinner_t1833155732 * __this, Collision2D_t2842956331 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CogSpinner_OnCollisionEnter2D_m3129133097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cog_t3867611630 * V_0 = NULL;
	{
		// Cog otherCog = other.transform.GetComponent<Cog>();
		Collision2D_t2842956331 * L_0 = ___other0;
		// Cog otherCog = other.transform.GetComponent<Cog>();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Collision2D_get_transform_m2670923831(L_0, /*hidden argument*/NULL);
		// Cog otherCog = other.transform.GetComponent<Cog>();
		NullCheck(L_1);
		Cog_t3867611630 * L_2 = Component_GetComponent_TisCog_t3867611630_m2655900379(L_1, /*hidden argument*/Component_GetComponent_TisCog_t3867611630_m2655900379_RuntimeMethod_var);
		V_0 = L_2;
		// if (otherCog.Speed != 0 && cog.Speed == 0) {
		Cog_t3867611630 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Speed_3();
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		Cog_t3867611630 * L_5 = __this->get_cog_2();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_Speed_3();
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		// cog.Speed = -otherCog.Speed;
		Cog_t3867611630 * L_7 = __this->get_cog_2();
		Cog_t3867611630 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_Speed_3();
		NullCheck(L_7);
		L_7->set_Speed_3(((-L_9)));
		goto IL_00e8;
	}

IL_0041:
	{
		// } else if (otherCog.Speed == 0 && cog.Speed == 0) {
		Cog_t3867611630 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_Speed_3();
		if (L_11)
		{
			goto IL_0085;
		}
	}
	{
		Cog_t3867611630 * L_12 = __this->get_cog_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_Speed_3();
		if (L_13)
		{
			goto IL_0085;
		}
	}
	{
		// otherCog.Speed = otherCog.InitialSpeed;
		Cog_t3867611630 * L_14 = V_0;
		Cog_t3867611630 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_InitialSpeed_2();
		NullCheck(L_14);
		L_14->set_Speed_3(L_16);
		// cog.Speed = cog.InitialSpeed;
		Cog_t3867611630 * L_17 = __this->get_cog_2();
		Cog_t3867611630 * L_18 = __this->get_cog_2();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_InitialSpeed_2();
		NullCheck(L_17);
		L_17->set_Speed_3(L_19);
		goto IL_00e8;
	}

IL_0085:
	{
		// } else if (otherCog.Speed == 0 && cog.Speed != 0) {
		Cog_t3867611630 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_Speed_3();
		if (L_21)
		{
			goto IL_00b9;
		}
	}
	{
		Cog_t3867611630 * L_22 = __this->get_cog_2();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_Speed_3();
		if (!L_23)
		{
			goto IL_00b9;
		}
	}
	{
		// otherCog.Speed = -cog.Speed;
		Cog_t3867611630 * L_24 = V_0;
		Cog_t3867611630 * L_25 = __this->get_cog_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_Speed_3();
		NullCheck(L_24);
		L_24->set_Speed_3(((-L_26)));
		goto IL_00e8;
	}

IL_00b9:
	{
		// } else if (otherCog.Speed != 0 && cog.Speed != 0) {
		Cog_t3867611630 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->get_Speed_3();
		if (!L_28)
		{
			goto IL_00e8;
		}
	}
	{
		Cog_t3867611630 * L_29 = __this->get_cog_2();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_Speed_3();
		if (!L_30)
		{
			goto IL_00e8;
		}
	}
	{
		// cog.Speed = -otherCog.Speed;
		Cog_t3867611630 * L_31 = __this->get_cog_2();
		Cog_t3867611630 * L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_Speed_3();
		NullCheck(L_31);
		L_31->set_Speed_3(((-L_33)));
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Void CogSpinner::OnCollisionStay2D(UnityEngine.Collision2D)
extern "C"  void CogSpinner_OnCollisionStay2D_m2486239500 (CogSpinner_t1833155732 * __this, Collision2D_t2842956331 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CogSpinner_OnCollisionStay2D_m2486239500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cog_t3867611630 * V_0 = NULL;
	{
		// Cog otherCog = other.transform.GetComponent<Cog> ();
		Collision2D_t2842956331 * L_0 = ___other0;
		// Cog otherCog = other.transform.GetComponent<Cog> ();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Collision2D_get_transform_m2670923831(L_0, /*hidden argument*/NULL);
		// Cog otherCog = other.transform.GetComponent<Cog> ();
		NullCheck(L_1);
		Cog_t3867611630 * L_2 = Component_GetComponent_TisCog_t3867611630_m2655900379(L_1, /*hidden argument*/Component_GetComponent_TisCog_t3867611630_m2655900379_RuntimeMethod_var);
		V_0 = L_2;
		// cog.Speed = -otherCog.Speed;
		Cog_t3867611630 * L_3 = __this->get_cog_2();
		Cog_t3867611630 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Speed_3();
		NullCheck(L_3);
		L_3->set_Speed_3(((-L_5)));
		// }
		return;
	}
}
// System.Void CogSpinner::OnCollisionExit2D(UnityEngine.Collision2D)
extern "C"  void CogSpinner_OnCollisionExit2D_m3847853736 (CogSpinner_t1833155732 * __this, Collision2D_t2842956331 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CogSpinner_OnCollisionExit2D_m3847853736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cog_t3867611630 * V_0 = NULL;
	{
		// Cog otherCog = other.transform.GetComponent<Cog>();
		Collision2D_t2842956331 * L_0 = ___other0;
		// Cog otherCog = other.transform.GetComponent<Cog>();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Collision2D_get_transform_m2670923831(L_0, /*hidden argument*/NULL);
		// Cog otherCog = other.transform.GetComponent<Cog>();
		NullCheck(L_1);
		Cog_t3867611630 * L_2 = Component_GetComponent_TisCog_t3867611630_m2655900379(L_1, /*hidden argument*/Component_GetComponent_TisCog_t3867611630_m2655900379_RuntimeMethod_var);
		V_0 = L_2;
		// cog.Speed = cog.InitialSpeed;
		Cog_t3867611630 * L_3 = __this->get_cog_2();
		Cog_t3867611630 * L_4 = __this->get_cog_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_InitialSpeed_2();
		NullCheck(L_3);
		L_3->set_Speed_3(L_5);
		// }
		return;
	}
}
// System.Void CogSpinner::Start()
extern "C"  void CogSpinner_Start_m2788756141 (CogSpinner_t1833155732 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CogSpinner_Start_m2788756141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cog = transform.GetComponent<Cog>();
		// cog = transform.GetComponent<Cog>();
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// cog = transform.GetComponent<Cog>();
		NullCheck(L_0);
		Cog_t3867611630 * L_1 = Component_GetComponent_TisCog_t3867611630_m2655900379(L_0, /*hidden argument*/Component_GetComponent_TisCog_t3867611630_m2655900379_RuntimeMethod_var);
		__this->set_cog_2(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MouseInput::.ctor()
extern "C"  void MouseInput__ctor_m2758328666 (MouseInput_t1323302159 * __this, const RuntimeMethod* method)
{
	{
		// float dist = 10;
		__this->set_dist_2((10.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseInput::OnMouseDrag()
extern "C"  void MouseInput_OnMouseDrag_m4098595963 (MouseInput_t1323302159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseInput_OnMouseDrag_m4098595963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		// Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, dist);
		// Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, dist);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		float L_1 = (&V_1)->get_x_0();
		// Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, dist);
		Vector3_t3722313464  L_2 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = (&V_2)->get_y_1();
		float L_4 = __this->get_dist_2();
		// Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, dist);
		Vector3__ctor_m3353183577((&V_0), L_1, L_3, L_4, /*hidden argument*/NULL);
		// Vector3 objPos = Camera.main.ScreenToWorldPoint(mousePos);
		Camera_t4157153871 * L_5 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = V_0;
		// Vector3 objPos = Camera.main.ScreenToWorldPoint(mousePos);
		NullCheck(L_5);
		Vector3_t3722313464  L_7 = Camera_ScreenToWorldPoint_m3978588570(L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// transform.position = objPos;
		// transform.position = objPos;
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = V_3;
		// transform.position = objPos;
		NullCheck(L_8);
		Transform_set_position_m3387557959(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchDrag::.ctor()
extern "C"  void TouchDrag__ctor_m2011918514 (TouchDrag_t2986278293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchDrag__ctor_m2011918514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchSprite_t2504487633_il2cpp_TypeInfo_var);
		TouchSprite__ctor_m3351503588(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchDrag::Start()
extern "C"  void TouchDrag_Start_m146109718 (TouchDrag_t2986278293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchDrag_Start_m146109718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TouchInput (GetComponent<BoxCollider2D> ());
		// TouchInput (GetComponent<BoxCollider2D> ());
		BoxCollider2D_t3581341831 * L_0 = Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var);
		// TouchInput (GetComponent<BoxCollider2D> ());
		TouchSprite_TouchInput_m1851849982(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TouchDrag::Update()
extern "C"  void TouchDrag_Update_m4035149882 (TouchDrag_t2986278293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchDrag_Update_m4035149882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TouchInput (GetComponent<BoxCollider2D> ());
		// TouchInput (GetComponent<BoxCollider2D> ());
		BoxCollider2D_t3581341831 * L_0 = Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var);
		// TouchInput (GetComponent<BoxCollider2D> ());
		TouchSprite_TouchInput_m1851849982(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TouchDrag::OnFirstTouch()
extern "C"  void TouchDrag_OnFirstTouch_m401218933 (TouchDrag_t2986278293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchDrag_OnFirstTouch_m401218933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Touch_t1921856868  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		// Vector3 touchInput = Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position);
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		// Vector3 touchInput = Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_1 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_1;
		// Vector3 touchInput = Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position);
		Vector2_t2156229523  L_2 = Touch_get_position_m3109777936((&V_2), /*hidden argument*/NULL);
		// Vector3 touchInput = Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		// Vector3 touchInput = Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position);
		NullCheck(L_0);
		Vector3_t3722313464  L_4 = Camera_ScreenToWorldPoint_m3978588570(L_0, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// pos = new Vector3 (touchInput.x, touchInput.y, transform.position.z);
		float L_5 = (&V_1)->get_x_0();
		float L_6 = (&V_1)->get_y_1();
		// pos = new Vector3 (touchInput.x, touchInput.y, transform.position.z);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// pos = new Vector3 (touchInput.x, touchInput.y, transform.position.z);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (&V_3)->get_z_2();
		// pos = new Vector3 (touchInput.x, touchInput.y, transform.position.z);
		Vector3__ctor_m3353183577((&V_0), L_5, L_6, L_9, /*hidden argument*/NULL);
		// transform.position = pos;
		// transform.position = pos;
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = V_0;
		// transform.position = pos;
		NullCheck(L_10);
		Transform_set_position_m3387557959(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchInput::.ctor()
extern "C"  void TouchInput__ctor_m3103426181 (TouchInput_t993008067 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 0.1F;
		__this->set_speed_2((0.1f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchInput::Update()
extern "C"  void TouchInput_Update_m1292529067 (TouchInput_t993008067 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchInput_Update_m1292529067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t1921856868  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Touch_t1921856868  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_1 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
		int32_t L_2 = Touch_get_phase_m214549210((&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		// Vector2 touchDeltaPosition = Input.GetTouch(0).deltaPosition;
		// Vector2 touchDeltaPosition = Input.GetTouch(0).deltaPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_3 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_3;
		// Vector2 touchDeltaPosition = Input.GetTouch(0).deltaPosition;
		Vector2_t2156229523  L_4 = Touch_get_deltaPosition_m2389653382((&V_2), /*hidden argument*/NULL);
		V_1 = L_4;
		// transform.Translate(-touchDeltaPosition.x * speed, -touchDeltaPosition.y * speed, 0);
		// transform.Translate(-touchDeltaPosition.x * speed, -touchDeltaPosition.y * speed, 0);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_6 = (&V_1)->get_x_0();
		float L_7 = __this->get_speed_2();
		float L_8 = (&V_1)->get_y_1();
		float L_9 = __this->get_speed_2();
		// transform.Translate(-touchDeltaPosition.x * speed, -touchDeltaPosition.y * speed, 0);
		NullCheck(L_5);
		Transform_Translate_m3762500149(L_5, ((float)il2cpp_codegen_multiply((float)((-L_6)), (float)L_7)), ((float)il2cpp_codegen_multiply((float)((-L_8)), (float)L_9)), (0.0f), /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchManeger::.ctor()
extern "C"  void TouchManeger__ctor_m459466981 (TouchManeger_t3418227028 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchManeger::TouchInput(UnityEngine.GUITexture)
extern "C"  void TouchManeger_TouchInput_m3170751592 (TouchManeger_t3418227028 * __this, GUITexture_t951903601 * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchManeger_TouchInput_m3170751592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t1921856868  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Touch_t1921856868  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Touch_t1921856868  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Touch_t1921856868  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		// if (Input.touchCount > 0) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00d8;
		}
	}
	{
		// if (texture.HitTest (Input.GetTouch (0).position)) {
		GUITexture_t951903601 * L_1 = ___texture0;
		// if (texture.HitTest (Input.GetTouch (0).position)) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_2 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (texture.HitTest (Input.GetTouch (0).position)) {
		Vector2_t2156229523  L_3 = Touch_get_position_m3109777936((&V_0), /*hidden argument*/NULL);
		// if (texture.HitTest (Input.GetTouch (0).position)) {
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		// if (texture.HitTest (Input.GetTouch (0).position)) {
		NullCheck(L_1);
		bool L_5 = GUIElement_HitTest_m3916646804(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00d7;
		}
	}
	{
		// switch (Input.GetTouch(0).phase){
		// switch (Input.GetTouch(0).phase){
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_6 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		// switch (Input.GetTouch(0).phase){
		int32_t L_7 = Touch_get_phase_m214549210((&V_1), /*hidden argument*/NULL);
		V_2 = L_7;
		// switch (Input.GetTouch(0).phase){
		int32_t L_8 = V_2;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_009c;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_00bf;
			}
		}
	}
	{
		goto IL_00d6;
	}

IL_0056:
	{
		// SendMessage ("OnFirstTouchBegan", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouchBegan", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral2120546638, 1, /*hidden argument*/NULL);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral3641333845, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManeger_t3418227028_il2cpp_TypeInfo_var);
		((TouchManeger_t3418227028_StaticFields*)il2cpp_codegen_static_fields_for(TouchManeger_t3418227028_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_00d6;
	}

IL_0079:
	{
		// SendMessage ("OnFirstTouchStayed", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouchStayed", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral2886121238, 1, /*hidden argument*/NULL);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral3641333845, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManeger_t3418227028_il2cpp_TypeInfo_var);
		((TouchManeger_t3418227028_StaticFields*)il2cpp_codegen_static_fields_for(TouchManeger_t3418227028_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_00d6;
	}

IL_009c:
	{
		// SendMessage ("OnFirstTouchMoved", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouchMoved", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral593700120, 1, /*hidden argument*/NULL);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral3641333845, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManeger_t3418227028_il2cpp_TypeInfo_var);
		((TouchManeger_t3418227028_StaticFields*)il2cpp_codegen_static_fields_for(TouchManeger_t3418227028_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_00d6;
	}

IL_00bf:
	{
		// SendMessage ("OnFirstTouchEnded", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouchEnded", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral2471122678, 1, /*hidden argument*/NULL);
		// guiTouch = false;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManeger_t3418227028_il2cpp_TypeInfo_var);
		((TouchManeger_t3418227028_StaticFields*)il2cpp_codegen_static_fields_for(TouchManeger_t3418227028_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)0);
		// break;
		goto IL_00d6;
	}

IL_00d6:
	{
	}

IL_00d7:
	{
	}

IL_00d8:
	{
		// if (Input.touchCount > 1) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_9 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_01b2;
		}
	}
	{
		// if (texture.HitTest (Input.GetTouch (1).position)) {
		GUITexture_t951903601 * L_10 = ___texture0;
		// if (texture.HitTest (Input.GetTouch (1).position)) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_11 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_3 = L_11;
		// if (texture.HitTest (Input.GetTouch (1).position)) {
		Vector2_t2156229523  L_12 = Touch_get_position_m3109777936((&V_3), /*hidden argument*/NULL);
		// if (texture.HitTest (Input.GetTouch (1).position)) {
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		// if (texture.HitTest (Input.GetTouch (1).position)) {
		NullCheck(L_10);
		bool L_14 = GUIElement_HitTest_m3916646804(L_10, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_01b1;
		}
	}
	{
		// switch (Input.GetTouch(1).phase){
		// switch (Input.GetTouch(1).phase){
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_15 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_4 = L_15;
		// switch (Input.GetTouch(1).phase){
		int32_t L_16 = Touch_get_phase_m214549210((&V_4), /*hidden argument*/NULL);
		V_5 = L_16;
		// switch (Input.GetTouch(1).phase){
		int32_t L_17 = V_5;
		switch (L_17)
		{
			case 0:
			{
				goto IL_0130;
			}
			case 1:
			{
				goto IL_0176;
			}
			case 2:
			{
				goto IL_0153;
			}
			case 3:
			{
				goto IL_0199;
			}
		}
	}
	{
		goto IL_01b0;
	}

IL_0130:
	{
		// SendMessage ("OnSecondTouchBegan", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouchBegan", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral2194289510, 1, /*hidden argument*/NULL);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral900496469, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManeger_t3418227028_il2cpp_TypeInfo_var);
		((TouchManeger_t3418227028_StaticFields*)il2cpp_codegen_static_fields_for(TouchManeger_t3418227028_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_01b0;
	}

IL_0153:
	{
		// SendMessage ("OnSecondTouchStayed", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouchStayed", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral108775711, 1, /*hidden argument*/NULL);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral900496469, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManeger_t3418227028_il2cpp_TypeInfo_var);
		((TouchManeger_t3418227028_StaticFields*)il2cpp_codegen_static_fields_for(TouchManeger_t3418227028_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_01b0;
	}

IL_0176:
	{
		// SendMessage ("OnSecondTouchMoved", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouchMoved", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral479379832, 1, /*hidden argument*/NULL);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral900496469, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManeger_t3418227028_il2cpp_TypeInfo_var);
		((TouchManeger_t3418227028_StaticFields*)il2cpp_codegen_static_fields_for(TouchManeger_t3418227028_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_01b0;
	}

IL_0199:
	{
		// SendMessage ("OnSecondTouchEnded", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouchEnded", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral3681373405, 1, /*hidden argument*/NULL);
		// guiTouch = false;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManeger_t3418227028_il2cpp_TypeInfo_var);
		((TouchManeger_t3418227028_StaticFields*)il2cpp_codegen_static_fields_for(TouchManeger_t3418227028_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)0);
		// break;
		goto IL_01b0;
	}

IL_01b0:
	{
	}

IL_01b1:
	{
	}

IL_01b2:
	{
		// }
		return;
	}
}
// System.Void TouchManeger::.cctor()
extern "C"  void TouchManeger__cctor_m3039632454 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchManeger__cctor_m3039632454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool guiTouch = false;
		((TouchManeger_t3418227028_StaticFields*)il2cpp_codegen_static_fields_for(TouchManeger_t3418227028_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchSprite::.ctor()
extern "C"  void TouchSprite__ctor_m3351503588 (TouchSprite_t2504487633 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchSprite::TouchInput(UnityEngine.BoxCollider2D)
extern "C"  void TouchSprite_TouchInput_m1851849982 (TouchSprite_t2504487633 * __this, BoxCollider2D_t3581341831 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchSprite_TouchInput_m1851849982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t1921856868  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Touch_t1921856868  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Touch_t1921856868  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Touch_t1921856868  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		BoxCollider2D_t3581341831 * L_0 = ___collider0;
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		Camera_t4157153871 * L_1 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_2 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		Vector2_t2156229523  L_3 = Touch_get_position_m3109777936((&V_0), /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		NullCheck(L_1);
		Vector3_t3722313464  L_5 = Camera_ScreenToWorldPoint_m3978588570(L_1, L_4, /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		Vector2_t2156229523  L_6 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		Collider2D_t2806799626 * L_7 = Physics2D_OverlapPoint_m233417506(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00df;
		}
	}
	{
		// switch (Input.GetTouch (0).phase) {
		// switch (Input.GetTouch (0).phase) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_9 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_9;
		// switch (Input.GetTouch (0).phase) {
		int32_t L_10 = Touch_get_phase_m214549210((&V_1), /*hidden argument*/NULL);
		V_2 = L_10;
		// switch (Input.GetTouch (0).phase) {
		int32_t L_11 = V_2;
		switch (L_11)
		{
			case 0:
			{
				goto IL_005e;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_00c7;
			}
		}
	}
	{
		goto IL_00de;
	}

IL_005e:
	{
		// SendMessage ("OnFirstTouchBegan", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouchBegan", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral2120546638, 1, /*hidden argument*/NULL);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral3641333845, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchSprite_t2504487633_il2cpp_TypeInfo_var);
		((TouchSprite_t2504487633_StaticFields*)il2cpp_codegen_static_fields_for(TouchSprite_t2504487633_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_00de;
	}

IL_0081:
	{
		// SendMessage ("OnFirstTouchStayed", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouchStayed", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral2886121238, 1, /*hidden argument*/NULL);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral3641333845, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchSprite_t2504487633_il2cpp_TypeInfo_var);
		((TouchSprite_t2504487633_StaticFields*)il2cpp_codegen_static_fields_for(TouchSprite_t2504487633_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_00de;
	}

IL_00a4:
	{
		// SendMessage ("OnFirstTouchMoved", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouchMoved", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral593700120, 1, /*hidden argument*/NULL);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral3641333845, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchSprite_t2504487633_il2cpp_TypeInfo_var);
		((TouchSprite_t2504487633_StaticFields*)il2cpp_codegen_static_fields_for(TouchSprite_t2504487633_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_00de;
	}

IL_00c7:
	{
		// SendMessage ("OnFirstTouchEnded", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnFirstTouchEnded", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral2471122678, 1, /*hidden argument*/NULL);
		// guiTouch = false;
		IL2CPP_RUNTIME_CLASS_INIT(TouchSprite_t2504487633_il2cpp_TypeInfo_var);
		((TouchSprite_t2504487633_StaticFields*)il2cpp_codegen_static_fields_for(TouchSprite_t2504487633_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)0);
		// break;
		goto IL_00de;
	}

IL_00de:
	{
	}

IL_00df:
	{
		// if (Input.touchCount > 1) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_12 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_12) <= ((int32_t)1)))
		{
			goto IL_01cd;
		}
	}
	{
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		BoxCollider2D_t3581341831 * L_13 = ___collider0;
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		Camera_t4157153871 * L_14 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_15 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_3 = L_15;
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		Vector2_t2156229523  L_16 = Touch_get_position_m3109777936((&V_3), /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		NullCheck(L_14);
		Vector3_t3722313464  L_18 = Camera_ScreenToWorldPoint_m3978588570(L_14, L_17, /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		Vector2_t2156229523  L_19 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		Collider2D_t2806799626 * L_20 = Physics2D_OverlapPoint_m233417506(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		// if (collider == Physics2D.OverlapPoint (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position))) {
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_13, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_01cc;
		}
	}
	{
		// switch (Input.GetTouch (1).phase) {
		// switch (Input.GetTouch (1).phase) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_22 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_4 = L_22;
		// switch (Input.GetTouch (1).phase) {
		int32_t L_23 = Touch_get_phase_m214549210((&V_4), /*hidden argument*/NULL);
		V_5 = L_23;
		// switch (Input.GetTouch (1).phase) {
		int32_t L_24 = V_5;
		switch (L_24)
		{
			case 0:
			{
				goto IL_014b;
			}
			case 1:
			{
				goto IL_0191;
			}
			case 2:
			{
				goto IL_016e;
			}
			case 3:
			{
				goto IL_01b4;
			}
		}
	}
	{
		goto IL_01cb;
	}

IL_014b:
	{
		// SendMessage ("OnSecondTouchBegan", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouchBegan", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral2194289510, 1, /*hidden argument*/NULL);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral900496469, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchSprite_t2504487633_il2cpp_TypeInfo_var);
		((TouchSprite_t2504487633_StaticFields*)il2cpp_codegen_static_fields_for(TouchSprite_t2504487633_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_01cb;
	}

IL_016e:
	{
		// SendMessage ("OnSecondTouchStayed", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouchStayed", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral108775711, 1, /*hidden argument*/NULL);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral900496469, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchSprite_t2504487633_il2cpp_TypeInfo_var);
		((TouchSprite_t2504487633_StaticFields*)il2cpp_codegen_static_fields_for(TouchSprite_t2504487633_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_01cb;
	}

IL_0191:
	{
		// SendMessage ("OnSecondTouchMoved", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouchMoved", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral479379832, 1, /*hidden argument*/NULL);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouch", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral900496469, 1, /*hidden argument*/NULL);
		// guiTouch = true;
		IL2CPP_RUNTIME_CLASS_INIT(TouchSprite_t2504487633_il2cpp_TypeInfo_var);
		((TouchSprite_t2504487633_StaticFields*)il2cpp_codegen_static_fields_for(TouchSprite_t2504487633_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)1);
		// break;
		goto IL_01cb;
	}

IL_01b4:
	{
		// SendMessage ("OnSecondTouchEnded", SendMessageOptions.DontRequireReceiver);
		// SendMessage ("OnSecondTouchEnded", SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m1441147224(__this, _stringLiteral3681373405, 1, /*hidden argument*/NULL);
		// guiTouch = false;
		IL2CPP_RUNTIME_CLASS_INIT(TouchSprite_t2504487633_il2cpp_TypeInfo_var);
		((TouchSprite_t2504487633_StaticFields*)il2cpp_codegen_static_fields_for(TouchSprite_t2504487633_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)0);
		// break;
		goto IL_01cb;
	}

IL_01cb:
	{
	}

IL_01cc:
	{
	}

IL_01cd:
	{
		// }
		return;
	}
}
// System.Void TouchSprite::.cctor()
extern "C"  void TouchSprite__cctor_m549566401 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchSprite__cctor_m549566401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool guiTouch = false;
		((TouchSprite_t2504487633_StaticFields*)il2cpp_codegen_static_fields_for(TouchSprite_t2504487633_il2cpp_TypeInfo_var))->set_guiTouch_2((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
