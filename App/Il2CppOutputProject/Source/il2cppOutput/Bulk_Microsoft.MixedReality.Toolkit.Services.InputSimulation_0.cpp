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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6;
// Microsoft.MixedReality.Toolkit.Input.BaseHand
struct BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8;
// Microsoft.MixedReality.Toolkit.Input.HandRay
struct HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t84214CF2461E1E815417B58C710DA3FA2A36D333;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tAC5F0B9DCD31153CEDD94E415BB448DF001E003A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5;
// Microsoft.MixedReality.Toolkit.Input.KeyBinding/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_t8736C6B150359F678C4A79E823DCC31B4F2C5C88;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_tD10B60A143D7921A5306061F2FE3877956FC6F5F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_t9681541389FDD3AD37D8A632D57DEC7E79D45F1C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_tD5F6EF96CF5972438F574FEA04AEAC066382ACE1;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t6A800A4673BEBAED284A7E5ECC05EBB823796D11;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_tC928D9B6030EF5635492EFE45AF6E21792B488D5;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_t114F45E0D1711DE51FBE730E3B535CBB6BBCB101;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile
struct MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_tB04A2CFD93E4726CDCB844258C263F173A52BB79;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_tB940D9F8A0E138A133173373CAA5286E9E529145;
// Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand
struct SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6;
// Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand
struct SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHand
struct SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData
struct SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData/HandJointDataGenerator
struct HandJointDataGenerator_tEE5264C08256E586FB0B898065B029938EFE8188;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils
struct SimulatedHandUtils_t4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC;
// Microsoft.MixedReality.Toolkit.Input.StabilizedRay
struct StabilizedRay_t65EC3E1E38F099C953C0BB4696F6649BCF54CE12;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tD2505A955DD8A4DEC1BD0FF44D66E2C35CE63C34;
// System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>
struct Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF;
// System.Action`2<System.Int32Enum,System.Int32>
struct Action_2_t211F8AF4611284BBE3D0590121A0E0BF9FA7E614;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_t18AB155DBA30B0324CD68B17A41119D0A93CD0FE;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>[]
struct EntryU5BU5D_t81745B599696559127E50A08714108E4CA04959E;
// System.Collections.Generic.Dictionary`2/Entry<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>[]
struct EntryU5BU5D_t38FEFB281B1A4CF7484C0C71CA7BF42A9E1C7ACF;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_tAE2FD096D03246DFF2479959AD183693A10039D7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct KeyCollection_t57658CADC19154BC4EEA41F959DC76B84576C820;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct KeyCollection_t2B6E6EB7500013477884F73F39FCDF576FA5785E;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t36EDFEBAB120AC154746D8C8E90974A984BBB495;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct ValueCollection_t047E48FE2BC3244415152755E48613578D24E834;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct ValueCollection_t454771AE7BECB8DA4FDF7DB2CE34C9409FE0AC63;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t585E2B53F5516546A5E1EFBE416E08134AB71DDE;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_t328CB042B22677140E01C2F4249D855A045C63E1;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct IEqualityComparer_1_t40F97FA1DBD02F3813D53A442593987C10F4DB2F;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_t74F59DD36FAE0CFB087612565C42CAD359647832;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>
struct Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2;
// System.Tuple`2<System.Int32Enum,System.Int32>
struct Tuple_2_t6013D918BF7AB88AC1206529AAB17213208F33F0;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

extern RuntimeClass* Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF_il2cpp_TypeInfo_var;
extern RuntimeClass* CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
extern RuntimeClass* IInputSimulationService_tC51C5CCBD4292645E13330635A1A9FBCB5E5F0C5_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityDataProviderAccess_t9324ABE13674A9152F8C12740CF8048326F19B76_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyType_t0870CDF08250D6779039AF63A65F5CD11052EF51_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_il2cpp_TypeInfo_var;
extern RuntimeClass* MouseButtonU5BU5D_t0FE4115C5814F05484D3C289D86D95108FC02E44_il2cpp_TypeInfo_var;
extern RuntimeClass* MouseButton_tF872A67C3912D81CEB32AE892A5C9E0FE34C4FC2_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F_il2cpp_TypeInfo_var;
extern RuntimeClass* SimulatedHandUtils_t4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC_il2cpp_TypeInfo_var;
extern RuntimeClass* SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t535EBE7A8E4E331E9C1387F1529A9DEC66F0C0DA____6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0_FieldInfo_var;
extern String_t* _stringLiteral04734178D407F1573AAACEB7E086B11BCFABD7FF;
extern String_t* _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E;
extern String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
extern String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
extern String_t* _stringLiteral2FEED76F1368917E9E5273B5D3B77EC607649D4D;
extern String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
extern String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
extern String_t* _stringLiteral561DDB78EA3339033D719AFAA6980160DC8D88CB;
extern String_t* _stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31;
extern String_t* _stringLiteral66654F3A427908EF2AB0102919620271D634DA8A;
extern String_t* _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A;
extern String_t* _stringLiteral8B7970623A806CC748C1B218861BE920B011B98C;
extern String_t* _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77;
extern String_t* _stringLiteralCF673A9C875D20DCDA8A5C0D7A2E5C60A940DB8E;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC;
extern const RuntimeMethod* Action_2_Invoke_m1A48D91F6BAF38443ED8ECAADD549C3F90896332_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_mDD08B294B545A68AB23E648F9787D2D5B186C9EE_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m6A2BB0894C18F943CB542B81BA8B0EE1B465DBA3_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m9049F22F4FBC49FAE3892048A03893CE895F257C_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m02BB98064775317706C9F557D3509512207541BE_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m39D08970E6E3801A3EF862979C1E974F5639C32F_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m46603BE88578C9C43DD173187E292CF93380A50C_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mBA3577D425F3BB097B88EEACDBB915F2EBB42095_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_mE48F08682093E8FBE18CE8FDD606E0AB2DA12A29_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m60DC2ADCA437BFFC44422052FBDC70D9FBFB5C7D_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m6770CFC40363E5FFD286898B08323B8CE39774D6_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m88C7F10F0CE2D70396D9C8D3F9C7DA04CB614B91_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B_RuntimeMethod_var;
extern const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProvider_TisIInputSimulationService_tC51C5CCBD4292645E13330635A1A9FBCB5E5F0C5_mA573C095F7E5F10F958374F8F9788126EEA1833C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
extern const RuntimeMethod* Tuple_Create_TisKeyType_t0870CDF08250D6779039AF63A65F5CD11052EF51_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m5C9E5A4B0345FC661870F00CA2C81C8DA7BE8D56_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m2462FC265A3064763975493560FAE5D7A61050FF_RuntimeMethod_var;
extern const RuntimeType* KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_0_0_0_var;
extern const RuntimeType* MouseButton_tF872A67C3912D81CEB32AE892A5C9E0FE34C4FC2_0_0_0_var;
extern const RuntimeType* TrackedHandJoint_t176970888553432D46070ECFF0B02AD1B8BA2B77_0_0_0_var;
extern const uint32_t KeyBinding_FromMouseButton_m457A89AD98A2DCBC3CB9E9DF4682F8A144C84210_MetadataUsageId;
extern const uint32_t KeyBinding_ToString_m2B6A752FA929831BCD916CD99A1783B868881A26_MetadataUsageId;
extern const uint32_t KeyBinding__cctor_m65F90AD1DB0802431203040477D8C3E0B1DCC0E7_MetadataUsageId;
extern const uint32_t MixedRealityInputSimulationProfile__ctor_mB261533E5A43EC15EABBAC3FCDF22CD4C2AD5B56_MetadataUsageId;
extern const uint32_t SimulatedArticulatedHand_UpdateInteractions_mA9009A552D5A4F048125D4BE537F36FEC0BFDF75_MetadataUsageId;
extern const uint32_t SimulatedArticulatedHand__ctor_m7C05770A06CA0F3B8146D430315DCBCE5B62787D_MetadataUsageId;
extern const uint32_t SimulatedArticulatedHand_get_DefaultInteractions_m6957B62B4CEB76C8F9A0DDD7EE7F02D0B729CFE5_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_EnsureProfileSettings_m4261A25FFE492BBCF2CBCF0B27584C81A9E2394D_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCancelHold_m9D135EAF833702F549EDF7A9F41EBCA170353D87_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCancelManipulation_m912880A1508BB892A908611C464E4447F99DC672_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCancelNavigation_m95FC011099E268BF2A956D7CCF032C65976781B5_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCompleteHold_m461E3CA914F603A9E465A057E4378EDB0DC3C3DD_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCompleteManipulation_mAC59D3AE7CC32C421637FA5F6C2EA82310869312_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCompleteNavigation_m6F5E8EB65A11AABEDF5BEF75CA1F2812753B60EF_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCompleteSelect_mBEC08F8164D62AD63519811FAF378FC7ADBE4D7E_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryStartHold_m1ECE36EAFA216F734C2CB12DE1CD37AD3DD7DC60_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryStartManipulation_m74F15823346BEEE40193E2010787862FBF47580F_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryStartNavigation_m05CFE72391C9BCEF7453E7274E5837C45D704C4D_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_UpdateInteractions_mC0EB6BD29F382CFAA47D673933AEE14EFB9D35EC_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_UpdateManipulation_m90F52C758B7D26F009A12DA074B6F6FCC519FB67_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_UpdateNavigationRails_m299766F499331684CEB2002A76AB307FC9A4961E_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_UpdateNavigation_mC10A6736D314C28C59875709952BDE518F75011C_MetadataUsageId;
extern const uint32_t SimulatedGestureHand__ctor_mF11987CB30AE69F5555F28A58FB8E03684884369_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_get_DefaultInteractions_m46D7F02EC54260C318B9B926BA3FCC25F72BEA93_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_get_navigationDelta_m4CBDC2BEDEB6CE39E01306012B9987BB240BC695_MetadataUsageId;
extern const uint32_t SimulatedHandData_Copy_mE64F1DA2C17400BEEA519C265C2297ED2692469D_MetadataUsageId;
extern const uint32_t SimulatedHandData__cctor_m94195FC724AAC5E1E4EBC7A7A639E25B8A7A5166_MetadataUsageId;
extern const uint32_t SimulatedHandData__ctor_m44052F3BE2320A9C4238340444313FF3F459DC7A_MetadataUsageId;
extern const uint32_t SimulatedHandUtils_CalculateJointRotations_m279C3CC262DF9B0CD2862BE036BB8CC5DC679E8C_MetadataUsageId;
extern const uint32_t SimulatedHandUtils_GetPalmForwardVector_m524DE861131990B95C50F244D26D3AD878476E48_MetadataUsageId;
extern const uint32_t SimulatedHandUtils_GetPalmRightVector_m438EF652B2B1A958B38823F2727DF4FB7D49BEB2_MetadataUsageId;
extern const uint32_t SimulatedHandUtils_GetPalmUpVector_mA3CA1373514A15049EB590DC03B8FA78186A9D97_MetadataUsageId;
extern const uint32_t SimulatedHandUtils__cctor_mB6881F73D3447E3A7E2F8FDD66493F340A82752D_MetadataUsageId;
extern const uint32_t SimulatedHand_TryGetJoint_m101D7D07EDFEEB92EE9F564800E1DB84E328B0FA_MetadataUsageId;
extern const uint32_t SimulatedHand_UpdateState_mF6B390CE9DBAE7E32A462371FF3F6903243C89E0_MetadataUsageId;
extern const uint32_t SimulatedHand__cctor_m5F511300CF35438980E4E1D32EA064408E678775_MetadataUsageId;
extern const uint32_t SimulatedHand__ctor_mEE94D186420423261F5C4515CD1473E1CCB0D496_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m2462FC265A3064763975493560FAE5D7A61050FF_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct MouseButtonU5BU5D_t0FE4115C5814F05484D3C289D86D95108FC02E44;
struct MixedRealityGestureMappingU5BU5D_t9681541389FDD3AD37D8A632D57DEC7E79D45F1C;
struct MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69;
struct MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F;
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


#ifndef U3CMODULEU3E_T011433D956077C7880B058E62535E02D6D15A50D_H
#define U3CMODULEU3E_T011433D956077C7880B058E62535E02D6D15A50D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t011433D956077C7880B058E62535E02D6D15A50D 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T011433D956077C7880B058E62535E02D6D15A50D_H
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
#ifndef U3CU3EC__DISPLAYCLASS5_0_T14698F25906F13E502275D320F7D04E024A7B597_H
#define U3CU3EC__DISPLAYCLASS5_0_T14698F25906F13E502275D320F7D04E024A7B597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::names
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___names_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597, ___names_0)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_names_0() const { return ___names_0; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier((&___names_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS5_0_T14698F25906F13E502275D320F7D04E024A7B597_H
#ifndef KEYINPUTSYSTEM_T03F36C2CFA2283F534181AE460CCFD4308FEE611_H
#define KEYINPUTSYSTEM_T03F36C2CFA2283F534181AE460CCFD4308FEE611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.KeyInputSystem
struct  KeyInputSystem_t03F36C2CFA2283F534181AE460CCFD4308FEE611  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYINPUTSYSTEM_T03F36C2CFA2283F534181AE460CCFD4308FEE611_H
#ifndef SIMULATEDHANDDATA_TA713E1A44EED41F46FF10BC8D65653CA58D4411F_H
#define SIMULATEDHANDDATA_TA713E1A44EED41F46FF10BC8D65653CA58D4411F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData
struct  SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::isTracked
	bool ___isTracked_1;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::joints
	MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* ___joints_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::isPinching
	bool ___isPinching_3;

public:
	inline static int32_t get_offset_of_isTracked_1() { return static_cast<int32_t>(offsetof(SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F, ___isTracked_1)); }
	inline bool get_isTracked_1() const { return ___isTracked_1; }
	inline bool* get_address_of_isTracked_1() { return &___isTracked_1; }
	inline void set_isTracked_1(bool value)
	{
		___isTracked_1 = value;
	}

	inline static int32_t get_offset_of_joints_2() { return static_cast<int32_t>(offsetof(SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F, ___joints_2)); }
	inline MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* get_joints_2() const { return ___joints_2; }
	inline MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E** get_address_of_joints_2() { return &___joints_2; }
	inline void set_joints_2(MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* value)
	{
		___joints_2 = value;
		Il2CppCodeGenWriteBarrier((&___joints_2), value);
	}

	inline static int32_t get_offset_of_isPinching_3() { return static_cast<int32_t>(offsetof(SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F, ___isPinching_3)); }
	inline bool get_isPinching_3() const { return ___isPinching_3; }
	inline bool* get_address_of_isPinching_3() { return &___isPinching_3; }
	inline void set_isPinching_3(bool value)
	{
		___isPinching_3 = value;
	}
};

struct SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDHANDDATA_TA713E1A44EED41F46FF10BC8D65653CA58D4411F_H
#ifndef SIMULATEDHANDUTILS_T4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC_H
#define SIMULATEDHANDUTILS_T4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils
struct  SimulatedHandUtils_t4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC  : public RuntimeObject
{
public:

public:
};

struct SimulatedHandUtils_t4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(SimulatedHandUtils_t4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDHANDUTILS_T4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC_H
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
#ifndef DICTIONARY_2_T2A16510F1B30A18E35E7302CC99B335F29C5C37A_H
#define DICTIONARY_2_T2A16510F1B30A18E35E7302CC99B335F29C5C37A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct  Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t18AB155DBA30B0324CD68B17A41119D0A93CD0FE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tAE2FD096D03246DFF2479959AD183693A10039D7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t36EDFEBAB120AC154746D8C8E90974A984BBB495 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A, ___entries_1)); }
	inline EntryU5BU5D_t18AB155DBA30B0324CD68B17A41119D0A93CD0FE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t18AB155DBA30B0324CD68B17A41119D0A93CD0FE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t18AB155DBA30B0324CD68B17A41119D0A93CD0FE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A, ___keys_7)); }
	inline KeyCollection_tAE2FD096D03246DFF2479959AD183693A10039D7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tAE2FD096D03246DFF2479959AD183693A10039D7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tAE2FD096D03246DFF2479959AD183693A10039D7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A, ___values_8)); }
	inline ValueCollection_t36EDFEBAB120AC154746D8C8E90974A984BBB495 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t36EDFEBAB120AC154746D8C8E90974A984BBB495 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t36EDFEBAB120AC154746D8C8E90974A984BBB495 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2A16510F1B30A18E35E7302CC99B335F29C5C37A_H
#ifndef DICTIONARY_2_T5F05ECA524CB937E1946B02886463ECF191972D5_H
#define DICTIONARY_2_T5F05ECA524CB937E1946B02886463ECF191972D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>>
struct  Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t81745B599696559127E50A08714108E4CA04959E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t57658CADC19154BC4EEA41F959DC76B84576C820 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t047E48FE2BC3244415152755E48613578D24E834 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5, ___entries_1)); }
	inline EntryU5BU5D_t81745B599696559127E50A08714108E4CA04959E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t81745B599696559127E50A08714108E4CA04959E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t81745B599696559127E50A08714108E4CA04959E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5, ___keys_7)); }
	inline KeyCollection_t57658CADC19154BC4EEA41F959DC76B84576C820 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t57658CADC19154BC4EEA41F959DC76B84576C820 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t57658CADC19154BC4EEA41F959DC76B84576C820 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5, ___values_8)); }
	inline ValueCollection_t047E48FE2BC3244415152755E48613578D24E834 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t047E48FE2BC3244415152755E48613578D24E834 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t047E48FE2BC3244415152755E48613578D24E834 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T5F05ECA524CB937E1946B02886463ECF191972D5_H
#ifndef DICTIONARY_2_TB7F86C4360B0530664A273764D1D309F5D3B8A9E_H
#define DICTIONARY_2_TB7F86C4360B0530664A273764D1D309F5D3B8A9E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>,System.Int32>
struct  Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t38FEFB281B1A4CF7484C0C71CA7BF42A9E1C7ACF* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2B6E6EB7500013477884F73F39FCDF576FA5785E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t454771AE7BECB8DA4FDF7DB2CE34C9409FE0AC63 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E, ___entries_1)); }
	inline EntryU5BU5D_t38FEFB281B1A4CF7484C0C71CA7BF42A9E1C7ACF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t38FEFB281B1A4CF7484C0C71CA7BF42A9E1C7ACF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t38FEFB281B1A4CF7484C0C71CA7BF42A9E1C7ACF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E, ___keys_7)); }
	inline KeyCollection_t2B6E6EB7500013477884F73F39FCDF576FA5785E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2B6E6EB7500013477884F73F39FCDF576FA5785E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2B6E6EB7500013477884F73F39FCDF576FA5785E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E, ___values_8)); }
	inline ValueCollection_t454771AE7BECB8DA4FDF7DB2CE34C9409FE0AC63 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t454771AE7BECB8DA4FDF7DB2CE34C9409FE0AC63 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t454771AE7BECB8DA4FDF7DB2CE34C9409FE0AC63 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TB7F86C4360B0530664A273764D1D309F5D3B8A9E_H
#ifndef LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#define LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D20_T56237A49A780E9F896F57A0DA727B40C6BC86FC1_H
#define __STATICARRAYINITTYPESIZEU3D20_T56237A49A780E9F896F57A0DA727B40C6BC86FC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20
struct  __StaticArrayInitTypeSizeU3D20_t56237A49A780E9F896F57A0DA727B40C6BC86FC1 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t56237A49A780E9F896F57A0DA727B40C6BC86FC1__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D20_T56237A49A780E9F896F57A0DA727B40C6BC86FC1_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
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
#ifndef NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#define NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
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
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T535EBE7A8E4E331E9C1387F1529A9DEC66F0C0DA_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T535EBE7A8E4E331E9C1387F1529A9DEC66F0C0DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t535EBE7A8E4E331E9C1387F1529A9DEC66F0C0DA  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t535EBE7A8E4E331E9C1387F1529A9DEC66F0C0DA_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20 <PrivateImplementationDetails>::6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED
	__StaticArrayInitTypeSizeU3D20_t56237A49A780E9F896F57A0DA727B40C6BC86FC1  ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0;

