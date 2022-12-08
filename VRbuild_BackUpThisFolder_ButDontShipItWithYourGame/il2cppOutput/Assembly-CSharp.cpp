#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityChan.SpringBone[]
struct SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88;
// UnityChan.SpringCollider[]
struct SpringColliderU5BU5D_tDDB81B5370FBCD7924EFC8AA13C0B605AB35B1FF;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityChan.AutoBlink
struct AutoBlink_t967FB36DC6574749463627A2D133100D9840A187;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityChan.CameraController
struct CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityChan.FaceUpdate
struct FaceUpdate_t39A1A34B90E5D9A98A7E88515E02D32B46B4755E;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityChan.IKCtrlRightHand
struct IKCtrlRightHand_tDBAC6A4D9C68491E308974E6969FB742E75FEF56;
// UnityChan.IdleChanger
struct IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityChan.RandomWind
struct RandomWind_t82E37B7A3B0D246A04893F8F19037ED8FF960E76;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SimpleRotate
struct SimpleRotate_t29AC204A80079E7CB75883EDF080C7009FF91574;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// UnityChan.SplashScreen
struct SplashScreen_t1F013BB0CEC3BF055023E85CC5B0ECE1BA006AD2;
// UnityChan.SpringBone
struct SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8;
// UnityChan.SpringCollider
struct SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868;
// UnityChan.SpringManager
struct SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5;
// System.String
struct String_t;
// UnityChan.ThirdPersonCamera
struct ThirdPersonCamera_tF9A1D21761B8A0EDC9E52F16D32E91867FB5026C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityChan.UnityChanControlScriptWithRgidBody
struct UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// UnityChan.AutoBlink/<RandomChange>d__22
struct U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB;
// UnityChan.IdleChanger/<RandomChange>d__9
struct U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F;

IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04EC4F81AD07B2B6F76B2D7A56FC33E5558850A6;
IL2CPP_EXTERN_C String_t* _stringLiteral0F660DC5B9C69D4A4082CBA7BCC2360B2E3958E6;
IL2CPP_EXTERN_C String_t* _stringLiteral0FE2959F6EBB514FAE4E483E6BFA520D29AAACDC;
IL2CPP_EXTERN_C String_t* _stringLiteral14F93B18F4A27E31C8383B5199FB110A2DEEB66F;
IL2CPP_EXTERN_C String_t* _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305;
IL2CPP_EXTERN_C String_t* _stringLiteral1BED2DC0EC7095284E4DD921DFE0B428EF30564B;
IL2CPP_EXTERN_C String_t* _stringLiteral240C7FDF3C9B4066B07C1B58BCA1C949CB56ABEA;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral293542D9D93291B4BD2A5814172566525A7DDF57;
IL2CPP_EXTERN_C String_t* _stringLiteral3B543EDBE2E96E405B958B525BFD55181F6DCB83;
IL2CPP_EXTERN_C String_t* _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890;
IL2CPP_EXTERN_C String_t* _stringLiteral4EEB44230D18B63FD2EE917847EC8588A2354785;
IL2CPP_EXTERN_C String_t* _stringLiteral4F8E7863AB6F059155307444D42AD47E889F06CA;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral595DD015432EA032FD9DE15D430642872DCC3087;
IL2CPP_EXTERN_C String_t* _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral6142D87798990EB03763CFE5B4D7142F9FF6DB68;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7040FF69C8903BD258116DC869C58A972AF5E772;
IL2CPP_EXTERN_C String_t* _stringLiteral7456FF61D92F368E7DB05C258B9683B2CA9DBE5D;
IL2CPP_EXTERN_C String_t* _stringLiteral788728726FD14D18CB2F66203C12BFFE45659897;
IL2CPP_EXTERN_C String_t* _stringLiteral78AA7A8F563BCFC24BE1F0BD20224D7B92AC7DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral7A20AE6F53B8FA6C15C1E5AD4DB71F3CD355EA43;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral880BA69446D7C58BFFFA1A35EF2C5C9CE3C71FFE;
IL2CPP_EXTERN_C String_t* _stringLiteralA64BE0D74BC765ED5A679FABB1292BC185358614;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC72435C50E2C88247E4FAE4A4F3CA3BE5418D4;
IL2CPP_EXTERN_C String_t* _stringLiteralADC179AF2B0468826DB85E74578463666CF4700F;
IL2CPP_EXTERN_C String_t* _stringLiteralAE4B715AAAA58DCCE03CE0702B58CE77A631DE43;
IL2CPP_EXTERN_C String_t* _stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A;
IL2CPP_EXTERN_C String_t* _stringLiteralB0F3EFB34B5BB26A1D0A3D4032611129C4ECC85C;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralBB61CD73B87847118A72F96FE50B72C6B8712F56;
IL2CPP_EXTERN_C String_t* _stringLiteralC473046B41946A22C532AEFD1B4D486A028D183C;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE1BFAC0F726D90BC3D924DF6291922C3F5104A;
IL2CPP_EXTERN_C String_t* _stringLiteralD5C1D07A37A3563A0E4767C281E178889D4D677E;
IL2CPP_EXTERN_C String_t* _stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralE474B80F684635C9E8A2D82048BB64372275D715;
IL2CPP_EXTERN_C String_t* _stringLiteralEA58F9BE54C16486B97A532CA51E3783D02B3F46;
IL2CPP_EXTERN_C String_t* _stringLiteralF30125084BBDCC9569A0DA8872BAA0181599E988;
IL2CPP_EXTERN_C String_t* _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFF4DF696C7896F255AA384C216C33E4BE82E9DDC;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5_m630E6D2B49B22937724760C37F78B3E0BBED6C62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRandomChangeU3Ed__22_System_Collections_IEnumerator_Reset_m42FCE7B80A8E72274C5EE8606303CE86C49E0E3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRandomChangeU3Ed__9_System_Collections_IEnumerator_Reset_m1BD8B9380CB153862BCF033A7146C4367A0B6EB4_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88;
struct SpringColliderU5BU5D_tDDB81B5370FBCD7924EFC8AA13C0B605AB35B1FF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityChan.AutoBlink/<RandomChange>d__22
struct U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB  : public RuntimeObject
{
	// System.Int32 UnityChan.AutoBlink/<RandomChange>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityChan.AutoBlink/<RandomChange>d__22::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityChan.AutoBlink UnityChan.AutoBlink/<RandomChange>d__22::<>4__this
	AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* ___U3CU3E4__this_2;
};

// UnityChan.IdleChanger/<RandomChange>d__9
struct U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F  : public RuntimeObject
{
	// System.Int32 UnityChan.IdleChanger/<RandomChange>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityChan.IdleChanger/<RandomChange>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityChan.IdleChanger UnityChan.IdleChanger/<RandomChange>d__9::<>4__this
	IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* ___U3CU3E4__this_2;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityChan.AutoBlink
struct AutoBlink_t967FB36DC6574749463627A2D133100D9840A187  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityChan.AutoBlink::isActive
	bool ___isActive_4;
	// UnityEngine.SkinnedMeshRenderer UnityChan.AutoBlink::ref_SMR_EYE_DEF
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___ref_SMR_EYE_DEF_5;
	// UnityEngine.SkinnedMeshRenderer UnityChan.AutoBlink::ref_SMR_EL_DEF
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___ref_SMR_EL_DEF_6;
	// System.Single UnityChan.AutoBlink::ratio_Close
	float ___ratio_Close_7;
	// System.Single UnityChan.AutoBlink::ratio_HalfClose
	float ___ratio_HalfClose_8;
	// System.Single UnityChan.AutoBlink::ratio_Open
	float ___ratio_Open_9;
	// System.Boolean UnityChan.AutoBlink::timerStarted
	bool ___timerStarted_10;
	// System.Boolean UnityChan.AutoBlink::isBlink
	bool ___isBlink_11;
	// System.Single UnityChan.AutoBlink::timeBlink
	float ___timeBlink_12;
	// System.Single UnityChan.AutoBlink::timeRemining
	float ___timeRemining_13;
	// System.Single UnityChan.AutoBlink::threshold
	float ___threshold_14;
	// System.Single UnityChan.AutoBlink::interval
	float ___interval_15;
	// UnityChan.AutoBlink/Status UnityChan.AutoBlink::eyeStatus
	int32_t ___eyeStatus_16;
};

// UnityChan.CameraController
struct CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 UnityChan.CameraController::focus
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___focus_4;
	// UnityEngine.GameObject UnityChan.CameraController::focusObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___focusObj_5;
	// System.Boolean UnityChan.CameraController::showInstWindow
	bool ___showInstWindow_6;
	// UnityEngine.Vector3 UnityChan.CameraController::oldPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldPos_7;
};

// UnityChan.FaceUpdate
struct FaceUpdate_t39A1A34B90E5D9A98A7E88515E02D32B46B4755E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AnimationClip[] UnityChan.FaceUpdate::animations
	AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* ___animations_4;
	// UnityEngine.Animator UnityChan.FaceUpdate::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_5;
	// System.Single UnityChan.FaceUpdate::delayWeight
	float ___delayWeight_6;
	// System.Boolean UnityChan.FaceUpdate::isKeepFace
	bool ___isKeepFace_7;
	// System.Single UnityChan.FaceUpdate::current
	float ___current_8;
};

// UnityChan.IKCtrlRightHand
struct IKCtrlRightHand_tDBAC6A4D9C68491E308974E6969FB742E75FEF56  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator UnityChan.IKCtrlRightHand::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_4;
	// UnityEngine.Transform UnityChan.IKCtrlRightHand::targetObj
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetObj_5;
	// System.Boolean UnityChan.IKCtrlRightHand::isIkActive
	bool ___isIkActive_6;
	// System.Single UnityChan.IKCtrlRightHand::mixWeight
	float ___mixWeight_7;
};

// UnityChan.IdleChanger
struct IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator UnityChan.IdleChanger::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_4;
	// UnityEngine.AnimatorStateInfo UnityChan.IdleChanger::currentState
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___currentState_5;
	// UnityEngine.AnimatorStateInfo UnityChan.IdleChanger::previousState
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___previousState_6;
	// System.Boolean UnityChan.IdleChanger::_random
	bool ____random_7;
	// System.Single UnityChan.IdleChanger::_threshold
	float ____threshold_8;
	// System.Single UnityChan.IdleChanger::_interval
	float ____interval_9;
};

// UnityChan.RandomWind
struct RandomWind_t82E37B7A3B0D246A04893F8F19037ED8FF960E76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityChan.SpringBone[] UnityChan.RandomWind::springBones
	SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* ___springBones_4;
	// System.Boolean UnityChan.RandomWind::isWindActive
	bool ___isWindActive_5;
};

// SimpleRotate
struct SimpleRotate_t29AC204A80079E7CB75883EDF080C7009FF91574  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 SimpleRotate::speed
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___speed_4;
};

// UnityChan.SplashScreen
struct SplashScreen_t1F013BB0CEC3BF055023E85CC5B0ECE1BA006AD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityChan.SpringBone
struct SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UnityChan.SpringBone::child
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___child_4;
	// UnityEngine.Vector3 UnityChan.SpringBone::boneAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boneAxis_5;
	// System.Single UnityChan.SpringBone::radius
	float ___radius_6;
	// System.Boolean UnityChan.SpringBone::isUseEachBoneForceSettings
	bool ___isUseEachBoneForceSettings_7;
	// System.Single UnityChan.SpringBone::stiffnessForce
	float ___stiffnessForce_8;
	// System.Single UnityChan.SpringBone::dragForce
	float ___dragForce_9;
	// UnityEngine.Vector3 UnityChan.SpringBone::springForce
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___springForce_10;
	// UnityChan.SpringCollider[] UnityChan.SpringBone::colliders
	SpringColliderU5BU5D_tDDB81B5370FBCD7924EFC8AA13C0B605AB35B1FF* ___colliders_11;
	// System.Boolean UnityChan.SpringBone::debug
	bool ___debug_12;
	// System.Single UnityChan.SpringBone::threshold
	float ___threshold_13;
	// System.Single UnityChan.SpringBone::springLength
	float ___springLength_14;
	// UnityEngine.Quaternion UnityChan.SpringBone::localRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___localRotation_15;
	// UnityEngine.Transform UnityChan.SpringBone::trs
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trs_16;
	// UnityEngine.Vector3 UnityChan.SpringBone::currTipPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currTipPos_17;
	// UnityEngine.Vector3 UnityChan.SpringBone::prevTipPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___prevTipPos_18;
	// UnityEngine.Transform UnityChan.SpringBone::org
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___org_19;
	// UnityChan.SpringManager UnityChan.SpringBone::managerRef
	SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* ___managerRef_20;
};

// UnityChan.SpringCollider
struct SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityChan.SpringCollider::radius
	float ___radius_4;
};

// UnityChan.SpringManager
struct SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityChan.SpringManager::dynamicRatio
	float ___dynamicRatio_4;
	// System.Single UnityChan.SpringManager::stiffnessForce
	float ___stiffnessForce_5;
	// UnityEngine.AnimationCurve UnityChan.SpringManager::stiffnessCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___stiffnessCurve_6;
	// System.Single UnityChan.SpringManager::dragForce
	float ___dragForce_7;
	// UnityEngine.AnimationCurve UnityChan.SpringManager::dragCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___dragCurve_8;
	// UnityChan.SpringBone[] UnityChan.SpringManager::springBones
	SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* ___springBones_9;
};

