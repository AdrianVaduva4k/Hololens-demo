#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "vm/CachedCCWBase.h"
#include "il2cpp-object-internals.h"


// System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_Edge>
struct IEnumerable_1_t82946E745F91A1F44BB53B3A7D787C59E4A18986;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215;
// System.Collections.Generic.IEnumerator`1<ProBuilder2.Common.pb_Edge>
struct IEnumerator_1_t2E558A8A584D763F845A826D4FEDA8C3B430A56D;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Func`2<ProBuilder2.Common.pb_Edge,System.Boolean>
struct Func_2_t7505072D1280A10E094C9B7796047DFDC5B7F4DD;
// System.Func`2<ProBuilder2.Common.pb_Edge,UnityEngine.Vector2>
struct Func_2_tC19BCCE8AAFBDDB2EEF176ED72C134DCCB888DE3;
// System.Func`2<System.Int32,ProBuilder2.Common.pb_Edge>
struct Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513;
// System.Func`2<System.Int32,UnityEngine.Vector2>
struct Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;

struct IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B;



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
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t5808AF951019E4388C66F7A88AC569F52F581167 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) = 0;
};
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef PB_EDGE_T494790DE6920A04E4D0D12D55B8951E91FD9B5A6_H
#define PB_EDGE_T494790DE6920A04E4D0D12D55B8951E91FD9B5A6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_Edge
struct  pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6 
{
public:
	// System.Int32 ProBuilder2.Common.pb_Edge::x
	int32_t ___x_0;
	// System.Int32 ProBuilder2.Common.pb_Edge::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};

struct pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6_StaticFields
{
public:
	// ProBuilder2.Common.pb_Edge ProBuilder2.Common.pb_Edge::Empty
	pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6_StaticFields, ___Empty_2)); }
	inline pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6  get_Empty_2() const { return ___Empty_2; }
	inline pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6 * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6  value)
	{
		___Empty_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_EDGE_T494790DE6920A04E4D0D12D55B8951E91FD9B5A6_H
#ifndef ENUMERATOR_T52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2_H
#define ENUMERATOR_T52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.Int32>
struct  Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2, ___list_0)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_list_0() const { return ___list_0; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef ITERATOR_1_T9CB5BC946308D5038FE7D1055264ABCC993B3A80_H
#define ITERATOR_1_T9CB5BC946308D5038FE7D1055264ABCC993B3A80_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable_Iterator`1<ProBuilder2.Common.pb_Edge>
struct  Iterator_1_t9CB5BC946308D5038FE7D1055264ABCC993B3A80  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t9CB5BC946308D5038FE7D1055264ABCC993B3A80, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t9CB5BC946308D5038FE7D1055264ABCC993B3A80, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t9CB5BC946308D5038FE7D1055264ABCC993B3A80, ___current_2)); }
	inline pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6  get_current_2() const { return ___current_2; }
	inline pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(pb_Edge_t494790DE6920A04E4D0D12D55B8951E91FD9B5A6  value)
	{
		___current_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITERATOR_1_T9CB5BC946308D5038FE7D1055264ABCC993B3A80_H
#ifndef ITERATOR_1_T5A93534D7D06FE7FE455C6F9A413127709959557_H
#define ITERATOR_1_T5A93534D7D06FE7FE455C6F9A413127709959557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable_Iterator`1<UnityEngine.Vector2>
struct  Iterator_1_t5A93534D7D06FE7FE455C6F9A413127709959557  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t5A93534D7D06FE7FE455C6F9A413127709959557, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t5A93534D7D06FE7FE455C6F9A413127709959557, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t5A93534D7D06FE7FE455C6F9A413127709959557, ___current_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_current_2() const { return ___current_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___current_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITERATOR_1_T5A93534D7D06FE7FE455C6F9A413127709959557_H
#ifndef WHERESELECTARRAYITERATOR_2_TCDAC3D0146A107DA39E6904708F23D1A10CF71AF_H
#define WHERESELECTARRAYITERATOR_2_TCDAC3D0146A107DA39E6904708F23D1A10CF71AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32,ProBuilder2.Common.pb_Edge>
struct  WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF  : public Iterator_1_t9CB5BC946308D5038FE7D1055264ABCC993B3A80
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF, ___source_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_source_3() const { return ___source_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((&___source_3), value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF, ___predicate_4)); }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_4), value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF, ___selector_5)); }
	inline Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((&___selector_5), value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHERESELECTARRAYITERATOR_2_TCDAC3D0146A107DA39E6904708F23D1A10CF71AF_H
#ifndef WHERESELECTARRAYITERATOR_2_TB7B254894A29799113DB7672578F2AF61CAC657A_H
#define WHERESELECTARRAYITERATOR_2_TB7B254894A29799113DB7672578F2AF61CAC657A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32,UnityEngine.Vector2>
struct  WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A  : public Iterator_1_t5A93534D7D06FE7FE455C6F9A413127709959557
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A, ___source_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_source_3() const { return ___source_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((&___source_3), value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A, ___predicate_4)); }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_4), value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A, ___selector_5)); }
	inline Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((&___selector_5), value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHERESELECTARRAYITERATOR_2_TB7B254894A29799113DB7672578F2AF61CAC657A_H
#ifndef WHERESELECTENUMERABLEITERATOR_2_T8A9EB2874AADA54A3328FACC4752497C4BE3EADF_H
#define WHERESELECTENUMERABLEITERATOR_2_T8A9EB2874AADA54A3328FACC4752497C4BE3EADF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<ProBuilder2.Common.pb_Edge,UnityEngine.Vector2>
struct  WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF  : public Iterator_1_t5A93534D7D06FE7FE455C6F9A413127709959557
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_t7505072D1280A10E094C9B7796047DFDC5B7F4DD * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_tC19BCCE8AAFBDDB2EEF176ED72C134DCCB888DE3 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((&___source_3), value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF, ___predicate_4)); }
	inline Func_2_t7505072D1280A10E094C9B7796047DFDC5B7F4DD * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t7505072D1280A10E094C9B7796047DFDC5B7F4DD ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t7505072D1280A10E094C9B7796047DFDC5B7F4DD * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_4), value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF, ___selector_5)); }
	inline Func_2_tC19BCCE8AAFBDDB2EEF176ED72C134DCCB888DE3 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tC19BCCE8AAFBDDB2EEF176ED72C134DCCB888DE3 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tC19BCCE8AAFBDDB2EEF176ED72C134DCCB888DE3 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((&___selector_5), value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHERESELECTENUMERABLEITERATOR_2_T8A9EB2874AADA54A3328FACC4752497C4BE3EADF_H
#ifndef WHERESELECTENUMERABLEITERATOR_2_TAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC_H
#define WHERESELECTENUMERABLEITERATOR_2_TAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32,ProBuilder2.Common.pb_Edge>
struct  WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC  : public Iterator_1_t9CB5BC946308D5038FE7D1055264ABCC993B3A80
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((&___source_3), value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC, ___predicate_4)); }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_4), value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC, ___selector_5)); }
	inline Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((&___selector_5), value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHERESELECTENUMERABLEITERATOR_2_TAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC_H
#ifndef WHERESELECTENUMERABLEITERATOR_2_T7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91_H
#define WHERESELECTENUMERABLEITERATOR_2_T7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32,UnityEngine.Vector2>
struct  WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91  : public Iterator_1_t5A93534D7D06FE7FE455C6F9A413127709959557
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((&___source_3), value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91, ___predicate_4)); }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_4), value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91, ___selector_5)); }
	inline Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((&___selector_5), value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHERESELECTENUMERABLEITERATOR_2_T7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91_H
#ifndef WHERESELECTLISTITERATOR_2_T3B9ABCBD417F24470EA1E87A868040D9D597449D_H
#define WHERESELECTLISTITERATOR_2_T3B9ABCBD417F24470EA1E87A868040D9D597449D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32,ProBuilder2.Common.pb_Edge>
struct  WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D  : public Iterator_1_t9CB5BC946308D5038FE7D1055264ABCC993B3A80
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D, ___source_3)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_source_3() const { return ___source_3; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((&___source_3), value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D, ___predicate_4)); }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_4), value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D, ___selector_5)); }
	inline Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t94D07AA9C384BD61B7C22617C7715C214DB23E34 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((&___selector_5), value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D, ___enumerator_6)); }
	inline Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2  value)
	{
		___enumerator_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHERESELECTLISTITERATOR_2_T3B9ABCBD417F24470EA1E87A868040D9D597449D_H
#ifndef WHERESELECTLISTITERATOR_2_T0C5ECC24C848563DB981BCB1264B64F26F11CB83_H
#define WHERESELECTLISTITERATOR_2_T0C5ECC24C848563DB981BCB1264B64F26F11CB83_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32,UnityEngine.Vector2>
struct  WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83  : public Iterator_1_t5A93534D7D06FE7FE455C6F9A413127709959557
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83, ___source_3)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_source_3() const { return ___source_3; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((&___source_3), value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83, ___predicate_4)); }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_4), value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83, ___selector_5)); }
	inline Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB3CFA5CA2D7FF72CA5FCE62DAF71AF1508EFD131 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((&___selector_5), value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83, ___enumerator_6)); }
	inline Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2  value)
	{
		___enumerator_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHERESELECTLISTITERATOR_2_T0C5ECC24C848563DB981BCB1264B64F26F11CB83_H

il2cpp_hresult_t IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue);
il2cpp_hresult_t IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(RuntimeObject* __this);