public:
	inline static int32_t get_offset_of_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t535EBE7A8E4E331E9C1387F1529A9DEC66F0C0DA_StaticFields, ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0)); }
	inline __StaticArrayInitTypeSizeU3D20_t56237A49A780E9F896F57A0DA727B40C6BC86FC1  get_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() const { return ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0; }
	inline __StaticArrayInitTypeSizeU3D20_t56237A49A780E9F896F57A0DA727B40C6BC86FC1 * get_address_of_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() { return &___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0; }
	inline void set_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0(__StaticArrayInitTypeSizeU3D20_t56237A49A780E9F896F57A0DA727B40C6BC86FC1  value)
	{
		___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T535EBE7A8E4E331E9C1387F1529A9DEC66F0C0DA_H
#ifndef DEVICEINPUTTYPE_T2251297BD7C22067474F8E7F73A2E48C3AF09BFC_H
#define DEVICEINPUTTYPE_T2251297BD7C22067474F8E7F73A2E48C3AF09BFC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct  DeviceInputType_t2251297BD7C22067474F8E7F73A2E48C3AF09BFC 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t2251297BD7C22067474F8E7F73A2E48C3AF09BFC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEINPUTTYPE_T2251297BD7C22067474F8E7F73A2E48C3AF09BFC_H
#ifndef GESTUREINPUTTYPE_T3795375442FD90A9C8798F771BB44290FAA46CC3_H
#define GESTUREINPUTTYPE_T3795375442FD90A9C8798F771BB44290FAA46CC3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.GestureInputType
struct  GestureInputType_t3795375442FD90A9C8798F771BB44290FAA46CC3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GestureInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureInputType_t3795375442FD90A9C8798F771BB44290FAA46CC3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GESTUREINPUTTYPE_T3795375442FD90A9C8798F771BB44290FAA46CC3_H
#ifndef HANDSIMULATIONMODE_T0CDBDA94395D661E120F6D818C8BBCA57AEAF58E_H
#define HANDSIMULATIONMODE_T0CDBDA94395D661E120F6D818C8BBCA57AEAF58E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode
struct  HandSimulationMode_t0CDBDA94395D661E120F6D818C8BBCA57AEAF58E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.HandSimulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandSimulationMode_t0CDBDA94395D661E120F6D818C8BBCA57AEAF58E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDSIMULATIONMODE_T0CDBDA94395D661E120F6D818C8BBCA57AEAF58E_H
#ifndef INPUTSIMULATIONCONTROLMODE_T4B26BC68179520961BAE73D75C212E8841EEC98B_H
#define INPUTSIMULATIONCONTROLMODE_T4B26BC68179520961BAE73D75C212E8841EEC98B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode
struct  InputSimulationControlMode_t4B26BC68179520961BAE73D75C212E8841EEC98B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSimulationControlMode_t4B26BC68179520961BAE73D75C212E8841EEC98B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSIMULATIONCONTROLMODE_T4B26BC68179520961BAE73D75C212E8841EEC98B_H
#ifndef KEYTYPE_T0870CDF08250D6779039AF63A65F5CD11052EF51_H
#define KEYTYPE_T0870CDF08250D6779039AF63A65F5CD11052EF51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType
struct  KeyType_t0870CDF08250D6779039AF63A65F5CD11052EF51 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyType_t0870CDF08250D6779039AF63A65F5CD11052EF51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYTYPE_T0870CDF08250D6779039AF63A65F5CD11052EF51_H
#ifndef MOUSEBUTTON_TF872A67C3912D81CEB32AE892A5C9E0FE34C4FC2_H
#define MOUSEBUTTON_TF872A67C3912D81CEB32AE892A5C9E0FE34C4FC2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton
struct  MouseButton_tF872A67C3912D81CEB32AE892A5C9E0FE34C4FC2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MouseButton_tF872A67C3912D81CEB32AE892A5C9E0FE34C4FC2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOUSEBUTTON_TF872A67C3912D81CEB32AE892A5C9E0FE34C4FC2_H
#ifndef TRACKINGSTATE_TA8BF312775B443ABF9976299097170773F17B64C_H
#define TRACKINGSTATE_TA8BF312775B443ABF9976299097170773F17B64C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_tA8BF312775B443ABF9976299097170773F17B64C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tA8BF312775B443ABF9976299097170773F17B64C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSTATE_TA8BF312775B443ABF9976299097170773F17B64C_H
#ifndef GESTUREID_T322098CB83E57338EB783D0F980DD5BE8A27D14D_H
#define GESTUREID_T322098CB83E57338EB783D0F980DD5BE8A27D14D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId
struct  GestureId_t322098CB83E57338EB783D0F980DD5BE8A27D14D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureId_t322098CB83E57338EB783D0F980DD5BE8A27D14D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GESTUREID_T322098CB83E57338EB783D0F980DD5BE8A27D14D_H
#ifndef AUTOSTARTBEHAVIOR_TF188900DEFF704CF9A059B93F586D6FCF91E61FD_H
#define AUTOSTARTBEHAVIOR_TF188900DEFF704CF9A059B93F586D6FCF91E61FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct  AutoStartBehavior_tF188900DEFF704CF9A059B93F586D6FCF91E61FD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_tF188900DEFF704CF9A059B93F586D6FCF91E61FD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOSTARTBEHAVIOR_TF188900DEFF704CF9A059B93F586D6FCF91E61FD_H
#ifndef AXISTYPE_TBC98A816F11947D8F8C750865A90359794459654_H
#define AXISTYPE_TBC98A816F11947D8F8C750865A90359794459654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tBC98A816F11947D8F8C750865A90359794459654 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tBC98A816F11947D8F8C750865A90359794459654, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISTYPE_TBC98A816F11947D8F8C750865A90359794459654_H
#ifndef HANDEDNESS_T08AAB76527953606BF62828E2A7E40AADB3EAFDB_H
#define HANDEDNESS_T08AAB76527953606BF62828E2A7E40AADB3EAFDB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_t08AAB76527953606BF62828E2A7E40AADB3EAFDB 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t08AAB76527953606BF62828E2A7E40AADB3EAFDB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDEDNESS_T08AAB76527953606BF62828E2A7E40AADB3EAFDB_H
#ifndef MIXEDREALITYPOSE_T5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_H
#define MIXEDREALITYPOSE_T5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYPOSE_T5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_H
#ifndef TRACKEDHANDJOINT_T176970888553432D46070ECFF0B02AD1B8BA2B77_H
#define TRACKEDHANDJOINT_T176970888553432D46070ECFF0B02AD1B8BA2B77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_t176970888553432D46070ECFF0B02AD1B8BA2B77 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t176970888553432D46070ECFF0B02AD1B8BA2B77, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDHANDJOINT_T176970888553432D46070ECFF0B02AD1B8BA2B77_H
#ifndef WINDOWSGESTURESETTINGS_T6A0D1921BB6221DF739FBE44B1D40AF3D796290D_H
#define WINDOWSGESTURESETTINGS_T6A0D1921BB6221DF739FBE44B1D40AF3D796290D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings
struct  WindowsGestureSettings_t6A0D1921BB6221DF739FBE44B1D40AF3D796290D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindowsGestureSettings_t6A0D1921BB6221DF739FBE44B1D40AF3D796290D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSGESTURESETTINGS_T6A0D1921BB6221DF739FBE44B1D40AF3D796290D_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#define RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#define KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#define RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifndef BASECONTROLLER_TAC56635C693FC8342A7D097D517C3307444F72D6_H
#define BASECONTROLLER_TAC56635C693FC8342A7D097D517C3307444F72D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.BaseController
struct  BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* ___U3CDefaultInteractionsU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultLeftHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultRightHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* ___U3CInteractionsU3Ek__BackingField_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CAngularVelocityU3Ek__BackingField_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CVelocityU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CDefaultInteractionsU3Ek__BackingField_0)); }
	inline MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* get_U3CDefaultInteractionsU3Ek__BackingField_0() const { return ___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return &___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_0(MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultInteractionsU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1)); }
	inline MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* get_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() const { return ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69** get_address_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return &___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline void set_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* value)
	{
		___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2)); }
	inline MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* get_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() const { return ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69** get_address_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return &___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline void set_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* value)
	{
		___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CEnabledU3Ek__BackingField_3)); }
	inline bool get_U3CEnabledU3Ek__BackingField_3() const { return ___U3CEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_3() { return &___U3CEnabledU3Ek__BackingField_3; }
	inline void set_U3CEnabledU3Ek__BackingField_3(bool value)
	{
		___U3CEnabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CTrackingStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_4() const { return ___U3CTrackingStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_4() { return &___U3CTrackingStateU3Ek__BackingField_4; }
	inline void set_U3CTrackingStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CControllerHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_5() const { return ___U3CControllerHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_5() { return &___U3CControllerHandednessU3Ek__BackingField_5; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CInputSourceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_6() const { return ___U3CInputSourceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_6() { return &___U3CInputSourceU3Ek__BackingField_6; }
	inline void set_U3CInputSourceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CVisualizerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_7() const { return ___U3CVisualizerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_7() { return &___U3CVisualizerU3Ek__BackingField_7; }
	inline void set_U3CVisualizerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVisualizerU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CIsPositionAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_8() const { return ___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return &___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CIsPositionApproximateU3Ek__BackingField_9)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_9() const { return ___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return &___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_9(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CIsRotationAvailableU3Ek__BackingField_10)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_10() const { return ___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return &___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_10(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CInteractionsU3Ek__BackingField_11)); }
	inline MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* get_U3CInteractionsU3Ek__BackingField_11() const { return ___U3CInteractionsU3Ek__BackingField_11; }
	inline MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69** get_address_of_U3CInteractionsU3Ek__BackingField_11() { return &___U3CInteractionsU3Ek__BackingField_11; }
	inline void set_U3CInteractionsU3Ek__BackingField_11(MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* value)
	{
		___U3CInteractionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInteractionsU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CAngularVelocityU3Ek__BackingField_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CAngularVelocityU3Ek__BackingField_12() const { return ___U3CAngularVelocityU3Ek__BackingField_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CAngularVelocityU3Ek__BackingField_12() { return &___U3CAngularVelocityU3Ek__BackingField_12; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6, ___U3CVelocityU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CVelocityU3Ek__BackingField_13() const { return ___U3CVelocityU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CVelocityU3Ek__BackingField_13() { return &___U3CVelocityU3Ek__BackingField_13; }
	inline void set_U3CVelocityU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CVelocityU3Ek__BackingField_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECONTROLLER_TAC56635C693FC8342A7D097D517C3307444F72D6_H
#ifndef HANDRAY_T8A1086DC1563DE7511E654B297E5D6A1B3D7C847_H
#define HANDRAY_T8A1086DC1563DE7511E654B297E5D6A1B3D7C847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.HandRay
struct  HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847  : public RuntimeObject
{
public:
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.HandRay::ray
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray_0;
	// System.Single Microsoft.MixedReality.Toolkit.Input.HandRay::CursorBeamBackwardTolerance
	float ___CursorBeamBackwardTolerance_10;
	// System.Single Microsoft.MixedReality.Toolkit.Input.HandRay::CursorBeamUpTolerance
	float ___CursorBeamUpTolerance_11;
	// Microsoft.MixedReality.Toolkit.Input.StabilizedRay Microsoft.MixedReality.Toolkit.Input.HandRay::stabilizedRay
	StabilizedRay_t65EC3E1E38F099C953C0BB4696F6649BCF54CE12 * ___stabilizedRay_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandRay::palmNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___palmNormal_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandRay::headForward
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___headForward_15;

public:
	inline static int32_t get_offset_of_ray_0() { return static_cast<int32_t>(offsetof(HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847, ___ray_0)); }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  get_ray_0() const { return ___ray_0; }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * get_address_of_ray_0() { return &___ray_0; }
	inline void set_ray_0(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  value)
	{
		___ray_0 = value;
	}

	inline static int32_t get_offset_of_CursorBeamBackwardTolerance_10() { return static_cast<int32_t>(offsetof(HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847, ___CursorBeamBackwardTolerance_10)); }
	inline float get_CursorBeamBackwardTolerance_10() const { return ___CursorBeamBackwardTolerance_10; }
	inline float* get_address_of_CursorBeamBackwardTolerance_10() { return &___CursorBeamBackwardTolerance_10; }
	inline void set_CursorBeamBackwardTolerance_10(float value)
	{
		___CursorBeamBackwardTolerance_10 = value;
	}

	inline static int32_t get_offset_of_CursorBeamUpTolerance_11() { return static_cast<int32_t>(offsetof(HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847, ___CursorBeamUpTolerance_11)); }
	inline float get_CursorBeamUpTolerance_11() const { return ___CursorBeamUpTolerance_11; }
	inline float* get_address_of_CursorBeamUpTolerance_11() { return &___CursorBeamUpTolerance_11; }
	inline void set_CursorBeamUpTolerance_11(float value)
	{
		___CursorBeamUpTolerance_11 = value;
	}

	inline static int32_t get_offset_of_stabilizedRay_13() { return static_cast<int32_t>(offsetof(HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847, ___stabilizedRay_13)); }
	inline StabilizedRay_t65EC3E1E38F099C953C0BB4696F6649BCF54CE12 * get_stabilizedRay_13() const { return ___stabilizedRay_13; }
	inline StabilizedRay_t65EC3E1E38F099C953C0BB4696F6649BCF54CE12 ** get_address_of_stabilizedRay_13() { return &___stabilizedRay_13; }
	inline void set_stabilizedRay_13(StabilizedRay_t65EC3E1E38F099C953C0BB4696F6649BCF54CE12 * value)
	{
		___stabilizedRay_13 = value;
		Il2CppCodeGenWriteBarrier((&___stabilizedRay_13), value);
	}

	inline static int32_t get_offset_of_palmNormal_14() { return static_cast<int32_t>(offsetof(HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847, ___palmNormal_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_palmNormal_14() const { return ___palmNormal_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_palmNormal_14() { return &___palmNormal_14; }
	inline void set_palmNormal_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___palmNormal_14 = value;
	}

	inline static int32_t get_offset_of_headForward_15() { return static_cast<int32_t>(offsetof(HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847, ___headForward_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_headForward_15() const { return ___headForward_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_headForward_15() { return &___headForward_15; }
	inline void set_headForward_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___headForward_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDRAY_T8A1086DC1563DE7511E654B297E5D6A1B3D7C847_H
#ifndef KEYBINDING_TC4FEECECECD699F9B9F44FFE88E7119B019C8834_H
#define KEYBINDING_TC4FEECECECD699F9B9F44FFE88E7119B019C8834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.KeyBinding
struct  KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 
{
public:
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType Microsoft.MixedReality.Toolkit.Input.KeyBinding::bindingType
	int32_t ___bindingType_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding::code
	int32_t ___code_4;

public:
	inline static int32_t get_offset_of_bindingType_3() { return static_cast<int32_t>(offsetof(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834, ___bindingType_3)); }
	inline int32_t get_bindingType_3() const { return ___bindingType_3; }
	inline int32_t* get_address_of_bindingType_3() { return &___bindingType_3; }
	inline void set_bindingType_3(int32_t value)
	{
		___bindingType_3 = value;
	}

	inline static int32_t get_offset_of_code_4() { return static_cast<int32_t>(offsetof(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834, ___code_4)); }
	inline int32_t get_code_4() const { return ___code_4; }
	inline int32_t* get_address_of_code_4() { return &___code_4; }
	inline void set_code_4(int32_t value)
	{
		___code_4 = value;
	}
};

struct KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_StaticFields
{
public:
	// System.String[] Microsoft.MixedReality.Toolkit.Input.KeyBinding::AllCodeNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___AllCodeNames_0;
	// System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>,System.Int32> Microsoft.MixedReality.Toolkit.Input.KeyBinding::KeyBindingToEnumMap
	Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E * ___KeyBindingToEnumMap_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>> Microsoft.MixedReality.Toolkit.Input.KeyBinding::EnumToKeyBindingMap
	Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5 * ___EnumToKeyBindingMap_2;

public:
	inline static int32_t get_offset_of_AllCodeNames_0() { return static_cast<int32_t>(offsetof(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_StaticFields, ___AllCodeNames_0)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_AllCodeNames_0() const { return ___AllCodeNames_0; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_AllCodeNames_0() { return &___AllCodeNames_0; }
	inline void set_AllCodeNames_0(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___AllCodeNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___AllCodeNames_0), value);
	}

	inline static int32_t get_offset_of_KeyBindingToEnumMap_1() { return static_cast<int32_t>(offsetof(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_StaticFields, ___KeyBindingToEnumMap_1)); }
	inline Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E * get_KeyBindingToEnumMap_1() const { return ___KeyBindingToEnumMap_1; }
	inline Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E ** get_address_of_KeyBindingToEnumMap_1() { return &___KeyBindingToEnumMap_1; }
	inline void set_KeyBindingToEnumMap_1(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E * value)
	{
		___KeyBindingToEnumMap_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyBindingToEnumMap_1), value);
	}

	inline static int32_t get_offset_of_EnumToKeyBindingMap_2() { return static_cast<int32_t>(offsetof(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_StaticFields, ___EnumToKeyBindingMap_2)); }
	inline Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5 * get_EnumToKeyBindingMap_2() const { return ___EnumToKeyBindingMap_2; }
	inline Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5 ** get_address_of_EnumToKeyBindingMap_2() { return &___EnumToKeyBindingMap_2; }
	inline void set_EnumToKeyBindingMap_2(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5 * value)
	{
		___EnumToKeyBindingMap_2 = value;
		Il2CppCodeGenWriteBarrier((&___EnumToKeyBindingMap_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBINDING_TC4FEECECECD699F9B9F44FFE88E7119B019C8834_H
#ifndef MIXEDREALITYINPUTACTION_T7ACD606B450B908E03401BB3CC5742FBB6810001_H
#define MIXEDREALITYINPUTACTION_T7ACD606B450B908E03401BB3CC5742FBB6810001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};
#endif // MIXEDREALITYINPUTACTION_T7ACD606B450B908E03401BB3CC5742FBB6810001_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TUPLE_2_T85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2_H
#define TUPLE_2_T85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>
struct  Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	int32_t ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2, ___m_Item1_0)); }
	inline int32_t get_m_Item1_0() const { return ___m_Item1_0; }
	inline int32_t* get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(int32_t value)
	{
		___m_Item1_0 = value;
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2, ___m_Item2_1)); }
	inline int32_t get_m_Item2_1() const { return ___m_Item2_1; }
	inline int32_t* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(int32_t value)
	{
		___m_Item2_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_2_T85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef BASEMIXEDREALITYPROFILE_T94F8622EEDD7F13CFA936C16501EDC6ADE26A95B_H
#define BASEMIXEDREALITYPROFILE_T94F8622EEDD7F13CFA936C16501EDC6ADE26A95B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMIXEDREALITYPROFILE_T94F8622EEDD7F13CFA936C16501EDC6ADE26A95B_H
#ifndef BASEHAND_TADB3EE76FBE976275CF0608F6D809BAFEE53FAA8_H
#define BASEHAND_TADB3EE76FBE976275CF0608F6D809BAFEE53FAA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.BaseHand
struct  BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8  : public BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6
{
public:
	// Microsoft.MixedReality.Toolkit.Input.HandRay Microsoft.MixedReality.Toolkit.Input.BaseHand::<HandRay>k__BackingField
	HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847 * ___U3CHandRayU3Ek__BackingField_14;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseHand::deltaTimeStart
	float ___deltaTimeStart_15;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.BaseHand::frameOn
	int32_t ___frameOn_17;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityPositionsCache
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___velocityPositionsCache_18;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityNormalsCache
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___velocityNormalsCache_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityPositionsSum
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocityPositionsSum_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityNormalsSum
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocityNormalsSum_21;

public:
	inline static int32_t get_offset_of_U3CHandRayU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8, ___U3CHandRayU3Ek__BackingField_14)); }
	inline HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847 * get_U3CHandRayU3Ek__BackingField_14() const { return ___U3CHandRayU3Ek__BackingField_14; }
	inline HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847 ** get_address_of_U3CHandRayU3Ek__BackingField_14() { return &___U3CHandRayU3Ek__BackingField_14; }
	inline void set_U3CHandRayU3Ek__BackingField_14(HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847 * value)
	{
		___U3CHandRayU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHandRayU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_deltaTimeStart_15() { return static_cast<int32_t>(offsetof(BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8, ___deltaTimeStart_15)); }
	inline float get_deltaTimeStart_15() const { return ___deltaTimeStart_15; }
	inline float* get_address_of_deltaTimeStart_15() { return &___deltaTimeStart_15; }
	inline void set_deltaTimeStart_15(float value)
	{
		___deltaTimeStart_15 = value;
	}

	inline static int32_t get_offset_of_frameOn_17() { return static_cast<int32_t>(offsetof(BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8, ___frameOn_17)); }
	inline int32_t get_frameOn_17() const { return ___frameOn_17; }
	inline int32_t* get_address_of_frameOn_17() { return &___frameOn_17; }
	inline void set_frameOn_17(int32_t value)
	{
		___frameOn_17 = value;
	}

	inline static int32_t get_offset_of_velocityPositionsCache_18() { return static_cast<int32_t>(offsetof(BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8, ___velocityPositionsCache_18)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_velocityPositionsCache_18() const { return ___velocityPositionsCache_18; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_velocityPositionsCache_18() { return &___velocityPositionsCache_18; }
	inline void set_velocityPositionsCache_18(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___velocityPositionsCache_18 = value;
		Il2CppCodeGenWriteBarrier((&___velocityPositionsCache_18), value);
	}

	inline static int32_t get_offset_of_velocityNormalsCache_19() { return static_cast<int32_t>(offsetof(BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8, ___velocityNormalsCache_19)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_velocityNormalsCache_19() const { return ___velocityNormalsCache_19; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_velocityNormalsCache_19() { return &___velocityNormalsCache_19; }
	inline void set_velocityNormalsCache_19(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___velocityNormalsCache_19 = value;
		Il2CppCodeGenWriteBarrier((&___velocityNormalsCache_19), value);
	}

	inline static int32_t get_offset_of_velocityPositionsSum_20() { return static_cast<int32_t>(offsetof(BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8, ___velocityPositionsSum_20)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocityPositionsSum_20() const { return ___velocityPositionsSum_20; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocityPositionsSum_20() { return &___velocityPositionsSum_20; }
	inline void set_velocityPositionsSum_20(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocityPositionsSum_20 = value;
	}

	inline static int32_t get_offset_of_velocityNormalsSum_21() { return static_cast<int32_t>(offsetof(BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8, ___velocityNormalsSum_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocityNormalsSum_21() const { return ___velocityNormalsSum_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocityNormalsSum_21() { return &___velocityNormalsSum_21; }
	inline void set_velocityNormalsSum_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocityNormalsSum_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEHAND_TADB3EE76FBE976275CF0608F6D809BAFEE53FAA8_H
#ifndef MIXEDREALITYGESTUREMAPPING_TD31D2F4503989BE9493C8C8F835901A4C0EC771D_H
#define MIXEDREALITYGESTUREMAPPING_TD31D2F4503989BE9493C8C8F835901A4C0EC771D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct  MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::description
	String_t* ___description_0;
	// Microsoft.MixedReality.Toolkit.Input.GestureInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::gestureType
	int32_t ___gestureType_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::action
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___action_2;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier((&___description_0), value);
	}

	inline static int32_t get_offset_of_gestureType_1() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D, ___gestureType_1)); }
	inline int32_t get_gestureType_1() const { return ___gestureType_1; }
	inline int32_t* get_address_of_gestureType_1() { return &___gestureType_1; }
	inline void set_gestureType_1(int32_t value)
	{
		___gestureType_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D, ___action_2)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_action_2() const { return ___action_2; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___action_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D_marshaled_pinvoke
{
	char* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_marshaled_pinvoke ___action_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D_marshaled_com
{
	Il2CppChar* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_marshaled_com ___action_2;
};
#endif // MIXEDREALITYGESTUREMAPPING_TD31D2F4503989BE9493C8C8F835901A4C0EC771D_H
#ifndef MIXEDREALITYINTERACTIONMAPPING_T2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE_H
#define MIXEDREALITYINTERACTIONMAPPING_T2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct  MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___inputAction_4)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___inputAction_4 = value;
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((&___axisCodeX_6), value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((&___axisCodeY_7), value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((&___rawData_11), value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE, ___poseData_17)); }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  value)
	{
		___poseData_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYINTERACTIONMAPPING_T2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE_H
#ifndef HANDJOINTDATAGENERATOR_TEE5264C08256E586FB0B898065B029938EFE8188_H
#define HANDJOINTDATAGENERATOR_TEE5264C08256E586FB0B898065B029938EFE8188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator
struct  HandJointDataGenerator_tEE5264C08256E586FB0B898065B029938EFE8188  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDJOINTDATAGENERATOR_TEE5264C08256E586FB0B898065B029938EFE8188_H
#ifndef ACTION_2_TDB3A124F0F771DCBB780BF482858826257334BEF_H
#define ACTION_2_TDB3A124F0F771DCBB780BF482858826257334BEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>
struct  Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_TDB3A124F0F771DCBB780BF482858826257334BEF_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef MIXEDREALITYGESTURESPROFILE_TC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8_H
#define MIXEDREALITYGESTURESPROFILE_TC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct  MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8  : public BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B
{
public:
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::manipulationGestures
	int32_t ___manipulationGestures_5;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::navigationGestures
	int32_t ___navigationGestures_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::useRailsNavigation
	bool ___useRailsNavigation_7;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::railsNavigationGestures
	int32_t ___railsNavigationGestures_8;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::windowsGestureAutoStart
	int32_t ___windowsGestureAutoStart_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[] Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::gestures
	MixedRealityGestureMappingU5BU5D_t9681541389FDD3AD37D8A632D57DEC7E79D45F1C* ___gestures_10;

public:
	inline static int32_t get_offset_of_manipulationGestures_5() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8, ___manipulationGestures_5)); }
	inline int32_t get_manipulationGestures_5() const { return ___manipulationGestures_5; }
	inline int32_t* get_address_of_manipulationGestures_5() { return &___manipulationGestures_5; }
	inline void set_manipulationGestures_5(int32_t value)
	{
		___manipulationGestures_5 = value;
	}

	inline static int32_t get_offset_of_navigationGestures_6() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8, ___navigationGestures_6)); }
	inline int32_t get_navigationGestures_6() const { return ___navigationGestures_6; }
	inline int32_t* get_address_of_navigationGestures_6() { return &___navigationGestures_6; }
	inline void set_navigationGestures_6(int32_t value)
	{
		___navigationGestures_6 = value;
	}

	inline static int32_t get_offset_of_useRailsNavigation_7() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8, ___useRailsNavigation_7)); }
	inline bool get_useRailsNavigation_7() const { return ___useRailsNavigation_7; }
	inline bool* get_address_of_useRailsNavigation_7() { return &___useRailsNavigation_7; }
	inline void set_useRailsNavigation_7(bool value)
	{
		___useRailsNavigation_7 = value;
	}

	inline static int32_t get_offset_of_railsNavigationGestures_8() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8, ___railsNavigationGestures_8)); }
	inline int32_t get_railsNavigationGestures_8() const { return ___railsNavigationGestures_8; }
	inline int32_t* get_address_of_railsNavigationGestures_8() { return &___railsNavigationGestures_8; }
	inline void set_railsNavigationGestures_8(int32_t value)
	{
		___railsNavigationGestures_8 = value;
	}

	inline static int32_t get_offset_of_windowsGestureAutoStart_9() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8, ___windowsGestureAutoStart_9)); }
	inline int32_t get_windowsGestureAutoStart_9() const { return ___windowsGestureAutoStart_9; }
	inline int32_t* get_address_of_windowsGestureAutoStart_9() { return &___windowsGestureAutoStart_9; }
	inline void set_windowsGestureAutoStart_9(int32_t value)
	{
		___windowsGestureAutoStart_9 = value;
	}

	inline static int32_t get_offset_of_gestures_10() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8, ___gestures_10)); }
	inline MixedRealityGestureMappingU5BU5D_t9681541389FDD3AD37D8A632D57DEC7E79D45F1C* get_gestures_10() const { return ___gestures_10; }
	inline MixedRealityGestureMappingU5BU5D_t9681541389FDD3AD37D8A632D57DEC7E79D45F1C** get_address_of_gestures_10() { return &___gestures_10; }
	inline void set_gestures_10(MixedRealityGestureMappingU5BU5D_t9681541389FDD3AD37D8A632D57DEC7E79D45F1C* value)
	{
		___gestures_10 = value;
		Il2CppCodeGenWriteBarrier((&___gestures_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYGESTURESPROFILE_TC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8_H
#ifndef MIXEDREALITYINPUTSIMULATIONPROFILE_T8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D_H
#define MIXEDREALITYINPUTSIMULATIONPROFILE_T8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile
struct  MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D  : public BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::indicatorsPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___indicatorsPrefab_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseRotationSensitivity
	float ___mouseRotationSensitivity_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseX
	String_t* ___mouseX_7;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseY
	String_t* ___mouseY_8;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseScroll
	String_t* ___mouseScroll_9;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::doublePressTime
	float ___doublePressTime_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::isCameraControlEnabled
	bool ___isCameraControlEnabled_11;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseLookSpeed
	float ___mouseLookSpeed_12;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseLookButton
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  ___mouseLookButton_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseLookToggle
	bool ___mouseLookToggle_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::isControllerLookInverted
	bool ___isControllerLookInverted_15;
	// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::currentControlMode
	int32_t ___currentControlMode_16;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::fastControlKey
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  ___fastControlKey_17;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::controlSlowSpeed
	float ___controlSlowSpeed_18;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::controlFastSpeed
	float ___controlFastSpeed_19;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::moveHorizontal
	String_t* ___moveHorizontal_20;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::moveVertical
	String_t* ___moveVertical_21;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::moveUpDown
	String_t* ___moveUpDown_22;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::lookHorizontal
	String_t* ___lookHorizontal_23;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::lookVertical
	String_t* ___lookVertical_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::simulateEyePosition
	bool ___simulateEyePosition_25;
	// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultHandSimulationMode
	int32_t ___defaultHandSimulationMode_26;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::toggleLeftHandKey
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  ___toggleLeftHandKey_27;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::toggleRightHandKey
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  ___toggleRightHandKey_28;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handHideTimeout
	float ___handHideTimeout_29;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::leftHandManipulationKey
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  ___leftHandManipulationKey_30;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::rightHandManipulationKey
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  ___rightHandManipulationKey_31;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseHandRotationSpeed
	float ___mouseHandRotationSpeed_32;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handRotateButton
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  ___handRotateButton_33;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultHandGesture
	int32_t ___defaultHandGesture_34;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::leftMouseHandGesture
	int32_t ___leftMouseHandGesture_35;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::middleMouseHandGesture
	int32_t ___middleMouseHandGesture_36;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::rightMouseHandGesture
	int32_t ___rightMouseHandGesture_37;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handGestureAnimationSpeed
	float ___handGestureAnimationSpeed_38;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::holdStartDuration
	float ___holdStartDuration_39;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::navigationStartThreshold
	float ___navigationStartThreshold_40;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultHandDistance
	float ___defaultHandDistance_41;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handDepthMultiplier
	float ___handDepthMultiplier_42;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handJitterAmount
	float ___handJitterAmount_43;

public:
	inline static int32_t get_offset_of_indicatorsPrefab_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___indicatorsPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_indicatorsPrefab_5() const { return ___indicatorsPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_indicatorsPrefab_5() { return &___indicatorsPrefab_5; }
	inline void set_indicatorsPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___indicatorsPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___indicatorsPrefab_5), value);
	}

	inline static int32_t get_offset_of_mouseRotationSensitivity_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___mouseRotationSensitivity_6)); }
	inline float get_mouseRotationSensitivity_6() const { return ___mouseRotationSensitivity_6; }
	inline float* get_address_of_mouseRotationSensitivity_6() { return &___mouseRotationSensitivity_6; }
	inline void set_mouseRotationSensitivity_6(float value)
	{
		___mouseRotationSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_mouseX_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___mouseX_7)); }
	inline String_t* get_mouseX_7() const { return ___mouseX_7; }
	inline String_t** get_address_of_mouseX_7() { return &___mouseX_7; }
	inline void set_mouseX_7(String_t* value)
	{
		___mouseX_7 = value;
		Il2CppCodeGenWriteBarrier((&___mouseX_7), value);
	}

	inline static int32_t get_offset_of_mouseY_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___mouseY_8)); }
	inline String_t* get_mouseY_8() const { return ___mouseY_8; }
	inline String_t** get_address_of_mouseY_8() { return &___mouseY_8; }
	inline void set_mouseY_8(String_t* value)
	{
		___mouseY_8 = value;
		Il2CppCodeGenWriteBarrier((&___mouseY_8), value);
	}

	inline static int32_t get_offset_of_mouseScroll_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___mouseScroll_9)); }
	inline String_t* get_mouseScroll_9() const { return ___mouseScroll_9; }
	inline String_t** get_address_of_mouseScroll_9() { return &___mouseScroll_9; }
	inline void set_mouseScroll_9(String_t* value)
	{
		___mouseScroll_9 = value;
		Il2CppCodeGenWriteBarrier((&___mouseScroll_9), value);
	}

	inline static int32_t get_offset_of_doublePressTime_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___doublePressTime_10)); }
	inline float get_doublePressTime_10() const { return ___doublePressTime_10; }
	inline float* get_address_of_doublePressTime_10() { return &___doublePressTime_10; }
	inline void set_doublePressTime_10(float value)
	{
		___doublePressTime_10 = value;
	}

	inline static int32_t get_offset_of_isCameraControlEnabled_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___isCameraControlEnabled_11)); }
	inline bool get_isCameraControlEnabled_11() const { return ___isCameraControlEnabled_11; }
	inline bool* get_address_of_isCameraControlEnabled_11() { return &___isCameraControlEnabled_11; }
	inline void set_isCameraControlEnabled_11(bool value)
	{
		___isCameraControlEnabled_11 = value;
	}

	inline static int32_t get_offset_of_mouseLookSpeed_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___mouseLookSpeed_12)); }
	inline float get_mouseLookSpeed_12() const { return ___mouseLookSpeed_12; }
	inline float* get_address_of_mouseLookSpeed_12() { return &___mouseLookSpeed_12; }
	inline void set_mouseLookSpeed_12(float value)
	{
		___mouseLookSpeed_12 = value;
	}

	inline static int32_t get_offset_of_mouseLookButton_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___mouseLookButton_13)); }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  get_mouseLookButton_13() const { return ___mouseLookButton_13; }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * get_address_of_mouseLookButton_13() { return &___mouseLookButton_13; }
	inline void set_mouseLookButton_13(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  value)
	{
		___mouseLookButton_13 = value;
	}

	inline static int32_t get_offset_of_mouseLookToggle_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___mouseLookToggle_14)); }
	inline bool get_mouseLookToggle_14() const { return ___mouseLookToggle_14; }
	inline bool* get_address_of_mouseLookToggle_14() { return &___mouseLookToggle_14; }
	inline void set_mouseLookToggle_14(bool value)
	{
		___mouseLookToggle_14 = value;
	}

	inline static int32_t get_offset_of_isControllerLookInverted_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___isControllerLookInverted_15)); }
	inline bool get_isControllerLookInverted_15() const { return ___isControllerLookInverted_15; }
	inline bool* get_address_of_isControllerLookInverted_15() { return &___isControllerLookInverted_15; }
	inline void set_isControllerLookInverted_15(bool value)
	{
		___isControllerLookInverted_15 = value;
	}

	inline static int32_t get_offset_of_currentControlMode_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___currentControlMode_16)); }
	inline int32_t get_currentControlMode_16() const { return ___currentControlMode_16; }
	inline int32_t* get_address_of_currentControlMode_16() { return &___currentControlMode_16; }
	inline void set_currentControlMode_16(int32_t value)
	{
		___currentControlMode_16 = value;
	}

	inline static int32_t get_offset_of_fastControlKey_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___fastControlKey_17)); }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  get_fastControlKey_17() const { return ___fastControlKey_17; }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * get_address_of_fastControlKey_17() { return &___fastControlKey_17; }
	inline void set_fastControlKey_17(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  value)
	{
		___fastControlKey_17 = value;
	}

	inline static int32_t get_offset_of_controlSlowSpeed_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___controlSlowSpeed_18)); }
	inline float get_controlSlowSpeed_18() const { return ___controlSlowSpeed_18; }
	inline float* get_address_of_controlSlowSpeed_18() { return &___controlSlowSpeed_18; }
	inline void set_controlSlowSpeed_18(float value)
	{
		___controlSlowSpeed_18 = value;
	}

	inline static int32_t get_offset_of_controlFastSpeed_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___controlFastSpeed_19)); }
	inline float get_controlFastSpeed_19() const { return ___controlFastSpeed_19; }
	inline float* get_address_of_controlFastSpeed_19() { return &___controlFastSpeed_19; }
	inline void set_controlFastSpeed_19(float value)
	{
		___controlFastSpeed_19 = value;
	}

	inline static int32_t get_offset_of_moveHorizontal_20() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___moveHorizontal_20)); }
	inline String_t* get_moveHorizontal_20() const { return ___moveHorizontal_20; }
	inline String_t** get_address_of_moveHorizontal_20() { return &___moveHorizontal_20; }
	inline void set_moveHorizontal_20(String_t* value)
	{
		___moveHorizontal_20 = value;
		Il2CppCodeGenWriteBarrier((&___moveHorizontal_20), value);
	}

	inline static int32_t get_offset_of_moveVertical_21() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___moveVertical_21)); }
	inline String_t* get_moveVertical_21() const { return ___moveVertical_21; }
	inline String_t** get_address_of_moveVertical_21() { return &___moveVertical_21; }
	inline void set_moveVertical_21(String_t* value)
	{
		___moveVertical_21 = value;
		Il2CppCodeGenWriteBarrier((&___moveVertical_21), value);
	}

	inline static int32_t get_offset_of_moveUpDown_22() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___moveUpDown_22)); }
	inline String_t* get_moveUpDown_22() const { return ___moveUpDown_22; }
	inline String_t** get_address_of_moveUpDown_22() { return &___moveUpDown_22; }
	inline void set_moveUpDown_22(String_t* value)
	{
		___moveUpDown_22 = value;
		Il2CppCodeGenWriteBarrier((&___moveUpDown_22), value);
	}

	inline static int32_t get_offset_of_lookHorizontal_23() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___lookHorizontal_23)); }
	inline String_t* get_lookHorizontal_23() const { return ___lookHorizontal_23; }
	inline String_t** get_address_of_lookHorizontal_23() { return &___lookHorizontal_23; }
	inline void set_lookHorizontal_23(String_t* value)
	{
		___lookHorizontal_23 = value;
		Il2CppCodeGenWriteBarrier((&___lookHorizontal_23), value);
	}

	inline static int32_t get_offset_of_lookVertical_24() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___lookVertical_24)); }
	inline String_t* get_lookVertical_24() const { return ___lookVertical_24; }
	inline String_t** get_address_of_lookVertical_24() { return &___lookVertical_24; }
	inline void set_lookVertical_24(String_t* value)
	{
		___lookVertical_24 = value;
		Il2CppCodeGenWriteBarrier((&___lookVertical_24), value);
	}

	inline static int32_t get_offset_of_simulateEyePosition_25() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___simulateEyePosition_25)); }
	inline bool get_simulateEyePosition_25() const { return ___simulateEyePosition_25; }
	inline bool* get_address_of_simulateEyePosition_25() { return &___simulateEyePosition_25; }
	inline void set_simulateEyePosition_25(bool value)
	{
		___simulateEyePosition_25 = value;
	}

	inline static int32_t get_offset_of_defaultHandSimulationMode_26() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___defaultHandSimulationMode_26)); }
	inline int32_t get_defaultHandSimulationMode_26() const { return ___defaultHandSimulationMode_26; }
	inline int32_t* get_address_of_defaultHandSimulationMode_26() { return &___defaultHandSimulationMode_26; }
	inline void set_defaultHandSimulationMode_26(int32_t value)
	{
		___defaultHandSimulationMode_26 = value;
	}

	inline static int32_t get_offset_of_toggleLeftHandKey_27() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___toggleLeftHandKey_27)); }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  get_toggleLeftHandKey_27() const { return ___toggleLeftHandKey_27; }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * get_address_of_toggleLeftHandKey_27() { return &___toggleLeftHandKey_27; }
	inline void set_toggleLeftHandKey_27(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  value)
	{
		___toggleLeftHandKey_27 = value;
	}

	inline static int32_t get_offset_of_toggleRightHandKey_28() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___toggleRightHandKey_28)); }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  get_toggleRightHandKey_28() const { return ___toggleRightHandKey_28; }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * get_address_of_toggleRightHandKey_28() { return &___toggleRightHandKey_28; }
	inline void set_toggleRightHandKey_28(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  value)
	{
		___toggleRightHandKey_28 = value;
	}

	inline static int32_t get_offset_of_handHideTimeout_29() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___handHideTimeout_29)); }
	inline float get_handHideTimeout_29() const { return ___handHideTimeout_29; }
	inline float* get_address_of_handHideTimeout_29() { return &___handHideTimeout_29; }
	inline void set_handHideTimeout_29(float value)
	{
		___handHideTimeout_29 = value;
	}

	inline static int32_t get_offset_of_leftHandManipulationKey_30() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___leftHandManipulationKey_30)); }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  get_leftHandManipulationKey_30() const { return ___leftHandManipulationKey_30; }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * get_address_of_leftHandManipulationKey_30() { return &___leftHandManipulationKey_30; }
	inline void set_leftHandManipulationKey_30(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  value)
	{
		___leftHandManipulationKey_30 = value;
	}

	inline static int32_t get_offset_of_rightHandManipulationKey_31() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___rightHandManipulationKey_31)); }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  get_rightHandManipulationKey_31() const { return ___rightHandManipulationKey_31; }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * get_address_of_rightHandManipulationKey_31() { return &___rightHandManipulationKey_31; }
	inline void set_rightHandManipulationKey_31(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  value)
	{
		___rightHandManipulationKey_31 = value;
	}

	inline static int32_t get_offset_of_mouseHandRotationSpeed_32() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___mouseHandRotationSpeed_32)); }
	inline float get_mouseHandRotationSpeed_32() const { return ___mouseHandRotationSpeed_32; }
	inline float* get_address_of_mouseHandRotationSpeed_32() { return &___mouseHandRotationSpeed_32; }
	inline void set_mouseHandRotationSpeed_32(float value)
	{
		___mouseHandRotationSpeed_32 = value;
	}

	inline static int32_t get_offset_of_handRotateButton_33() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___handRotateButton_33)); }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  get_handRotateButton_33() const { return ___handRotateButton_33; }
	inline KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * get_address_of_handRotateButton_33() { return &___handRotateButton_33; }
	inline void set_handRotateButton_33(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  value)
	{
		___handRotateButton_33 = value;
	}

	inline static int32_t get_offset_of_defaultHandGesture_34() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___defaultHandGesture_34)); }
	inline int32_t get_defaultHandGesture_34() const { return ___defaultHandGesture_34; }
	inline int32_t* get_address_of_defaultHandGesture_34() { return &___defaultHandGesture_34; }
	inline void set_defaultHandGesture_34(int32_t value)
	{
		___defaultHandGesture_34 = value;
	}

	inline static int32_t get_offset_of_leftMouseHandGesture_35() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___leftMouseHandGesture_35)); }
	inline int32_t get_leftMouseHandGesture_35() const { return ___leftMouseHandGesture_35; }
	inline int32_t* get_address_of_leftMouseHandGesture_35() { return &___leftMouseHandGesture_35; }
	inline void set_leftMouseHandGesture_35(int32_t value)
	{
		___leftMouseHandGesture_35 = value;
	}

	inline static int32_t get_offset_of_middleMouseHandGesture_36() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___middleMouseHandGesture_36)); }
	inline int32_t get_middleMouseHandGesture_36() const { return ___middleMouseHandGesture_36; }
	inline int32_t* get_address_of_middleMouseHandGesture_36() { return &___middleMouseHandGesture_36; }
	inline void set_middleMouseHandGesture_36(int32_t value)
	{
		___middleMouseHandGesture_36 = value;
	}

	inline static int32_t get_offset_of_rightMouseHandGesture_37() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___rightMouseHandGesture_37)); }
	inline int32_t get_rightMouseHandGesture_37() const { return ___rightMouseHandGesture_37; }
	inline int32_t* get_address_of_rightMouseHandGesture_37() { return &___rightMouseHandGesture_37; }
	inline void set_rightMouseHandGesture_37(int32_t value)
	{
		___rightMouseHandGesture_37 = value;
	}

	inline static int32_t get_offset_of_handGestureAnimationSpeed_38() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___handGestureAnimationSpeed_38)); }
	inline float get_handGestureAnimationSpeed_38() const { return ___handGestureAnimationSpeed_38; }
	inline float* get_address_of_handGestureAnimationSpeed_38() { return &___handGestureAnimationSpeed_38; }
	inline void set_handGestureAnimationSpeed_38(float value)
	{
		___handGestureAnimationSpeed_38 = value;
	}

	inline static int32_t get_offset_of_holdStartDuration_39() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___holdStartDuration_39)); }
	inline float get_holdStartDuration_39() const { return ___holdStartDuration_39; }
	inline float* get_address_of_holdStartDuration_39() { return &___holdStartDuration_39; }
	inline void set_holdStartDuration_39(float value)
	{
		___holdStartDuration_39 = value;
	}

	inline static int32_t get_offset_of_navigationStartThreshold_40() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___navigationStartThreshold_40)); }
	inline float get_navigationStartThreshold_40() const { return ___navigationStartThreshold_40; }
	inline float* get_address_of_navigationStartThreshold_40() { return &___navigationStartThreshold_40; }
	inline void set_navigationStartThreshold_40(float value)
	{
		___navigationStartThreshold_40 = value;
	}

	inline static int32_t get_offset_of_defaultHandDistance_41() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___defaultHandDistance_41)); }
	inline float get_defaultHandDistance_41() const { return ___defaultHandDistance_41; }
	inline float* get_address_of_defaultHandDistance_41() { return &___defaultHandDistance_41; }
	inline void set_defaultHandDistance_41(float value)
	{
		___defaultHandDistance_41 = value;
	}

	inline static int32_t get_offset_of_handDepthMultiplier_42() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___handDepthMultiplier_42)); }
	inline float get_handDepthMultiplier_42() const { return ___handDepthMultiplier_42; }
	inline float* get_address_of_handDepthMultiplier_42() { return &___handDepthMultiplier_42; }
	inline void set_handDepthMultiplier_42(float value)
	{
		___handDepthMultiplier_42 = value;
	}

	inline static int32_t get_offset_of_handJitterAmount_43() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D, ___handJitterAmount_43)); }
	inline float get_handJitterAmount_43() const { return ___handJitterAmount_43; }
	inline float* get_address_of_handJitterAmount_43() { return &___handJitterAmount_43; }
	inline void set_handJitterAmount_43(float value)
	{
		___handJitterAmount_43 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYINPUTSIMULATIONPROFILE_T8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D_H
#ifndef MIXEDREALITYINPUTSYSTEMPROFILE_TAA40D456DE1359305601539F80E0D8CDFEEE9519_H
#define MIXEDREALITYINPUTSYSTEMPROFILE_TAA40D456DE1359305601539F80E0D8CDFEEE9519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct  MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519  : public BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_t114F45E0D1711DE51FBE730E3B535CBB6BBCB101* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_tD2505A955DD8A4DEC1BD0FF44D66E2C35CE63C34 * ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::raycastProviderType
	SystemType_tD2505A955DD8A4DEC1BD0FF44D66E2C35CE63C34 * ___raycastProviderType_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusQueryBufferSize
	int32_t ___focusQueryBufferSize_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_tC928D9B6030EF5635492EFE45AF6E21792B488D5 * ___inputActionsProfile_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_t6A800A4673BEBAED284A7E5ECC05EBB823796D11 * ___inputActionRulesProfile_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_tB04A2CFD93E4726CDCB844258C263F173A52BB79 * ___pointerProfile_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * ___gesturesProfile_13;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * ___supportedVoiceCultures_14;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_tB940D9F8A0E138A133173373CAA5286E9E529145 * ___speechCommandsProfile_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_t8736C6B150359F678C4A79E823DCC31B4F2C5C88 * ___controllerMappingProfile_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_tD10B60A143D7921A5306061F2FE3877956FC6F5F * ___controllerVisualizationProfile_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_tD5F6EF96CF5972438F574FEA04AEAC066382ACE1 * ___handTrackingProfile_19;

public:
	inline static int32_t get_offset_of_dataProviderConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___dataProviderConfigurations_5)); }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t114F45E0D1711DE51FBE730E3B535CBB6BBCB101* get_dataProviderConfigurations_5() const { return ___dataProviderConfigurations_5; }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t114F45E0D1711DE51FBE730E3B535CBB6BBCB101** get_address_of_dataProviderConfigurations_5() { return &___dataProviderConfigurations_5; }
	inline void set_dataProviderConfigurations_5(MixedRealityInputDataProviderConfigurationU5BU5D_t114F45E0D1711DE51FBE730E3B535CBB6BBCB101* value)
	{
		___dataProviderConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataProviderConfigurations_5), value);
	}

	inline static int32_t get_offset_of_focusProviderType_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___focusProviderType_6)); }
	inline SystemType_tD2505A955DD8A4DEC1BD0FF44D66E2C35CE63C34 * get_focusProviderType_6() const { return ___focusProviderType_6; }
	inline SystemType_tD2505A955DD8A4DEC1BD0FF44D66E2C35CE63C34 ** get_address_of_focusProviderType_6() { return &___focusProviderType_6; }
	inline void set_focusProviderType_6(SystemType_tD2505A955DD8A4DEC1BD0FF44D66E2C35CE63C34 * value)
	{
		___focusProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((&___focusProviderType_6), value);
	}

	inline static int32_t get_offset_of_raycastProviderType_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___raycastProviderType_7)); }
	inline SystemType_tD2505A955DD8A4DEC1BD0FF44D66E2C35CE63C34 * get_raycastProviderType_7() const { return ___raycastProviderType_7; }
	inline SystemType_tD2505A955DD8A4DEC1BD0FF44D66E2C35CE63C34 ** get_address_of_raycastProviderType_7() { return &___raycastProviderType_7; }
	inline void set_raycastProviderType_7(SystemType_tD2505A955DD8A4DEC1BD0FF44D66E2C35CE63C34 * value)
	{
		___raycastProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((&___raycastProviderType_7), value);
	}

	inline static int32_t get_offset_of_focusQueryBufferSize_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___focusQueryBufferSize_8)); }
	inline int32_t get_focusQueryBufferSize_8() const { return ___focusQueryBufferSize_8; }
	inline int32_t* get_address_of_focusQueryBufferSize_8() { return &___focusQueryBufferSize_8; }
	inline void set_focusQueryBufferSize_8(int32_t value)
	{
		___focusQueryBufferSize_8 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___focusIndividualCompoundCollider_9)); }
	inline bool get_focusIndividualCompoundCollider_9() const { return ___focusIndividualCompoundCollider_9; }
	inline bool* get_address_of_focusIndividualCompoundCollider_9() { return &___focusIndividualCompoundCollider_9; }
	inline void set_focusIndividualCompoundCollider_9(bool value)
	{
		___focusIndividualCompoundCollider_9 = value;
	}

	inline static int32_t get_offset_of_inputActionsProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___inputActionsProfile_10)); }
	inline MixedRealityInputActionsProfile_tC928D9B6030EF5635492EFE45AF6E21792B488D5 * get_inputActionsProfile_10() const { return ___inputActionsProfile_10; }
	inline MixedRealityInputActionsProfile_tC928D9B6030EF5635492EFE45AF6E21792B488D5 ** get_address_of_inputActionsProfile_10() { return &___inputActionsProfile_10; }
	inline void set_inputActionsProfile_10(MixedRealityInputActionsProfile_tC928D9B6030EF5635492EFE45AF6E21792B488D5 * value)
	{
		___inputActionsProfile_10 = value;
		Il2CppCodeGenWriteBarrier((&___inputActionsProfile_10), value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___inputActionRulesProfile_11)); }
	inline MixedRealityInputActionRulesProfile_t6A800A4673BEBAED284A7E5ECC05EBB823796D11 * get_inputActionRulesProfile_11() const { return ___inputActionRulesProfile_11; }
	inline MixedRealityInputActionRulesProfile_t6A800A4673BEBAED284A7E5ECC05EBB823796D11 ** get_address_of_inputActionRulesProfile_11() { return &___inputActionRulesProfile_11; }
	inline void set_inputActionRulesProfile_11(MixedRealityInputActionRulesProfile_t6A800A4673BEBAED284A7E5ECC05EBB823796D11 * value)
	{
		___inputActionRulesProfile_11 = value;
		Il2CppCodeGenWriteBarrier((&___inputActionRulesProfile_11), value);
	}

	inline static int32_t get_offset_of_pointerProfile_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___pointerProfile_12)); }
	inline MixedRealityPointerProfile_tB04A2CFD93E4726CDCB844258C263F173A52BB79 * get_pointerProfile_12() const { return ___pointerProfile_12; }
	inline MixedRealityPointerProfile_tB04A2CFD93E4726CDCB844258C263F173A52BB79 ** get_address_of_pointerProfile_12() { return &___pointerProfile_12; }
	inline void set_pointerProfile_12(MixedRealityPointerProfile_tB04A2CFD93E4726CDCB844258C263F173A52BB79 * value)
	{
		___pointerProfile_12 = value;
		Il2CppCodeGenWriteBarrier((&___pointerProfile_12), value);
	}

	inline static int32_t get_offset_of_gesturesProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___gesturesProfile_13)); }
	inline MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * get_gesturesProfile_13() const { return ___gesturesProfile_13; }
	inline MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 ** get_address_of_gesturesProfile_13() { return &___gesturesProfile_13; }
	inline void set_gesturesProfile_13(MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * value)
	{
		___gesturesProfile_13 = value;
		Il2CppCodeGenWriteBarrier((&___gesturesProfile_13), value);
	}

	inline static int32_t get_offset_of_supportedVoiceCultures_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___supportedVoiceCultures_14)); }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * get_supportedVoiceCultures_14() const { return ___supportedVoiceCultures_14; }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 ** get_address_of_supportedVoiceCultures_14() { return &___supportedVoiceCultures_14; }
	inline void set_supportedVoiceCultures_14(List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * value)
	{
		___supportedVoiceCultures_14 = value;
		Il2CppCodeGenWriteBarrier((&___supportedVoiceCultures_14), value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___speechCommandsProfile_15)); }
	inline MixedRealitySpeechCommandsProfile_tB940D9F8A0E138A133173373CAA5286E9E529145 * get_speechCommandsProfile_15() const { return ___speechCommandsProfile_15; }
	inline MixedRealitySpeechCommandsProfile_tB940D9F8A0E138A133173373CAA5286E9E529145 ** get_address_of_speechCommandsProfile_15() { return &___speechCommandsProfile_15; }
	inline void set_speechCommandsProfile_15(MixedRealitySpeechCommandsProfile_tB940D9F8A0E138A133173373CAA5286E9E529145 * value)
	{
		___speechCommandsProfile_15 = value;
		Il2CppCodeGenWriteBarrier((&___speechCommandsProfile_15), value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___enableControllerMapping_16)); }
	inline bool get_enableControllerMapping_16() const { return ___enableControllerMapping_16; }
	inline bool* get_address_of_enableControllerMapping_16() { return &___enableControllerMapping_16; }
	inline void set_enableControllerMapping_16(bool value)
	{
		___enableControllerMapping_16 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___controllerMappingProfile_17)); }
	inline MixedRealityControllerMappingProfile_t8736C6B150359F678C4A79E823DCC31B4F2C5C88 * get_controllerMappingProfile_17() const { return ___controllerMappingProfile_17; }
	inline MixedRealityControllerMappingProfile_t8736C6B150359F678C4A79E823DCC31B4F2C5C88 ** get_address_of_controllerMappingProfile_17() { return &___controllerMappingProfile_17; }
	inline void set_controllerMappingProfile_17(MixedRealityControllerMappingProfile_t8736C6B150359F678C4A79E823DCC31B4F2C5C88 * value)
	{
		___controllerMappingProfile_17 = value;
		Il2CppCodeGenWriteBarrier((&___controllerMappingProfile_17), value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___controllerVisualizationProfile_18)); }
	inline MixedRealityControllerVisualizationProfile_tD10B60A143D7921A5306061F2FE3877956FC6F5F * get_controllerVisualizationProfile_18() const { return ___controllerVisualizationProfile_18; }
	inline MixedRealityControllerVisualizationProfile_tD10B60A143D7921A5306061F2FE3877956FC6F5F ** get_address_of_controllerVisualizationProfile_18() { return &___controllerVisualizationProfile_18; }
	inline void set_controllerVisualizationProfile_18(MixedRealityControllerVisualizationProfile_tD10B60A143D7921A5306061F2FE3877956FC6F5F * value)
	{
		___controllerVisualizationProfile_18 = value;
		Il2CppCodeGenWriteBarrier((&___controllerVisualizationProfile_18), value);
	}

	inline static int32_t get_offset_of_handTrackingProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519, ___handTrackingProfile_19)); }
	inline MixedRealityHandTrackingProfile_tD5F6EF96CF5972438F574FEA04AEAC066382ACE1 * get_handTrackingProfile_19() const { return ___handTrackingProfile_19; }
	inline MixedRealityHandTrackingProfile_tD5F6EF96CF5972438F574FEA04AEAC066382ACE1 ** get_address_of_handTrackingProfile_19() { return &___handTrackingProfile_19; }
	inline void set_handTrackingProfile_19(MixedRealityHandTrackingProfile_tD5F6EF96CF5972438F574FEA04AEAC066382ACE1 * value)
	{
		___handTrackingProfile_19 = value;
		Il2CppCodeGenWriteBarrier((&___handTrackingProfile_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYINPUTSYSTEMPROFILE_TAA40D456DE1359305601539F80E0D8CDFEEE9519_H
#ifndef SIMULATEDHAND_T934181E248423C01BA0B8CD9A13DFA28C10D3FC4_H
#define SIMULATEDHAND_T934181E248423C01BA0B8CD9A13DFA28C10D3FC4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedHand
struct  SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4  : public BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.SimulatedHand::jointPoses
	Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * ___jointPoses_23;

public:
	inline static int32_t get_offset_of_jointPoses_23() { return static_cast<int32_t>(offsetof(SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4, ___jointPoses_23)); }
	inline Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * get_jointPoses_23() const { return ___jointPoses_23; }
	inline Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A ** get_address_of_jointPoses_23() { return &___jointPoses_23; }
	inline void set_jointPoses_23(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * value)
	{
		___jointPoses_23 = value;
		Il2CppCodeGenWriteBarrier((&___jointPoses_23), value);
	}
};

struct SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHand::jointCount
	int32_t ___jointCount_22;

public:
	inline static int32_t get_offset_of_jointCount_22() { return static_cast<int32_t>(offsetof(SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4_StaticFields, ___jointCount_22)); }
	inline int32_t get_jointCount_22() const { return ___jointCount_22; }
	inline int32_t* get_address_of_jointCount_22() { return &___jointCount_22; }
	inline void set_jointCount_22(int32_t value)
	{
		___jointCount_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDHAND_T934181E248423C01BA0B8CD9A13DFA28C10D3FC4_H
#ifndef CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#define CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifndef SIMULATEDARTICULATEDHAND_T54A2C821C2A4EC58371EE3114DF80BF4FA489EA6_H
#define SIMULATEDARTICULATEDHAND_T54A2C821C2A4EC58371EE3114DF80BF4FA489EA6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand
struct  SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6  : public SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentPointerPosition_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___currentPointerRotation_25;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::lastPointerPose
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  ___lastPointerPose_26;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerPose
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  ___currentPointerPose_27;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentIndexPose
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  ___currentIndexPose_28;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentGripPose
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  ___currentGripPose_29;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::lastGripPose
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  ___lastGripPose_30;

public:
	inline static int32_t get_offset_of_currentPointerPosition_24() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6, ___currentPointerPosition_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentPointerPosition_24() const { return ___currentPointerPosition_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentPointerPosition_24() { return &___currentPointerPosition_24; }
	inline void set_currentPointerPosition_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentPointerPosition_24 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_25() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6, ___currentPointerRotation_25)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_currentPointerRotation_25() const { return ___currentPointerRotation_25; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_currentPointerRotation_25() { return &___currentPointerRotation_25; }
	inline void set_currentPointerRotation_25(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___currentPointerRotation_25 = value;
	}

	inline static int32_t get_offset_of_lastPointerPose_26() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6, ___lastPointerPose_26)); }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  get_lastPointerPose_26() const { return ___lastPointerPose_26; }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * get_address_of_lastPointerPose_26() { return &___lastPointerPose_26; }
	inline void set_lastPointerPose_26(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  value)
	{
		___lastPointerPose_26 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_27() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6, ___currentPointerPose_27)); }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  get_currentPointerPose_27() const { return ___currentPointerPose_27; }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * get_address_of_currentPointerPose_27() { return &___currentPointerPose_27; }
	inline void set_currentPointerPose_27(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  value)
	{
		___currentPointerPose_27 = value;
	}

	inline static int32_t get_offset_of_currentIndexPose_28() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6, ___currentIndexPose_28)); }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  get_currentIndexPose_28() const { return ___currentIndexPose_28; }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * get_address_of_currentIndexPose_28() { return &___currentIndexPose_28; }
	inline void set_currentIndexPose_28(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  value)
	{
		___currentIndexPose_28 = value;
	}

	inline static int32_t get_offset_of_currentGripPose_29() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6, ___currentGripPose_29)); }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  get_currentGripPose_29() const { return ___currentGripPose_29; }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * get_address_of_currentGripPose_29() { return &___currentGripPose_29; }
	inline void set_currentGripPose_29(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  value)
	{
		___currentGripPose_29 = value;
	}

	inline static int32_t get_offset_of_lastGripPose_30() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6, ___lastGripPose_30)); }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  get_lastGripPose_30() const { return ___lastGripPose_30; }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * get_address_of_lastGripPose_30() { return &___lastGripPose_30; }
	inline void set_lastGripPose_30(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  value)
	{
		___lastGripPose_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDARTICULATEDHAND_T54A2C821C2A4EC58371EE3114DF80BF4FA489EA6_H
#ifndef SIMULATEDGESTUREHAND_T4D432F64300AF0614A6300E9891704633981C4D2_H
#define SIMULATEDGESTUREHAND_T4D432F64300AF0614A6300E9891704633981C4D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand
struct  SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2  : public SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::initializedFromProfile
	bool ___initializedFromProfile_24;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdAction
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___holdAction_25;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationAction
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___navigationAction_26;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::manipulationAction
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___manipulationAction_27;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::selectAction
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___selectAction_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::useRailsNavigation
	bool ___useRailsNavigation_29;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdStartDuration
	float ___holdStartDuration_30;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationStartThreshold
	float ___navigationStartThreshold_31;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::SelectDownStartTime
	float ___SelectDownStartTime_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdInProgress
	bool ___holdInProgress_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::manipulationInProgress
	bool ___manipulationInProgress_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationInProgress
	bool ___navigationInProgress_35;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentRailsUsed
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentRailsUsed_36;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentPosition_37;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::cumulativeDelta
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta_38;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentGripPose
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  ___currentGripPose_39;

public:
	inline static int32_t get_offset_of_initializedFromProfile_24() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___initializedFromProfile_24)); }
	inline bool get_initializedFromProfile_24() const { return ___initializedFromProfile_24; }
	inline bool* get_address_of_initializedFromProfile_24() { return &___initializedFromProfile_24; }
	inline void set_initializedFromProfile_24(bool value)
	{
		___initializedFromProfile_24 = value;
	}

	inline static int32_t get_offset_of_holdAction_25() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___holdAction_25)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_holdAction_25() const { return ___holdAction_25; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_holdAction_25() { return &___holdAction_25; }
	inline void set_holdAction_25(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___holdAction_25 = value;
	}

	inline static int32_t get_offset_of_navigationAction_26() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___navigationAction_26)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_navigationAction_26() const { return ___navigationAction_26; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_navigationAction_26() { return &___navigationAction_26; }
	inline void set_navigationAction_26(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___navigationAction_26 = value;
	}

	inline static int32_t get_offset_of_manipulationAction_27() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___manipulationAction_27)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_manipulationAction_27() const { return ___manipulationAction_27; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_manipulationAction_27() { return &___manipulationAction_27; }
	inline void set_manipulationAction_27(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___manipulationAction_27 = value;
	}

	inline static int32_t get_offset_of_selectAction_28() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___selectAction_28)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_selectAction_28() const { return ___selectAction_28; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_selectAction_28() { return &___selectAction_28; }
	inline void set_selectAction_28(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___selectAction_28 = value;
	}

	inline static int32_t get_offset_of_useRailsNavigation_29() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___useRailsNavigation_29)); }
	inline bool get_useRailsNavigation_29() const { return ___useRailsNavigation_29; }
	inline bool* get_address_of_useRailsNavigation_29() { return &___useRailsNavigation_29; }
	inline void set_useRailsNavigation_29(bool value)
	{
		___useRailsNavigation_29 = value;
	}

	inline static int32_t get_offset_of_holdStartDuration_30() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___holdStartDuration_30)); }
	inline float get_holdStartDuration_30() const { return ___holdStartDuration_30; }
	inline float* get_address_of_holdStartDuration_30() { return &___holdStartDuration_30; }
	inline void set_holdStartDuration_30(float value)
	{
		___holdStartDuration_30 = value;
	}

	inline static int32_t get_offset_of_navigationStartThreshold_31() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___navigationStartThreshold_31)); }
	inline float get_navigationStartThreshold_31() const { return ___navigationStartThreshold_31; }
	inline float* get_address_of_navigationStartThreshold_31() { return &___navigationStartThreshold_31; }
	inline void set_navigationStartThreshold_31(float value)
	{
		___navigationStartThreshold_31 = value;
	}

	inline static int32_t get_offset_of_SelectDownStartTime_32() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___SelectDownStartTime_32)); }
	inline float get_SelectDownStartTime_32() const { return ___SelectDownStartTime_32; }
	inline float* get_address_of_SelectDownStartTime_32() { return &___SelectDownStartTime_32; }
	inline void set_SelectDownStartTime_32(float value)
	{
		___SelectDownStartTime_32 = value;
	}

	inline static int32_t get_offset_of_holdInProgress_33() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___holdInProgress_33)); }
	inline bool get_holdInProgress_33() const { return ___holdInProgress_33; }
	inline bool* get_address_of_holdInProgress_33() { return &___holdInProgress_33; }
	inline void set_holdInProgress_33(bool value)
	{
		___holdInProgress_33 = value;
	}

	inline static int32_t get_offset_of_manipulationInProgress_34() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___manipulationInProgress_34)); }
	inline bool get_manipulationInProgress_34() const { return ___manipulationInProgress_34; }
	inline bool* get_address_of_manipulationInProgress_34() { return &___manipulationInProgress_34; }
	inline void set_manipulationInProgress_34(bool value)
	{
		___manipulationInProgress_34 = value;
	}

	inline static int32_t get_offset_of_navigationInProgress_35() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___navigationInProgress_35)); }
	inline bool get_navigationInProgress_35() const { return ___navigationInProgress_35; }
	inline bool* get_address_of_navigationInProgress_35() { return &___navigationInProgress_35; }
	inline void set_navigationInProgress_35(bool value)
	{
		___navigationInProgress_35 = value;
	}

	inline static int32_t get_offset_of_currentRailsUsed_36() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___currentRailsUsed_36)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentRailsUsed_36() const { return ___currentRailsUsed_36; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentRailsUsed_36() { return &___currentRailsUsed_36; }
	inline void set_currentRailsUsed_36(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentRailsUsed_36 = value;
	}

	inline static int32_t get_offset_of_currentPosition_37() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___currentPosition_37)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentPosition_37() const { return ___currentPosition_37; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentPosition_37() { return &___currentPosition_37; }
	inline void set_currentPosition_37(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentPosition_37 = value;
	}

	inline static int32_t get_offset_of_cumulativeDelta_38() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___cumulativeDelta_38)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_cumulativeDelta_38() const { return ___cumulativeDelta_38; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_cumulativeDelta_38() { return &___cumulativeDelta_38; }
	inline void set_cumulativeDelta_38(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___cumulativeDelta_38 = value;
	}

	inline static int32_t get_offset_of_currentGripPose_39() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2, ___currentGripPose_39)); }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  get_currentGripPose_39() const { return ___currentGripPose_39; }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * get_address_of_currentGripPose_39() { return &___currentGripPose_39; }
	inline void set_currentGripPose_39(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  value)
	{
		___currentGripPose_39 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDGESTUREHAND_T4D432F64300AF0614A6300E9891704633981C4D2_H
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton[]
struct MouseButtonU5BU5D_t0FE4115C5814F05484D3C289D86D95108FC02E44  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * m_Items[1];

public:
	inline MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_t9681541389FDD3AD37D8A632D57DEC7E79D45F1C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D  m_Items[1];

public:
	inline MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  m_Items[1];

public:
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  m_Items[1];

public:
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_m95993AFCBE79972A2D915BBD691A9C7268107BA7_gshared (Action_2_t211F8AF4611284BBE3D0590121A0E0BF9FA7E614 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Int32>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m0D4C0925C5B10E919BC61BA0898B5ED5D188F8F2_gshared (Action_2_t211F8AF4611284BBE3D0590121A0E0BF9FA7E614 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Tuple`2<!!0,!!1> System.Tuple::Create<System.Int32Enum,System.Int32>(!!0,!!1)
extern "C" IL2CPP_METHOD_ATTR Tuple_2_t6013D918BF7AB88AC1206529AAB17213208F33F0 * Tuple_Create_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4217E2530462EE46C5DCEF9F21AED4F307000848_gshared (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC87D8EECD8406043786CC95870458389CEF82CDF_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  Dictionary_2_get_Item_m08F7CFD8E25D6F3616E028BA01BBEEAD16FF69A7_gshared (Dictionary_2_t585E2B53F5516546A5E1EFBE416E08134AB71DDE * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFA856147157781C72AF5A8EC028089DB2C91B2EC_gshared (Dictionary_2_t585E2B53F5516546A5E1EFBE416E08134AB71DDE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m59EEFD09DFC4F8B762E4B054D80F77336F345978_gshared (Dictionary_2_t585E2B53F5516546A5E1EFBE416E08134AB71DDE * __this, int32_t p0, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m34B463BBCE1908F6BA8609651D65893389F8A83B_gshared (Dictionary_2_t585E2B53F5516546A5E1EFBE416E08134AB71DDE * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m31EE710652E9A311E2DB0B70536450AD0379A04B_gshared (Dictionary_2_t585E2B53F5516546A5E1EFBE416E08134AB71DDE * __this, int32_t p0, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3AD8D5E33D468EABBB1D0DB9E77EF4C1BC250B7A_gshared (Dictionary_2_t585E2B53F5516546A5E1EFBE416E08134AB71DDE * __this, int32_t p0, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B_gshared (RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C (Type_t * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding/<>c__DisplayClass5_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m39FD235E1E01F862D185A562F6EBFF961F881E37 (U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mBA3577D425F3BB097B88EEACDBB915F2EBB42095 (Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E *, const RuntimeMethod*))Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>::.ctor()
inline void Dictionary_2__ctor_m39D08970E6E3801A3EF862979C1E974F5639C32F (Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mDD08B294B545A68AB23E648F9787D2D5B186C9EE (Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m95993AFCBE79972A2D915BBD691A9C7268107BA7_gshared)(__this, p0, p1, method);
}
// System.Void System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>::Invoke(!0,!1)
inline void Action_2_Invoke_m1A48D91F6BAF38443ED8ECAADD549C3F90896332 (Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF *, int32_t, int32_t, const RuntimeMethod*))Action_2_Invoke_m0D4C0925C5B10E919BC61BA0898B5ED5D188F8F2_gshared)(__this, p0, p1, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType Microsoft.MixedReality.Toolkit.Input.KeyBinding::get_BindingType()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyBinding_get_BindingType_m3A2931C6A6406352E443A134EB9F9B7B2D59CEBE (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.KeyBinding::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* KeyBinding_ToString_m2B6A752FA929831BCD916CD99A1783B868881A26 (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetKeyCode(UnityEngine.KeyCode&)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetKeyCode_mC7C2A32072E7661AC275F2E2402E307AC4BAA317 (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * __this, int32_t* ___keyCode0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_m386EA990BA69456FD493E9DFE81290BCE26FE93F (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * __this, int32_t* ___mouseButton0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding/MouseButton&)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_m6F6C52DF0210ABCA26E78873CC299C7C7A537CEA (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * __this, int32_t* ___mouseButton0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(System.Int32)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  KeyBinding_FromMouseButton_m565F5203DA8F304DB01265F00953BC1B579F32F8 (int32_t ___mouseButton0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Tuple`2<!!0,!!1> System.Tuple::Create<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>(!!0,!!1)
inline Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2 * Tuple_Create_TisKeyType_t0870CDF08250D6779039AF63A65F5CD11052EF51_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m5C9E5A4B0345FC661870F00CA2C81C8DA7BE8D56 (int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2 * (*) (int32_t, int32_t, const RuntimeMethod*))Tuple_Create_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4217E2530462EE46C5DCEF9F21AED4F307000848_gshared)(p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m6770CFC40363E5FFD286898B08323B8CE39774D6 (Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5 * __this, int32_t p0, Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5 *, int32_t, Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2 *, const RuntimeMethod*))Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m88C7F10F0CE2D70396D9C8D3F9C7DA04CB614B91 (Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E * __this, Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2 * p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E *, Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2 *, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mC87D8EECD8406043786CC95870458389CEF82CDF_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mFA83B0C0BABD3113D1AAB38FBB953C91EA7FFA30 (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_mBC5947EA49ED797F0DB1830BFC13AF6514B765FD (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m726EDCD35F8DECF774810AB1E9ED590B85DB10F1 (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m87C9C3E0877717675108A80EC663E60AD4D60D7C (int32_t p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding/MouseButton)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  KeyBinding_FromMouseButton_m457A89AD98A2DCBC3CB9E9DF4682F8A144C84210 (int32_t ___mouseButton0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromKey(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  KeyBinding_FromKey_m37C8112905FD1765A9DFEBB4A28219B13F218553 (int32_t ___keyCode0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_m545BB521B981F3B488AA25CDEC02E2E1649F2BF3 (BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
extern "C" IL2CPP_METHOD_ATTR MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  MixedRealityPose_get_ZeroIdentity_m164F0FB052043047ECAB79FA4BD81178EE0DB10C (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
extern "C" IL2CPP_METHOD_ATTR void SimulatedHand__ctor_mEE94D186420423261F5C4515CD1473E1CCB0D496 (SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* ___interactions3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_None()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::.ctor(System.UInt32,System.String,Microsoft.MixedReality.Toolkit.Utilities.AxisType,Microsoft.MixedReality.Toolkit.Input.DeviceInputType,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.KeyCode,System.String,System.String,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping__ctor_m597D2A652DDEB4709A1A739C441364D5C2271EFB (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * __this, uint32_t p0, String_t* p1, int32_t p2, int32_t p3, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  p4, int32_t p5, String_t* p6, String_t* p7, bool p8, bool p9, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::get_Item(!0)
inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  Dictionary_2_get_Item_mE48F08682093E8FBE18CE8FDD606E0AB2DA12A29 (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  (*) (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m08F7CFD8E25D6F3616E028BA01BBEEAD16FF69A7_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mF558364148A015EF88E081BB4947F1EB60CEED20 (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsRotationAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_m18DF7D4DED584DE0B1B7FB58B6F29453C19E0EB3 (BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6 * __this, bool p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_mA32A7E876D894311045C6D0ED23A2B7A71475705 (BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsPositionAvailable()
extern "C" IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_mC8C77A22C080753C44AE110DDA272DD8FBB56FC6 (BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.HandRay Microsoft.MixedReality.Toolkit.Input.BaseHand::get_HandRay()
extern "C" IL2CPP_METHOD_ATTR HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847 * BaseHand_get_HandRay_m204556B6D69A753907CE8C93DE4CFE2CD6DD24F4 (BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::GetPalmNormal()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseHand_GetPalmNormal_mB864C6836AB9EF36B8BED5E0AC8145801A568E51 (BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A (BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HandRay::Update(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void HandRay_Update_m0867EADDFAC5004B2129F9C11A58D0AD7EEA4DBF (HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p2, uint8_t p3, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.HandRay::get_Ray()
extern "C" IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  HandRay_get_Ray_mE298E78314216A076E9AAB4D6C92530D5BFF0CA9 (HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m3F0AAAA01636AC918F2F8BB50B1205B8627BF367 (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m4D5AB69ECBF7FC8437BA91E1FE8519218466D945 (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::op_Inequality(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityPose_op_Inequality_mE42EDBE8D1053F6F4ED48B507773851812257095 (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  p0, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsRotationAvailable()
extern "C" IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_m723D83682C62E0C3916D7A5EA8D1573F2260AB13 (BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938 (BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07 (BaseController_tAC56635C693FC8342A7D097D517C3307444F72D6 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m211B4ADEE5BE65FE4EBFFD5A637AF63B72363597 (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_m85792C24C6CC2156EE9426C6148754AADC27B2C4 (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * __this, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_m71F642195939676EF2A093E9B70C4B9786F62DDC (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  MixedRealityInteractionMapping_get_MixedRealityInputAction_m17E18F9070908763EA75BDC25D1F4121A21D8285 (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsPinching()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsPinching_mC1C6E78D46572266C7E896E8035D5ECFDC313DC1 (SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_m7ACC537BDBD7A65C5BEE8E47DB0672F4FBBE6946 (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * __this, bool p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m7D731BA079216F5A02B66ED7CB3DC31A5E9C038D (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, p0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_GesturesProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * MixedRealityInputSystemProfile_get_GesturesProfile_m2303A8FB588ACDC47D28FE7B7AFC0EA3DF03A507 (MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[] Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::get_Gestures()
extern "C" IL2CPP_METHOD_ATTR MixedRealityGestureMappingU5BU5D_t9681541389FDD3AD37D8A632D57DEC7E79D45F1C* MixedRealityGesturesProfile_get_Gestures_m4068C89B991D470FCC6E9BDC10369E24154235A5 (MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.GestureInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::get_GestureType()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityGestureMapping_get_GestureType_m94227B8901DD16C3C76B51BE0E9378D9BC48584C (MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::get_Action()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  MixedRealityGestureMapping_get_Action_m2704A5B6EE71E4176B698DA0A94984D04D86D3C0 (MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::get_UseRailsNavigation()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityGesturesProfile_get_UseRailsNavigation_m546099EB1F46146DCCC38FC41A75AF7B48C8F69E (MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HoldStartDuration()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HoldStartDuration_m2D622230F1B0CD7316E4708AEF76EC005F72A6B9 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_NavigationStartThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_NavigationStartThreshold_mF3EE1592F556C226599C7F7C9E8F7C628665EE76 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::EnsureProfileSettings()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_EnsureProfileSettings_m4261A25FFE492BBCF2CBCF0B27584C81A9E2394D (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteSelect()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteSelect_mBEC08F8164D62AD63519811FAF378FC7ADBE4D7E (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteHold_m461E3CA914F603A9E465A057E4378EDB0DC3C3DD (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteManipulation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteManipulation_mAC59D3AE7CC32C421637FA5F6C2EA82310869312 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteNavigation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteNavigation_m6F5E8EB65A11AABEDF5BEF75CA1F2812753B60EF (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateManipulation()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateManipulation_m90F52C758B7D26F009A12DA074B6F6FCC519FB67 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigation()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigation_mC10A6736D314C28C59875709952BDE518F75011C (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelHold_m9D135EAF833702F549EDF7A9F41EBCA170353D87 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartNavigation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartNavigation_m05CFE72391C9BCEF7453E7274E5837C45D704C4D (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartManipulation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartManipulation_m74F15823346BEEE40193E2010787862FBF47580F (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartHold_m1ECE36EAFA216F734C2CB12DE1CD37AD3DD7DC60 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigationRails()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigationRails_m299766F499331684CEB2002A76AB307FC9A4961E (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_navigationDelta()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedGestureHand_get_navigationDelta_m4CBDC2BEDEB6CE39E01306012B9987BB240BC695 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_m46603BE88578C9C43DD173187E292CF93380A50C (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A *, const RuntimeMethod*))Dictionary_2__ctor_mFA856147157781C72AF5A8EC028089DB2C91B2EC_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
extern "C" IL2CPP_METHOD_ATTR void BaseHand__ctor_m93A378A33F56DC67B20EB974FFD2466ADE7D9A3B (BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8 * __this, int32_t p0, uint8_t p1, RuntimeObject* p2, MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* p3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m02BB98064775317706C9F557D3509512207541BE (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * __this, int32_t p0, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A *, int32_t, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m59EEFD09DFC4F8B762E4B054D80F77336F345978_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9049F22F4FBC49FAE3892048A03893CE895F257C (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m34B463BBCE1908F6BA8609651D65893389F8A83B_gshared)(__this, p0, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_Joints()
extern "C" IL2CPP_METHOD_ATTR MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* SimulatedHandData_get_Joints_m850D7CC0C6EF6E9FD728124AFE3081FD454250B5 (SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(!0,!1)
inline void Dictionary_2_Add_m6A2BB0894C18F943CB542B81BA8B0EE1B465DBA3 (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * __this, int32_t p0, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A *, int32_t, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 , const RuntimeMethod*))Dictionary_2_Add_m31EE710652E9A311E2DB0B70536450AD0379A04B_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m60DC2ADCA437BFFC44422052FBDC70D9FBFB5C7D (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * __this, int32_t p0, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A *, int32_t, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 , const RuntimeMethod*))Dictionary_2_set_Item_m3AD8D5E33D468EABBB1D0DB9E77EF4C1BC250B7A_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseHand::UpdateVelocity()
extern "C" IL2CPP_METHOD_ATTR void BaseHand_UpdateVelocity_mD3F090608EFC78C965C93C2452FCF18F4A943DFD (BaseHand_tADB3EE76FBE976275CF0608F6D809BAFEE53FAA8 * __this, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C (Type_t * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData/HandJointDataGenerator::Invoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[])
extern "C" IL2CPP_METHOD_ATTR void HandJointDataGenerator_Invoke_m0D7512E17F49A4A2C359726340CE4AB28C9CE3BF (HandJointDataGenerator_tEE5264C08256E586FB0B898065B029938EFE8188 * __this, MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* ___jointPoses0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * p0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B (RuntimeObject* p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B_gshared)(p0, p1, method);
}
// System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_mA81913DBCF3086B4716F692F9DB797D7DD6B7583 (RuntimeObject* p0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmRightVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmRightVector_m438EF652B2B1A958B38823F2727DF4FB7D49BEB2 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmForwardVector(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmForwardVector_m524DE861131990B95C50F244D26D3AD878476E48 (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmUpVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmUpVector_mA3CA1373514A15049EB590DC03B8FA78186A9D97 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding::.cctor()
extern "C" IL2CPP_METHOD_ATTR void KeyBinding__cctor_m65F90AD1DB0802431203040477D8C3E0B1DCC0E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBinding__cctor_m65F90AD1DB0802431203040477D8C3E0B1DCC0E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F* V_0 = NULL;
	U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597 * V_1 = NULL;
	Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF * V_2 = NULL;
	MouseButtonU5BU5D_t0FE4115C5814F05484D3C289D86D95108FC02E44* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F* V_6 = NULL;
	int32_t V_7 = 0;
	{
		// KeyCode[] KeyCodeValues = (KeyCode[])Enum.GetValues(typeof(KeyCode));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeArray * L_2 = Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C(L_1, /*hidden argument*/NULL);
		V_0 = ((KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F*)Castclass((RuntimeObject*)L_2, KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F_il2cpp_TypeInfo_var));
		// MouseButton[] MouseButtonValues = (MouseButton[])Enum.GetValues(typeof(MouseButton));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (MouseButton_tF872A67C3912D81CEB32AE892A5C9E0FE34C4FC2_0_0_0_var) };
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		RuntimeArray * L_5 = Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C(L_4, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597 * L_6 = (U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m39FD235E1E01F862D185A562F6EBFF961F881E37(L_6, /*hidden argument*/NULL);
		V_1 = L_6;
		// KeyBindingToEnumMap = new Dictionary<Tuple<KeyType, int>, int>();
		Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E * L_7 = (Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E *)il2cpp_codegen_object_new(Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBA3577D425F3BB097B88EEACDBB915F2EBB42095(L_7, /*hidden argument*/Dictionary_2__ctor_mBA3577D425F3BB097B88EEACDBB915F2EBB42095_RuntimeMethod_var);
		((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_il2cpp_TypeInfo_var))->set_KeyBindingToEnumMap_1(L_7);
		// EnumToKeyBindingMap = new Dictionary<int, Tuple<KeyType, int>>();
		Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5 * L_8 = (Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5 *)il2cpp_codegen_object_new(Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m39D08970E6E3801A3EF862979C1E974F5639C32F(L_8, /*hidden argument*/Dictionary_2__ctor_m39D08970E6E3801A3EF862979C1E974F5639C32F_RuntimeMethod_var);
		((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_il2cpp_TypeInfo_var))->set_EnumToKeyBindingMap_2(L_8);
		// List<string> names = new List<string>();
		U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597 * L_9 = V_1;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_10 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_10, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_names_0(L_10);
		// int index = 0;
		U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_index_1(0);
		// Action<KeyType, int> AddEnumValue = (bindingType, code) =>
		// {
		//     var kb = new KeyBinding() { bindingType=bindingType, code=code };
		//     names.Add(kb.ToString());
		//     EnumToKeyBindingMap[index] = Tuple.Create(bindingType, code);
		//     KeyBindingToEnumMap[Tuple.Create(bindingType, code)] = index;
		// 
		//     ++index;
		// };
		U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597 * L_12 = V_1;
		Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF * L_13 = (Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF *)il2cpp_codegen_object_new(Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF_il2cpp_TypeInfo_var);
		Action_2__ctor_mDD08B294B545A68AB23E648F9787D2D5B186C9EE(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m2462FC265A3064763975493560FAE5D7A61050FF_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mDD08B294B545A68AB23E648F9787D2D5B186C9EE_RuntimeMethod_var);
		V_2 = L_13;
		// AddEnumValue(KeyType.None, 0);
		Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF * L_14 = V_2;
		NullCheck(L_14);
		Action_2_Invoke_m1A48D91F6BAF38443ED8ECAADD549C3F90896332(L_14, 0, 0, /*hidden argument*/Action_2_Invoke_m1A48D91F6BAF38443ED8ECAADD549C3F90896332_RuntimeMethod_var);
		// foreach (MouseButton mb in MouseButtonValues)
		V_3 = ((MouseButtonU5BU5D_t0FE4115C5814F05484D3C289D86D95108FC02E44*)Castclass((RuntimeObject*)L_5, MouseButtonU5BU5D_t0FE4115C5814F05484D3C289D86D95108FC02E44_il2cpp_TypeInfo_var));
		V_4 = 0;
		goto IL_0085;
	}

IL_0070:
	{
		// foreach (MouseButton mb in MouseButtonValues)
		MouseButtonU5BU5D_t0FE4115C5814F05484D3C289D86D95108FC02E44* L_15 = V_3;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (int32_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_5 = L_18;
		// AddEnumValue(KeyType.Mouse, (int)mb);
		Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF * L_19 = V_2;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		Action_2_Invoke_m1A48D91F6BAF38443ED8ECAADD549C3F90896332(L_19, 1, L_20, /*hidden argument*/Action_2_Invoke_m1A48D91F6BAF38443ED8ECAADD549C3F90896332_RuntimeMethod_var);
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0085:
	{
		// foreach (MouseButton mb in MouseButtonValues)
		int32_t L_22 = V_4;
		MouseButtonU5BU5D_t0FE4115C5814F05484D3C289D86D95108FC02E44* L_23 = V_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_0070;
		}
	}
	{
		// foreach (KeyCode kc in KeyCodeValues)
		KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F* L_24 = V_0;
		V_6 = L_24;
		V_4 = 0;
		goto IL_00aa;
	}

IL_0094:
	{
		// foreach (KeyCode kc in KeyCodeValues)
		KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F* L_25 = V_6;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (int32_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_7 = L_28;
		// AddEnumValue(KeyType.Key, (int)kc);
		Action_2_tDB3A124F0F771DCBB780BF482858826257334BEF * L_29 = V_2;
		int32_t L_30 = V_7;
		NullCheck(L_29);
		Action_2_Invoke_m1A48D91F6BAF38443ED8ECAADD549C3F90896332(L_29, 2, L_30, /*hidden argument*/Action_2_Invoke_m1A48D91F6BAF38443ED8ECAADD549C3F90896332_RuntimeMethod_var);
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00aa:
	{
		// foreach (KeyCode kc in KeyCodeValues)
		int32_t L_32 = V_4;
		KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F* L_33 = V_6;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))))))
		{
			goto IL_0094;
		}
	}
	{
		// AllCodeNames = names.ToArray();
		U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597 * L_34 = V_1;
		NullCheck(L_34);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_35 = L_34->get_names_0();
		NullCheck(L_35);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_36 = List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38(L_35, /*hidden argument*/List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var);
		((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_il2cpp_TypeInfo_var))->set_AllCodeNames_0(L_36);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType Microsoft.MixedReality.Toolkit.Input.KeyBinding::get_BindingType()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyBinding_get_BindingType_m3A2931C6A6406352E443A134EB9F9B7B2D59CEBE (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * __this, const RuntimeMethod* method)
{
	{
		// public KeyType BindingType => bindingType;
		int32_t L_0 = __this->get_bindingType_3();
		return L_0;
	}
}
extern "C"  int32_t KeyBinding_get_BindingType_m3A2931C6A6406352E443A134EB9F9B7B2D59CEBE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * _thisAdjusted = reinterpret_cast<KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *>(__this + 1);
	return KeyBinding_get_BindingType_m3A2931C6A6406352E443A134EB9F9B7B2D59CEBE(_thisAdjusted, method);
}
// System.String Microsoft.MixedReality.Toolkit.Input.KeyBinding::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* KeyBinding_ToString_m2B6A752FA929831BCD916CD99A1783B868881A26 (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBinding_ToString_m2B6A752FA929831BCD916CD99A1783B868881A26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// s += bindingType.ToString();
		String_t* L_0 = V_0;
		int32_t* L_1 = __this->get_address_of_bindingType_3();
		RuntimeObject * L_2 = Box(KeyType_t0870CDF08250D6779039AF63A65F5CD11052EF51_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		*L_1 = *(int32_t*)UnBox(L_2);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// switch (bindingType)
		int32_t L_5 = __this->get_bindingType_3();
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_006f;
		}
	}
	{
		// s += ": " + ((KeyCode)code).ToString();
		String_t* L_8 = V_0;
		int32_t L_9 = __this->get_code_4();
		V_2 = L_9;
		RuntimeObject * L_10 = Box(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		V_2 = *(int32_t*)UnBox(L_10);
		String_t* L_12 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_8, _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// break;
		goto IL_006f;
	}

IL_004f:
	{
		// s += ": " + ((MouseButton)code).ToString();
		String_t* L_13 = V_0;
		int32_t L_14 = __this->get_code_4();
		V_3 = L_14;
		RuntimeObject * L_15 = Box(MouseButton_tF872A67C3912D81CEB32AE892A5C9E0FE34C4FC2_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		V_3 = *(int32_t*)UnBox(L_15);
		String_t* L_17 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_13, _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_006f:
	{
		// return s;
		String_t* L_18 = V_0;
		return L_18;
	}
}
extern "C"  String_t* KeyBinding_ToString_m2B6A752FA929831BCD916CD99A1783B868881A26_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * _thisAdjusted = reinterpret_cast<KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *>(__this + 1);
	return KeyBinding_ToString_m2B6A752FA929831BCD916CD99A1783B868881A26(_thisAdjusted, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetKeyCode(UnityEngine.KeyCodeU26)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetKeyCode_mC7C2A32072E7661AC275F2E2402E307AC4BAA317 (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * __this, int32_t* ___keyCode0, const RuntimeMethod* method)
{
	{
		// keyCode = (KeyCode)code;
		int32_t* L_0 = ___keyCode0;
		int32_t L_1 = __this->get_code_4();
		*((int32_t*)L_0) = (int32_t)L_1;
		// return bindingType == KeyType.Key;
		int32_t L_2 = __this->get_bindingType_3();
		return (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
	}
}
extern "C"  bool KeyBinding_TryGetKeyCode_mC7C2A32072E7661AC275F2E2402E307AC4BAA317_AdjustorThunk (RuntimeObject * __this, int32_t* ___keyCode0, const RuntimeMethod* method)
{
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * _thisAdjusted = reinterpret_cast<KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *>(__this + 1);
	return KeyBinding_TryGetKeyCode_mC7C2A32072E7661AC275F2E2402E307AC4BAA317(_thisAdjusted, ___keyCode0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(System.Int32U26)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_m386EA990BA69456FD493E9DFE81290BCE26FE93F (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	{
		// mouseButton = code;
		int32_t* L_0 = ___mouseButton0;
		int32_t L_1 = __this->get_code_4();
		*((int32_t*)L_0) = (int32_t)L_1;
		// return bindingType == KeyType.Mouse;
		int32_t L_2 = __this->get_bindingType_3();
		return (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
	}
}
extern "C"  bool KeyBinding_TryGetMouseButton_m386EA990BA69456FD493E9DFE81290BCE26FE93F_AdjustorThunk (RuntimeObject * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * _thisAdjusted = reinterpret_cast<KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *>(__this + 1);
	return KeyBinding_TryGetMouseButton_m386EA990BA69456FD493E9DFE81290BCE26FE93F(_thisAdjusted, ___mouseButton0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButtonU26)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_m6F6C52DF0210ABCA26E78873CC299C7C7A537CEA (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (TryGetMouseButton(out int iMouseButton))
		bool L_0 = KeyBinding_TryGetMouseButton_m386EA990BA69456FD493E9DFE81290BCE26FE93F((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *)__this, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// mouseButton = (MouseButton)iMouseButton;
		int32_t* L_1 = ___mouseButton0;
		int32_t L_2 = V_0;
		*((int32_t*)L_1) = (int32_t)L_2;
		// return true;
		return (bool)1;
	}

IL_000f:
	{
		// mouseButton = MouseButton.Left;
		int32_t* L_3 = ___mouseButton0;
		*((int32_t*)L_3) = (int32_t)0;
		// return false;
		return (bool)0;
	}
}
extern "C"  bool KeyBinding_TryGetMouseButton_m6F6C52DF0210ABCA26E78873CC299C7C7A537CEA_AdjustorThunk (RuntimeObject * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 * _thisAdjusted = reinterpret_cast<KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *>(__this + 1);
	return KeyBinding_TryGetMouseButton_m6F6C52DF0210ABCA26E78873CC299C7C7A537CEA(_thisAdjusted, ___mouseButton0, method);
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::Unbound()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  KeyBinding_Unbound_m0B35066E5A1B047E8D6CE13E73A293306EC33163 (const RuntimeMethod* method)
{
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// KeyBinding kb = new KeyBinding();
		il2cpp_codegen_initobj((&V_0), sizeof(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 ));
		// kb.bindingType = KeyType.None;
		(&V_0)->set_bindingType_3(0);
		// kb.code = 0;
		(&V_0)->set_code_4(0);
		// return kb;
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_0 = V_0;
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromKey(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  KeyBinding_FromKey_m37C8112905FD1765A9DFEBB4A28219B13F218553 (int32_t ___keyCode0, const RuntimeMethod* method)
{
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// KeyBinding kb = new KeyBinding();
		il2cpp_codegen_initobj((&V_0), sizeof(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 ));
		// kb.bindingType = KeyType.Key;
		(&V_0)->set_bindingType_3(2);
		// kb.code = (int)keyCode;
		int32_t L_0 = ___keyCode0;
		(&V_0)->set_code_4(L_0);
		// return kb;
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_1 = V_0;
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(System.Int32)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  KeyBinding_FromMouseButton_m565F5203DA8F304DB01265F00953BC1B579F32F8 (int32_t ___mouseButton0, const RuntimeMethod* method)
{
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// KeyBinding kb = new KeyBinding();
		il2cpp_codegen_initobj((&V_0), sizeof(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 ));
		// kb.bindingType = KeyType.Mouse;
		(&V_0)->set_bindingType_3(1);
		// kb.code = mouseButton;
		int32_t L_0 = ___mouseButton0;
		(&V_0)->set_code_4(L_0);
		// return kb;
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_1 = V_0;
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  KeyBinding_FromMouseButton_m457A89AD98A2DCBC3CB9E9DF4682F8A144C84210 (int32_t ___mouseButton0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBinding_FromMouseButton_m457A89AD98A2DCBC3CB9E9DF4682F8A144C84210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return FromMouseButton((int)mouseButton);
		int32_t L_0 = ___mouseButton0;
		IL2CPP_RUNTIME_CLASS_INIT(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_il2cpp_TypeInfo_var);
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_1 = KeyBinding_FromMouseButton_m565F5203DA8F304DB01265F00953BC1B579F32F8(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m39FD235E1E01F862D185A562F6EBFF961F881E37 (U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::<.cctor>b__0(Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m2462FC265A3064763975493560FAE5D7A61050FF (U3CU3Ec__DisplayClass5_0_t14698F25906F13E502275D320F7D04E024A7B597 * __this, int32_t ___bindingType0, int32_t ___code1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m2462FC265A3064763975493560FAE5D7A61050FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  V_0;
	memset(&V_0, 0, sizeof(V_0));
	KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// var kb = new KeyBinding() { bindingType=bindingType, code=code };
		il2cpp_codegen_initobj((&V_1), sizeof(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 ));
		int32_t L_0 = ___bindingType0;
		(&V_1)->set_bindingType_3(L_0);
		int32_t L_1 = ___code1;
		(&V_1)->set_code_4(L_1);
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_2 = V_1;
		V_0 = L_2;
		// names.Add(kb.ToString());
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_3 = __this->get_names_0();
		String_t* L_4 = KeyBinding_ToString_m2B6A752FA929831BCD916CD99A1783B868881A26((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_3, L_4, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// EnumToKeyBindingMap[index] = Tuple.Create(bindingType, code);
		IL2CPP_RUNTIME_CLASS_INIT(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_il2cpp_TypeInfo_var);
		Dictionary_2_t5F05ECA524CB937E1946B02886463ECF191972D5 * L_5 = ((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_il2cpp_TypeInfo_var))->get_EnumToKeyBindingMap_2();
		int32_t L_6 = __this->get_index_1();
		int32_t L_7 = ___bindingType0;
		int32_t L_8 = ___code1;
		Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2 * L_9 = Tuple_Create_TisKeyType_t0870CDF08250D6779039AF63A65F5CD11052EF51_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m5C9E5A4B0345FC661870F00CA2C81C8DA7BE8D56(L_7, L_8, /*hidden argument*/Tuple_Create_TisKeyType_t0870CDF08250D6779039AF63A65F5CD11052EF51_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m5C9E5A4B0345FC661870F00CA2C81C8DA7BE8D56_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_set_Item_m6770CFC40363E5FFD286898B08323B8CE39774D6(L_5, L_6, L_9, /*hidden argument*/Dictionary_2_set_Item_m6770CFC40363E5FFD286898B08323B8CE39774D6_RuntimeMethod_var);
		// KeyBindingToEnumMap[Tuple.Create(bindingType, code)] = index;
		Dictionary_2_tB7F86C4360B0530664A273764D1D309F5D3B8A9E * L_10 = ((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_il2cpp_TypeInfo_var))->get_KeyBindingToEnumMap_1();
		int32_t L_11 = ___bindingType0;
		int32_t L_12 = ___code1;
		Tuple_2_t85EBC253E94929DFDBA8F1F3F5F54BB53C8B4CE2 * L_13 = Tuple_Create_TisKeyType_t0870CDF08250D6779039AF63A65F5CD11052EF51_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m5C9E5A4B0345FC661870F00CA2C81C8DA7BE8D56(L_11, L_12, /*hidden argument*/Tuple_Create_TisKeyType_t0870CDF08250D6779039AF63A65F5CD11052EF51_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m5C9E5A4B0345FC661870F00CA2C81C8DA7BE8D56_RuntimeMethod_var);
		int32_t L_14 = __this->get_index_1();
		NullCheck(L_10);
		Dictionary_2_set_Item_m88C7F10F0CE2D70396D9C8D3F9C7DA04CB614B91(L_10, L_13, L_14, /*hidden argument*/Dictionary_2_set_Item_m88C7F10F0CE2D70396D9C8D3F9C7DA04CB614B91_RuntimeMethod_var);
		// ++index;
		int32_t L_15 = __this->get_index_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_2;
		__this->set_index_1(L_16);
		// };
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyInputSystem::GetKey(Microsoft.MixedReality.Toolkit.Input.KeyBinding)
extern "C" IL2CPP_METHOD_ATTR bool KeyInputSystem_GetKey_m5A79A5790BBE4933D5003C2D799245D633039A9D (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  ___kb0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (kb.TryGetMouseButton(out int mouseButton))
		bool L_0 = KeyBinding_TryGetMouseButton_m386EA990BA69456FD493E9DFE81290BCE26FE93F((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *)(&___kb0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return UnityEngine.Input.GetMouseButton(mouseButton);
		int32_t L_1 = V_0;
		bool L_2 = Input_GetMouseButton_mFA83B0C0BABD3113D1AAB38FBB953C91EA7FFA30(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		// if (kb.TryGetKeyCode(out KeyCode keyCode))
		bool L_3 = KeyBinding_TryGetKeyCode_mC7C2A32072E7661AC275F2E2402E307AC4BAA317((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *)(&___kb0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return UnityEngine.Input.GetKey(keyCode);
		int32_t L_4 = V_1;
		bool L_5 = Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyInputSystem::GetKeyDown(Microsoft.MixedReality.Toolkit.Input.KeyBinding)
extern "C" IL2CPP_METHOD_ATTR bool KeyInputSystem_GetKeyDown_m253505D489A1CACA07DC99BB2FD66495E6E9F0E9 (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  ___kb0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (kb.TryGetMouseButton(out int mouseButton))
		bool L_0 = KeyBinding_TryGetMouseButton_m386EA990BA69456FD493E9DFE81290BCE26FE93F((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *)(&___kb0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return UnityEngine.Input.GetMouseButtonDown(mouseButton);
		int32_t L_1 = V_0;
		bool L_2 = Input_GetMouseButtonDown_mBC5947EA49ED797F0DB1830BFC13AF6514B765FD(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		// if (kb.TryGetKeyCode(out KeyCode keyCode))
		bool L_3 = KeyBinding_TryGetKeyCode_mC7C2A32072E7661AC275F2E2402E307AC4BAA317((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *)(&___kb0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return UnityEngine.Input.GetKeyDown(keyCode);
		int32_t L_4 = V_1;
		bool L_5 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyInputSystem::GetKeyUp(Microsoft.MixedReality.Toolkit.Input.KeyBinding)
extern "C" IL2CPP_METHOD_ATTR bool KeyInputSystem_GetKeyUp_mF16B6F98B02852460DCCD1EE867867B416C66749 (KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  ___kb0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (kb.TryGetMouseButton(out int mouseButton))
		bool L_0 = KeyBinding_TryGetMouseButton_m386EA990BA69456FD493E9DFE81290BCE26FE93F((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *)(&___kb0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return UnityEngine.Input.GetMouseButtonUp(mouseButton);
		int32_t L_1 = V_0;
		bool L_2 = Input_GetMouseButtonUp_m726EDCD35F8DECF774810AB1E9ED590B85DB10F1(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		// if (kb.TryGetKeyCode(out KeyCode keyCode))
		bool L_3 = KeyBinding_TryGetKeyCode_mC7C2A32072E7661AC275F2E2402E307AC4BAA317((KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834 *)(&___kb0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return UnityEngine.Input.GetKeyUp(keyCode);
		int32_t L_4 = V_1;
		bool L_5 = Input_GetKeyUp_m87C9C3E0877717675108A80EC663E60AD4D60D7C(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
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
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IndicatorsPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityInputSimulationProfile_get_IndicatorsPrefab_m507693D0E57AEFE8DE8C4ACC2A066477CCD7CBF5 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public GameObject IndicatorsPrefab => indicatorsPrefab;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_indicatorsPrefab_5();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseRotationSensitivity()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_MouseRotationSensitivity_m03E5EED5911F198749B0D79A317898875BDE23C8 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float MouseRotationSensitivity => mouseRotationSensitivity;
		float L_0 = __this->get_mouseRotationSensitivity_6();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseX()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseX_m06B3CA5724782EF6DD020AE58448E700EF745598 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public string MouseX => mouseX;
		String_t* L_0 = __this->get_mouseX_7();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseY()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseY_mD8B9A879F786C7A761DFFEBFCFF2BAD4F2A97E01 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public string MouseY => mouseY;
		String_t* L_0 = __this->get_mouseY_8();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseScroll()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseScroll_mA1E8B35D241442B19159495387B9411FB5572C10 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public string MouseScroll => mouseScroll;
		String_t* L_0 = __this->get_mouseScroll_9();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DoublePressTime()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DoublePressTime_mFB3F0061994C382BB1D840485793A5733E6E0F77 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float DoublePressTime => doublePressTime;
		float L_0 = __this->get_doublePressTime_10();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IsCameraControlEnabled()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_IsCameraControlEnabled_mA1FF5A1ABE5092B9CFDA0B508B81056C37CBFDF2 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCameraControlEnabled => isCameraControlEnabled;
		bool L_0 = __this->get_isCameraControlEnabled_11();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseLookSpeed()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_MouseLookSpeed_m5B3B65FA55A1E8C15889B1DFED466EC2F1431CE9 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float MouseLookSpeed => mouseLookSpeed;
		float L_0 = __this->get_mouseLookSpeed_12();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseLookButton()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  MixedRealityInputSimulationProfile_get_MouseLookButton_m8EFA9212BD1E8383D79EEA8FDDB747646171C5AE (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding MouseLookButton => mouseLookButton;
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_0 = __this->get_mouseLookButton_13();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseLookToggle()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_MouseLookToggle_mF59B3AD4AF9FF7B6D29BBF736CFD6DF9084BBAE6 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public bool MouseLookToggle => mouseLookToggle;
		bool L_0 = __this->get_mouseLookToggle_14();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IsControllerLookInverted()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_IsControllerLookInverted_mF5775D5BA208B0BF02BEC77DDD94FD35DB8CCA5E (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public bool IsControllerLookInverted => isControllerLookInverted;
		bool L_0 = __this->get_isControllerLookInverted_15();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_CurrentControlMode()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_CurrentControlMode_m3AAF442C9C333FCB463EF7D627C4A7FAED8116A4 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public InputSimulationControlMode CurrentControlMode => currentControlMode;
		int32_t L_0 = __this->get_currentControlMode_16();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_FastControlKey()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  MixedRealityInputSimulationProfile_get_FastControlKey_m34AD68364F4AFAACE5A7A0AB73B7DB711B9814EE (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding FastControlKey => fastControlKey;
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_0 = __this->get_fastControlKey_17();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ControlSlowSpeed()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlSlowSpeed_m39CF6A6E88F27B592DB6E69068F37175AB0545C7 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float ControlSlowSpeed => controlSlowSpeed;
		float L_0 = __this->get_controlSlowSpeed_18();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ControlFastSpeed()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlFastSpeed_mAA433127F4588114472E857A2130B35FCB85AC19 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float ControlFastSpeed => controlFastSpeed;
		float L_0 = __this->get_controlFastSpeed_19();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveHorizontal()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveHorizontal_m7AC95642844D014E86F4F07D355160FCEF094291 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public string MoveHorizontal => moveHorizontal;
		String_t* L_0 = __this->get_moveHorizontal_20();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveVertical()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveVertical_mA019CA512C463E395E8D867EE65DC3B55B5EC5E8 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public string MoveVertical => moveVertical;
		String_t* L_0 = __this->get_moveVertical_21();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveUpDown()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveUpDown_m5B0D5E611E4D5E5AC6B24E8EB0F2C81D6F4ECEE2 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public string MoveUpDown => moveUpDown;
		String_t* L_0 = __this->get_moveUpDown_22();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LookHorizontal()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookHorizontal_mA72B2812A7470C52C7C0DC91548BD5BF430913B1 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public string LookHorizontal => lookHorizontal;
		String_t* L_0 = __this->get_lookHorizontal_23();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LookVertical()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookVertical_m81245772E19DCB9BEC50629ED3238DEF231BED12 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public string LookVertical => lookVertical;
		String_t* L_0 = __this->get_lookVertical_24();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_SimulateEyePosition()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_SimulateEyePosition_mEDF172FFCB5958232B146387CFBFFF725C30773C (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public bool SimulateEyePosition => simulateEyePosition;
		bool L_0 = __this->get_simulateEyePosition_25();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandSimulationMode()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_DefaultHandSimulationMode_mD5DA9B1964D81149920F76FAD1CD25B31E82364F (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public HandSimulationMode DefaultHandSimulationMode => defaultHandSimulationMode;
		int32_t L_0 = __this->get_defaultHandSimulationMode_26();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ToggleLeftHandKey()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  MixedRealityInputSimulationProfile_get_ToggleLeftHandKey_mC1FC233887066FEF909215E8B6886BF63AF30A88 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding ToggleLeftHandKey => toggleLeftHandKey;
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_0 = __this->get_toggleLeftHandKey_27();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ToggleRightHandKey()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  MixedRealityInputSimulationProfile_get_ToggleRightHandKey_m4D7A6AC56181CD64120C5010925BC2F0321FFCFA (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding ToggleRightHandKey => toggleRightHandKey;
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_0 = __this->get_toggleRightHandKey_28();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandHideTimeout()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandHideTimeout_m4EB0B40661C43AB9C29330D96D488451F6303F36 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float HandHideTimeout => handHideTimeout;
		float L_0 = __this->get_handHideTimeout_29();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LeftHandManipulationKey()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  MixedRealityInputSimulationProfile_get_LeftHandManipulationKey_m3FC683E5A1B7BBDC12C7B734E7BE678530C4FDC0 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding LeftHandManipulationKey => leftHandManipulationKey;
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_0 = __this->get_leftHandManipulationKey_30();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RightHandManipulationKey()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  MixedRealityInputSimulationProfile_get_RightHandManipulationKey_m6EE02EDF7375CBF9D0BEC8E01662AD8CBFFA287D (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding RightHandManipulationKey => rightHandManipulationKey;
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_0 = __this->get_rightHandManipulationKey_31();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseHandRotationSpeed()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_MouseHandRotationSpeed_m779C357F82A05FF1D432E94A2E75AA8B1E75C448 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float MouseHandRotationSpeed => mouseHandRotationSpeed;
		float L_0 = __this->get_mouseHandRotationSpeed_32();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandRotateButton()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  MixedRealityInputSimulationProfile_get_HandRotateButton_m0F0A09DE098CA00CD8198C8B74D88011AF94C4E0 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding HandRotateButton => handRotateButton;
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_0 = __this->get_handRotateButton_33();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandGesture()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_DefaultHandGesture_m8D98F27967BDF1F153DB474FC342A5D92B3B5398 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId DefaultHandGesture => defaultHandGesture;
		int32_t L_0 = __this->get_defaultHandGesture_34();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LeftMouseHandGesture()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_LeftMouseHandGesture_m35D3A54BE95DE122652732747DFA5B0BDACC6997 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId LeftMouseHandGesture => leftMouseHandGesture;
		int32_t L_0 = __this->get_leftMouseHandGesture_35();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MiddleMouseHandGesture()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_MiddleMouseHandGesture_m9DB19CC25C98B8D2A1AE9B1D5FD932A829DCD8F3 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId MiddleMouseHandGesture => middleMouseHandGesture;
		int32_t L_0 = __this->get_middleMouseHandGesture_36();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RightMouseHandGesture()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RightMouseHandGesture_mD90F29C729FB9704BCC8F346F5C54E2480962C53 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId RightMouseHandGesture => rightMouseHandGesture;
		int32_t L_0 = __this->get_rightMouseHandGesture_37();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandGestureAnimationSpeed()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandGestureAnimationSpeed_m2D3E98F3858BF68294ED9613564111C05BFCCC5E (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float HandGestureAnimationSpeed => handGestureAnimationSpeed;
		float L_0 = __this->get_handGestureAnimationSpeed_38();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HoldStartDuration()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HoldStartDuration_m2D622230F1B0CD7316E4708AEF76EC005F72A6B9 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float HoldStartDuration => holdStartDuration;
		float L_0 = __this->get_holdStartDuration_39();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_NavigationStartThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_NavigationStartThreshold_mF3EE1592F556C226599C7F7C9E8F7C628665EE76 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float NavigationStartThreshold => navigationStartThreshold;
		float L_0 = __this->get_navigationStartThreshold_40();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandDistance()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DefaultHandDistance_mCE3548C3DADC747246783B72D4DF212D979EDEF0 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float DefaultHandDistance => defaultHandDistance;
		float L_0 = __this->get_defaultHandDistance_41();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandDepthMultiplier()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandDepthMultiplier_m8CE263FC9931A5CB4DEED8830967CC66A934268A (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float HandDepthMultiplier => handDepthMultiplier;
		float L_0 = __this->get_handDepthMultiplier_42();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandJitterAmount()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandJitterAmount_m1115E45479987D06BFA0D3099D3AF0E79B4F398A (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	{
		// public float HandJitterAmount => handJitterAmount;
		float L_0 = __this->get_handJitterAmount_43();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityInputSimulationProfile__ctor_mB261533E5A43EC15EABBAC3FCDF22CD4C2AD5B56 (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInputSimulationProfile__ctor_mB261533E5A43EC15EABBAC3FCDF22CD4C2AD5B56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float mouseRotationSensitivity = 0.1f;
		__this->set_mouseRotationSensitivity_6((0.1f));
		// private string mouseX = "Mouse X";
		__this->set_mouseX_7(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0);
		// private string mouseY = "Mouse Y";
		__this->set_mouseY_8(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2);
		// private string mouseScroll = "Mouse ScrollWheel";
		__this->set_mouseScroll_9(_stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31);
		// private float doublePressTime = 0.4f;
		__this->set_doublePressTime_10((0.4f));
		// private bool isCameraControlEnabled = true;
		__this->set_isCameraControlEnabled_11((bool)1);
		// private float mouseLookSpeed = 3.0f;
		__this->set_mouseLookSpeed_12((3.0f));
		// private KeyBinding mouseLookButton = KeyBinding.FromMouseButton(KeyBinding.MouseButton.Right);
		IL2CPP_RUNTIME_CLASS_INIT(KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834_il2cpp_TypeInfo_var);
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_0 = KeyBinding_FromMouseButton_m457A89AD98A2DCBC3CB9E9DF4682F8A144C84210(1, /*hidden argument*/NULL);
		__this->set_mouseLookButton_13(L_0);
		// private bool isControllerLookInverted = true;
		__this->set_isControllerLookInverted_15((bool)1);
		// private KeyBinding fastControlKey = KeyBinding.FromKey(KeyCode.RightControl);
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_1 = KeyBinding_FromKey_m37C8112905FD1765A9DFEBB4A28219B13F218553(((int32_t)305), /*hidden argument*/NULL);
		__this->set_fastControlKey_17(L_1);
		// private float controlSlowSpeed = 0.1f;
		__this->set_controlSlowSpeed_18((0.1f));
		// private float controlFastSpeed = 1.0f;
		__this->set_controlFastSpeed_19((1.0f));
		// private string moveHorizontal = "Horizontal";
		__this->set_moveHorizontal_20(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C);
		// private string moveVertical = "Vertical";
		__this->set_moveVertical_21(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5);
		// private string moveUpDown = "UpDown";
		__this->set_moveUpDown_22(_stringLiteral2FEED76F1368917E9E5273B5D3B77EC607649D4D);
		// private string lookHorizontal = ControllerMappingLibrary.AXIS_4;
		__this->set_lookHorizontal_23(_stringLiteral8B7970623A806CC748C1B218861BE920B011B98C);
		// private string lookVertical = ControllerMappingLibrary.AXIS_5;
		__this->set_lookVertical_24(_stringLiteral04734178D407F1573AAACEB7E086B11BCFABD7FF);
		// private HandSimulationMode defaultHandSimulationMode = HandSimulationMode.Articulated;
		__this->set_defaultHandSimulationMode_26(2);
		// private KeyBinding toggleLeftHandKey = KeyBinding.FromKey(KeyCode.T);
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_2 = KeyBinding_FromKey_m37C8112905FD1765A9DFEBB4A28219B13F218553(((int32_t)116), /*hidden argument*/NULL);
		__this->set_toggleLeftHandKey_27(L_2);
		// private KeyBinding toggleRightHandKey = KeyBinding.FromKey(KeyCode.Y);
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_3 = KeyBinding_FromKey_m37C8112905FD1765A9DFEBB4A28219B13F218553(((int32_t)121), /*hidden argument*/NULL);
		__this->set_toggleRightHandKey_28(L_3);
		// private float handHideTimeout = 0.2f;
		__this->set_handHideTimeout_29((0.2f));
		// private KeyBinding leftHandManipulationKey = KeyBinding.FromKey(KeyCode.LeftShift);
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_4 = KeyBinding_FromKey_m37C8112905FD1765A9DFEBB4A28219B13F218553(((int32_t)304), /*hidden argument*/NULL);
		__this->set_leftHandManipulationKey_30(L_4);
		// private KeyBinding rightHandManipulationKey = KeyBinding.FromKey(KeyCode.Space);
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_5 = KeyBinding_FromKey_m37C8112905FD1765A9DFEBB4A28219B13F218553(((int32_t)32), /*hidden argument*/NULL);
		__this->set_rightHandManipulationKey_31(L_5);
		// private float mouseHandRotationSpeed = 6.0f;
		__this->set_mouseHandRotationSpeed_32((6.0f));
		// private KeyBinding handRotateButton = KeyBinding.FromKey(KeyCode.LeftControl);
		KeyBinding_tC4FEECECECD699F9B9F44FFE88E7119B019C8834  L_6 = KeyBinding_FromKey_m37C8112905FD1765A9DFEBB4A28219B13F218553(((int32_t)306), /*hidden argument*/NULL);
		__this->set_handRotateButton_33(L_6);
		// private ArticulatedHandPose.GestureId defaultHandGesture = ArticulatedHandPose.GestureId.Open;
		__this->set_defaultHandGesture_34(2);
		// private ArticulatedHandPose.GestureId leftMouseHandGesture = ArticulatedHandPose.GestureId.Pinch;
		__this->set_leftMouseHandGesture_35(3);
		// private float handGestureAnimationSpeed = 8.0f;
		__this->set_handGestureAnimationSpeed_38((8.0f));
		// private float holdStartDuration = 0.5f;
		__this->set_holdStartDuration_39((0.5f));
		// private float navigationStartThreshold = 0.03f;
		__this->set_navigationStartThreshold_40((0.03f));
		// private float defaultHandDistance = 0.5f;
		__this->set_defaultHandDistance_41((0.5f));
		// private float handDepthMultiplier = 0.03f;
		__this->set_handDepthMultiplier_42((0.03f));
		BaseMixedRealityProfile__ctor_m545BB521B981F3B488AA25CDEC02E2E1649F2BF3(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::get_SimulationMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SimulatedArticulatedHand_get_SimulationMode_m588248D9BD3789917513699F1789960F016F71D6 (SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6 * __this, const RuntimeMethod* method)
{
	{
		// public override HandSimulationMode SimulationMode => HandSimulationMode.Articulated;
		return (int32_t)(2);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
extern "C" IL2CPP_METHOD_ATTR void SimulatedArticulatedHand__ctor_m7C05770A06CA0F3B8146D430315DCBCE5B62787D (SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand__ctor_m7C05770A06CA0F3B8146D430315DCBCE5B62787D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_24(L_0);
		// private Quaternion currentPointerRotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_25(L_1);
		// private MixedRealityPose lastPointerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_il2cpp_TypeInfo_var);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_2 = MixedRealityPose_get_ZeroIdentity_m164F0FB052043047ECAB79FA4BD81178EE0DB10C(/*hidden argument*/NULL);
		__this->set_lastPointerPose_26(L_2);
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_3 = MixedRealityPose_get_ZeroIdentity_m164F0FB052043047ECAB79FA4BD81178EE0DB10C(/*hidden argument*/NULL);
		__this->set_currentPointerPose_27(L_3);
		// private MixedRealityPose currentIndexPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_4 = MixedRealityPose_get_ZeroIdentity_m164F0FB052043047ECAB79FA4BD81178EE0DB10C(/*hidden argument*/NULL);
		__this->set_currentIndexPose_28(L_4);
		// private MixedRealityPose currentGripPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_5 = MixedRealityPose_get_ZeroIdentity_m164F0FB052043047ECAB79FA4BD81178EE0DB10C(/*hidden argument*/NULL);
		__this->set_currentGripPose_29(L_5);
		// private MixedRealityPose lastGripPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_6 = MixedRealityPose_get_ZeroIdentity_m164F0FB052043047ECAB79FA4BD81178EE0DB10C(/*hidden argument*/NULL);
		__this->set_lastGripPose_30(L_6);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_7 = ___trackingState0;
		uint8_t L_8 = ___controllerHandedness1;
		RuntimeObject* L_9 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_10 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4_il2cpp_TypeInfo_var);
		SimulatedHand__ctor_mEE94D186420423261F5C4515CD1473E1CCB0D496(__this, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::get_DefaultInteractions()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* SimulatedArticulatedHand_get_DefaultInteractions_m6957B62B4CEB76C8F9A0DDD7EE7F02D0B729CFE5 (SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand_get_DefaultInteractions_m6957B62B4CEB76C8F9A0DDD7EE7F02D0B729CFE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Spatial Pointer", AxisType.SixDof, DeviceInputType.SpatialPointer, MixedRealityInputAction.None),
		//     new MixedRealityInteractionMapping(1, "Spatial Grip", AxisType.SixDof, DeviceInputType.SpatialGrip, MixedRealityInputAction.None),
		//     new MixedRealityInteractionMapping(2, "Select", AxisType.Digital, DeviceInputType.Select, MixedRealityInputAction.None),
		//     new MixedRealityInteractionMapping(3, "Grab", AxisType.SingleAxis, DeviceInputType.TriggerPress, MixedRealityInputAction.None),
		//     new MixedRealityInteractionMapping(4, "Index Finger Pose", AxisType.SixDof, DeviceInputType.IndexFinger, MixedRealityInputAction.None),
		// };
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_0 = (MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69_il2cpp_TypeInfo_var, (uint32_t)5);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_2 = MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_3 = (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m597D2A652DDEB4709A1A739C441364D5C2271EFB(L_3, 0, _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E, 7, 3, L_2, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)L_3);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_4 = L_1;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_5 = MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_6 = (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m597D2A652DDEB4709A1A739C441364D5C2271EFB(L_6, 1, _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC, 7, ((int32_t)14), L_5, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)L_6);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_7 = L_4;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_8 = MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_9 = (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m597D2A652DDEB4709A1A739C441364D5C2271EFB(L_9, 2, _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A, 2, ((int32_t)25), L_8, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)L_9);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_10 = L_7;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_11 = MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_12 = (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m597D2A652DDEB4709A1A739C441364D5C2271EFB(L_12, 3, _stringLiteralCF673A9C875D20DCDA8A5C0D7A2E5C60A940DB8E, 3, ((int32_t)13), L_11, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)L_12);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_13 = L_10;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_14 = MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_15 = (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m597D2A652DDEB4709A1A739C441364D5C2271EFB(L_15, 4, _stringLiteral561DDB78EA3339033D719AFAA6980160DC8D88CB, 7, ((int32_t)33), L_14, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)L_15);
		return L_13;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
extern "C" IL2CPP_METHOD_ATTR void SimulatedArticulatedHand_UpdateInteractions_mA9009A552D5A4F048125D4BE537F36FEC0BFDF75 (SimulatedArticulatedHand_t54A2C821C2A4EC58371EE3114DF80BF4FA489EA6 * __this, SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand_UpdateInteractions_mA9009A552D5A4F048125D4BE537F36FEC0BFDF75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_7;
	memset(&V_7, 0, sizeof(V_7));
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B30_0 = NULL;
	RuntimeObject* G_B29_0 = NULL;
	RuntimeObject* G_B34_0 = NULL;
	RuntimeObject* G_B33_0 = NULL;
	RuntimeObject* G_B39_0 = NULL;
	RuntimeObject* G_B38_0 = NULL;
	RuntimeObject* G_B42_0 = NULL;
	RuntimeObject* G_B41_0 = NULL;
	RuntimeObject* G_B47_0 = NULL;
	RuntimeObject* G_B46_0 = NULL;
	RuntimeObject* G_B50_0 = NULL;
	RuntimeObject* G_B49_0 = NULL;
	RuntimeObject* G_B54_0 = NULL;
	RuntimeObject* G_B53_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B59_0;
	memset(&G_B59_0, 0, sizeof(G_B59_0));
	int32_t G_B59_1 = 0;
	{
		// lastPointerPose = currentPointerPose;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_0 = __this->get_currentPointerPose_27();
		__this->set_lastPointerPose_26(L_0);
		// lastGripPose = currentGripPose;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_1 = __this->get_currentGripPose_29();
		__this->set_lastGripPose_30(L_1);
		// Vector3 pointerPosition = jointPoses[TrackedHandJoint.IndexTip].Position;
		Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * L_2 = ((SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4 *)__this)->get_jointPoses_23();
		NullCheck(L_2);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_3 = Dictionary_2_get_Item_mE48F08682093E8FBE18CE8FDD606E0AB2DA12A29(L_2, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_mE48F08682093E8FBE18CE8FDD606E0AB2DA12A29_RuntimeMethod_var);
		V_1 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = MixedRealityPose_get_Position_mF558364148A015EF88E081BB4947F1EB60CEED20((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		// IsPositionAvailable = IsRotationAvailable = pointerPosition != Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_7 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_5, L_6, /*hidden argument*/NULL);
		bool L_8 = L_7;
		V_2 = L_8;
		BaseController_set_IsRotationAvailable_m18DF7D4DED584DE0B1B7FB58B6F29453C19E0EB3(__this, L_8, /*hidden argument*/NULL);
		bool L_9 = V_2;
		BaseController_set_IsPositionAvailable_mA32A7E876D894311045C6D0ED23A2B7A71475705(__this, L_9, /*hidden argument*/NULL);
		// if (IsPositionAvailable)
		bool L_10 = BaseController_get_IsPositionAvailable_mC8C77A22C080753C44AE110DDA272DD8FBB56FC6(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00cc;
		}
	}
	{
		// HandRay.Update(pointerPosition, GetPalmNormal(), CameraCache.Main.transform, ControllerHandedness);
		HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847 * L_11 = BaseHand_get_HandRay_m204556B6D69A753907CE8C93DE4CFE2CD6DD24F4(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = BaseHand_GetPalmNormal_mB864C6836AB9EF36B8BED5E0AC8145801A568E51(__this, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		uint8_t L_16 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		HandRay_Update_m0867EADDFAC5004B2129F9C11A58D0AD7EEA4DBF(L_11, L_12, L_13, L_15, L_16, /*hidden argument*/NULL);
		// Ray ray = HandRay.Ray;
		HandRay_t8A1086DC1563DE7511E654B297E5D6A1B3D7C847 * L_17 = BaseHand_get_HandRay_m204556B6D69A753907CE8C93DE4CFE2CD6DD24F4(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_18 = HandRay_get_Ray_mE298E78314216A076E9AAB4D6C92530D5BFF0CA9(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// currentPointerPose.Position = ray.origin;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * L_19 = __this->get_address_of_currentPointerPose_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_3), /*hidden argument*/NULL);
		MixedRealityPose_set_Position_m3F0AAAA01636AC918F2F8BB50B1205B8627BF367((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)L_19, L_20, /*hidden argument*/NULL);
		// currentPointerPose.Rotation = Quaternion.LookRotation(ray.direction);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * L_21 = __this->get_address_of_currentPointerPose_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_22, /*hidden argument*/NULL);
		MixedRealityPose_set_Rotation_m4D5AB69ECBF7FC8437BA91E1FE8519218466D945((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)L_21, L_23, /*hidden argument*/NULL);
		// currentGripPose = jointPoses[TrackedHandJoint.Palm];
		Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * L_24 = ((SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4 *)__this)->get_jointPoses_23();
		NullCheck(L_24);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_25 = Dictionary_2_get_Item_mE48F08682093E8FBE18CE8FDD606E0AB2DA12A29(L_24, 2, /*hidden argument*/Dictionary_2_get_Item_mE48F08682093E8FBE18CE8FDD606E0AB2DA12A29_RuntimeMethod_var);
		__this->set_currentGripPose_29(L_25);
		// currentIndexPose = jointPoses[TrackedHandJoint.IndexTip];
		Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * L_26 = ((SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4 *)__this)->get_jointPoses_23();
		NullCheck(L_26);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_27 = Dictionary_2_get_Item_mE48F08682093E8FBE18CE8FDD606E0AB2DA12A29(L_26, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_mE48F08682093E8FBE18CE8FDD606E0AB2DA12A29_RuntimeMethod_var);
		__this->set_currentIndexPose_28(L_27);
	}

IL_00cc:
	{
		// if (lastGripPose != currentGripPose)
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_28 = __this->get_lastGripPose_30();
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_29 = __this->get_currentGripPose_29();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_il2cpp_TypeInfo_var);
		bool L_30 = MixedRealityPose_op_Inequality_mE42EDBE8D1053F6F4ED48B507773851812257095(L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_016d;
		}
	}
	{
		// if (IsPositionAvailable && IsRotationAvailable)
		bool L_31 = BaseController_get_IsPositionAvailable_mC8C77A22C080753C44AE110DDA272DD8FBB56FC6(__this, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0111;
		}
	}
	{
		bool L_32 = BaseController_get_IsRotationAvailable_m723D83682C62E0C3916D7A5EA8D1573F2260AB13(__this, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0111;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePoseChanged(InputSource, this, currentGripPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_33 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_34 = L_33;
		G_B6_0 = L_34;
		if (L_34)
		{
			G_B7_0 = L_34;
			goto IL_00fd;
		}
	}
	{
		goto IL_016d;
	}

IL_00fd:
	{
		RuntimeObject* L_35 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_36 = __this->get_currentGripPose_29();
		NullCheck(G_B7_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  >::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B7_0, L_35, __this, L_36);
		// }
		goto IL_016d;
	}

IL_0111:
	{
		// else if (IsPositionAvailable && !IsRotationAvailable)
		bool L_37 = BaseController_get_IsPositionAvailable_mC8C77A22C080753C44AE110DDA272DD8FBB56FC6(__this, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0140;
		}
	}
	{
		bool L_38 = BaseController_get_IsRotationAvailable_m723D83682C62E0C3916D7A5EA8D1573F2260AB13(__this, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0140;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePositionChanged(InputSource, this, currentPointerPosition);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_39 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_40 = L_39;
		G_B11_0 = L_40;
		if (L_40)
		{
			G_B12_0 = L_40;
			goto IL_012c;
		}
	}
	{
		goto IL_016d;
	}

IL_012c:
	{
		RuntimeObject* L_41 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = __this->get_currentPointerPosition_24();
		NullCheck(G_B12_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B12_0, L_41, __this, L_42);
		// }
		goto IL_016d;
	}

IL_0140:
	{
		// else if (!IsPositionAvailable && IsRotationAvailable)
		bool L_43 = BaseController_get_IsPositionAvailable_mC8C77A22C080753C44AE110DDA272DD8FBB56FC6(__this, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_016d;
		}
	}
	{
		bool L_44 = BaseController_get_IsRotationAvailable_m723D83682C62E0C3916D7A5EA8D1573F2260AB13(__this, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_016d;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourceRotationChanged(InputSource, this, currentPointerRotation);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_45 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_46 = L_45;
		G_B16_0 = L_46;
		if (L_46)
		{
			G_B17_0 = L_46;
			goto IL_015b;
		}
	}
	{
		goto IL_016d;
	}

IL_015b:
	{
		RuntimeObject* L_47 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_48 = __this->get_currentPointerRotation_25();
		NullCheck(G_B17_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(28 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceRotationChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Quaternion) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B17_0, L_47, __this, L_48);
	}

IL_016d:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		V_4 = 0;
		goto IL_0403;
	}

IL_0175:
	{
		// switch (Interactions[i].InputType)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_49 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_50 = V_4;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		int32_t L_53 = MixedRealityInteractionMapping_get_InputType_m211B4ADEE5BE65FE4EBFFD5A637AF63B72363597(L_52, /*hidden argument*/NULL);
		V_5 = L_53;
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) > ((int32_t)((int32_t)13))))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_55 = V_5;
		if ((((int32_t)L_55) == ((int32_t)3)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)13))))
		{
			goto IL_0314;
		}
	}
	{
		goto IL_03fd;
	}

IL_019e:
	{
		int32_t L_57 = V_5;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)14))))
		{
			goto IL_021a;
		}
	}
	{
		int32_t L_58 = V_5;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)25))))
		{
			goto IL_0279;
		}
	}
	{
		int32_t L_59 = V_5;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)33))))
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03fd;
	}

IL_01bb:
	{
		// Interactions[i].PoseData = currentPointerPose;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_60 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_61 = V_4;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_64 = __this->get_currentPointerPose_27();
		NullCheck(L_63);
		MixedRealityInteractionMapping_set_PoseData_m85792C24C6CC2156EE9426C6148754AADC27B2C4(L_63, L_64, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_65 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_66 = V_4;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		bool L_69 = MixedRealityInteractionMapping_get_Changed_m71F642195939676EF2A093E9B70C4B9786F62DDC(L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_03fd;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentPointerPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_70 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_71 = L_70;
		G_B29_0 = L_71;
		if (L_71)
		{
			G_B30_0 = L_71;
			goto IL_01f0;
		}
	}
	{
		goto IL_03fd;
	}

IL_01f0:
	{
		RuntimeObject* L_72 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		uint8_t L_73 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_74 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_75 = V_4;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_78 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m17E18F9070908763EA75BDC25D1F4121A21D8285(L_77, /*hidden argument*/NULL);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_79 = __this->get_currentPointerPose_27();
		NullCheck(G_B30_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 , MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B30_0, L_72, L_73, L_78, L_79);
		// break;
		goto IL_03fd;
	}

IL_021a:
	{
		// Interactions[i].PoseData = currentGripPose;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_80 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_81 = V_4;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_84 = __this->get_currentGripPose_29();
		NullCheck(L_83);
		MixedRealityInteractionMapping_set_PoseData_m85792C24C6CC2156EE9426C6148754AADC27B2C4(L_83, L_84, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_85 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_86 = V_4;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_88);
		bool L_89 = MixedRealityInteractionMapping_get_Changed_m71F642195939676EF2A093E9B70C4B9786F62DDC(L_88, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_03fd;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentGripPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_90 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_91 = L_90;
		G_B33_0 = L_91;
		if (L_91)
		{
			G_B34_0 = L_91;
			goto IL_024f;
		}
	}
	{
		goto IL_03fd;
	}

IL_024f:
	{
		RuntimeObject* L_92 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		uint8_t L_93 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_94 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_95 = V_4;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_98 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m17E18F9070908763EA75BDC25D1F4121A21D8285(L_97, /*hidden argument*/NULL);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_99 = __this->get_currentGripPose_29();
		NullCheck(G_B34_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 , MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B34_0, L_92, L_93, L_98, L_99);
		// break;
		goto IL_03fd;
	}

IL_0279:
	{
		// Interactions[i].BoolData = handData.IsPinching;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_100 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_101 = V_4;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * L_104 = ___handData0;
		NullCheck(L_104);
		bool L_105 = SimulatedHandData_get_IsPinching_mC1C6E78D46572266C7E896E8035D5ECFDC313DC1(L_104, /*hidden argument*/NULL);
		NullCheck(L_103);
		MixedRealityInteractionMapping_set_BoolData_m7ACC537BDBD7A65C5BEE8E47DB0672F4FBBE6946(L_103, L_105, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_106 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_107 = V_4;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_109);
		bool L_110 = MixedRealityInteractionMapping_get_Changed_m71F642195939676EF2A093E9B70C4B9786F62DDC(L_109, /*hidden argument*/NULL);
		if (!L_110)
		{
			goto IL_03fd;
		}
	}
	{
		// if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_111 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_112 = V_4;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_114);
		bool L_115 = MixedRealityInteractionMapping_get_BoolData_m7D731BA079216F5A02B66ED7CB3DC31A5E9C038D(L_114, /*hidden argument*/NULL);
		if (!L_115)
		{
			goto IL_02e2;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_116 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_117 = L_116;
		G_B38_0 = L_117;
		if (L_117)
		{
			G_B39_0 = L_117;
			goto IL_02be;
		}
	}
	{
		goto IL_03fd;
	}

IL_02be:
	{
		RuntimeObject* L_118 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		uint8_t L_119 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_120 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_121 = V_4;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_123);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_124 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m17E18F9070908763EA75BDC25D1F4121A21D8285(L_123, /*hidden argument*/NULL);
		NullCheck(G_B39_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B39_0, L_118, L_119, L_124);
		// }
		goto IL_03fd;
	}

IL_02e2:
	{
		// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_125 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_126 = L_125;
		G_B41_0 = L_126;
		if (L_126)
		{
			G_B42_0 = L_126;
			goto IL_02f0;
		}
	}
	{
		goto IL_03fd;
	}

IL_02f0:
	{
		RuntimeObject* L_127 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		uint8_t L_128 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_129 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_130 = V_4;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_133 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m17E18F9070908763EA75BDC25D1F4121A21D8285(L_132, /*hidden argument*/NULL);
		NullCheck(G_B42_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B42_0, L_127, L_128, L_133);
		// break;
		goto IL_03fd;
	}

IL_0314:
	{
		// Interactions[i].BoolData = handData.IsPinching;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_134 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_135 = V_4;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * L_138 = ___handData0;
		NullCheck(L_138);
		bool L_139 = SimulatedHandData_get_IsPinching_mC1C6E78D46572266C7E896E8035D5ECFDC313DC1(L_138, /*hidden argument*/NULL);
		NullCheck(L_137);
		MixedRealityInteractionMapping_set_BoolData_m7ACC537BDBD7A65C5BEE8E47DB0672F4FBBE6946(L_137, L_139, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_140 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_141 = V_4;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_143);
		bool L_144 = MixedRealityInteractionMapping_get_Changed_m71F642195939676EF2A093E9B70C4B9786F62DDC(L_143, /*hidden argument*/NULL);
		if (!L_144)
		{
			goto IL_03fd;
		}
	}
	{
		// if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_145 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_146 = V_4;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		NullCheck(L_148);
		bool L_149 = MixedRealityInteractionMapping_get_BoolData_m7D731BA079216F5A02B66ED7CB3DC31A5E9C038D(L_148, /*hidden argument*/NULL);
		if (!L_149)
		{
			goto IL_037d;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_150 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_151 = L_150;
		G_B46_0 = L_151;
		if (L_151)
		{
			G_B47_0 = L_151;
			goto IL_0359;
		}
	}
	{
		goto IL_03fd;
	}

IL_0359:
	{
		RuntimeObject* L_152 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		uint8_t L_153 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_154 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_155 = V_4;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		NullCheck(L_157);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_158 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m17E18F9070908763EA75BDC25D1F4121A21D8285(L_157, /*hidden argument*/NULL);
		NullCheck(G_B47_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B47_0, L_152, L_153, L_158);
		// }
		goto IL_03fd;
	}

IL_037d:
	{
		// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_159 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_160 = L_159;
		G_B49_0 = L_160;
		if (L_160)
		{
			G_B50_0 = L_160;
			goto IL_0388;
		}
	}
	{
		goto IL_03fd;
	}

IL_0388:
	{
		RuntimeObject* L_161 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		uint8_t L_162 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_163 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_164 = V_4;
		NullCheck(L_163);
		int32_t L_165 = L_164;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		NullCheck(L_166);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_167 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m17E18F9070908763EA75BDC25D1F4121A21D8285(L_166, /*hidden argument*/NULL);
		NullCheck(G_B50_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B50_0, L_161, L_162, L_167);
		// break;
		goto IL_03fd;
	}

IL_03a9:
	{
		// Interactions[i].PoseData = currentIndexPose;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_168 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_169 = V_4;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_172 = __this->get_currentIndexPose_28();
		NullCheck(L_171);
		MixedRealityInteractionMapping_set_PoseData_m85792C24C6CC2156EE9426C6148754AADC27B2C4(L_171, L_172, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_173 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_174 = V_4;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_176);
		bool L_177 = MixedRealityInteractionMapping_get_Changed_m71F642195939676EF2A093E9B70C4B9786F62DDC(L_176, /*hidden argument*/NULL);
		if (!L_177)
		{
			goto IL_03fd;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentIndexPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_178 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_179 = L_178;
		G_B53_0 = L_179;
		if (L_179)
		{
			G_B54_0 = L_179;
			goto IL_03d8;
		}
	}
	{
		goto IL_03fd;
	}

IL_03d8:
	{
		RuntimeObject* L_180 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		uint8_t L_181 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_182 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_183 = V_4;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		NullCheck(L_185);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_186 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m17E18F9070908763EA75BDC25D1F4121A21D8285(L_185, /*hidden argument*/NULL);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_187 = __this->get_currentIndexPose_28();
		NullCheck(G_B54_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 , MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B54_0, L_180, L_181, L_186, L_187);
	}

IL_03fd:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_188 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)1));
	}

IL_0403:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_189 = V_4;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_190 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_191 = L_190;
		G_B57_0 = L_191;
		G_B57_1 = L_189;
		if (L_191)
		{
			G_B58_0 = L_191;
			G_B58_1 = L_189;
			goto IL_041b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_192 = V_7;
		G_B59_0 = L_192;
		G_B59_1 = G_B57_1;
		goto IL_0422;
	}

IL_041b:
	{
		NullCheck(G_B58_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_193;
		memset(&L_193, 0, sizeof(L_193));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_193), (((int32_t)((int32_t)(((RuntimeArray *)G_B58_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B59_0 = L_193;
		G_B59_1 = G_B58_1;
	}

IL_0422:
	{
		V_6 = G_B59_0;
		int32_t L_194 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_195 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B59_1) < ((int32_t)L_194))? 1 : 0)&(int32_t)L_195)))
		{
			goto IL_0175;
		}
	}
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
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_SimulationMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SimulatedGestureHand_get_SimulationMode_m6680B8844A37726E74C7379FA6A06595912D3E8C (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	{
		// public override HandSimulationMode SimulationMode => HandSimulationMode.Gestures;
		return (int32_t)(1);
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_navigationDelta()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedGestureHand_get_navigationDelta_m4CBDC2BEDEB6CE39E01306012B9987BB240BC695 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_get_navigationDelta_m4CBDC2BEDEB6CE39E01306012B9987BB240BC695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 navigationDelta => new Vector3(
		//     Mathf.Clamp(cumulativeDelta.x, -1.0f, 1.0f) * currentRailsUsed.x,
		//     Mathf.Clamp(cumulativeDelta.y, -1.0f, 1.0f) * currentRailsUsed.y,
		//     Mathf.Clamp(cumulativeDelta.z, -1.0f, 1.0f) * currentRailsUsed.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_cumulativeDelta_38();
		float L_1 = L_0->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_1, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = __this->get_address_of_currentRailsUsed_36();
		float L_4 = L_3->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = __this->get_address_of_cumulativeDelta_38();
		float L_6 = L_5->get_y_3();
		float L_7 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_6, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = __this->get_address_of_currentRailsUsed_36();
		float L_9 = L_8->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_10 = __this->get_address_of_cumulativeDelta_38();
		float L_11 = L_10->get_z_4();
		float L_12 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_11, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_13 = __this->get_address_of_currentRailsUsed_36();
		float L_14 = L_13->get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_4)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_9)), ((float)il2cpp_codegen_multiply((float)L_12, (float)L_14)), /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand__ctor_mF11987CB30AE69F5555F28A58FB8E03684884369 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand__ctor_mF11987CB30AE69F5555F28A58FB8E03684884369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MixedRealityInputAction holdAction = MixedRealityInputAction.None;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_0 = MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7(/*hidden argument*/NULL);
		__this->set_holdAction_25(L_0);
		// private MixedRealityInputAction navigationAction = MixedRealityInputAction.None;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_1 = MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7(/*hidden argument*/NULL);
		__this->set_navigationAction_26(L_1);
		// private MixedRealityInputAction manipulationAction = MixedRealityInputAction.None;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_2 = MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7(/*hidden argument*/NULL);
		__this->set_manipulationAction_27(L_2);
		// private MixedRealityInputAction selectAction = MixedRealityInputAction.None;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7(/*hidden argument*/NULL);
		__this->set_selectAction_28(L_3);
		// private Vector3 currentRailsUsed = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_4);
		// private Vector3 currentPosition = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_currentPosition_37(L_5);
		// private Vector3 cumulativeDelta = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_6);
		// private MixedRealityPose currentGripPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_il2cpp_TypeInfo_var);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_7 = MixedRealityPose_get_ZeroIdentity_m164F0FB052043047ECAB79FA4BD81178EE0DB10C(/*hidden argument*/NULL);
		__this->set_currentGripPose_39(L_7);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_8 = ___trackingState0;
		uint8_t L_9 = ___controllerHandedness1;
		RuntimeObject* L_10 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_11 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4_il2cpp_TypeInfo_var);
		SimulatedHand__ctor_mEE94D186420423261F5C4515CD1473E1CCB0D496(__this, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::EnsureProfileSettings()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_EnsureProfileSettings_m4261A25FFE492BBCF2CBCF0B27584C81A9E2394D (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_EnsureProfileSettings_m4261A25FFE492BBCF2CBCF0B27584C81A9E2394D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * V_0 = NULL;
	MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * V_1 = NULL;
	int32_t V_2 = 0;
	MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * G_B7_0 = NULL;
	MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519 * G_B6_0 = NULL;
	MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519 * G_B5_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * G_B22_0 = NULL;
	{
		// if (initializedFromProfile)
		bool L_0 = __this->get_initializedFromProfile_24();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// initializedFromProfile = true;
		__this->set_initializedFromProfile_24((bool)1);
		// var gestureProfile = CoreServices.InputSystem?.InputSystemProfile?.GesturesProfile;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_001c;
		}
	}
	{
		G_B7_0 = ((MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 *)(NULL));
		goto IL_002d;
	}

IL_001c:
	{
		NullCheck(G_B4_0);
		MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519 * L_3 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519 * >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B4_0);
		MixedRealityInputSystemProfile_tAA40D456DE1359305601539F80E0D8CDFEEE9519 * L_4 = L_3;
		G_B5_0 = L_4;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0028;
		}
	}
	{
		G_B7_0 = ((MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 *)(NULL));
		goto IL_002d;
	}

IL_0028:
	{
		NullCheck(G_B6_0);
		MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * L_5 = MixedRealityInputSystemProfile_get_GesturesProfile_m2303A8FB588ACDC47D28FE7B7AFC0EA3DF03A507(G_B6_0, /*hidden argument*/NULL);
		G_B7_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B7_0;
		// if (gestureProfile != null)
		MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00c4;
		}
	}
	{
		// for (int i = 0; i < gestureProfile.Gestures.Length; i++)
		V_2 = 0;
		goto IL_00ad;
	}

IL_003e:
	{
		// var gesture = gestureProfile.Gestures[i];
		MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * L_8 = V_0;
		NullCheck(L_8);
		MixedRealityGestureMappingU5BU5D_t9681541389FDD3AD37D8A632D57DEC7E79D45F1C* L_9 = MixedRealityGesturesProfile_get_Gestures_m4068C89B991D470FCC6E9BDC10369E24154235A5(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// switch (gesture.GestureType)
		int32_t L_13 = MixedRealityGestureMapping_get_GestureType_m94227B8901DD16C3C76B51BE0E9378D9BC48584C((MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_13;
		int32_t L_14 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)))
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_009c;
			}
		}
	}
	{
		goto IL_00a9;
	}

IL_006f:
	{
		// holdAction = gesture.Action;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_15 = MixedRealityGestureMapping_get_Action_m2704A5B6EE71E4176B698DA0A94984D04D86D3C0((MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D *)(&V_3), /*hidden argument*/NULL);
		__this->set_holdAction_25(L_15);
		// break;
		goto IL_00a9;
	}

IL_007e:
	{
		// manipulationAction = gesture.Action;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_16 = MixedRealityGestureMapping_get_Action_m2704A5B6EE71E4176B698DA0A94984D04D86D3C0((MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D *)(&V_3), /*hidden argument*/NULL);
		__this->set_manipulationAction_27(L_16);
		// break;
		goto IL_00a9;
	}

IL_008d:
	{
		// navigationAction = gesture.Action;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_17 = MixedRealityGestureMapping_get_Action_m2704A5B6EE71E4176B698DA0A94984D04D86D3C0((MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D *)(&V_3), /*hidden argument*/NULL);
		__this->set_navigationAction_26(L_17);
		// break;
		goto IL_00a9;
	}

IL_009c:
	{
		// selectAction = gesture.Action;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_18 = MixedRealityGestureMapping_get_Action_m2704A5B6EE71E4176B698DA0A94984D04D86D3C0((MixedRealityGestureMapping_tD31D2F4503989BE9493C8C8F835901A4C0EC771D *)(&V_3), /*hidden argument*/NULL);
		__this->set_selectAction_28(L_18);
	}

IL_00a9:
	{
		// for (int i = 0; i < gestureProfile.Gestures.Length; i++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_00ad:
	{
		// for (int i = 0; i < gestureProfile.Gestures.Length; i++)
		int32_t L_20 = V_2;
		MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * L_21 = V_0;
		NullCheck(L_21);
		MixedRealityGestureMappingU5BU5D_t9681541389FDD3AD37D8A632D57DEC7E79D45F1C* L_22 = MixedRealityGesturesProfile_get_Gestures_m4068C89B991D470FCC6E9BDC10369E24154235A5(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_003e;
		}
	}
	{
		// useRailsNavigation = gestureProfile.UseRailsNavigation;
		MixedRealityGesturesProfile_tC744C8A05A1C8C818BC26B1D0731AAF88FEEA0A8 * L_23 = V_0;
		NullCheck(L_23);
		bool L_24 = MixedRealityGesturesProfile_get_UseRailsNavigation_m546099EB1F46146DCCC38FC41A75AF7B48C8F69E(L_23, /*hidden argument*/NULL);
		__this->set_useRailsNavigation_29(L_24);
	}

IL_00c4:
	{
		// MixedRealityInputSimulationProfile inputSimProfile = null;
		V_1 = (MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D *)NULL;
		// if (CoreServices.InputSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_25 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ea;
		}
	}
	{
		// inputSimProfile = (CoreServices.InputSystem as IMixedRealityDataProviderAccess).GetDataProvider<IInputSimulationService>()?.InputSimulationProfile;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_26 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_26, IMixedRealityDataProviderAccess_t9324ABE13674A9152F8C12740CF8048326F19B76_il2cpp_TypeInfo_var)));
		RuntimeObject* L_27 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityDataProviderAccess_GetDataProvider_TisIInputSimulationService_tC51C5CCBD4292645E13330635A1A9FBCB5E5F0C5_mA573C095F7E5F10F958374F8F9788126EEA1833C_RuntimeMethod_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_26, IMixedRealityDataProviderAccess_t9324ABE13674A9152F8C12740CF8048326F19B76_il2cpp_TypeInfo_var)), (String_t*)NULL);
		RuntimeObject* L_28 = L_27;
		G_B20_0 = L_28;
		if (L_28)
		{
			G_B21_0 = L_28;
			goto IL_00e4;
		}
	}
	{
		G_B22_0 = ((MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D *)(NULL));
		goto IL_00e9;
	}

IL_00e4:
	{
		NullCheck(G_B21_0);
		MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * L_29 = InterfaceFuncInvoker0< MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile Microsoft.MixedReality.Toolkit.Input.IInputSimulationService::get_InputSimulationProfile() */, IInputSimulationService_tC51C5CCBD4292645E13330635A1A9FBCB5E5F0C5_il2cpp_TypeInfo_var, G_B21_0);
		G_B22_0 = L_29;
	}

IL_00e9:
	{
		V_1 = G_B22_0;
	}

IL_00ea:
	{
		// if (inputSimProfile != null)
		MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * L_30 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_31 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_30, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_010b;
		}
	}
	{
		// holdStartDuration = inputSimProfile.HoldStartDuration;
		MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * L_32 = V_1;
		NullCheck(L_32);
		float L_33 = MixedRealityInputSimulationProfile_get_HoldStartDuration_m2D622230F1B0CD7316E4708AEF76EC005F72A6B9(L_32, /*hidden argument*/NULL);
		__this->set_holdStartDuration_30(L_33);
		// navigationStartThreshold = inputSimProfile.NavigationStartThreshold;
		MixedRealityInputSimulationProfile_t8B2DB9FF73A1148ADF516CC2C780F43ED0955F8D * L_34 = V_1;
		NullCheck(L_34);
		float L_35 = MixedRealityInputSimulationProfile_get_NavigationStartThreshold_mF3EE1592F556C226599C7F7C9E8F7C628665EE76(L_34, /*hidden argument*/NULL);
		__this->set_navigationStartThreshold_31(L_35);
	}

IL_010b:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_DefaultInteractions()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* SimulatedGestureHand_get_DefaultInteractions_m46D7F02EC54260C318B9B926BA3FCC25F72BEA93 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_get_DefaultInteractions_m46D7F02EC54260C318B9B926BA3FCC25F72BEA93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Select", AxisType.Digital, DeviceInputType.Select, MixedRealityInputAction.None),
		//     new MixedRealityInteractionMapping(1, "Grip Pose", AxisType.SixDof, DeviceInputType.SpatialGrip, MixedRealityInputAction.None),
		// };
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_0 = (MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69_il2cpp_TypeInfo_var, (uint32_t)2);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_2 = MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_3 = (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m597D2A652DDEB4709A1A739C441364D5C2271EFB(L_3, 0, _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A, 2, ((int32_t)25), L_2, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)L_3);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_4 = L_1;
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_5 = MixedRealityInputAction_get_None_mA802BC11DC7C5C4EB43648F29A8E0C1B84BB5FA7(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_6 = (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m597D2A652DDEB4709A1A739C441364D5C2271EFB(L_6, 1, _stringLiteral66654F3A427908EF2AB0102919620271D634DA8A, 7, ((int32_t)14), L_5, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE *)L_6);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateInteractions_mC0EB6BD29F382CFAA47D673933AEE14EFB9D35EC (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateInteractions_mC0EB6BD29F382CFAA47D673933AEE14EFB9D35EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_5;
	memset(&V_5, 0, sizeof(V_5));
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B35_0;
	memset(&G_B35_0, 0, sizeof(G_B35_0));
	int32_t G_B35_1 = 0;
	{
		// EnsureProfileSettings();
		SimulatedGestureHand_EnsureProfileSettings_m4261A25FFE492BBCF2CBCF0B27584C81A9E2394D(__this, /*hidden argument*/NULL);
		// Vector3 lastPosition = currentPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_currentPosition_37();
		V_0 = L_0;
		// currentPosition = jointPoses[TrackedHandJoint.IndexTip].Position;
		Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * L_1 = ((SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4 *)__this)->get_jointPoses_23();
		NullCheck(L_1);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_2 = Dictionary_2_get_Item_mE48F08682093E8FBE18CE8FDD606E0AB2DA12A29(L_1, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_mE48F08682093E8FBE18CE8FDD606E0AB2DA12A29_RuntimeMethod_var);
		V_1 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = MixedRealityPose_get_Position_mF558364148A015EF88E081BB4947F1EB60CEED20((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_1), /*hidden argument*/NULL);
		__this->set_currentPosition_37(L_3);
		// cumulativeDelta += currentPosition - lastPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_cumulativeDelta_38();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_currentPosition_37();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_4, L_7, /*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_8);
		// currentGripPose.Position = currentPosition;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * L_9 = __this->get_address_of_currentGripPose_39();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_currentPosition_37();
		MixedRealityPose_set_Position_m3F0AAAA01636AC918F2F8BB50B1205B8627BF367((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)L_9, L_10, /*hidden argument*/NULL);
		// if (lastPosition != currentPosition)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = __this->get_currentPosition_37();
		bool L_13 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0081;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePositionChanged(InputSource, this, currentPosition);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_15 = L_14;
		G_B2_0 = L_15;
		if (L_15)
		{
			G_B3_0 = L_15;
			goto IL_006f;
		}
	}
	{
		goto IL_0081;
	}

IL_006f:
	{
		RuntimeObject* L_16 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = __this->get_currentPosition_37();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, L_16, __this, L_17);
	}

IL_0081:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		V_2 = 0;
		goto IL_0234;
	}

IL_0088:
	{
		// switch (Interactions[i].InputType)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_18 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		int32_t L_22 = MixedRealityInteractionMapping_get_InputType_m211B4ADEE5BE65FE4EBFFD5A637AF63B72363597(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)14))))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)25))))
		{
			goto IL_0101;
		}
	}
	{
		goto IL_0230;
	}

IL_00a5:
	{
		// Interactions[i].PoseData = currentGripPose;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_25 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_29 = __this->get_currentGripPose_39();
		NullCheck(L_28);
		MixedRealityInteractionMapping_set_PoseData_m85792C24C6CC2156EE9426C6148754AADC27B2C4(L_28, L_29, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_30 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		bool L_34 = MixedRealityInteractionMapping_get_Changed_m71F642195939676EF2A093E9B70C4B9786F62DDC(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0230;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentGripPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_35 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_36 = L_35;
		G_B10_0 = L_36;
		if (L_36)
		{
			G_B11_0 = L_36;
			goto IL_00d8;
		}
	}
	{
		goto IL_0230;
	}

IL_00d8:
	{
		RuntimeObject* L_37 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		uint8_t L_38 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_39 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_43 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m17E18F9070908763EA75BDC25D1F4121A21D8285(L_42, /*hidden argument*/NULL);
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_44 = __this->get_currentGripPose_39();
		NullCheck(G_B11_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 , MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B11_0, L_37, L_38, L_43, L_44);
		// break;
		goto IL_0230;
	}

IL_0101:
	{
		// Interactions[i].BoolData = handData.IsPinching;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_45 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * L_49 = ___handData0;
		NullCheck(L_49);
		bool L_50 = SimulatedHandData_get_IsPinching_mC1C6E78D46572266C7E896E8035D5ECFDC313DC1(L_49, /*hidden argument*/NULL);
		NullCheck(L_48);
		MixedRealityInteractionMapping_set_BoolData_m7ACC537BDBD7A65C5BEE8E47DB0672F4FBBE6946(L_48, L_50, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_51 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		bool L_55 = MixedRealityInteractionMapping_get_Changed_m71F642195939676EF2A093E9B70C4B9786F62DDC(L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_01c0;
		}
	}
	{
		// if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_56 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		bool L_60 = MixedRealityInteractionMapping_get_BoolData_m7D731BA079216F5A02B66ED7CB3DC31A5E9C038D(L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0179;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_61 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_62 = L_61;
		G_B15_0 = L_62;
		if (L_62)
		{
			G_B16_0 = L_62;
			goto IL_0140;
		}
	}
	{
		goto IL_015e;
	}

IL_0140:
	{
		RuntimeObject* L_63 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		uint8_t L_64 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_65 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_66 = V_2;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_69 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m17E18F9070908763EA75BDC25D1F4121A21D8285(L_68, /*hidden argument*/NULL);
		NullCheck(G_B16_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B16_0, L_63, L_64, L_69);
	}

IL_015e:
	{
		// SelectDownStartTime = Time.time;
		float L_70 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_SelectDownStartTime_32(L_70);
		// cumulativeDelta = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_71);
		// }
		goto IL_0230;
	}

IL_0179:
	{
		// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_72 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_73 = L_72;
		G_B19_0 = L_73;
		if (L_73)
		{
			G_B20_0 = L_73;
			goto IL_0184;
		}
	}
	{
		goto IL_01a2;
	}

IL_0184:
	{
		RuntimeObject* L_74 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		uint8_t L_75 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_76 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_77 = V_2;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_80 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m17E18F9070908763EA75BDC25D1F4121A21D8285(L_79, /*hidden argument*/NULL);
		NullCheck(G_B20_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B20_0, L_74, L_75, L_80);
	}

IL_01a2:
	{
		// TryCompleteSelect();
		SimulatedGestureHand_TryCompleteSelect_mBEC08F8164D62AD63519811FAF378FC7ADBE4D7E(__this, /*hidden argument*/NULL);
		// TryCompleteHold();
		SimulatedGestureHand_TryCompleteHold_m461E3CA914F603A9E465A057E4378EDB0DC3C3DD(__this, /*hidden argument*/NULL);
		// TryCompleteManipulation();
		SimulatedGestureHand_TryCompleteManipulation_mAC59D3AE7CC32C421637FA5F6C2EA82310869312(__this, /*hidden argument*/NULL);
		// TryCompleteNavigation();
		SimulatedGestureHand_TryCompleteNavigation_m6F5E8EB65A11AABEDF5BEF75CA1F2812753B60EF(__this, /*hidden argument*/NULL);
		// }
		goto IL_0230;
	}

IL_01c0:
	{
		// else if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_81 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		int32_t L_82 = V_2;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		MixedRealityInteractionMapping_t2EA494D4C756B9B3DA7273AFE6035396C0DBF6AE * L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		bool L_85 = MixedRealityInteractionMapping_get_BoolData_m7D731BA079216F5A02B66ED7CB3DC31A5E9C038D(L_84, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_0230;
		}
	}
	{
		// if (manipulationInProgress)
		bool L_86 = __this->get_manipulationInProgress_34();
		if (!L_86)
		{
			goto IL_01dd;
		}
	}
	{
		// UpdateManipulation();
		SimulatedGestureHand_UpdateManipulation_m90F52C758B7D26F009A12DA074B6F6FCC519FB67(__this, /*hidden argument*/NULL);
	}

IL_01dd:
	{
		// if (navigationInProgress)
		bool L_87 = __this->get_navigationInProgress_35();
		if (!L_87)
		{
			goto IL_01eb;
		}
	}
	{
		// UpdateNavigation();
		SimulatedGestureHand_UpdateNavigation_mC10A6736D314C28C59875709952BDE518F75011C(__this, /*hidden argument*/NULL);
	}

IL_01eb:
	{
		// if (cumulativeDelta.magnitude > navigationStartThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_88 = __this->get_address_of_cumulativeDelta_38();
		float L_89 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_88, /*hidden argument*/NULL);
		float L_90 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_89) > ((float)L_90))))
		{
			goto IL_0215;
		}
	}
	{
		// TryCancelHold();
		SimulatedGestureHand_TryCancelHold_m9D135EAF833702F549EDF7A9F41EBCA170353D87(__this, /*hidden argument*/NULL);
		// TryStartNavigation();
		SimulatedGestureHand_TryStartNavigation_m05CFE72391C9BCEF7453E7274E5837C45D704C4D(__this, /*hidden argument*/NULL);
		// TryStartManipulation();
		SimulatedGestureHand_TryStartManipulation_m74F15823346BEEE40193E2010787862FBF47580F(__this, /*hidden argument*/NULL);
		// }
		goto IL_0230;
	}

IL_0215:
	{
		// else if (Time.time >= SelectDownStartTime + holdStartDuration)
		float L_91 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_92 = __this->get_SelectDownStartTime_32();
		float L_93 = __this->get_holdStartDuration_30();
		if ((!(((float)L_91) >= ((float)((float)il2cpp_codegen_add((float)L_92, (float)L_93))))))
		{
			goto IL_0230;
		}
	}
	{
		// TryStartHold();
		SimulatedGestureHand_TryStartHold_m1ECE36EAFA216F734C2CB12DE1CD37AD3DD7DC60(__this, /*hidden argument*/NULL);
	}

IL_0230:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_94 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_0234:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_95 = V_2;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_96 = BaseController_get_Interactions_m43BB7629489E2B286CBEAA381DF0340BC2B11A07(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_97 = L_96;
		G_B33_0 = L_97;
		G_B33_1 = L_95;
		if (L_97)
		{
			G_B34_0 = L_97;
			G_B34_1 = L_95;
			goto IL_024b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_98 = V_5;
		G_B35_0 = L_98;
		G_B35_1 = G_B33_1;
		goto IL_0252;
	}

IL_024b:
	{
		NullCheck(G_B34_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_99;
		memset(&L_99, 0, sizeof(L_99));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_99), (((int32_t)((int32_t)(((RuntimeArray *)G_B34_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B35_0 = L_99;
		G_B35_1 = G_B34_1;
	}

IL_0252:
	{
		V_4 = G_B35_0;
		int32_t L_100 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_101 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B35_1) < ((int32_t)L_100))? 1 : 0)&(int32_t)L_101)))
		{
			goto IL_0088;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartHold_m1ECE36EAFA216F734C2CB12DE1CD37AD3DD7DC60 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartHold_m1ECE36EAFA216F734C2CB12DE1CD37AD3DD7DC60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (!holdInProgress)
		bool L_0 = __this->get_holdInProgress_33();
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureStarted(this, holdAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = __this->get_holdAction_25();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// holdInProgress = true;
		__this->set_holdInProgress_33((bool)1);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteHold_m461E3CA914F603A9E465A057E4378EDB0DC3C3DD (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteHold_m461E3CA914F603A9E465A057E4378EDB0DC3C3DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (holdInProgress)
		bool L_0 = __this->get_holdInProgress_33();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCompleted(this, holdAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = __this->get_holdAction_25();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(51 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// holdInProgress = false;
		__this->set_holdInProgress_33((bool)0);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelHold_m9D135EAF833702F549EDF7A9F41EBCA170353D87 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelHold_m9D135EAF833702F549EDF7A9F41EBCA170353D87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (holdInProgress)
		bool L_0 = __this->get_holdInProgress_33();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCanceled(this, holdAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = __this->get_holdAction_25();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// holdInProgress = false;
		__this->set_holdInProgress_33((bool)0);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartManipulation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartManipulation_m74F15823346BEEE40193E2010787862FBF47580F (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartManipulation_m74F15823346BEEE40193E2010787862FBF47580F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (!manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureStarted(this, manipulationAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = __this->get_manipulationAction_27();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// manipulationInProgress = true;
		__this->set_manipulationInProgress_34((bool)1);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateManipulation()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateManipulation_m90F52C758B7D26F009A12DA074B6F6FCC519FB67 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateManipulation_m90F52C758B7D26F009A12DA074B6F6FCC519FB67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureUpdated(this, manipulationAction, cumulativeDelta);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = __this->get_manipulationAction_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_cumulativeDelta_38();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(48 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteManipulation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteManipulation_mAC59D3AE7CC32C421637FA5F6C2EA82310869312 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteManipulation_mAC59D3AE7CC32C421637FA5F6C2EA82310869312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCompleted(this, manipulationAction, cumulativeDelta);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_0025;
	}

IL_0013:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = __this->get_manipulationAction_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_cumulativeDelta_38();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(53 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_0025:
	{
		// manipulationInProgress = false;
		__this->set_manipulationInProgress_34((bool)0);
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelManipulation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelManipulation_m912880A1508BB892A908611C464E4447F99DC672 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelManipulation_m912880A1508BB892A908611C464E4447F99DC672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCanceled(this, manipulationAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = __this->get_manipulationAction_27();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// manipulationInProgress = false;
		__this->set_manipulationInProgress_34((bool)0);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteSelect()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteSelect_mBEC08F8164D62AD63519811FAF378FC7ADBE4D7E (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteSelect_mBEC08F8164D62AD63519811FAF378FC7ADBE4D7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// if (!manipulationInProgress && !holdInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1 = __this->get_holdInProgress_33();
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCompleted(this, selectAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001b;
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_4 = __this->get_selectAction_28();
		NullCheck(G_B4_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(51 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B4_0, __this, L_4);
	}

IL_0027:
	{
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartNavigation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartNavigation_m05CFE72391C9BCEF7453E7274E5837C45D704C4D (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartNavigation_m05CFE72391C9BCEF7453E7274E5837C45D704C4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (!navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureStarted(this, navigationAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = __this->get_navigationAction_26();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// navigationInProgress = true;
		__this->set_navigationInProgress_35((bool)1);
		// currentRailsUsed = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_4);
		// UpdateNavigationRails();
		SimulatedGestureHand_UpdateNavigationRails_m299766F499331684CEB2002A76AB307FC9A4961E(__this, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigation()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigation_mC10A6736D314C28C59875709952BDE518F75011C (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateNavigation_mC10A6736D314C28C59875709952BDE518F75011C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// UpdateNavigationRails();
		SimulatedGestureHand_UpdateNavigationRails_m299766F499331684CEB2002A76AB307FC9A4961E(__this, /*hidden argument*/NULL);
		// CoreServices.InputSystem?.RaiseGestureUpdated(this, navigationAction, navigationDelta);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = __this->get_navigationAction_26();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = SimulatedGestureHand_get_navigationDelta_m4CBDC2BEDEB6CE39E01306012B9987BB240BC695(__this, /*hidden argument*/NULL);
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(48 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteNavigation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteNavigation_m6F5E8EB65A11AABEDF5BEF75CA1F2812753B60EF (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteNavigation_m6F5E8EB65A11AABEDF5BEF75CA1F2812753B60EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCompleted(this, navigationAction, navigationDelta);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_0025;
	}

IL_0013:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = __this->get_navigationAction_26();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = SimulatedGestureHand_get_navigationDelta_m4CBDC2BEDEB6CE39E01306012B9987BB240BC695(__this, /*hidden argument*/NULL);
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(53 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_0025:
	{
		// navigationInProgress = false;
		__this->set_navigationInProgress_35((bool)0);
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelNavigation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelNavigation_m95FC011099E268BF2A956D7CCF032C65976781B5 (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelNavigation_m95FC011099E268BF2A956D7CCF032C65976781B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCanceled(this, navigationAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  L_3 = __this->get_navigationAction_26();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// navigationInProgress = false;
		__this->set_navigationInProgress_35((bool)0);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigationRails()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigationRails_m299766F499331684CEB2002A76AB307FC9A4961E (SimulatedGestureHand_t4D432F64300AF0614A6300E9891704633981C4D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateNavigationRails_m299766F499331684CEB2002A76AB307FC9A4961E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (useRailsNavigation && currentRailsUsed == Vector3.one)
		bool L_0 = __this->get_useRailsNavigation_29();
		if (!L_0)
		{
			goto IL_00b8;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_currentRailsUsed_36();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		bool L_3 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00b8;
		}
	}
	{
		// if (Mathf.Abs(cumulativeDelta.x) >= navigationStartThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = __this->get_address_of_cumulativeDelta_38();
		float L_5 = L_4->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_6 = fabsf(L_5);
		float L_7 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_0053;
		}
	}
	{
		// currentRailsUsed = new Vector3(1, 0, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_8);
		// }
		return;
	}

IL_0053:
	{
		// else if (Mathf.Abs(cumulativeDelta.y) > navigationStartThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_9 = __this->get_address_of_cumulativeDelta_38();
		float L_10 = L_9->get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_11 = fabsf(L_10);
		float L_12 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0086;
		}
	}
	{
		// currentRailsUsed = new Vector3(0, 1, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_13);
		// }
		return;
	}

IL_0086:
	{
		// else if (Mathf.Abs(cumulativeDelta.z) > navigationStartThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_14 = __this->get_address_of_cumulativeDelta_38();
		float L_15 = L_14->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_16 = fabsf(L_15);
		float L_17 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_00b8;
		}
	}
	{
		// currentRailsUsed = new Vector3(0, 0, 1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_18);
	}

IL_00b8:
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
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
extern "C" IL2CPP_METHOD_ATTR void SimulatedHand__ctor_mEE94D186420423261F5C4515CD1473E1CCB0D496 (SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand__ctor_mEE94D186420423261F5C4515CD1473E1CCB0D496_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected readonly Dictionary<TrackedHandJoint, MixedRealityPose> jointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * L_0 = (Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A *)il2cpp_codegen_object_new(Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m46603BE88578C9C43DD173187E292CF93380A50C(L_0, /*hidden argument*/Dictionary_2__ctor_m46603BE88578C9C43DD173187E292CF93380A50C_RuntimeMethod_var);
		__this->set_jointPoses_23(L_0);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_1 = ___trackingState0;
		uint8_t L_2 = ___controllerHandedness1;
		RuntimeObject* L_3 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tB16E9C2700709844772AAA99C5971C70CA9F2C69* L_4 = ___interactions3;
		BaseHand__ctor_m93A378A33F56DC67B20EB974FFD2466ADE7D9A3B(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// {}
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPoseU26)
extern "C" IL2CPP_METHOD_ATTR bool SimulatedHand_TryGetJoint_m101D7D07EDFEEB92EE9F564800E1DB84E328B0FA (SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4 * __this, int32_t ___joint0, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand_TryGetJoint_m101D7D07EDFEEB92EE9F564800E1DB84E328B0FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return jointPoses.TryGetValue(joint, out pose);
		Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * L_0 = __this->get_jointPoses_23();
		int32_t L_1 = ___joint0;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m02BB98064775317706C9F557D3509512207541BE(L_0, L_1, (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m02BB98064775317706C9F557D3509512207541BE_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::UpdateState(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
extern "C" IL2CPP_METHOD_ATTR void SimulatedHand_UpdateState_mF6B390CE9DBAE7E32A462371FF3F6903243C89E0 (SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4 * __this, SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand_UpdateState_mF6B390CE9DBAE7E32A462371FF3F6903243C89E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// for (int i = 0; i < jointCount; i++)
		V_0 = 0;
		goto IL_004a;
	}

IL_0004:
	{
		// TrackedHandJoint handJoint = (TrackedHandJoint)i;
		int32_t L_0 = V_0;
		V_1 = L_0;
		// if (!jointPoses.ContainsKey(handJoint))
		Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * L_1 = __this->get_jointPoses_23();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_m9049F22F4FBC49FAE3892048A03893CE895F257C(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m9049F22F4FBC49FAE3892048A03893CE895F257C_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// jointPoses.Add(handJoint, handData.Joints[i]);
		Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * L_4 = __this->get_jointPoses_23();
		int32_t L_5 = V_1;
		SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * L_6 = ___handData0;
		NullCheck(L_6);
		MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* L_7 = SimulatedHandData_get_Joints_m850D7CC0C6EF6E9FD728124AFE3081FD454250B5(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		Dictionary_2_Add_m6A2BB0894C18F943CB542B81BA8B0EE1B465DBA3(L_4, L_5, L_10, /*hidden argument*/Dictionary_2_Add_m6A2BB0894C18F943CB542B81BA8B0EE1B465DBA3_RuntimeMethod_var);
		// }
		goto IL_0046;
	}

IL_002e:
	{
		// jointPoses[handJoint] = handData.Joints[i];
		Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * L_11 = __this->get_jointPoses_23();
		int32_t L_12 = V_1;
		SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * L_13 = ___handData0;
		NullCheck(L_13);
		MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* L_14 = SimulatedHandData_get_Joints_m850D7CC0C6EF6E9FD728124AFE3081FD454250B5(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		Dictionary_2_set_Item_m60DC2ADCA437BFFC44422052FBDC70D9FBFB5C7D(L_11, L_12, L_17, /*hidden argument*/Dictionary_2_set_Item_m60DC2ADCA437BFFC44422052FBDC70D9FBFB5C7D_RuntimeMethod_var);
	}

IL_0046:
	{
		// for (int i = 0; i < jointCount; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004a:
	{
		// for (int i = 0; i < jointCount; i++)
		int32_t L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4_il2cpp_TypeInfo_var);
		int32_t L_20 = ((SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4_il2cpp_TypeInfo_var))->get_jointCount_22();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseHandJointsUpdated(InputSource, ControllerHandedness, jointPoses);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_21 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_22 = L_21;
		G_B7_0 = L_22;
		if (L_22)
		{
			G_B8_0 = L_22;
			goto IL_005d;
		}
	}
	{
		goto IL_0074;
	}

IL_005d:
	{
		RuntimeObject* L_23 = BaseController_get_InputSource_m2ECAF064E6F5C389A39427AE80468AF8CFF74938(__this, /*hidden argument*/NULL);
		uint8_t L_24 = BaseController_get_ControllerHandedness_m6052981C379CF5F69B934582C4F82D34D4C94F7A(__this, /*hidden argument*/NULL);
		Dictionary_2_t2A16510F1B30A18E35E7302CC99B335F29C5C37A * L_25 = __this->get_jointPoses_23();
		NullCheck(G_B8_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, RuntimeObject* >::Invoke(62 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, G_B8_0, L_23, L_24, L_25);
	}

IL_0074:
	{
		// UpdateVelocity();
		BaseHand_UpdateVelocity_mD3F090608EFC78C965C93C2452FCF18F4A943DFD(__this, /*hidden argument*/NULL);
		// UpdateInteractions(handData);
		SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * L_26 = ___handData0;
		VirtActionInvoker1< SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * >::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData) */, __this, L_26);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SimulatedHand__cctor_m5F511300CF35438980E4E1D32EA064408E678775 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand__cctor_m5F511300CF35438980E4E1D32EA064408E678775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_t176970888553432D46070ECFF0B02AD1B8BA2B77_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHand_t934181E248423C01BA0B8CD9A13DFA28C10D3FC4_il2cpp_TypeInfo_var))->set_jointCount_22((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
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
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsTracked()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsTracked_mB36CBB48E864BC4A76716A171B3BDF667FBC4726 (SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsTracked => isTracked;
		bool L_0 = __this->get_isTracked_1();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_Joints()
extern "C" IL2CPP_METHOD_ATTR MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* SimulatedHandData_get_Joints_m850D7CC0C6EF6E9FD728124AFE3081FD454250B5 (SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityPose[] Joints => joints;
		MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* L_0 = __this->get_joints_2();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsPinching()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsPinching_mC1C6E78D46572266C7E896E8035D5ECFDC313DC1 (SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPinching => isPinching;
		bool L_0 = __this->get_isPinching_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::Copy(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandData_Copy_mE64F1DA2C17400BEEA519C265C2297ED2692469D (SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * __this, SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData_Copy_mE64F1DA2C17400BEEA519C265C2297ED2692469D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// isTracked = other.isTracked;
		SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1 = L_0->get_isTracked_1();
		__this->set_isTracked_1(L_1);
		// isPinching = other.isPinching;
		SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * L_2 = ___other0;
		NullCheck(L_2);
		bool L_3 = L_2->get_isPinching_3();
		__this->set_isPinching_3(L_3);
		// for (int i = 0; i < jointCount; ++i)
		V_0 = 0;
		goto IL_0038;
	}

IL_001c:
	{
		// joints[i] = other.joints[i];
		MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* L_4 = __this->get_joints_2();
		int32_t L_5 = V_0;
		SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * L_6 = ___other0;
		NullCheck(L_6);
		MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* L_7 = L_6->get_joints_2();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 )L_10);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0038:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F_il2cpp_TypeInfo_var);
		int32_t L_13 = ((SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::Update(System.Boolean,System.Boolean,Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator)
extern "C" IL2CPP_METHOD_ATTR bool SimulatedHandData_Update_m46453B1FBA57F7E13F555EC1C1FA9A491C6F7D1A (SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * __this, bool ___isTrackedNew0, bool ___isPinchingNew1, HandJointDataGenerator_tEE5264C08256E586FB0B898065B029938EFE8188 * ___generator2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool handDataChanged = false;
		V_0 = (bool)0;
		// if (isTracked != isTrackedNew || isPinching != isPinchingNew)
		bool L_0 = __this->get_isTracked_1();
		bool L_1 = ___isTrackedNew0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		bool L_2 = __this->get_isPinching_3();
		bool L_3 = ___isPinchingNew1;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}

IL_0014:
	{
		// isTracked = isTrackedNew;
		bool L_4 = ___isTrackedNew0;
		__this->set_isTracked_1(L_4);
		// isPinching = isPinchingNew;
		bool L_5 = ___isPinchingNew1;
		__this->set_isPinching_3(L_5);
		// handDataChanged = true;
		V_0 = (bool)1;
	}

IL_0024:
	{
		// if (isTracked)
		bool L_6 = __this->get_isTracked_1();
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// generator(Joints);
		HandJointDataGenerator_tEE5264C08256E586FB0B898065B029938EFE8188 * L_7 = ___generator2;
		MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* L_8 = SimulatedHandData_get_Joints_m850D7CC0C6EF6E9FD728124AFE3081FD454250B5(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		HandJointDataGenerator_Invoke_m0D7512E17F49A4A2C359726340CE4AB28C9CE3BF(L_7, L_8, /*hidden argument*/NULL);
		// handDataChanged = true;
		V_0 = (bool)1;
	}

IL_003a:
	{
		// return handDataChanged;
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandData__ctor_m44052F3BE2320A9C4238340444313FF3F459DC7A (SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData__ctor_m44052F3BE2320A9C4238340444313FF3F459DC7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MixedRealityPose[] joints = new MixedRealityPose[jointCount];
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F_il2cpp_TypeInfo_var))->get_jointCount_0();
		MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* L_1 = (MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E*)SZArrayNew(MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_joints_2(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandData__cctor_m94195FC724AAC5E1E4EBC7A7A639E25B8A7A5166 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData__cctor_m94195FC724AAC5E1E4EBC7A7A639E25B8A7A5166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_t176970888553432D46070ECFF0B02AD1B8BA2B77_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_tA713E1A44EED41F46FF10BC8D65653CA58D4411F_il2cpp_TypeInfo_var))->set_jointCount_0((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
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
extern "C"  void DelegatePInvokeWrapper_HandJointDataGenerator_tEE5264C08256E586FB0B898065B029938EFE8188 (HandJointDataGenerator_tEE5264C08256E586FB0B898065B029938EFE8188 * __this, MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* ___jointPoses0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___jointPoses0U27 to native representation
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * ____jointPoses0_marshaled = NULL;
	if (___jointPoses0 != NULL)
	{
		____jointPoses0_marshaled = reinterpret_cast<MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *>((___jointPoses0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____jointPoses0_marshaled);

}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HandJointDataGenerator__ctor_m1B364663F367A3C824F5C3B84698534E867D83C6 (HandJointDataGenerator_tEE5264C08256E586FB0B898065B029938EFE8188 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::Invoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[])
extern "C" IL2CPP_METHOD_ATTR void HandJointDataGenerator_Invoke_m0D7512E17F49A4A2C359726340CE4AB28C9CE3BF (HandJointDataGenerator_tEE5264C08256E586FB0B898065B029938EFE8188 * __this, MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* ___jointPoses0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___jointPoses0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___jointPoses0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___jointPoses0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___jointPoses0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* >::Invoke(targetMethod, targetThis, ___jointPoses0);
							else
								GenericVirtActionInvoker1< MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* >::Invoke(targetMethod, targetThis, ___jointPoses0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___jointPoses0);
							else
								VirtActionInvoker1< MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___jointPoses0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___jointPoses0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___jointPoses0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___jointPoses0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___jointPoses0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* >::Invoke(targetMethod, targetThis, ___jointPoses0);
						else
							GenericVirtActionInvoker1< MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* >::Invoke(targetMethod, targetThis, ___jointPoses0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___jointPoses0);
						else
							VirtActionInvoker1< MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___jointPoses0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::BeginInvoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HandJointDataGenerator_BeginInvoke_m80762AF885B402C94F2067123CF91AACDDFFAD0E (HandJointDataGenerator_tEE5264C08256E586FB0B898065B029938EFE8188 * __this, MixedRealityPoseU5BU5D_t70740D4A7118731F3C76255D7633A1F8663CA65E* ___jointPoses0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___jointPoses0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void HandJointDataGenerator_EndInvoke_m26F05422C36A4042407993835FD98F8BEDDA753F (HandJointDataGenerator_tEE5264C08256E586FB0B898065B029938EFE8188 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::CalculateJointRotations(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[],UnityEngine.Quaternion[])
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandUtils_CalculateJointRotations_m279C3CC262DF9B0CD2862BE036BB8CC5DC679E8C (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* ___jointOrientationsOut2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_CalculateJointRotations_m279C3CC262DF9B0CD2862BE036BB8CC5DC679E8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_9;
	memset(&V_9, 0, sizeof(V_9));
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// int[] jointsPerFinger = { 4, 5, 5, 5, 5 }; // thumb, index, middle, right, pinky
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t535EBE7A8E4E331E9C1387F1529A9DEC66F0C0DA____6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_1;
		// for (int fingerIndex = 0; fingerIndex < numFingers; fingerIndex++)
		V_1 = 0;
		goto IL_00e1;
	}

IL_0019:
	{
		// int jointsCurrentFinger = jointsPerFinger[fingerIndex];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// int lowIndex = (int)TrackedHandJoint.ThumbMetacarpalJoint + jointsPerFinger.Take(fingerIndex).Sum();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = V_0;
		int32_t L_8 = V_1;
		RuntimeObject* L_9 = Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B((RuntimeObject*)(RuntimeObject*)L_7, L_8, /*hidden argument*/Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B_RuntimeMethod_var);
		int32_t L_10 = Enumerable_Sum_mA81913DBCF3086B4716F692F9DB797D7DD6B7583(L_9, /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_10));
		// int highIndex = lowIndex + jointsCurrentFinger - 1;
		int32_t L_11 = V_3;
		int32_t L_12 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), (int32_t)1));
		// for (int jointStartidx = lowIndex; jointStartidx <= highIndex; jointStartidx++)
		int32_t L_13 = V_3;
		V_5 = L_13;
		goto IL_00d4;
	}

IL_003b:
	{
		// int jointEndidx = jointStartidx == lowIndex ? (int)TrackedHandJoint.Wrist : jointStartidx - 1;
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_16 = V_5;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_6 = G_B5_0;
		// Vector3 boneForward = jointPositions[jointStartidx] - jointPositions[jointEndidx];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_17 = ___jointPositions1;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_21 = ___jointPositions1;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_20, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// Vector3 boneUp = Vector3.Cross(boneForward, GetPalmRightVector(handedness, jointPositions));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_7;
		uint8_t L_27 = ___handedness0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_28 = ___jointPositions1;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandUtils_t4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = SimulatedHandUtils_GetPalmRightVector_m438EF652B2B1A958B38823F2727DF4FB7D49BEB2(L_27, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_26, L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		// if (boneForward.magnitude > float.Epsilon && boneUp.magnitude > float.Epsilon)
		float L_31 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		if ((!(((float)L_31) > ((float)(1.401298E-45f)))))
		{
			goto IL_00c1;
		}
	}
	{
		float L_32 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_8), /*hidden argument*/NULL);
		if ((!(((float)L_32) > ((float)(1.401298E-45f)))))
		{
			goto IL_00c1;
		}
	}
	{
		// Quaternion jointRotation = Quaternion.LookRotation(boneForward, boneUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_33, L_34, /*hidden argument*/NULL);
		V_9 = L_35;
		// if (fingerIndex == 0)
		int32_t L_36 = V_1;
		if (L_36)
		{
			goto IL_00b5;
		}
	}
	{
		// Quaternion rotateThumb90 = Quaternion.AngleAxis(handedness == Handedness.Left ? -90 : 90, boneForward);
		uint8_t L_37 = ___handedness0;
		if ((((int32_t)L_37) == ((int32_t)1)))
		{
			goto IL_00a2;
		}
	}
	{
		G_B11_0 = ((int32_t)90);
		goto IL_00a4;
	}

IL_00a2:
	{
		G_B11_0 = ((int32_t)-90);
	}

IL_00a4:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_39 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0((((float)((float)G_B11_0))), L_38, /*hidden argument*/NULL);
		// jointRotation = rotateThumb90 * jointRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = V_9;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_41 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_39, L_40, /*hidden argument*/NULL);
		V_9 = L_41;
	}

IL_00b5:
	{
		// jointOrientationsOut[jointStartidx] = jointRotation;
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_42 = ___jointOrientationsOut2;
		int32_t L_43 = V_5;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_44 = V_9;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_44);
		// }
		goto IL_00ce;
	}

IL_00c1:
	{
		// jointOrientationsOut[jointStartidx] = Quaternion.identity;
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_45 = ___jointOrientationsOut2;
		int32_t L_46 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_47 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_47);
	}

IL_00ce:
	{
		// for (int jointStartidx = lowIndex; jointStartidx <= highIndex; jointStartidx++)
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00d4:
	{
		// for (int jointStartidx = lowIndex; jointStartidx <= highIndex; jointStartidx++)
		int32_t L_49 = V_5;
		int32_t L_50 = V_4;
		if ((((int32_t)L_49) <= ((int32_t)L_50)))
		{
			goto IL_003b;
		}
	}
	{
		// for (int fingerIndex = 0; fingerIndex < numFingers; fingerIndex++)
		int32_t L_51 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00e1:
	{
		// for (int fingerIndex = 0; fingerIndex < numFingers; fingerIndex++)
		int32_t L_52 = V_1;
		if ((((int32_t)L_52) < ((int32_t)5)))
		{
			goto IL_0019;
		}
	}
	{
		// jointOrientationsOut[(int)TrackedHandJoint.Palm] = Quaternion.LookRotation(GetPalmForwardVector(jointPositions), GetPalmUpVector(handedness, jointPositions));
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_53 = ___jointOrientationsOut2;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_54 = ___jointPositions1;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandUtils_t4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = SimulatedHandUtils_GetPalmForwardVector_m524DE861131990B95C50F244D26D3AD878476E48(L_54, /*hidden argument*/NULL);
		uint8_t L_56 = ___handedness0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_57 = ___jointPositions1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = SimulatedHandUtils_GetPalmUpVector_mA3CA1373514A15049EB590DC03B8FA78186A9D97(L_56, L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_59 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_55, L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(2), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_59);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmForwardVector(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmForwardVector_m524DE861131990B95C50F244D26D3AD878476E48 (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmForwardVector_m524DE861131990B95C50F244D26D3AD878476E48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// Vector3 indexBase = jointPositions[(int)TrackedHandJoint.IndexKnuckle];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___jointPositions0;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		// Vector3 thumbMetaCarpal = jointPositions[(int)TrackedHandJoint.ThumbMetacarpalJoint];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ___jointPositions0;
		NullCheck(L_3);
		int32_t L_4 = 3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// Vector3 thumbMetaCarpalToIndex = indexBase - thumbMetaCarpal;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// return thumbMetaCarpalToIndex.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmUpVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmUpVector_mA3CA1373514A15049EB590DC03B8FA78186A9D97 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmUpVector_mA3CA1373514A15049EB590DC03B8FA78186A9D97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		// Vector3 indexBase = jointPositions[(int)TrackedHandJoint.IndexKnuckle];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___jointPositions1;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		// Vector3 pinkyBase = jointPositions[(int)TrackedHandJoint.PinkyKnuckle];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ___jointPositions1;
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// Vector3 ThumbMetaCarpal = jointPositions[(int)TrackedHandJoint.ThumbMetacarpalJoint];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_6 = ___jointPositions1;
		NullCheck(L_6);
		int32_t L_7 = 3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		// Vector3 ThumbMetaCarpalToPinky = pinkyBase - ThumbMetaCarpal;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// Vector3 ThumbMetaCarpalToIndex = indexBase - ThumbMetaCarpal;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// if (handedness == Handedness.Left)
		uint8_t L_13 = ___handedness0;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		// return Vector3.Cross(ThumbMetaCarpalToPinky, ThumbMetaCarpalToIndex).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		return L_17;
	}

IL_0039:
	{
		// return Vector3.Cross(ThumbMetaCarpalToIndex, ThumbMetaCarpalToPinky).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		return L_21;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmRightVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmRightVector_m438EF652B2B1A958B38823F2727DF4FB7D49BEB2 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmRightVector_m438EF652B2B1A958B38823F2727DF4FB7D49BEB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		// Vector3 indexBase = jointPositions[(int)TrackedHandJoint.IndexKnuckle];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___jointPositions1;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		// Vector3 pinkyBase = jointPositions[(int)TrackedHandJoint.PinkyKnuckle];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ___jointPositions1;
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// Vector3 thumbMetaCarpal = jointPositions[(int)TrackedHandJoint.ThumbMetacarpalJoint];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_6 = ___jointPositions1;
		NullCheck(L_6);
		int32_t L_7 = 3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		// Vector3 thumbMetaCarpalToPinky = pinkyBase - thumbMetaCarpal;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// Vector3 thumbMetaCarpalToIndex = indexBase - thumbMetaCarpal;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// Vector3 thumbMetaCarpalUp = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_3 = L_13;
		// if (handedness == Handedness.Left)
		uint8_t L_14 = ___handedness0;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// thumbMetaCarpalUp = Vector3.Cross(thumbMetaCarpalToPinky, thumbMetaCarpalToIndex).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_18;
		// }
		goto IL_0053;
	}

IL_0042:
	{
		// thumbMetaCarpalUp = Vector3.Cross(thumbMetaCarpalToIndex, thumbMetaCarpalToPinky).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_19, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_22;
	}

IL_0053:
	{
		// return Vector3.Cross(thumbMetaCarpalUp, thumbMetaCarpalToIndex).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_23, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandUtils__ctor_mC7171A5F71E54F36BE3DCFBB809F2761364E02E9 (SimulatedHandUtils_t4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandUtils__cctor_mB6881F73D3447E3A7E2F8FDD66493F340A82752D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils__cctor_mB6881F73D3447E3A7E2F8FDD66493F340A82752D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_t176970888553432D46070ECFF0B02AD1B8BA2B77_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHandUtils_t4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandUtils_t4B4D83AAAA20DFCA07922399FC7BD8F8B14B9CCC_il2cpp_TypeInfo_var))->set_jointCount_0((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