// UnityChan.ThirdPersonCamera
struct ThirdPersonCamera_tF9A1D21761B8A0EDC9E52F16D32E91867FB5026C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityChan.ThirdPersonCamera::smooth
	float ___smooth_4;
	// UnityEngine.Transform UnityChan.ThirdPersonCamera::standardPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___standardPos_5;
	// UnityEngine.Transform UnityChan.ThirdPersonCamera::frontPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___frontPos_6;
	// UnityEngine.Transform UnityChan.ThirdPersonCamera::jumpPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___jumpPos_7;
	// System.Boolean UnityChan.ThirdPersonCamera::bQuickSwitch
	bool ___bQuickSwitch_8;
};

// UnityChan.UnityChanControlScriptWithRgidBody
struct UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::animSpeed
	float ___animSpeed_4;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::lookSmoother
	float ___lookSmoother_5;
	// System.Boolean UnityChan.UnityChanControlScriptWithRgidBody::useCurves
	bool ___useCurves_6;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::useCurvesHeight
	float ___useCurvesHeight_7;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::forwardSpeed
	float ___forwardSpeed_8;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::backwardSpeed
	float ___backwardSpeed_9;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::rotateSpeed
	float ___rotateSpeed_10;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::jumpPower
	float ___jumpPower_11;
	// UnityEngine.CapsuleCollider UnityChan.UnityChanControlScriptWithRgidBody::col
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___col_12;
	// UnityEngine.Rigidbody UnityChan.UnityChanControlScriptWithRgidBody::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_13;
	// UnityEngine.Vector3 UnityChan.UnityChanControlScriptWithRgidBody::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_14;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::orgColHight
	float ___orgColHight_15;
	// UnityEngine.Vector3 UnityChan.UnityChanControlScriptWithRgidBody::orgVectColCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___orgVectColCenter_16;
	// UnityEngine.Animator UnityChan.UnityChanControlScriptWithRgidBody::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_17;
	// UnityEngine.AnimatorStateInfo UnityChan.UnityChanControlScriptWithRgidBody::currentBaseState
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___currentBaseState_18;
	// UnityEngine.GameObject UnityChan.UnityChanControlScriptWithRgidBody::cameraObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cameraObject_19;
};

struct UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_StaticFields
{
	// System.Int32 UnityChan.UnityChanControlScriptWithRgidBody::idleState
	int32_t ___idleState_20;
	// System.Int32 UnityChan.UnityChanControlScriptWithRgidBody::locoState
	int32_t ___locoState_21;
	// System.Int32 UnityChan.UnityChanControlScriptWithRgidBody::jumpState
	int32_t ___jumpState_22;
	// System.Int32 UnityChan.UnityChanControlScriptWithRgidBody::restState
	int32_t ___restState_23;
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* m_Items[1];

	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityChan.SpringBone[]
struct SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88  : public RuntimeArray
{
	ALIGN_FIELD (8) SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* m_Items[1];

	inline SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityChan.SpringCollider[]
struct SpringColliderU5BU5D_tDDB81B5370FBCD7924EFC8AA13C0B605AB35B1FF  : public RuntimeArray
{
	ALIGN_FIELD (8) SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* m_Items[1];