// COM Callable Wrapper for System.Linq.Enumerable_WhereSelectEnumerableIterator`2<ProBuilder2.Common.pb_Edge,UnityEngine.Vector2>
struct WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF_ComCallableWrapper>, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[1] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

extern "C" Il2CppIUnknown* CreateComCallableWrapperFor_WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WhereSelectEnumerableIterator_2_t8A9EB2874AADA54A3328FACC4752497C4BE3EADF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32,ProBuilder2.Common.pb_Edge>
struct WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF_ComCallableWrapper>, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[1] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

extern "C" Il2CppIUnknown* CreateComCallableWrapperFor_WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WhereSelectArrayIterator_2_tCDAC3D0146A107DA39E6904708F23D1A10CF71AF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32,UnityEngine.Vector2>
struct WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A_ComCallableWrapper>, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[1] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

extern "C" Il2CppIUnknown* CreateComCallableWrapperFor_WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WhereSelectArrayIterator_2_tB7B254894A29799113DB7672578F2AF61CAC657A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32,ProBuilder2.Common.pb_Edge>
struct WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D_ComCallableWrapper>, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[1] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

extern "C" Il2CppIUnknown* CreateComCallableWrapperFor_WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WhereSelectListIterator_2_t3B9ABCBD417F24470EA1E87A868040D9D597449D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32,UnityEngine.Vector2>
struct WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83_ComCallableWrapper>, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[1] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

extern "C" Il2CppIUnknown* CreateComCallableWrapperFor_WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WhereSelectListIterator_2_t0C5ECC24C848563DB981BCB1264B64F26F11CB83_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32,ProBuilder2.Common.pb_Edge>
struct WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC_ComCallableWrapper>, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[1] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

extern "C" Il2CppIUnknown* CreateComCallableWrapperFor_WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WhereSelectEnumerableIterator_2_tAC3D9C38DAA7ED9A1C4CBE20887D4E1433EA3ACC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32,UnityEngine.Vector2>
struct WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91_ComCallableWrapper>, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[1] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m35A822CD2DF5C55F51539416F98640C7123A6C63_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

extern "C" Il2CppIUnknown* CreateComCallableWrapperFor_WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WhereSelectEnumerableIterator_2_t7DB9AE59A4E3B12F6CECBB80D38DCA92FBC3FE91_ComCallableWrapper(obj));
}