	inline SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityChan.AutoBlink::ResetTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_ResetTimer_m30D9460BE7FFBCA2A13B9E26C321AAC47F773BBE (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityChan.AutoBlink::SetCloseEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetCloseEyes_m92B8F795B6ECD5D1ED79E8DD6FE43546C99B33BE (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) ;
// System.Void UnityChan.AutoBlink::SetHalfCloseEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetHalfCloseEyes_mA2D575737F06D007240F3FA242F68B3151E3C351 (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) ;
// System.Void UnityChan.AutoBlink::SetOpenEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetOpenEyes_m23396C4C154774AD890958CB5AEB1EC35D663C09 (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::SetBlendShapeWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityChan.AutoBlink/<RandomChange>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__22__ctor_m7D9A52D53D78E6FF50506E5C228F3C22BB756D53 (U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityChan.CameraController::setupFocusObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_setupFocusObject_mB1700117D02C8915551A76BC45A6BE5DC3090795 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityChan.CameraController::mouseEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseEvent_m26C02FEDDBCA896B9566B4B59844B1A601488E86 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mB47BC44807774B77DB8B2BB548D339036544ACC4 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityChan.CameraController::mouseWheelEvent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseWheelEvent_m465B6BF26E48FB6154C625750ADE9EA4A82C0464 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, float ___delta0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Void UnityChan.CameraController::mouseDragEvent(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseDragEvent_m0C380A7D1AA982E73AD110C3FA59DD1898BE0938 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mousePos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityChan.CameraController::cameraTranslate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_cameraTranslate_m268BCA973688F20B021C5307CD7B104DB27E7EB0 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityChan.CameraController::cameraRotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_cameraRotate_mB691B9286D8F5BD79034439F6782B2F8D849604B (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulerAngle0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::SetLookRotation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_SetLookRotation_m5CBF58323F62AE67B7B9DD50A75CA99088AEF693_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___view0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3 (float ___width0, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Height_m5E1526C541663A21437ED06E233FDDA08A856B91 (float ___height0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Box(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Box_m4CEFB7550F94CA85459CEACB810E9F99C7451456 (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_m4D894562C97A0F6793450A0DF379B63F60121F64 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Boolean UnityEngine.GUILayout::RepeatButton(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_RepeatButton_m85FE00614C26B803944219FBD1D1283C1D559452 (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m9896DFE98F7DC35199C7FDEB22E6645B6F53E998 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7 (bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_m3A9C6B4D373E8A871A71E0D8D2D9249D9F62F079 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityChan.FaceUpdate::ChangeFace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_ChangeFace_m2D626DC70BDF298284B35CF5CE406A079CF1458F (FaceUpdate_t39A1A34B90E5D9A98A7E88515E02D32B46B4755E* __this, String_t* ___str0, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_nameHash_m88E91C33AA5602324A7319D7A51F552D00B14D4A (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void UnityChan.IdleChanger/<RandomChange>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__9__ctor_m41547CBB253D49ADB138B12EF6B2CEC9147FCF0B (U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeight_m8C707F505FFE2A6F36BE81ED12786B941D3B990C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIKRotationWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeight_m5F0F5BD5A9A85912EA1CDF32917FE483E849978D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPosition_mB7BE88C93990186D94AF75439E2F216D6ECBCDEE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goalPosition1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIKRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotation_m328A64AD20922F0F2A1D0CD5DBB9F01FE7675DF6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___goalRotation1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Toggle_m00206EA64CCCB111095390467F8894D69DCB081F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, bool ___value1, String_t* ___text2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityChan.SpringManager>()
inline SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* Component_GetComponent_TisSpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5_m630E6D2B49B22937724760C37F78B3E0BBED6C62 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A (float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityChan.SpringManager UnityChan.SpringBone::GetParentSpringManager(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* SpringBone_GetParentSpringManager_m2EF5EEAD6A918133FD9764553417AC48DFA1FFFC (SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityChan.SpringManager::UpdateParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameters_m6E6FA51F314E6A2A89335ECBF0A2A647956C4AFF (SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* __this, const RuntimeMethod* method) ;
// System.Void UnityChan.SpringBone::UpdateSpring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_UpdateSpring_m563B11D579B08B95288B55147BFD689E29AFBF57 (SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* __this, const RuntimeMethod* method) ;
// System.Void UnityChan.SpringManager::UpdateParameter(System.String,System.Single,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameter_m3FA6606799DF6E9A680B7194AB11D10875C49B64 (SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* __this, String_t* ___fieldName0, float ___baseValue1, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve2, const RuntimeMethod* method) ;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionFrontView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionFrontView_mFDD8ACC0E5C68B7AEDC0AE5125079A4AF09EC398 (ThirdPersonCamera_tF9A1D21761B8A0EDC9E52F16D32E91867FB5026C* __this, const RuntimeMethod* method) ;
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionJumpView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionJumpView_m135FD65072B6312ED92FE90D2709038D9E4A16A8 (ThirdPersonCamera_tF9A1D21761B8A0EDC9E52F16D32E91867FB5026C* __this, const RuntimeMethod* method) ;
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionNormalView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionNormalView_mC8C8A988A4EB4A758AD8B0D6FCC8D98CBAFB2C7C (ThirdPersonCamera_tF9A1D21761B8A0EDC9E52F16D32E91867FB5026C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::resetCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody_resetCollider_mA45228FB27D49414887340E9DFD0C4CA71C11A89 (UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_m10B455A15EB343175518CCBEE2818C2497CC678A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::SetLookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_SetLookRotation_m3A91BBDA2E5863D221B3FCA0C07904B2F2777C16_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___view0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
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
// System.Void SimpleRotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRotate_Start_m3E6756200D6412C52998CEB2970B67536164B36B (SimpleRotate_t29AC204A80079E7CB75883EDF080C7009FF91574* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SimpleRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRotate_Update_m93F9CED76F5B5A9462B875E07DEA0DF5F46D5CFE (SimpleRotate_t29AC204A80079E7CB75883EDF080C7009FF91574* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate (speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___speed_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void SimpleRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRotate__ctor_mA43F31462AC93F546AD8294D3E790C56217C8A52 (SimpleRotate_t29AC204A80079E7CB75883EDF080C7009FF91574* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		// foreach (var loader in loaders)
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0071;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0071:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_0017_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
				L_7 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_6);
				// if (loader.name.Equals("Oculus Loader"))
				NullCheck(L_7);
				String_t* L_8;
				L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
				NullCheck(L_8);
				bool L_9;
				L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				if (!L_9)
				{
					goto IL_005e_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_RightController_5;
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_LeftController_4;
				NullCheck(L_11);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_12);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
			}

IL_005e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityChan.AutoBlink::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_Awake_m360F35AE53C0715D76D2F4BD871EC39D2D3F3AB8 (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_Start_m2C11B3E286C2978F4621B622B8DD621F89A588B6 (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7456FF61D92F368E7DB05C258B9683B2CA9DBE5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetTimer ();
		AutoBlink_ResetTimer_m30D9460BE7FFBCA2A13B9E26C321AAC47F773BBE(__this, NULL);
		// StartCoroutine ("RandomChange");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral7456FF61D92F368E7DB05C258B9683B2CA9DBE5D, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::ResetTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_ResetTimer_m30D9460BE7FFBCA2A13B9E26C321AAC47F773BBE (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) 
{
	{
		// timeRemining = timeBlink;
		float L_0 = __this->___timeBlink_12;
		__this->___timeRemining_13 = L_0;
		// timerStarted = false;
		__this->___timerStarted_10 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_Update_m116809F734A6AEDAB8171C1DF392759E82311B08 (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) 
{
	{
		// if (!timerStarted) {
		bool L_0 = __this->___timerStarted_10;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// eyeStatus = Status.Close;
		__this->___eyeStatus_16 = 0;
		// timerStarted = true;
		__this->___timerStarted_10 = (bool)1;
	}

IL_0016:
	{
		// if (timerStarted) {
		bool L_1 = __this->___timerStarted_10;
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// timeRemining -= Time.deltaTime;
		float L_2 = __this->___timeRemining_13;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeRemining_13 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// if (timeRemining <= 0.0f) {
		float L_4 = __this->___timeRemining_13;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// eyeStatus = Status.Open;
		__this->___eyeStatus_16 = 2;
		// ResetTimer ();
		AutoBlink_ResetTimer_m30D9460BE7FFBCA2A13B9E26C321AAC47F773BBE(__this, NULL);
		return;
	}

IL_004b:
	{
		// } else if (timeRemining <= timeBlink * 0.3f) {
		float L_5 = __this->___timeRemining_13;
		float L_6 = __this->___timeBlink_12;
		if ((!(((float)L_5) <= ((float)((float)il2cpp_codegen_multiply(L_6, (0.300000012f)))))))
		{
			goto IL_0066;
		}
	}
	{
		// eyeStatus = Status.HalfClose;
		__this->___eyeStatus_16 = 1;
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_LateUpdate_m0FA86240C4DD372F37BA052206899E7E619AD149 (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (isActive) {
		bool L_0 = __this->___isActive_4;
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		// if (isBlink) {
		bool L_1 = __this->___isBlink_11;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// switch (eyeStatus) {
		int32_t L_2 = __this->___eyeStatus_16;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0038;
			}
		}
	}
	{
		return;
	}

IL_002a:
	{
		// SetCloseEyes ();
		AutoBlink_SetCloseEyes_m92B8F795B6ECD5D1ED79E8DD6FE43546C99B33BE(__this, NULL);
		// break;
		return;
	}

IL_0031:
	{
		// SetHalfCloseEyes ();
		AutoBlink_SetHalfCloseEyes_mA2D575737F06D007240F3FA242F68B3151E3C351(__this, NULL);
		// break;
		return;
	}

IL_0038:
	{
		// SetOpenEyes ();
		AutoBlink_SetOpenEyes_m23396C4C154774AD890958CB5AEB1EC35D663C09(__this, NULL);
		// isBlink = false;
		__this->___isBlink_11 = (bool)0;
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::SetCloseEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetCloseEyes_m92B8F795B6ECD5D1ED79E8DD6FE43546C99B33BE (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) 
{
	{
		// ref_SMR_EYE_DEF.SetBlendShapeWeight (6, ratio_Close);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_0 = __this->___ref_SMR_EYE_DEF_5;
		float L_1 = __this->___ratio_Close_7;
		NullCheck(L_0);
		SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E(L_0, 6, L_1, NULL);
		// ref_SMR_EL_DEF.SetBlendShapeWeight (6, ratio_Close);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_2 = __this->___ref_SMR_EL_DEF_6;
		float L_3 = __this->___ratio_Close_7;
		NullCheck(L_2);
		SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E(L_2, 6, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::SetHalfCloseEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetHalfCloseEyes_mA2D575737F06D007240F3FA242F68B3151E3C351 (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) 
{
	{
		// ref_SMR_EYE_DEF.SetBlendShapeWeight (6, ratio_HalfClose);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_0 = __this->___ref_SMR_EYE_DEF_5;
		float L_1 = __this->___ratio_HalfClose_8;
		NullCheck(L_0);
		SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E(L_0, 6, L_1, NULL);
		// ref_SMR_EL_DEF.SetBlendShapeWeight (6, ratio_HalfClose);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_2 = __this->___ref_SMR_EL_DEF_6;
		float L_3 = __this->___ratio_HalfClose_8;
		NullCheck(L_2);
		SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E(L_2, 6, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::SetOpenEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetOpenEyes_m23396C4C154774AD890958CB5AEB1EC35D663C09 (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) 
{
	{
		// ref_SMR_EYE_DEF.SetBlendShapeWeight (6, ratio_Open);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_0 = __this->___ref_SMR_EYE_DEF_5;
		float L_1 = __this->___ratio_Open_9;
		NullCheck(L_0);
		SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E(L_0, 6, L_1, NULL);
		// ref_SMR_EL_DEF.SetBlendShapeWeight (6, ratio_Open);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_2 = __this->___ref_SMR_EL_DEF_6;
		float L_3 = __this->___ratio_Open_9;
		NullCheck(L_2);
		SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E(L_2, 6, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityChan.AutoBlink::RandomChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AutoBlink_RandomChange_mBB0CF1F743665D652D0D7903DBA576CC513FA53C (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB* L_0 = (U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB*)il2cpp_codegen_object_new(U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRandomChangeU3Ed__22__ctor_m7D9A52D53D78E6FF50506E5C228F3C22BB756D53(L_0, 0, NULL);
		U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void UnityChan.AutoBlink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink__ctor_m771E9490DEF6613D946E04752232D1A56E1609FF (AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* __this, const RuntimeMethod* method) 
{
	{
		// public bool isActive = true;                //????????
		__this->___isActive_4 = (bool)1;
		// public float ratio_Close = 85.0f;            //?????????????
		__this->___ratio_Close_7 = (85.0f);
		// public float ratio_HalfClose = 20.0f;        //??????????????
		__this->___ratio_HalfClose_8 = (20.0f);
		// public float timeBlink = 0.4f;                //??????
		__this->___timeBlink_12 = (0.400000006f);
		// public float threshold = 0.3f;                // ?????????
		__this->___threshold_14 = (0.300000012f);
		// public float interval = 3.0f;                // ?????????????
		__this->___interval_15 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityChan.AutoBlink/<RandomChange>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__22__ctor_m7D9A52D53D78E6FF50506E5C228F3C22BB756D53 (U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityChan.AutoBlink/<RandomChange>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__22_System_IDisposable_Dispose_m0B9312B0CB733B9C7343CEBE5FBC4C73E85D5E5D (U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityChan.AutoBlink/<RandomChange>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRandomChangeU3Ed__22_MoveNext_m1822D97365744C10C97A5D24FABE7AAADBCB1A7D (U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// float _seed = Random.Range (0.0f, 1.0f);
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		V_2 = L_4;
		// if (!isBlink) {
		AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->___isBlink_11;
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		// if (_seed > threshold) {
		float L_7 = V_2;
		AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->___threshold_14;
		if ((!(((float)L_7) > ((float)L_9))))
		{
			goto IL_0046;
		}
	}
	{
		// isBlink = true;
		AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* L_10 = V_1;
		NullCheck(L_10);
		L_10->___isBlink_11 = (bool)1;
	}

IL_0046:
	{
		// yield return new WaitForSeconds (interval);
		AutoBlink_t967FB36DC6574749463627A2D133100D9840A187* L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->___interval_15;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, L_12, NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0060:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true) {
		goto IL_001e;
	}
}
// System.Object UnityChan.AutoBlink/<RandomChange>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRandomChangeU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m09672DB643E7E08C923CE86329D8C813AB8BD4A0 (U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityChan.AutoBlink/<RandomChange>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__22_System_Collections_IEnumerator_Reset_m42FCE7B80A8E72274C5EE8606303CE86C49E0E3E (U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRandomChangeU3Ed__22_System_Collections_IEnumerator_Reset_m42FCE7B80A8E72274C5EE8606303CE86C49E0E3E_RuntimeMethod_var)));
	}
}
// System.Object UnityChan.AutoBlink/<RandomChange>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRandomChangeU3Ed__22_System_Collections_IEnumerator_get_Current_m003887E7B0343F5354D61B3556E5CA125E37A8C4 (U3CRandomChangeU3Ed__22_t1F0C7A633CFA899AA7872F4EA26E06EC5E1FC9BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void UnityChan.CameraController::setupFocusObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_setupFocusObject_mB1700117D02C8915551A76BC45A6BE5DC3090795 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject obj = this.focusObj = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		V_0 = L_2;
		__this->___focusObj_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___focusObj_5), (void*)L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		// obj.transform.position = this.focus;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___focus_4;
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		// obj.transform.LookAt(this.transform.position);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_7);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_7, L_9, NULL);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_m789D976D794E6E7681EEDE8C47C72EE119CA59BC (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral788728726FD14D18CB2F66203C12BFFE45659897);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.focusObj == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___focusObj_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.setupFocusObject("CameraFocusObject");
		CameraController_setupFocusObject_mB1700117D02C8915551A76BC45A6BE5DC3090795(__this, _stringLiteral788728726FD14D18CB2F66203C12BFFE45659897, NULL);
	}

IL_0019:
	{
		// Transform trans = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		// transform.parent = this.focusObj.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___focusObj_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_3);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, L_5, NULL);
		// trans.LookAt(this.focus);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___focus_4;
		NullCheck(L_2);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_2, L_6, NULL);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_m764CD312FA99C960C0F25222170C1875B0441E90 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, const RuntimeMethod* method) 
{
	{
		// this.mouseEvent();
		CameraController_mouseEvent_m26C02FEDDBCA896B9566B4B59844B1A601488E86(__this, NULL);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_OnGUI_m49EBDC6562C5AFEB2511A190AA7DC8A204746D19 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B543EDBE2E96E405B958B525BFD55181F6DCB83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595DD015432EA032FD9DE15D430642872DCC3087);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADC179AF2B0468826DB85E74578463666CF4700F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF4DF696C7896F255AA384C216C33E4BE82E9DDC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(showInstWindow){
		bool L_0 = __this->___showInstWindow_6;
		if (!L_0)
		{
			goto IL_00c3;
		}
	}
	{
		// GUI.Box(new Rect(Screen.width -210, Screen.height - 100, 200, 90), "Camera Operations");
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), ((float)((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)210)))), ((float)((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)100)))), (200.0f), (90.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Box_mB47BC44807774B77DB8B2BB548D339036544ACC4(L_3, _stringLiteral3B543EDBE2E96E405B958B525BFD55181F6DCB83, NULL);
		// GUI.Label(new Rect(Screen.width -200, Screen.height - 80, 200, 30),"RMB / Alt+LMB: Tumble");
		int32_t L_4;
		L_4 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_6), ((float)((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)200)))), ((float)((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)80)))), (200.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_6, _stringLiteralFF4DF696C7896F255AA384C216C33E4BE82E9DDC, NULL);
		// GUI.Label(new Rect(Screen.width -200, Screen.height - 60, 200, 30),"MMB / Alt+Cmd+LMB: Track");
		int32_t L_7;
		L_7 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_8;
		L_8 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_9), ((float)((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)200)))), ((float)((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)60)))), (200.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_9, _stringLiteral595DD015432EA032FD9DE15D430642872DCC3087, NULL);
		// GUI.Label(new Rect(Screen.width -200, Screen.height - 40, 200, 30),"Wheel / 2 Fingers Swipe: Dolly");
		int32_t L_10;
		L_10 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_11;
		L_11 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), ((float)((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)200)))), ((float)((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)40)))), (200.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_12, _stringLiteralADC179AF2B0468826DB85E74578463666CF4700F, NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void UnityChan.CameraController::mouseEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseEvent_m26C02FEDDBCA896B9566B4B59844B1A601488E86 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float delta = Input.GetAxis("Mouse ScrollWheel");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		V_0 = L_0;
		// if (delta != 0.0f)
		float L_1 = V_0;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001a;
		}
	}
	{
		// this.mouseWheelEvent(delta);
		float L_2 = V_0;
		CameraController_mouseWheelEvent_m465B6BF26E48FB6154C625750ADE9EA4A82C0464(__this, L_2, NULL);
	}

IL_001a:
	{
		// if (Input.GetMouseButtonDown((int)MouseButtonDown.MBD_LEFT) ||
		//     Input.GetMouseButtonDown((int)MouseButtonDown.MBD_MIDDLE) ||
		//     Input.GetMouseButtonDown((int)MouseButtonDown.MBD_RIGHT))
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(2, NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(1, NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}

IL_0032:
	{
		// this.oldPos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___oldPos_7 = L_6;
	}

IL_003d:
	{
		// this.mouseDragEvent(Input.mousePosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		CameraController_mouseDragEvent_m0C380A7D1AA982E73AD110C3FA59DD1898BE0938(__this, L_7, NULL);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::mouseDragEvent(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseDragEvent_m0C380A7D1AA982E73AD110C3FA59DD1898BE0938 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mousePos0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 diff = mousePos - oldPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___mousePos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___oldPos_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// if(Input.GetMouseButton((int)MouseButtonDown.MBD_LEFT))
		bool L_3;
		L_3 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_3)
		{
			goto IL_0094;
		}
	}
	{
		// if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKey(KeyCode.LeftCommand))
		bool L_4;
		L_4 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)308), NULL);
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)310), NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		// if (diff.magnitude > Vector3.kEpsilon)
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_6) > ((float)(9.99999975E-06f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// this.cameraTranslate(-diff / 100.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_8, (100.0f), NULL);
		CameraController_cameraTranslate_m268BCA973688F20B021C5307CD7B104DB27E7EB0(__this, L_9, NULL);
		goto IL_00f4;
	}

IL_0059:
	{
		// else if (Input.GetKey(KeyCode.LeftAlt))
		bool L_10;
		L_10 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)308), NULL);
		if (!L_10)
		{
			goto IL_00f4;
		}
	}
	{
		// if (diff.magnitude > Vector3.kEpsilon)
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_11) > ((float)(9.99999975E-06f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// this.cameraRotate(new Vector3(diff.y, diff.x, 0.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = L_12.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_13, L_15, (0.0f), /*hidden argument*/NULL);
		CameraController_cameraRotate_mB691B9286D8F5BD79034439F6782B2F8D849604B(__this, L_16, NULL);
		goto IL_00f4;
	}

IL_0094:
	{
		// else if (Input.GetMouseButton((int)MouseButtonDown.MBD_MIDDLE))
		bool L_17;
		L_17 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(2, NULL);
		if (!L_17)
		{
			goto IL_00c2;
		}
	}
	{
		// if (diff.magnitude > Vector3.kEpsilon)
		float L_18;
		L_18 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_18) > ((float)(9.99999975E-06f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// this.cameraTranslate(-diff / 100.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_20, (100.0f), NULL);
		CameraController_cameraTranslate_m268BCA973688F20B021C5307CD7B104DB27E7EB0(__this, L_21, NULL);
		goto IL_00f4;
	}

IL_00c2:
	{
		// else if (Input.GetMouseButton((int)MouseButtonDown.MBD_RIGHT))
		bool L_22;
		L_22 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (!L_22)
		{
			goto IL_00f4;
		}
	}
	{
		// if (diff.magnitude > Vector3.kEpsilon)
		float L_23;
		L_23 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_23) > ((float)(9.99999975E-06f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// this.cameraRotate(new Vector3(diff.y, diff.x, 0.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		float L_25 = L_24.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		float L_27 = L_26.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), L_25, L_27, (0.0f), /*hidden argument*/NULL);
		CameraController_cameraRotate_mB691B9286D8F5BD79034439F6782B2F8D849604B(__this, L_28, NULL);
	}

IL_00f4:
	{
		// this.oldPos = mousePos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___mousePos0;
		__this->___oldPos_7 = L_29;
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::mouseWheelEvent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseWheelEvent_m465B6BF26E48FB6154C625750ADE9EA4A82C0464 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, float ___delta0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 focusToPosition = this.transform.position - this.focus;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___focus_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		// Vector3 post = focusToPosition * (1.0f + delta);
		float L_4 = ___delta0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, ((float)il2cpp_codegen_add((1.0f), L_4)), NULL);
		V_0 = L_5;
		// if (post.magnitude > 0.01)
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((double)((double)L_6)) > ((double)(0.01)))))
		{
			goto IL_004d;
		}
	}
	{
		// this.transform.position = this.focus + post;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___focus_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_9, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_10, NULL);
	}

IL_004d:
	{
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::cameraTranslate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_cameraTranslate_m268BCA973688F20B021C5307CD7B104DB27E7EB0 (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// Transform focusTrans = this.focusObj.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___focusObj_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		V_0 = L_1;
		// vec.x *= -1;
		float* L_2 = (&(&___vec0)->___x_2);
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply(L_4, (-1.0f)));
		// focusTrans.Translate(Vector3.right * vec.x);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vec0;
		float L_8 = L_7.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_8, NULL);
		NullCheck(L_5);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_5, L_9, NULL);
		// focusTrans.Translate(Vector3.up * vec.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___vec0;
		float L_13 = L_12.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_13, NULL);
		NullCheck(L_10);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_10, L_14, NULL);
		// this.focus = focusTrans.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_0;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		__this->___focus_4 = L_16;
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::cameraRotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_cameraRotate_mB691B9286D8F5BD79034439F6782B2F8D849604B (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulerAngle0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion q = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_0 = L_0;
		// Transform focusTrans = this.focusObj.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___focusObj_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		// focusTrans.localEulerAngles = focusTrans.localEulerAngles + eulerAngle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___eulerAngle0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_5, NULL);
		NullCheck(L_3);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_3, L_6, NULL);
		// q.SetLookRotation (this.focus) ;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___focus_4;
		Quaternion_SetLookRotation_m5CBF58323F62AE67B7B9DD50A75CA99088AEF693_inline((&V_0), L_7, NULL);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m4904E4F131EBB326C4FFD829BDF8A2DB9F51364F (CameraController_tD645124AEECDA920F7D118A2E2A5E79958B93B5D* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 focus = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___focus_4 = L_0;
		// public bool showInstWindow = true;
		__this->___showInstWindow_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityChan.FaceUpdate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_Start_m66D2B4A45523FC93C5D0D6AC36AC440D6184D1EF (FaceUpdate_t39A1A34B90E5D9A98A7E88515E02D32B46B4755E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator> ();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityChan.FaceUpdate::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_OnGUI_m8AEEB0EA8FCE5DBE453072C5B70C41797A741B16 (FaceUpdate_t39A1A34B90E5D9A98A7E88515E02D32B46B4755E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240C7FDF3C9B4066B07C1B58BCA1C949CB56ABEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral293542D9D93291B4BD2A5814172566525A7DDF57);
		s_Il2CppMethodInitialized = true;
	}
	AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* V_0 = NULL;
	int32_t V_1 = 0;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_2 = NULL;
	{
		// GUILayout.Box ("Face Update", GUILayout.Width (170), GUILayout.Height (25 * (animations.Length + 2)));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_1 = L_0;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_2;
		L_2 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((170.0f), NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_2);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_3 = L_1;
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_4 = __this->___animations_4;
		NullCheck(L_4);
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_5;
		L_5 = GUILayout_Height_m5E1526C541663A21437ED06E233FDDA08A856B91(((float)((int32_t)il2cpp_codegen_multiply(((int32_t)25), ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 2))))), NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_5);
		GUILayout_Box_m4CEFB7550F94CA85459CEACB810E9F99C7451456(_stringLiteral240C7FDF3C9B4066B07C1B58BCA1C949CB56ABEA, L_3, NULL);
		// Rect screenRect = new Rect (10, 25, 150, 25 * (animations.Length + 1));
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_6 = __this->___animations_4;
		NullCheck(L_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_7), (10.0f), (25.0f), (150.0f), ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)25), ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1))))), /*hidden argument*/NULL);
		// GUILayout.BeginArea (screenRect);
		GUILayout_BeginArea_m4D894562C97A0F6793450A0DF379B63F60121F64(L_7, NULL);
		// foreach (var animation in animations) {
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_8 = __this->___animations_4;
		V_0 = L_8;
		V_1 = 0;
		goto IL_0095;
	}

IL_0065:
	{
		// foreach (var animation in animations) {
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// if (GUILayout.RepeatButton (animation.name)) {
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_13 = V_2;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_15;
		L_15 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_16;
		L_16 = GUILayout_RepeatButton_m85FE00614C26B803944219FBD1D1283C1D559452(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_0091;
		}
	}
	{
		// anim.CrossFade (animation.name, 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___anim_5;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_18 = V_2;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		NullCheck(L_17);
		Animator_CrossFade_m9896DFE98F7DC35199C7FDEB22E6645B6F53E998(L_17, L_19, (0.0f), NULL);
	}

IL_0091:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0095:
	{
		// foreach (var animation in animations) {
		int32_t L_21 = V_1;
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0065;
		}
	}
	{
		// isKeepFace = GUILayout.Toggle (isKeepFace, " Keep Face");
		bool L_23 = __this->___isKeepFace_7;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_24;
		L_24 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_25;
		L_25 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_23, _stringLiteral293542D9D93291B4BD2A5814172566525A7DDF57, L_24, NULL);
		__this->___isKeepFace_7 = L_25;
		// GUILayout.EndArea ();
		GUILayout_EndArea_m3A9C6B4D373E8A871A71E0D8D2D9249D9F62F079(NULL);
		// }
		return;
	}
}
// System.Void UnityChan.FaceUpdate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_Update_mD2109C45FBD2FA8969EA5C20A124A61C4DFB8241 (FaceUpdate_t39A1A34B90E5D9A98A7E88515E02D32B46B4755E* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButton (0)) {
		bool L_0;
		L_0 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// current = 1;
		__this->___current_8 = (1.0f);
		goto IL_0039;
	}

IL_0015:
	{
		// } else if (!isKeepFace) {
		bool L_1 = __this->___isKeepFace_7;
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		// current = Mathf.Lerp (current, 0, delayWeight);
		float L_2 = __this->___current_8;
		float L_3 = __this->___delayWeight_6;
		float L_4;
		L_4 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_2, (0.0f), L_3, NULL);
		__this->___current_8 = L_4;
	}

IL_0039:
	{
		// anim.SetLayerWeight (1, current);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_5;
		float L_6 = __this->___current_8;
		NullCheck(L_5);
		Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F(L_5, 1, L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.FaceUpdate::OnCallChangeFace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_OnCallChangeFace_m3D85121165409C46E6675B7E216417E5A3B3F1B3 (FaceUpdate_t39A1A34B90E5D9A98A7E88515E02D32B46B4755E* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BED2DC0EC7095284E4DD921DFE0B428EF30564B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* V_1 = NULL;
	int32_t V_2 = 0;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_3 = NULL;
	{
		// int ichecked = 0;
		V_0 = 0;
		// foreach (var animation in animations) {
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_0 = __this->___animations_4;
		V_1 = L_0;
		V_2 = 0;
		goto IL_004a;
	}

IL_000d:
	{
		// foreach (var animation in animations) {
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// if (str == animation.name) {
		String_t* L_5 = ___str0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_6 = V_3;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0027;
		}
	}
	{
		// ChangeFace (str);
		String_t* L_9 = ___str0;
		FaceUpdate_ChangeFace_m2D626DC70BDF298284B35CF5CE406A079CF1458F(__this, L_9, NULL);
		// break;
		return;
	}

IL_0027:
	{
		// } else if (ichecked <= animations.Length) {
		int32_t L_10 = V_0;
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_11 = __this->___animations_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) > ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0038;
		}
	}
	{
		// ichecked++;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0046;
	}

IL_0038:
	{
		// str = "default@unitychan";
		___str0 = _stringLiteral1BED2DC0EC7095284E4DD921DFE0B428EF30564B;
		// ChangeFace (str);
		String_t* L_13 = ___str0;
		FaceUpdate_ChangeFace_m2D626DC70BDF298284B35CF5CE406A079CF1458F(__this, L_13, NULL);
	}

IL_0046:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004a:
	{
		// foreach (var animation in animations) {
		int32_t L_15 = V_2;
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityChan.FaceUpdate::ChangeFace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_ChangeFace_m2D626DC70BDF298284B35CF5CE406A079CF1458F (FaceUpdate_t39A1A34B90E5D9A98A7E88515E02D32B46B4755E* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	{
		// isKeepFace = true;
		__this->___isKeepFace_7 = (bool)1;
		// current = 1;
		__this->___current_8 = (1.0f);
		// anim.CrossFade (str, 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_5;
		String_t* L_1 = ___str0;
		NullCheck(L_0);
		Animator_CrossFade_m9896DFE98F7DC35199C7FDEB22E6645B6F53E998(L_0, L_1, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityChan.FaceUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate__ctor_m2E3B2A289467A6D2BAAC735DB4099515BBD9D9E2 (FaceUpdate_t39A1A34B90E5D9A98A7E88515E02D32B46B4755E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityChan.IdleChanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleChanger_Start_m0CAA081A5A3F28127A2CB964E9F8A72C3FE064A1 (IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7456FF61D92F368E7DB05C258B9683B2CA9DBE5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator> ();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_4), (void*)L_0);
		// currentState = anim.GetCurrentAnimatorStateInfo (0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anim_4;
		NullCheck(L_1);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2;
		L_2 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_1, 0, NULL);
		__this->___currentState_5 = L_2;
		// previousState = currentState;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_3 = __this->___currentState_5;
		__this->___previousState_6 = L_3;
		// StartCoroutine ("RandomChange");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral7456FF61D92F368E7DB05C258B9683B2CA9DBE5D, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.IdleChanger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleChanger_Update_m0699DAC36810ACE9E51000AF3E3D80FAFE30A471 (IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A261EB7E7319776625F5A015EA18053797E6890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown ("up") || Input.GetButton ("Jump")) {
		bool L_0;
		L_0 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305, NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}

IL_0018:
	{
		// anim.SetBool ("Next", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_4;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, (bool)1, NULL);
	}

IL_0029:
	{
		// if (Input.GetKeyDown ("down")) {
		bool L_3;
		L_3 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		// anim.SetBool ("Back", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_4;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, (bool)1, NULL);
	}

IL_0046:
	{
		// if (anim.GetBool ("Next")) {
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_4;
		NullCheck(L_5);
		bool L_6;
		L_6 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_5, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, NULL);
		if (!L_6)
		{
			goto IL_009f;
		}
	}
	{
		// currentState = anim.GetCurrentAnimatorStateInfo (0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___anim_4;
		NullCheck(L_7);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_7, 0, NULL);
		__this->___currentState_5 = L_8;
		// if (previousState.nameHash != currentState.nameHash) {
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* L_9 = (&__this->___previousState_6);
		int32_t L_10;
		L_10 = AnimatorStateInfo_get_nameHash_m88E91C33AA5602324A7319D7A51F552D00B14D4A(L_9, NULL);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* L_11 = (&__this->___currentState_5);
		int32_t L_12;
		L_12 = AnimatorStateInfo_get_nameHash_m88E91C33AA5602324A7319D7A51F552D00B14D4A(L_11, NULL);
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_009f;
		}
	}
	{
		// anim.SetBool ("Next", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___anim_4;
		NullCheck(L_13);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_13, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, (bool)0, NULL);
		// previousState = currentState;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_14 = __this->___currentState_5;
		__this->___previousState_6 = L_14;
	}

IL_009f:
	{
		// if (anim.GetBool ("Back")) {
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___anim_4;
		NullCheck(L_15);
		bool L_16;
		L_16 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_15, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, NULL);
		if (!L_16)
		{
			goto IL_00f8;
		}
	}
	{
		// currentState = anim.GetCurrentAnimatorStateInfo (0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___anim_4;
		NullCheck(L_17);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_18;
		L_18 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_17, 0, NULL);
		__this->___currentState_5 = L_18;
		// if (previousState.nameHash != currentState.nameHash) {
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* L_19 = (&__this->___previousState_6);
		int32_t L_20;
		L_20 = AnimatorStateInfo_get_nameHash_m88E91C33AA5602324A7319D7A51F552D00B14D4A(L_19, NULL);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* L_21 = (&__this->___currentState_5);
		int32_t L_22;
		L_22 = AnimatorStateInfo_get_nameHash_m88E91C33AA5602324A7319D7A51F552D00B14D4A(L_21, NULL);
		if ((((int32_t)L_20) == ((int32_t)L_22)))
		{
			goto IL_00f8;
		}
	}
	{
		// anim.SetBool ("Back", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___anim_4;
		NullCheck(L_23);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_23, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, (bool)0, NULL);
		// previousState = currentState;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_24 = __this->___currentState_5;
		__this->___previousState_6 = L_24;
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void UnityChan.IdleChanger::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleChanger_OnGUI_m8921A6AEC405CBA054EDBE1F26B2041893EDFF59 (IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A261EB7E7319776625F5A015EA18053797E6890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0F3EFB34B5BB26A1D0A3D4032611129C4ECC85C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUI.Box (new Rect (Screen.width - 110, 10, 100, 90), "Change Motion");
		int32_t L_0;
		L_0 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_1), ((float)((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)110)))), (10.0f), (100.0f), (90.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Box_mB47BC44807774B77DB8B2BB548D339036544ACC4(L_1, _stringLiteralB0F3EFB34B5BB26A1D0A3D4032611129C4ECC85C, NULL);
		// if (GUI.Button (new Rect (Screen.width - 100, 40, 80, 20), "Next"))
		int32_t L_2;
		L_2 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), ((float)((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)100)))), (40.0f), (80.0f), (20.0f), /*hidden argument*/NULL);
		bool L_4;
		L_4 = GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B(L_3, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, NULL);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		// anim.SetBool ("Next", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_4;
		NullCheck(L_5);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, (bool)1, NULL);
	}

IL_0061:
	{
		// if (GUI.Button (new Rect (Screen.width - 100, 70, 80, 20), "Back"))
		int32_t L_6;
		L_6 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_7), ((float)((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)100)))), (70.0f), (80.0f), (20.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B(L_7, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, NULL);
		if (!L_8)
		{
			goto IL_009b;
		}
	}
	{
		// anim.SetBool ("Back", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___anim_4;
		NullCheck(L_9);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_9, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, (bool)1, NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityChan.IdleChanger::RandomChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IdleChanger_RandomChange_mC69E77BABA02C459DD52CA109BBFA364BA1516A8 (IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F* L_0 = (U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F*)il2cpp_codegen_object_new(U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRandomChangeU3Ed__9__ctor_m41547CBB253D49ADB138B12EF6B2CEC9147FCF0B(L_0, 0, NULL);
		U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void UnityChan.IdleChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleChanger__ctor_mD88180FE7ADF499427318D04AE7BC7B15122CD2C (IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* __this, const RuntimeMethod* method) 
{
	{
		// public float _threshold = 0.5f;                // ?????????
		__this->____threshold_8 = (0.5f);
		// public float _interval = 10f;                // ?????????????
		__this->____interval_9 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityChan.IdleChanger/<RandomChange>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__9__ctor_m41547CBB253D49ADB138B12EF6B2CEC9147FCF0B (U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityChan.IdleChanger/<RandomChange>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__9_System_IDisposable_Dispose_m4B9BE58385741699A2AE7C017291E9D5C7EA7963 (U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityChan.IdleChanger/<RandomChange>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRandomChangeU3Ed__9_MoveNext_mD8AC11A1C256404323829F97F8F552974EA4BD48 (U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A261EB7E7319776625F5A015EA18053797E6890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// if (_random) {
		IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->____random_7;
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		// float _seed = Random.Range (0.0f, 1.0f);
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		V_2 = L_6;
		// if (_seed < _threshold) {
		float L_7 = V_2;
		IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->____threshold_8;
		if ((!(((float)L_7) < ((float)L_9))))
		{
			goto IL_0052;
		}
	}
	{
		// anim.SetBool ("Back", true);
		IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* L_10 = V_1;
		NullCheck(L_10);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = L_10->___anim_4;
		NullCheck(L_11);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_11, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, (bool)1, NULL);
		goto IL_006c;
	}

IL_0052:
	{
		// } else if (_seed >= _threshold) {
		float L_12 = V_2;
		IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->____threshold_8;
		if ((!(((float)L_12) >= ((float)L_14))))
		{
			goto IL_006c;
		}
	}
	{
		// anim.SetBool ("Next", true);
		IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* L_15 = V_1;
		NullCheck(L_15);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = L_15->___anim_4;
		NullCheck(L_16);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_16, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, (bool)1, NULL);
	}

IL_006c:
	{
		// yield return new WaitForSeconds (_interval);
		IdleChanger_t48C4F7F2BFE997F9A1BC8E290B2112EB2454E594* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->____interval_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_19 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_19, L_18, NULL);
		__this->___U3CU3E2__current_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0086:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true) {
		goto IL_001e;
	}
}
// System.Object UnityChan.IdleChanger/<RandomChange>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRandomChangeU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEC1CA41C8A708EE58E6A922BCFEFF1B81B780A62 (U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityChan.IdleChanger/<RandomChange>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__9_System_Collections_IEnumerator_Reset_m1BD8B9380CB153862BCF033A7146C4367A0B6EB4 (U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRandomChangeU3Ed__9_System_Collections_IEnumerator_Reset_m1BD8B9380CB153862BCF033A7146C4367A0B6EB4_RuntimeMethod_var)));
	}
}
// System.Object UnityChan.IdleChanger/<RandomChange>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRandomChangeU3Ed__9_System_Collections_IEnumerator_get_Current_m945938374B7D8F9B810FDB7D0A8DF731333F6B4E (U3CRandomChangeU3Ed__9_tFA73C63C902CA42427736F60E151CEE9074F001F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void UnityChan.IKCtrlRightHand::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKCtrlRightHand_Awake_mAD52D7D5DF21C6728A97BE2BE853287757A58E7A (IKCtrlRightHand_tDBAC6A4D9C68491E308974E6969FB742E75FEF56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator> ();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityChan.IKCtrlRightHand::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKCtrlRightHand_Update_m39CFC7861DD9AA8551454D037C5B1E8E4D81B928 (IKCtrlRightHand_tDBAC6A4D9C68491E308974E6969FB742E75FEF56* __this, const RuntimeMethod* method) 
{
	{
		// if (mixWeight >= 1.0f)
		float L_0 = __this->___mixWeight_7;
		if ((!(((float)L_0) >= ((float)(1.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// mixWeight = 1.0f;
		__this->___mixWeight_7 = (1.0f);
		return;
	}

IL_0019:
	{
		// else if (mixWeight <= 0.0f)
		float L_1 = __this->___mixWeight_7;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// mixWeight = 0.0f;
		__this->___mixWeight_7 = (0.0f);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UnityChan.IKCtrlRightHand::OnAnimatorIK(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKCtrlRightHand_OnAnimatorIK_m111A45EEBC8EA2668D5DE85AFB27B1809D479C56 (IKCtrlRightHand_tDBAC6A4D9C68491E308974E6969FB742E75FEF56* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	{
		// if (isIkActive) {
		bool L_0 = __this->___isIkActive_6;
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		// anim.SetIKPositionWeight (AvatarIKGoal.RightHand, mixWeight);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anim_4;
		float L_2 = __this->___mixWeight_7;
		NullCheck(L_1);
		Animator_SetIKPositionWeight_m8C707F505FFE2A6F36BE81ED12786B941D3B990C(L_1, 3, L_2, NULL);
		// anim.SetIKRotationWeight (AvatarIKGoal.RightHand, mixWeight);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___anim_4;
		float L_4 = __this->___mixWeight_7;
		NullCheck(L_3);
		Animator_SetIKRotationWeight_m5F0F5BD5A9A85912EA1CDF32917FE483E849978D(L_3, 3, L_4, NULL);
		// anim.SetIKPosition (AvatarIKGoal.RightHand, targetObj.position);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___targetObj_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		NullCheck(L_5);
		Animator_SetIKPosition_mB7BE88C93990186D94AF75439E2F216D6ECBCDEE(L_5, 3, L_7, NULL);
		// anim.SetIKRotation (AvatarIKGoal.RightHand, targetObj.rotation);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___anim_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___targetObj_5;
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		NullCheck(L_8);
		Animator_SetIKRotation_m328A64AD20922F0F2A1D0CD5DBB9F01FE7675DF6(L_8, 3, L_10, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void UnityChan.IKCtrlRightHand::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKCtrlRightHand_OnGUI_m5C7BC95F350401C0ED428FB7DFD60C0111D8A273 (IKCtrlRightHand_tDBAC6A4D9C68491E308974E6969FB742E75FEF56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAC72435C50E2C88247E4FAE4A4F3CA3BE5418D4);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rect rect1 = new Rect (10, Screen.height - 20, 400, 30);
		int32_t L_0;
		L_0 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), (10.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)20)))), (400.0f), (30.0f), NULL);
		// isIkActive = GUI.Toggle (rect1, isIkActive, "IK Active");
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = V_0;
		bool L_2 = __this->___isIkActive_6;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = GUI_Toggle_m00206EA64CCCB111095390467F8894D69DCB081F(L_1, L_2, _stringLiteralAAC72435C50E2C88247E4FAE4A4F3CA3BE5418D4, NULL);
		__this->___isIkActive_6 = L_3;
		// }
		return;
	}
}
// System.Void UnityChan.IKCtrlRightHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKCtrlRightHand__ctor_m2D26C9CE817A7B16A242489C5EE497D9374B921E (IKCtrlRightHand_tDBAC6A4D9C68491E308974E6969FB742E75FEF56* __this, const RuntimeMethod* method) 
{
	{
		// public float mixWeight = 1.0f;
		__this->___mixWeight_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityChan.RandomWind::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomWind_Start_m2F61E0FAF9EB338F2CD6A1FFAF630288D4B9F4CE (RandomWind_t82E37B7A3B0D246A04893F8F19037ED8FF960E76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5_m630E6D2B49B22937724760C37F78B3E0BBED6C62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// springBones = GetComponent<SpringManager> ().springBones;
		SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* L_0;
		L_0 = Component_GetComponent_TisSpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5_m630E6D2B49B22937724760C37F78B3E0BBED6C62(__this, Component_GetComponent_TisSpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5_m630E6D2B49B22937724760C37F78B3E0BBED6C62_RuntimeMethod_var);
		NullCheck(L_0);
		SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* L_1 = L_0->___springBones_9;
		__this->___springBones_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___springBones_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityChan.RandomWind::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomWind_Update_mD9F2AC65857F1C1B267980CA601B1807B77A218D (RandomWind_t82E37B7A3B0D246A04893F8F19037ED8FF960E76* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 force = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// if (isWindActive) {
		bool L_1 = __this->___isWindActive_5;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// force = new Vector3 (Mathf.PerlinNoise (Time.time, 0.0f) * 0.005f, 0, 0);
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3;
		L_3 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(L_2, (0.0f), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_multiply(L_3, (0.00499999989f))), (0.0f), (0.0f), NULL);
	}

IL_0034:
	{
		// for (int i = 0; i < springBones.Length; i++) {
		V_1 = 0;
		goto IL_004a;
	}

IL_0038:
	{
		// springBones [i].springForce = force;
		SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* L_4 = __this->___springBones_4;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		NullCheck(L_7);
		L_7->___springForce_10 = L_8;
		// for (int i = 0; i < springBones.Length; i++) {
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < springBones.Length; i++) {
		int32_t L_10 = V_1;
		SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* L_11 = __this->___springBones_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0038;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityChan.RandomWind::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomWind_OnGUI_m8B5D02AA10A0A51B92F9DF2F12375780569DDF2A (RandomWind_t82E37B7A3B0D246A04893F8F19037ED8FF960E76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC473046B41946A22C532AEFD1B4D486A028D183C);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rect rect1 = new Rect (10, Screen.height - 40, 400, 30);
		int32_t L_0;
		L_0 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), (10.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)40)))), (400.0f), (30.0f), NULL);
		// isWindActive = GUI.Toggle (rect1, isWindActive, "Random Wind");
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = V_0;
		bool L_2 = __this->___isWindActive_5;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = GUI_Toggle_m00206EA64CCCB111095390467F8894D69DCB081F(L_1, L_2, _stringLiteralC473046B41946A22C532AEFD1B4D486A028D183C, NULL);
		__this->___isWindActive_5 = L_3;
		// }
		return;
	}
}
// System.Void UnityChan.RandomWind::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomWind__ctor_mFACA0E9867B29053A7562BB7BA4CED15D869462F (RandomWind_t82E37B7A3B0D246A04893F8F19037ED8FF960E76* __this, const RuntimeMethod* method) 
{
	{
		// public bool isWindActive = true;
		__this->___isWindActive_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityChan.SpringBone::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_Awake_m67C6D9BF088155D77238A11D0BFE9D4831003C5F (SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* __this, const RuntimeMethod* method) 
{
	{
		// trs = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___trs_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trs_16), (void*)L_0);
		// localRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_1, NULL);
		__this->___localRotation_15 = L_2;
		// managerRef = GetParentSpringManager (transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* L_4;
		L_4 = SpringBone_GetParentSpringManager_m2EF5EEAD6A918133FD9764553417AC48DFA1FFFC(__this, L_3, NULL);
		__this->___managerRef_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___managerRef_20), (void*)L_4);
		// }
		return;
	}
}
// UnityChan.SpringManager UnityChan.SpringBone::GetParentSpringManager(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* SpringBone_GetParentSpringManager_m2EF5EEAD6A918133FD9764553417AC48DFA1FFFC (SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5_m630E6D2B49B22937724760C37F78B3E0BBED6C62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* V_0 = NULL;
	{
		// var springManager = t.GetComponent<SpringManager> ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___t0;
		NullCheck(L_0);
		SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* L_1;
		L_1 = Component_GetComponent_TisSpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5_m630E6D2B49B22937724760C37F78B3E0BBED6C62(L_0, Component_GetComponent_TisSpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5_m630E6D2B49B22937724760C37F78B3E0BBED6C62_RuntimeMethod_var);
		V_0 = L_1;
		// if (springManager != null)
		SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return springManager;
		SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* L_4 = V_0;
		return L_4;
	}

IL_0012:
	{
		// if (t.parent != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___t0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		// return GetParentSpringManager (t.parent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___t0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
		SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* L_10;
		L_10 = SpringBone_GetParentSpringManager_m2EF5EEAD6A918133FD9764553417AC48DFA1FFFC(__this, L_9, NULL);
		return L_10;
	}

IL_002d:
	{
		// return null;
		return (SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5*)NULL;
	}
}
// System.Void UnityChan.SpringBone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_Start_mD3A1B5A5741C88E5F1E5E78D1F240988C6A75FE8 (SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* __this, const RuntimeMethod* method) 
{
	{
		// springLength = Vector3.Distance (trs.position, child.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___trs_16;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___child_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_3, NULL);
		__this->___springLength_14 = L_4;
		// currTipPos = child.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___child_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___currTipPos_17 = L_6;
		// prevTipPos = child.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___child_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		__this->___prevTipPos_18 = L_8;
		// }
		return;
	}
}
// System.Void UnityChan.SpringBone::UpdateSpring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_UpdateSpring_m563B11D579B08B95288B55147BFD689E29AFBF57 (SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// org = trs;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___trs_16;
		__this->___org_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___org_19), (void*)L_0);
		// trs.localRotation = Quaternion.identity * localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___trs_16;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___localRotation_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_1, L_4, NULL);
		// float sqrDt = Time.deltaTime * Time.deltaTime;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_5, L_6));
		// Vector3 force = trs.rotation * (boneAxis * stiffnessForce) / sqrDt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___trs_16;
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___boneAxis_5;
		float L_10 = __this->___stiffnessForce_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_8, L_11, NULL);
		float L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_12, L_13, NULL);
		V_1 = L_14;
		// force += (prevTipPos - currTipPos) * dragForce / sqrDt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___prevTipPos_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___currTipPos_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_17, NULL);
		float L_19 = __this->___dragForce_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_22, NULL);
		V_1 = L_23;
		// force += springForce / sqrDt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___springForce_10;
		float L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_27, NULL);
		V_1 = L_28;
		// Vector3 temp = currTipPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___currTipPos_17;
		V_2 = L_29;
		// currTipPos = (currTipPos - prevTipPos) + currTipPos + (force * sqrDt);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___currTipPos_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___prevTipPos_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_30, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->___currTipPos_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_34, L_37, NULL);
		__this->___currTipPos_17 = L_38;
		// currTipPos = ((currTipPos - trs.position).normalized * springLength) + trs.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = __this->___currTipPos_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___trs_16;
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_39, L_41, NULL);
		V_4 = L_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_44 = __this->___springLength_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, L_44, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = __this->___trs_16;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_45, L_47, NULL);
		__this->___currTipPos_17 = L_48;
		// for (int i = 0; i < colliders.Length; i++) {
		V_5 = 0;
		goto IL_01f5;
	}

IL_0114:
	{
		// if (Vector3.Distance (currTipPos, colliders [i].transform.position) <= (radius + colliders [i].radius)) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = __this->___currTipPos_17;
		SpringColliderU5BU5D_tDDB81B5370FBCD7924EFC8AA13C0B605AB35B1FF* L_50 = __this->___colliders_11;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_53, NULL);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		float L_56;
		L_56 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_49, L_55, NULL);
		float L_57 = __this->___radius_6;
		SpringColliderU5BU5D_tDDB81B5370FBCD7924EFC8AA13C0B605AB35B1FF* L_58 = __this->___colliders_11;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		float L_62 = L_61->___radius_4;
		if ((!(((float)L_56) <= ((float)((float)il2cpp_codegen_add(L_57, L_62))))))
		{
			goto IL_01ef;
		}
	}
	{
		// Vector3 normal = (currTipPos - colliders [i].transform.position).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = __this->___currTipPos_17;
		SpringColliderU5BU5D_tDDB81B5370FBCD7924EFC8AA13C0B605AB35B1FF* L_64 = __this->___colliders_11;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_67, NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_63, L_69, NULL);
		V_4 = L_70;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		V_6 = L_71;
		// currTipPos = colliders [i].transform.position + (normal * (radius + colliders [i].radius));
		SpringColliderU5BU5D_tDDB81B5370FBCD7924EFC8AA13C0B605AB35B1FF* L_72 = __this->___colliders_11;
		int32_t L_73 = V_5;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_75, NULL);
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_6;
		float L_79 = __this->___radius_6;
		SpringColliderU5BU5D_tDDB81B5370FBCD7924EFC8AA13C0B605AB35B1FF* L_80 = __this->___colliders_11;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		float L_84 = L_83->___radius_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_78, ((float)il2cpp_codegen_add(L_79, L_84)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_77, L_85, NULL);
		__this->___currTipPos_17 = L_86;
		// currTipPos = ((currTipPos - trs.position).normalized * springLength) + trs.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = __this->___currTipPos_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88 = __this->___trs_16;
		NullCheck(L_88);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_87, L_89, NULL);
		V_4 = L_90;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_92 = __this->___springLength_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_91, L_92, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94 = __this->___trs_16;
		NullCheck(L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_93, L_95, NULL);
		__this->___currTipPos_17 = L_96;
	}

IL_01ef:
	{
		// for (int i = 0; i < colliders.Length; i++) {
		int32_t L_97 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_01f5:
	{
		// for (int i = 0; i < colliders.Length; i++) {
		int32_t L_98 = V_5;
		SpringColliderU5BU5D_tDDB81B5370FBCD7924EFC8AA13C0B605AB35B1FF* L_99 = __this->___colliders_11;
		NullCheck(L_99);
		if ((((int32_t)L_98) < ((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length)))))
		{
			goto IL_0114;
		}
	}
	{
		// prevTipPos = temp;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_2;
		__this->___prevTipPos_18 = L_100;
		// Vector3 aimVector = trs.TransformDirection (boneAxis);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101 = __this->___trs_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = __this->___boneAxis_5;
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_101, L_102, NULL);
		// Quaternion aimRotation = Quaternion.FromToRotation (aimVector, currTipPos - trs.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = __this->___currTipPos_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105 = __this->___trs_16;
		NullCheck(L_105);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_105, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_104, L_106, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_108;
		L_108 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_103, L_107, NULL);
		// Quaternion secondaryRotation = aimRotation * trs.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109 = __this->___trs_16;
		NullCheck(L_109);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_110;
		L_110 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_109, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_111;
		L_111 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_108, L_110, NULL);
		V_3 = L_111;
		// trs.rotation = Quaternion.Lerp (org.rotation, secondaryRotation, managerRef.dynamicRatio);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112 = __this->___trs_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113 = __this->___org_19;
		NullCheck(L_113);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_114;
		L_114 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_113, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_115 = V_3;
		SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* L_116 = __this->___managerRef_20;
		NullCheck(L_116);
		float L_117 = L_116->___dynamicRatio_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_118;
		L_118 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_114, L_115, L_117, NULL);
		NullCheck(L_112);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_112, L_118, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringBone::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_OnDrawGizmos_m64E49BD4101A6F6ECC5B4F2911A4D7B2F8D794E4 (SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* __this, const RuntimeMethod* method) 
{
	{
		// if (debug) {
		bool L_0 = __this->___debug_12;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// Gizmos.color = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_1, NULL);
		// Gizmos.DrawWireSphere (currTipPos, radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___currTipPos_17;
		float L_3 = __this->___radius_6;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_2, L_3, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UnityChan.SpringBone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone__ctor_m5F7CB0E2F09C896DB710A315A08D37A5B1DB71D0 (SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 boneAxis = new Vector3 (-1.0f, 0.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___boneAxis_5 = L_0;
		// public float radius = 0.05f;
		__this->___radius_6 = (0.0500000007f);
		// public float stiffnessForce = 0.01f;
		__this->___stiffnessForce_8 = (0.00999999978f);
		// public float dragForce = 0.4f;
		__this->___dragForce_9 = (0.400000006f);
		// public Vector3 springForce = new Vector3 (0.0f, -0.0001f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (-9.99999975E-05f), (0.0f), /*hidden argument*/NULL);
		__this->___springForce_10 = L_1;
		// public bool debug = true;
		__this->___debug_12 = (bool)1;
		// public float threshold = 0.01f;
		__this->___threshold_13 = (0.00999999978f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityChan.SpringCollider::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringCollider_OnDrawGizmosSelected_m63A394E92FAEBF84C28965F8FCD500D12F27D256 (SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawWireSphere (transform.position, radius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___radius_4;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringCollider__ctor_mA26CACF7A33B317BCA3499E2B294BB27EF72D625 (SpringCollider_tBA598174A8A1599C12D1DE98A7F072BFEEC28868* __this, const RuntimeMethod* method) 
{
	{
		// public float radius = 0.5f;
		__this->___radius_4 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityChan.SpringManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_Start_mD305CD11707A925B1B000E6A07141999A7C1F123 (SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* __this, const RuntimeMethod* method) 
{
	{
		// UpdateParameters ();
		SpringManager_UpdateParameters_m6E6FA51F314E6A2A89335ECBF0A2A647956C4AFF(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_Update_mDC23A36DD95E21BAB0F99357B0DF41A9F1690829 (SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_LateUpdate_m2FE72C1CD6E59331A9C6ADCF9387D6CC07EF0523 (SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (dynamicRatio != 0.0f) {
		float L_0 = __this->___dynamicRatio_4;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// for (int i = 0; i < springBones.Length; i++) {
		V_0 = 0;
		goto IL_0037;
	}

IL_0011:
	{
		// if (dynamicRatio > springBones [i].threshold) {
		float L_1 = __this->___dynamicRatio_4;
		SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* L_2 = __this->___springBones_9;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		float L_6 = L_5->___threshold_13;
		if ((!(((float)L_1) > ((float)L_6))))
		{
			goto IL_0033;
		}
	}
	{
		// springBones [i].UpdateSpring ();
		SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* L_7 = __this->___springBones_9;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		SpringBone_UpdateSpring_m563B11D579B08B95288B55147BFD689E29AFBF57(L_10, NULL);
	}

IL_0033:
	{
		// for (int i = 0; i < springBones.Length; i++) {
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < springBones.Length; i++) {
		int32_t L_12 = V_0;
		SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* L_13 = __this->___springBones_9;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0011;
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::UpdateParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameters_m6E6FA51F314E6A2A89335ECBF0A2A647956C4AFF (SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14F93B18F4A27E31C8383B5199FB110A2DEEB66F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF30125084BBDCC9569A0DA8872BAA0181599E988);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateParameter ("stiffnessForce", stiffnessForce, stiffnessCurve);
		float L_0 = __this->___stiffnessForce_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->___stiffnessCurve_6;
		SpringManager_UpdateParameter_m3FA6606799DF6E9A680B7194AB11D10875C49B64(__this, _stringLiteralF30125084BBDCC9569A0DA8872BAA0181599E988, L_0, L_1, NULL);
		// UpdateParameter ("dragForce", dragForce, dragCurve);
		float L_2 = __this->___dragForce_7;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = __this->___dragCurve_8;
		SpringManager_UpdateParameter_m3FA6606799DF6E9A680B7194AB11D10875C49B64(__this, _stringLiteral14F93B18F4A27E31C8383B5199FB110A2DEEB66F, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::UpdateParameter(System.String,System.Single,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameter_m3FA6606799DF6E9A680B7194AB11D10875C49B64 (SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* __this, String_t* ___fieldName0, float ___baseValue1, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	FieldInfo_t* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	{
		// var start = curve.keys [0].time;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___curve2;
		NullCheck(L_0);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1;
		L_1 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		V_0 = L_2;
		// var end = curve.keys [curve.length - 1].time;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___curve2;
		NullCheck(L_3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_4;
		L_4 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_3, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_5, NULL);
		NullCheck(L_4);
		float L_7;
		L_7 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_6, 1))))), NULL);
		V_1 = L_7;
		// var prop = springBones [0].GetType ().GetField (fieldName, System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Public);
		SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* L_8 = __this->___springBones_9;
		NullCheck(L_8);
		int32_t L_9 = 0;
		SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_10, NULL);
		String_t* L_12 = ___fieldName0;
		NullCheck(L_11);
		FieldInfo_t* L_13;
		L_13 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_11, L_12, ((int32_t)20));
		V_2 = L_13;
		// for (int i = 0; i < springBones.Length; i++) {
		V_3 = 0;
		goto IL_008b;
	}

IL_0045:
	{
		// if (!springBones [i].isUseEachBoneForceSettings) {
		SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* L_14 = __this->___springBones_9;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		bool L_18 = L_17->___isUseEachBoneForceSettings_7;
		if (L_18)
		{
			goto IL_0087;
		}
	}
	{
		// var scale = curve.Evaluate (start + (end - start) * i / (springBones.Length - 1));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_19 = ___curve2;
		float L_20 = V_0;
		float L_21 = V_1;
		float L_22 = V_0;
		int32_t L_23 = V_3;
		SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* L_24 = __this->___springBones_9;
		NullCheck(L_24);
		NullCheck(L_19);
		float L_25;
		L_25 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_19, ((float)il2cpp_codegen_add(L_20, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_21, L_22)), ((float)L_23)))/((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), NULL);
		V_4 = L_25;
		// prop.SetValue (springBones [i], baseValue * scale);
		FieldInfo_t* L_26 = V_2;
		SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* L_27 = __this->___springBones_9;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		SpringBone_tD524C5444694CB667408F9A722E0630DB2D4CBA8* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = ___baseValue1;
		float L_32 = V_4;
		float L_33 = ((float)il2cpp_codegen_multiply(L_31, L_32));
		RuntimeObject* L_34 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_26);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_26, L_30, L_34, NULL);
	}

IL_0087:
	{
		// for (int i = 0; i < springBones.Length; i++) {
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_008b:
	{
		// for (int i = 0; i < springBones.Length; i++) {
		int32_t L_36 = V_3;
		SpringBoneU5BU5D_tADB9EFDE4F73D7652850C5D2E8EE6771DF2C1F88* L_37 = __this->___springBones_9;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0045;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager__ctor_m8D72467F6ECC021FCCF1441AEAEDBCA5FA71C18A (SpringManager_tC0A916EC38C8B2A411B2C69BA01CD8D1DB4715E5* __this, const RuntimeMethod* method) 
{
	{
		// public float dynamicRatio = 1.0f;
		__this->___dynamicRatio_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityChan.ThirdPersonCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_Start_mC145FC77EFB99F20FD72DB534039C45A38E45F3E (ThirdPersonCamera_tF9A1D21761B8A0EDC9E52F16D32E91867FB5026C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A20AE6F53B8FA6C15C1E5AD4DB71F3CD355EA43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB61CD73B87847118A72F96FE50B72C6B8712F56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA58F9BE54C16486B97A532CA51E3783D02B3F46);
		s_Il2CppMethodInitialized = true;
	}
	{
		// standardPos = GameObject.Find ("CamPos").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralBB61CD73B87847118A72F96FE50B72C6B8712F56, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___standardPos_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___standardPos_5), (void*)L_1);
		// if (GameObject.Find ("FrontPos"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7A20AE6F53B8FA6C15C1E5AD4DB71F3CD355EA43, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// frontPos = GameObject.Find ("FrontPos").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7A20AE6F53B8FA6C15C1E5AD4DB71F3CD355EA43, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		__this->___frontPos_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frontPos_6), (void*)L_5);
	}

IL_003b:
	{
		// if (GameObject.Find ("JumpPos"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralEA58F9BE54C16486B97A532CA51E3783D02B3F46, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// jumpPos = GameObject.Find ("JumpPos").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralEA58F9BE54C16486B97A532CA51E3783D02B3F46, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		__this->___jumpPos_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumpPos_7), (void*)L_9);
	}

IL_0061:
	{
		// transform.position = standardPos.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___standardPos_5;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_12, NULL);
		// transform.forward = standardPos.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___standardPos_5;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		NullCheck(L_13);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_13, L_15, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.ThirdPersonCamera::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_FixedUpdate_m843471E5D604C4428F9F19430E31178469D74639 (ThirdPersonCamera_tF9A1D21761B8A0EDC9E52F16D32E91867FB5026C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButton ("Fire1")) {    // left Ctlr
		bool L_0;
		L_0 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// setCameraPositionFrontView ();
		ThirdPersonCamera_setCameraPositionFrontView_mFDD8ACC0E5C68B7AEDC0AE5125079A4AF09EC398(__this, NULL);
		return;
	}

IL_0013:
	{
		// } else if (Input.GetButton ("Fire2")) {    //Alt
		bool L_1;
		L_1 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// setCameraPositionJumpView ();
		ThirdPersonCamera_setCameraPositionJumpView_m135FD65072B6312ED92FE90D2709038D9E4A16A8(__this, NULL);
		return;
	}

IL_0026:
	{
		// setCameraPositionNormalView ();
		ThirdPersonCamera_setCameraPositionNormalView_mC8C8A988A4EB4A758AD8B0D6FCC8D98CBAFB2C7C(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionNormalView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionNormalView_mC8C8A988A4EB4A758AD8B0D6FCC8D98CBAFB2C7C (ThirdPersonCamera_tF9A1D21761B8A0EDC9E52F16D32E91867FB5026C* __this, const RuntimeMethod* method) 
{
	{
		// if (bQuickSwitch == false) {
		bool L_0 = __this->___bQuickSwitch_8;
		if (L_0)
		{
			goto IL_006d;
		}
	}
	{
		// transform.position = Vector3.Lerp (transform.position, standardPos.position, Time.fixedDeltaTime * smooth);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___standardPos_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		float L_7 = __this->___smooth_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_3, L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_8, NULL);
		// transform.forward = Vector3.Lerp (transform.forward, standardPos.forward, Time.fixedDeltaTime * smooth);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___standardPos_5;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		float L_14;
		L_14 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		float L_15 = __this->___smooth_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_11, L_13, ((float)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		NullCheck(L_9);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_9, L_16, NULL);
		return;
	}

IL_006d:
	{
		// transform.position = standardPos.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___standardPos_5;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_19, NULL);
		// transform.forward = standardPos.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___standardPos_5;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_21, NULL);
		NullCheck(L_20);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_20, L_22, NULL);
		// bQuickSwitch = false;
		__this->___bQuickSwitch_8 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionFrontView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionFrontView_mFDD8ACC0E5C68B7AEDC0AE5125079A4AF09EC398 (ThirdPersonCamera_tF9A1D21761B8A0EDC9E52F16D32E91867FB5026C* __this, const RuntimeMethod* method) 
{
	{
		// bQuickSwitch = true;
		__this->___bQuickSwitch_8 = (bool)1;
		// transform.position = frontPos.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___frontPos_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// transform.forward = frontPos.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___frontPos_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		NullCheck(L_3);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionJumpView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionJumpView_m135FD65072B6312ED92FE90D2709038D9E4A16A8 (ThirdPersonCamera_tF9A1D21761B8A0EDC9E52F16D32E91867FB5026C* __this, const RuntimeMethod* method) 
{
	{
		// bQuickSwitch = false;
		__this->___bQuickSwitch_8 = (bool)0;
		// transform.position = Vector3.Lerp (transform.position, jumpPos.position, Time.fixedDeltaTime * smooth);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___jumpPos_7;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		float L_6 = __this->___smooth_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_2, L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_7, NULL);
		// transform.forward = Vector3.Lerp (transform.forward, jumpPos.forward, Time.fixedDeltaTime * smooth);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___jumpPos_7;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		float L_14 = __this->___smooth_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_10, L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		NullCheck(L_8);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_8, L_15, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.ThirdPersonCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera__ctor_m607F6A1ED608FBD724D935820BD2A37CE0A43381 (ThirdPersonCamera_tF9A1D21761B8A0EDC9E52F16D32E91867FB5026C* __this, const RuntimeMethod* method) 
{
	{
		// public float smooth = 3f;        // ?????????????????
		__this->___smooth_4 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody_Start_mEFE1190C2F48DBEFAE37BDBE2E9D26DC8D1F5400 (UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator> ();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_17), (void*)L_0);
		// col = GetComponent<CapsuleCollider> ();
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_1;
		L_1 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->___col_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___col_12), (void*)L_1);
		// rb = GetComponent<Rigidbody> ();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_13), (void*)L_2);
		// cameraObject = GameObject.FindWithTag ("MainCamera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		__this->___cameraObject_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraObject_19), (void*)L_3);
		// orgColHight = col.height;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = __this->___col_12;
		NullCheck(L_4);
		float L_5;
		L_5 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_4, NULL);
		__this->___orgColHight_15 = L_5;
		// orgVectColCenter = col.center;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_6 = __this->___col_12;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_6, NULL);
		__this->___orgVectColCenter_16 = L_7;
		// }
		return;
	}
}
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody_FixedUpdate_mD25954A85A5A89E1381A53AC3BE7EF08511C92BD (UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EEB44230D18B63FD2EE917847EC8588A2354785);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6142D87798990EB03763CFE5B4D7142F9FF6DB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral880BA69446D7C58BFFFA1A35EF2C5C9CE3C71FFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE4B715AAAA58DCCE03CE0702B58CE77A631DE43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		// float h = Input.GetAxis ("Horizontal");                // ???????????h???
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float v = Input.GetAxis ("Vertical");                // ???????????v???
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// anim.SetFloat ("Speed", v);                            // Animator????????"Speed"?????v???
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_17;
		float L_3 = V_1;
		NullCheck(L_2);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_2, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_3, NULL);
		// anim.SetFloat ("Direction", h);                         // Animator????????"Direction"?????h???
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_17;
		float L_5 = V_0;
		NullCheck(L_4);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_4, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, L_5, NULL);
		// anim.speed = animSpeed;                                // Animator??????????? animSpeed?????
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___anim_17;
		float L_7 = __this->___animSpeed_4;
		NullCheck(L_6);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_6, L_7, NULL);
		// currentBaseState = anim.GetCurrentAnimatorStateInfo (0);    // ???????????Base Layer (0)?????????????
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___anim_17;
		NullCheck(L_8);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_9;
		L_9 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_8, 0, NULL);
		__this->___currentBaseState_18 = L_9;
		// rb.useGravity = true;//?????????????????????????????????
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_13;
		NullCheck(L_10);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_10, (bool)1, NULL);
		// velocity = new Vector3 (0, 0, v);        // ?????????Z??????????
		float L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.0f), (0.0f), L_11, /*hidden argument*/NULL);
		__this->___velocity_14 = L_12;
		// velocity = transform.TransformDirection (velocity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___velocity_14;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_13, L_14, NULL);
		__this->___velocity_14 = L_15;
		// if (v > 0.1) {
		float L_16 = V_1;
		if ((!(((double)((double)L_16)) > ((double)(0.10000000000000001)))))
		{
			goto IL_00ba;
		}
	}
	{
		// velocity *= forwardSpeed;        // ????????
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___velocity_14;
		float L_18 = __this->___forwardSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		__this->___velocity_14 = L_19;
		goto IL_00de;
	}

IL_00ba:
	{
		// } else if (v < -0.1) {
		float L_20 = V_1;
		if ((!(((double)((double)L_20)) < ((double)(-0.10000000000000001)))))
		{
			goto IL_00de;
		}
	}
	{
		// velocity *= backwardSpeed;    // ????????
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___velocity_14;
		float L_22 = __this->___backwardSpeed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		__this->___velocity_14 = L_23;
	}

IL_00de:
	{
		// if (Input.GetButtonDown ("Jump")) {    // ????????????
		bool L_24;
		L_24 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_24)
		{
			goto IL_0137;
		}
	}
	{
		// if (currentBaseState.nameHash == locoState) {
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* L_25 = (&__this->___currentBaseState_18);
		int32_t L_26;
		L_26 = AnimatorStateInfo_get_nameHash_m88E91C33AA5602324A7319D7A51F552D00B14D4A(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var);
		int32_t L_27 = ((UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var))->___locoState_21;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_0137;
		}
	}
	{
		// if (!anim.IsInTransition (0)) {
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28 = __this->___anim_17;
		NullCheck(L_28);
		bool L_29;
		L_29 = Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830(L_28, 0, NULL);
		if (L_29)
		{
			goto IL_0137;
		}
	}
	{
		// rb.AddForce (Vector3.up * jumpPower, ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = __this->___rb_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_32 = __this->___jumpPower_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, L_32, NULL);
		NullCheck(L_30);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_30, L_33, 2, NULL);
		// anim.SetBool ("Jump", true);        // Animator?????????????????
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34 = __this->___anim_17;
		NullCheck(L_34);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_34, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, (bool)1, NULL);
	}

IL_0137:
	{
		// transform.localPosition += velocity * Time.fixedDeltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = L_35;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___velocity_14;
		float L_39;
		L_39 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_40, NULL);
		NullCheck(L_36);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_36, L_41, NULL);
		// transform.Rotate (0, h * rotateSpeed, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_43 = V_0;
		float L_44 = __this->___rotateSpeed_10;
		NullCheck(L_42);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_42, (0.0f), ((float)il2cpp_codegen_multiply(L_43, L_44)), (0.0f), NULL);
		// if (currentBaseState.nameHash == locoState) {
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* L_45 = (&__this->___currentBaseState_18);
		int32_t L_46;
		L_46 = AnimatorStateInfo_get_nameHash_m88E91C33AA5602324A7319D7A51F552D00B14D4A(L_45, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var);
		int32_t L_47 = ((UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var))->___locoState_21;
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_019e;
		}
	}
	{
		// if (useCurves) {
		bool L_48 = __this->___useCurves_6;
		if (!L_48)
		{
			goto IL_031e;
		}
	}
	{
		// resetCollider ();
		UnityChanControlScriptWithRgidBody_resetCollider_mA45228FB27D49414887340E9DFD0C4CA71C11A89(__this, NULL);
		return;
	}

IL_019e:
	{
		// else if (currentBaseState.nameHash == jumpState) {
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* L_49 = (&__this->___currentBaseState_18);
		int32_t L_50;
		L_50 = AnimatorStateInfo_get_nameHash_m88E91C33AA5602324A7319D7A51F552D00B14D4A(L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var);
		int32_t L_51 = ((UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var))->___jumpState_22;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_51))))
		{
			goto IL_02af;
		}
	}
	{
		// cameraObject.SendMessage ("setCameraPositionJumpView");    // ????????????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___cameraObject_19;
		NullCheck(L_52);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_52, _stringLiteral880BA69446D7C58BFFFA1A35EF2C5C9CE3C71FFE, NULL);
		// if (!anim.IsInTransition (0)) {
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_53 = __this->___anim_17;
		NullCheck(L_53);
		bool L_54;
		L_54 = Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830(L_53, 0, NULL);
		if (L_54)
		{
			goto IL_031e;
		}
	}
	{
		// if (useCurves) {
		bool L_55 = __this->___useCurves_6;
		if (!L_55)
		{
			goto IL_029d;
		}
	}
	{
		// float jumpHeight = anim.GetFloat ("JumpHeight");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_56 = __this->___anim_17;
		NullCheck(L_56);
		float L_57;
		L_57 = Animator_GetFloat_m10B455A15EB343175518CCBEE2818C2497CC678A(L_56, _stringLiteral4EEB44230D18B63FD2EE917847EC8588A2354785, NULL);
		V_2 = L_57;
		// float gravityControl = anim.GetFloat ("GravityControl");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_58 = __this->___anim_17;
		NullCheck(L_58);
		float L_59;
		L_59 = Animator_GetFloat_m10B455A15EB343175518CCBEE2818C2497CC678A(L_58, _stringLiteral6142D87798990EB03763CFE5B4D7142F9FF6DB68, NULL);
		// if (gravityControl > 0)
		if ((!(((float)L_59) > ((float)(0.0f)))))
		{
			goto IL_0213;
		}
	}
	{
		// rb.useGravity = false;    //??????????????
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_60 = __this->___rb_13;
		NullCheck(L_60);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_60, (bool)0, NULL);
	}

IL_0213:
	{
		// Ray ray = new Ray (transform.position + Vector3.up, -Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_62, L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_65, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_67;
		memset((&L_67), 0, sizeof(L_67));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_67), L_64, L_66, /*hidden argument*/NULL);
		// RaycastHit hitInfo = new RaycastHit ();
		il2cpp_codegen_initobj((&V_3), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// if (Physics.Raycast (ray, out hitInfo)) {
		bool L_68;
		L_68 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_67, (&V_3), NULL);
		if (!L_68)
		{
			goto IL_029d;
		}
	}
	{
		// if (hitInfo.distance > useCurvesHeight) {
		float L_69;
		L_69 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_3), NULL);
		float L_70 = __this->___useCurvesHeight_7;
		if ((!(((float)L_69) > ((float)L_70))))
		{
			goto IL_0297;
		}
	}
	{
		// col.height = orgColHight - jumpHeight;            // ?????????????
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_71 = __this->___col_12;
		float L_72 = __this->___orgColHight_15;
		float L_73 = V_2;
		NullCheck(L_71);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_71, ((float)il2cpp_codegen_subtract(L_72, L_73)), NULL);
		// float adjCenterY = orgVectColCenter.y + jumpHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_74 = (&__this->___orgVectColCenter_16);
		float L_75 = L_74->___y_3;
		float L_76 = V_2;
		V_4 = ((float)il2cpp_codegen_add(L_75, L_76));
		// col.center = new Vector3 (0, adjCenterY, 0);    // ???????????????
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_77 = __this->___col_12;
		float L_78 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_79), (0.0f), L_78, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_77);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_77, L_79, NULL);
		goto IL_029d;
	}

IL_0297:
	{
		// resetCollider ();
		UnityChanControlScriptWithRgidBody_resetCollider_mA45228FB27D49414887340E9DFD0C4CA71C11A89(__this, NULL);
	}

IL_029d:
	{
		// anim.SetBool ("Jump", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_80 = __this->___anim_17;
		NullCheck(L_80);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_80, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, (bool)0, NULL);
		return;
	}

IL_02af:
	{
		// else if (currentBaseState.nameHash == idleState) {
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* L_81 = (&__this->___currentBaseState_18);
		int32_t L_82;
		L_82 = AnimatorStateInfo_get_nameHash_m88E91C33AA5602324A7319D7A51F552D00B14D4A(L_81, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var);
		int32_t L_83 = ((UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var))->___idleState_20;
		if ((!(((uint32_t)L_82) == ((uint32_t)L_83))))
		{
			goto IL_02ed;
		}
	}
	{
		// if (useCurves) {
		bool L_84 = __this->___useCurves_6;
		if (!L_84)
		{
			goto IL_02cf;
		}
	}
	{
		// resetCollider ();
		UnityChanControlScriptWithRgidBody_resetCollider_mA45228FB27D49414887340E9DFD0C4CA71C11A89(__this, NULL);
	}

IL_02cf:
	{
		// if (Input.GetButtonDown ("Jump")) {
		bool L_85;
		L_85 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_85)
		{
			goto IL_031e;
		}
	}
	{
		// anim.SetBool ("Rest", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_86 = __this->___anim_17;
		NullCheck(L_86);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_86, _stringLiteralAE4B715AAAA58DCCE03CE0702B58CE77A631DE43, (bool)1, NULL);
		return;
	}

IL_02ed:
	{
		// else if (currentBaseState.nameHash == restState) {
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* L_87 = (&__this->___currentBaseState_18);
		int32_t L_88;
		L_88 = AnimatorStateInfo_get_nameHash_m88E91C33AA5602324A7319D7A51F552D00B14D4A(L_87, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var);
		int32_t L_89 = ((UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var))->___restState_23;
		if ((!(((uint32_t)L_88) == ((uint32_t)L_89))))
		{
			goto IL_031e;
		}
	}
	{
		// if (!anim.IsInTransition (0)) {
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_90 = __this->___anim_17;
		NullCheck(L_90);
		bool L_91;
		L_91 = Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830(L_90, 0, NULL);
		if (L_91)
		{
			goto IL_031e;
		}
	}
	{
		// anim.SetBool ("Rest", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_92 = __this->___anim_17;
		NullCheck(L_92);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_92, _stringLiteralAE4B715AAAA58DCCE03CE0702B58CE77A631DE43, (bool)0, NULL);
	}

IL_031e:
	{
		// }
		return;
	}
}
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody_OnGUI_m2458ECF2F24A174FADBD6842D7F164861C4F4C61 (UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F660DC5B9C69D4A4082CBA7BCC2360B2E3958E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FE2959F6EBB514FAE4E483E6BFA520D29AAACDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78AA7A8F563BCFC24BE1F0BD20224D7B92AC7DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA64BE0D74BC765ED5A679FABB1292BC185358614);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE1BFAC0F726D90BC3D924DF6291922C3F5104A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5C1D07A37A3563A0E4767C281E178889D4D677E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUI.Box (new Rect (Screen.width - 260, 10, 250, 150), "Interaction");
		int32_t L_0;
		L_0 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_1), ((float)((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)260)))), (10.0f), (250.0f), (150.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Box_mB47BC44807774B77DB8B2BB548D339036544ACC4(L_1, _stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A, NULL);
		// GUI.Label (new Rect (Screen.width - 245, 30, 250, 30), "Up/Down Arrow : Go Forwald/Go Back");
		int32_t L_2;
		L_2 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), ((float)((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)245)))), (30.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_3, _stringLiteralCBE1BFAC0F726D90BC3D924DF6291922C3F5104A, NULL);
		// GUI.Label (new Rect (Screen.width - 245, 50, 250, 30), "Left/Right Arrow : Turn Left/Turn Right");
		int32_t L_4;
		L_4 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		memset((&L_5), 0, sizeof(L_5));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_5), ((float)((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)245)))), (50.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_5, _stringLiteral0F660DC5B9C69D4A4082CBA7BCC2360B2E3958E6, NULL);
		// GUI.Label (new Rect (Screen.width - 245, 70, 250, 30), "Hit Space key while Running : Jump");
		int32_t L_6;
		L_6 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_7), ((float)((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)245)))), (70.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_7, _stringLiteralD5C1D07A37A3563A0E4767C281E178889D4D677E, NULL);
		// GUI.Label (new Rect (Screen.width - 245, 90, 250, 30), "Hit Spase key while Stopping : Rest");
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_9), ((float)((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)245)))), (90.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_9, _stringLiteral78AA7A8F563BCFC24BE1F0BD20224D7B92AC7DF3, NULL);
		// GUI.Label (new Rect (Screen.width - 245, 110, 250, 30), "Left Control : Front Camera");
		int32_t L_10;
		L_10 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_11), ((float)((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)245)))), (110.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_11, _stringLiteralA64BE0D74BC765ED5A679FABB1292BC185358614, NULL);
		// GUI.Label (new Rect (Screen.width - 245, 130, 250, 30), "Alt : LookAt Camera");
		int32_t L_12;
		L_12 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_13), ((float)((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)245)))), (130.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_13, _stringLiteral0FE2959F6EBB514FAE4E483E6BFA520D29AAACDC, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::resetCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody_resetCollider_mA45228FB27D49414887340E9DFD0C4CA71C11A89 (UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC* __this, const RuntimeMethod* method) 
{
	{
		// col.height = orgColHight;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = __this->___col_12;
		float L_1 = __this->___orgColHight_15;
		NullCheck(L_0);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_0, L_1, NULL);
		// col.center = orgVectColCenter;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_2 = __this->___col_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___orgVectColCenter_16;
		NullCheck(L_2);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody__ctor_mA8100A5673D407D5744E7735A2B432DF11B53FD7 (UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC* __this, const RuntimeMethod* method) 
{
	{
		// public float animSpeed = 1.5f;                // ?????????????
		__this->___animSpeed_4 = (1.5f);
		// public float lookSmoother = 3.0f;            // a smoothing setting for camera motion
		__this->___lookSmoother_5 = (3.0f);
		// public bool useCurves = true;                // Mecanim??????????????
		__this->___useCurves_6 = (bool)1;
		// public float useCurvesHeight = 0.5f;        // ??????????????????????????????
		__this->___useCurvesHeight_7 = (0.5f);
		// public float forwardSpeed = 7.0f;
		__this->___forwardSpeed_8 = (7.0f);
		// public float backwardSpeed = 2.0f;
		__this->___backwardSpeed_9 = (2.0f);
		// public float rotateSpeed = 2.0f;
		__this->___rotateSpeed_10 = (2.0f);
		// public float jumpPower = 3.0f;
		__this->___jumpPower_11 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody__cctor_m062F5C4DD902FA1EE2D5EF553E6D2E1EBFF27A96 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04EC4F81AD07B2B6F76B2D7A56FC33E5558850A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F8E7863AB6F059155307444D42AD47E889F06CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7040FF69C8903BD258116DC869C58A972AF5E772);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE474B80F684635C9E8A2D82048BB64372275D715);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int idleState = Animator.StringToHash ("Base Layer.Idle");
		int32_t L_0;
		L_0 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral4F8E7863AB6F059155307444D42AD47E889F06CA, NULL);
		((UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var))->___idleState_20 = L_0;
		// static int locoState = Animator.StringToHash ("Base Layer.Locomotion");
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralE474B80F684635C9E8A2D82048BB64372275D715, NULL);
		((UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var))->___locoState_21 = L_1;
		// static int jumpState = Animator.StringToHash ("Base Layer.Jump");
		int32_t L_2;
		L_2 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral04EC4F81AD07B2B6F76B2D7A56FC33E5558850A6, NULL);
		((UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var))->___jumpState_22 = L_2;
		// static int restState = Animator.StringToHash ("Base Layer.Rest");
		int32_t L_3;
		L_3 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral7040FF69C8903BD258116DC869C58A972AF5E772, NULL);
		((UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tA94693F459795DD7539DDC3AB34E844121A5F3BC_il2cpp_TypeInfo_var))->___restState_23 = L_3;
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
// System.Void UnityChan.SplashScreen::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen_NextLevel_m6EFEC48A4AB1BE5197303925912DCB9F38AD7512 (SplashScreen_t1F013BB0CEC3BF055023E85CC5B0ECE1BA006AD2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityChan.SplashScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen__ctor_m9F571B14D16964009836822B9ABEA5C867C0B395 (SplashScreen_t1F013BB0CEC3BF055023E85CC5B0ECE1BA006AD2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_SetLookRotation_m5CBF58323F62AE67B7B9DD50A75CA99088AEF693_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___view0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___view0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Quaternion_SetLookRotation_m3A91BBDA2E5863D221B3FCA0C07904B2F2777C16_inline(__this, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_SetLookRotation_m3A91BBDA2E5863D221B3FCA0C07904B2F2777C16_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___view0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up1, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___view0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___up1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_0, L_1, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
