#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.SortedList`2/KeyList<System.Int32,PlayerPositionMessage>
struct KeyList_t615FF40B44BD28C22B2A57E540E62374E0B557A9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// Singleton`1<System.Object>
struct Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6;
// Singleton`1<WebSocketService>
struct Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249;
// System.Collections.Generic.SortedList`2<System.Int32,System.Object>
struct SortedList_2_tF16B6F62549BC3DF1B8A838626BCF47B638D9793;
// System.Collections.Generic.SortedList`2<System.Int32,PlayerPositionMessage>
struct SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.SortedList`2/ValueList<System.Int32,PlayerPositionMessage>
struct ValueList_tEDA0D79A48D687AA65893C3FDA52328D2577FFB4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// PlayerPositionMessage[]
struct PlayerPositionMessageU5BU5D_t4FAE2DDD2B3D9683CBDB2C42D09D45A0336E3C34;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Bumper
struct Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// CameraFollow
struct CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// EnemyPositionHandler
struct EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameMessage
struct GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NextLevel
struct NextLevel_tAE8431DE6927C98CF2CDAAD06465C0E69FB01B60;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerColorService
struct PlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD;
// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4;
// PlayerMovementController
struct PlayerMovementController_t8798F5FB5B4B88CE015EF6C092C04C3B71CBA4BE;
// PlayerPositionMessage
struct PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// StatusController
struct StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ThirdPersonCamController
struct ThirdPersonCamController_t63EB39C6A53D2DB78D86521CBC5157B10A2F162F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityMainThreadHelper
struct UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// NativeWebSocket.WebSocket
struct WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F;
// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466;
// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3;
// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C;
// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E;
// WebSocketService
struct WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD;
// Bumper/<Revert>d__6
struct U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Enemy/<CorrectDrift>d__8
struct U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerMove/<WaitToMove>d__9
struct U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// WebSocketService/<>c
struct U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral21017E95E72FEB5F51E399A3C40D3C263C73EBDC;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9;
IL2CPP_EXTERN_C String_t* _stringLiteral3719A12CE3D4CB872A68B58FA16D30463FA55458;
IL2CPP_EXTERN_C String_t* _stringLiteral3AD7E578430F8B768F833E1AE4B29FAF526BF73B;
IL2CPP_EXTERN_C String_t* _stringLiteral3E948894C10C057AC0B925C34F4686969B3F6785;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4BE299D040FCFFE23C03C53F600D5BA58462C445;
IL2CPP_EXTERN_C String_t* _stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50;
IL2CPP_EXTERN_C String_t* _stringLiteral5514D8BE9E761133A77457A12D3915CB3E07E5AF;
IL2CPP_EXTERN_C String_t* _stringLiteral5CF8F807730B6E4FC014101059E86FF146A6384D;
IL2CPP_EXTERN_C String_t* _stringLiteral60A09CDCF43F709AAED3C395930DB9F2E4AE559C;
IL2CPP_EXTERN_C String_t* _stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8C70BBA41445618E21460F91418BB964221FD192;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE8F78A2209F845310E2ADD7CA75E30B88D050D;
IL2CPP_EXTERN_C String_t* _stringLiteral9B60B7A207B7FFAB38B7C829859104FBA1704CF8;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F994A61C5B0E83FDA3716A4260541F80048DA2;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F18D32969865AE5CD8BE3CD6A7AC371410C7DA;
IL2CPP_EXTERN_C String_t* _stringLiteralA6DEC1189C46D94DEA70426E933F399DDE930451;
IL2CPP_EXTERN_C String_t* _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B;
IL2CPP_EXTERN_C String_t* _stringLiteralBECF07590319033FB48E25F3AA1302EC34DD303A;
IL2CPP_EXTERN_C String_t* _stringLiteralC4D6860B76928498777DED120D3B401E9055DA61;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE56A055ADD365F679EB5EE36CE42502E80C542;
IL2CPP_EXTERN_C String_t* _stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07;
IL2CPP_EXTERN_C String_t* _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC;
IL2CPP_EXTERN_C String_t* _stringLiteralD5CE345142BA508093F573A71F797B6A49373D56;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE127E188140BCCBBFCD10BCB235937A22D810C9F;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_m01FC2597C452461729AEC706CC470D4B1815AE57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mAA1640391143F62F48F5100E31B8AD5A89021922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m0ECB1DDC381A287393AB3ED883F2B96162F7D2AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mC216C5561824D5140BBBF290D06699E9D29A4FD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_mD8DE659724468EDC789D193E57B353F76399917D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mE22A1E09B52DAC5A20CF8E5721B647E15E6DFABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m1157CC50C1C11A49A7B597EBC17B9F688B357D41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mD8A739B3AA5D8771500B542B6FA93E16EF859AA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisGameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764_m9E1C4C7D9EF37FB5908E86C55D9B6115908A4B55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851_m1545532A21433933AB65A7C944114E17197CFAA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93_m1035E16DEDA6D47E8DA6CBBE29275DEECF984A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMenu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_mA523EFA275D6EFCD2DB86CC31DCCE6B4D97B8293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD_m3CC7B655B9A210CE07B270ADBD4A71C3B48DBE8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisStatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B_m671DEBB05A75B0700F577E9E95EA6CC149E9F37E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m22176DA86E41DD4403C0B4C8FDCFDB1538C856BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2_Add_mA2BA94E81A33E7F4DC17D1EF2C52D001B1BB4E8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2_Remove_m216C821F187BB4A09CCD77252834B5790711A728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2_TryGetValue_mA500EFE63DFADB6BD11259FAB6EB8389FF7FF6FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2__ctor_m0EE2ABDE86A177F4A9C44E50CA36F3DC59A5FA6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCorrectDriftU3Ed__8_System_Collections_IEnumerator_Reset_mE42328A1B5330ADF22F8C9C123FD1C2AA75CC12B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRevertU3Ed__6_System_Collections_IEnumerator_Reset_mA90CBDD1A1F8FBB3A8944B5D90009FE5FF9FE025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetupWebsocketCallbacksU3Eb__20_3_mEE744BB2D2F021828F238D0FC1E66B03A809019D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitToMoveU3Ed__9_System_Collections_IEnumerator_Reset_m6DB65C23BC985104ED7E5F731F128AD09DFA0BB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_0_m01699312BEED972A6DE9CE2F57DA93EBC7A479D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_1_m855587E333E35081A2BCFCEAC05BE6434C6AE03D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_2_mE03423E68715709C5C2B8DC4B039EE24820D6C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_4_mA1B792EA9299A8DEE822EC1486A714F0AA4CFFD0_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

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

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.SortedList`2<System.Int32,PlayerPositionMessage>
struct SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8  : public RuntimeObject
{
	// TKey[] System.Collections.Generic.SortedList`2::keys
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___keys_0;
	// TValue[] System.Collections.Generic.SortedList`2::values
	PlayerPositionMessageU5BU5D_t4FAE2DDD2B3D9683CBDB2C42D09D45A0336E3C34* ___values_1;
	// System.Int32 System.Collections.Generic.SortedList`2::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.SortedList`2::version
	int32_t ___version_3;
	// System.Collections.Generic.IComparer`1<TKey> System.Collections.Generic.SortedList`2::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.Generic.SortedList`2/KeyList<TKey,TValue> System.Collections.Generic.SortedList`2::keyList
	KeyList_t615FF40B44BD28C22B2A57E540E62374E0B557A9* ___keyList_5;
	// System.Collections.Generic.SortedList`2/ValueList<TKey,TValue> System.Collections.Generic.SortedList`2::valueList
	ValueList_tEDA0D79A48D687AA65893C3FDA52328D2577FFB4* ___valueList_6;
	// System.Object System.Collections.Generic.SortedList`2::_syncRoot
	RuntimeObject* ____syncRoot_7;
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// GameMessage
struct GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764  : public RuntimeObject
{
	// System.String GameMessage::uuid
	String_t* ___uuid_0;
	// System.String GameMessage::opcode
	String_t* ___opcode_1;
	// System.String GameMessage::message
	String_t* ___message_2;
	// System.String GameMessage::gameStatus
	String_t* ___gameStatus_3;
	// System.String GameMessage::action
	String_t* ___action_4;
	// System.Double GameMessage::timestamp
	double ___timestamp_5;
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

// NativeWebSocket.WebSocket
struct WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F  : public RuntimeObject
{
	// System.Int32 NativeWebSocket.WebSocket::instanceId
	int32_t ___instanceId_0;
	// NativeWebSocket.WebSocketOpenEventHandler NativeWebSocket.WebSocket::OnOpen
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___OnOpen_1;
	// NativeWebSocket.WebSocketMessageEventHandler NativeWebSocket.WebSocket::OnMessage
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* ___OnMessage_2;
	// NativeWebSocket.WebSocketErrorEventHandler NativeWebSocket.WebSocket::OnError
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___OnError_3;
	// NativeWebSocket.WebSocketCloseEventHandler NativeWebSocket.WebSocket::OnClose
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___OnClose_4;
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

// Bumper/<Revert>d__6
struct U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA  : public RuntimeObject
{
	// System.Int32 Bumper/<Revert>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Bumper/<Revert>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Bumper Bumper/<Revert>d__6::<>4__this
	Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0* ___U3CU3E4__this_2;
};

// PlayerMove/<WaitToMove>d__9
struct U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F  : public RuntimeObject
{
	// System.Int32 PlayerMove/<WaitToMove>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerMove/<WaitToMove>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerMove PlayerMove/<WaitToMove>d__9::<>4__this
	PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* ___U3CU3E4__this_2;
};

// WebSocketService/<>c
struct U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496  : public RuntimeObject
{
};

struct U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_StaticFields
{
	// WebSocketService/<>c WebSocketService/<>c::<>9
	U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496* ___U3CU3E9_0;
	// NativeWebSocket.WebSocketErrorEventHandler WebSocketService/<>c::<>9__20_3
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___U3CU3E9__20_3_1;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// SerializableVector3
struct SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 
{
	// System.String SerializableVector3::x
	String_t* ___x_0;
	// System.String SerializableVector3::y
	String_t* ___y_1;
	// System.String SerializableVector3::z
	String_t* ___z_2;
};
// Native definition for P/Invoke marshalling of SerializableVector3
struct SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshaled_pinvoke
{
	char* ___x_0;
	char* ___y_1;
	char* ___z_2;
};
// Native definition for COM marshalling of SerializableVector3
struct SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshaled_com
{
	Il2CppChar* ___x_0;
	Il2CppChar* ___y_1;
	Il2CppChar* ___z_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.CursorLockMode
struct CursorLockMode_tB70C7D1B9208B821C1C8A614BE904500B92C47D2 
{
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// UnityEngine.ForceMode
struct ForceMode_t603F3ECB085E4FDD30C91273A469047EA64F4459 
{
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;
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

// PlayerPositionMessage
struct PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851  : public GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764
{
	// SerializableVector3 PlayerPositionMessage::velocity
	SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 ___velocity_6;
	// SerializableVector3 PlayerPositionMessage::enemyVelocity
	SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 ___enemyVelocity_7;
	// SerializableVector3 PlayerPositionMessage::currentPos
	SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 ___currentPos_8;
	// System.Int32 PlayerPositionMessage::seq
	int32_t ___seq_9;
	// System.String PlayerPositionMessage::player
	String_t* ___player_10;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// NativeWebSocket.WebSocketCloseCode
struct WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5 
{
	// System.Int32 NativeWebSocket.WebSocketCloseCode::value__
	int32_t ___value___2;
};

// NativeWebSocket.WebSocketState
struct WebSocketState_t1D9DCE00D3D1CB4EA847D9280297594587183F17 
{
	// System.Int32 NativeWebSocket.WebSocketState::value__
	int32_t ___value___2;
};

// Enemy/<CorrectDrift>d__8
struct U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0  : public RuntimeObject
{
	// System.Int32 Enemy/<CorrectDrift>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<CorrectDrift>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Transform Enemy/<CorrectDrift>d__8::thisTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thisTransform_2;
	// UnityEngine.Vector3 Enemy/<CorrectDrift>d__8::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_3;
	// UnityEngine.Vector3 Enemy/<CorrectDrift>d__8::endPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPos_4;
	// System.Single Enemy/<CorrectDrift>d__8::correctionDuration
	float ___correctionDuration_5;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// WebSocketService/<FindMatch>d__21
struct U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6 
{
	// System.Int32 WebSocketService/<FindMatch>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebSocketService/<FindMatch>d__21::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// WebSocketService WebSocketService/<FindMatch>d__21::<>4__this
	WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WebSocketService/<FindMatch>d__21::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// WebSocketService/<OnApplicationQuit>d__27
struct U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C 
{
	// System.Int32 WebSocketService/<OnApplicationQuit>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebSocketService/<OnApplicationQuit>d__27::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// WebSocketService WebSocketService/<OnApplicationQuit>d__27::<>4__this
	WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WebSocketService/<OnApplicationQuit>d__27::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// WebSocketService/<QuitGame>d__26
struct U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2 
{
	// System.Int32 WebSocketService/<QuitGame>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebSocketService/<QuitGame>d__26::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// WebSocketService WebSocketService/<QuitGame>d__26::<>4__this
	WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WebSocketService/<QuitGame>d__26::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// WebSocketService/<SendWebSocketMessage>d__23
struct U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC 
{
	// System.Int32 WebSocketService/<SendWebSocketMessage>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebSocketService/<SendWebSocketMessage>d__23::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// WebSocketService WebSocketService/<SendWebSocketMessage>d__23::<>4__this
	WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* ___U3CU3E4__this_2;
	// System.String WebSocketService/<SendWebSocketMessage>d__23::message
	String_t* ___message_3;
	// System.Runtime.CompilerServices.TaskAwaiter WebSocketService/<SendWebSocketMessage>d__23::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Singleton`1<WebSocketService>
struct Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_StaticFields
{
	// System.Boolean Singleton`1::m_ShuttingDown
	bool ___m_ShuttingDown_4;
	// System.Object Singleton`1::m_Lock
	RuntimeObject* ___m_Lock_5;
	// T Singleton`1::m_Instance
	WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* ___m_Instance_6;
};

// Bumper
struct Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material Bumper::lightMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___lightMat_4;
	// UnityEngine.Material Bumper::defaultMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMat_5;
	// UnityEngine.Renderer Bumper::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_6;
	// UnityEngine.GameObject Bumper::redLight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___redLight_7;
};

// CameraFollow
struct CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraFollow::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.Vector3 CameraFollow::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_5;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.SortedList`2<System.Int32,PlayerPositionMessage> Enemy::enemyPositionMessageQueue
	SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8* ___enemyPositionMessageQueue_4;
	// PlayerPositionMessage Enemy::playerPositionDriftCheckMessage
	PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* ___playerPositionDriftCheckMessage_5;
	// UnityEngine.Rigidbody Enemy::_enemy
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____enemy_6;
	// System.Single Enemy::maxSpeed
	float ___maxSpeed_8;
	// System.Int32 Enemy::enemyPositionSequence
	int32_t ___enemyPositionSequence_9;
};

// EnemyPositionHandler
struct EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Enemy EnemyPositionHandler::enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy_4;
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// StatusController Menu::_statusController
	StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* ____statusController_4;
	// UnityEngine.UI.Button Menu::quitButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___quitButton_5;
	// UnityEngine.UI.Button Menu::findMatchButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___findMatchButton_6;
};

// NextLevel
struct NextLevel_tAE8431DE6927C98CF2CDAAD06465C0E69FB01B60  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 NextLevel::levelToLoad
	int32_t ___levelToLoad_4;
};

// PlayerColorService
struct PlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Enemy PlayerColorService::enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy_4;
	// UnityEngine.Rigidbody PlayerColorService::player
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___player_5;
};

// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String PlayerMove::vert
	String_t* ___vert_4;
	// System.String PlayerMove::horiz
	String_t* ___horiz_5;
	// System.Int32 PlayerMove::speed
	int32_t ___speed_6;
	// UnityEngine.Rigidbody PlayerMove::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_7;
	// System.Boolean PlayerMove::isAlive
	bool ___isAlive_8;
	// System.Boolean PlayerMove::playerIdle
	bool ___playerIdle_9;
	// System.Boolean PlayerMove::firstZeroReceivedInARow
	bool ___firstZeroReceivedInARow_10;
};

// PlayerMovementController
struct PlayerMovementController_t8798F5FB5B4B88CE015EF6C092C04C3B71CBA4BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody PlayerMovementController::player
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___player_4;
	// UnityEngine.Transform PlayerMovementController::playerCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerCamera_5;
	// UnityEngine.Vector3 PlayerMovementController::lastX
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastX_6;
	// UnityEngine.Vector3 PlayerMovementController::lastZ
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastZ_7;
	// System.Single PlayerMovementController::inputHorX
	float ___inputHorX_8;
	// System.Single PlayerMovementController::inputVertY
	float ___inputVertY_9;
	// System.Boolean PlayerMovementController::firstZeroReceivedInARow
	bool ___firstZeroReceivedInARow_10;
	// System.Boolean PlayerMovementController::playerIdle
	bool ___playerIdle_11;
	// System.Single PlayerMovementController::maxSpeed
	float ___maxSpeed_12;
	// System.Boolean PlayerMovementController::isAlive
	bool ___isAlive_13;
};

// StatusController
struct StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text StatusController::_p1
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____p1_9;
	// UnityEngine.UI.Text StatusController::_p2
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____p2_10;
	// UnityEngine.UI.Text StatusController::_outcomeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____outcomeText_11;
};

// ThirdPersonCamController
struct ThirdPersonCamController_t63EB39C6A53D2DB78D86521CBC5157B10A2F162F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ThirdPersonCamController::Target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target_4;
	// UnityEngine.Transform ThirdPersonCamController::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_5;
	// System.Single ThirdPersonCamController::RotationSpeed
	float ___RotationSpeed_6;
	// System.Single ThirdPersonCamController::zoomSpeed
	float ___zoomSpeed_7;
	// System.Single ThirdPersonCamController::zoomMin
	float ___zoomMin_8;
	// System.Single ThirdPersonCamController::zoomMax
	float ___zoomMax_9;
	// UnityEngine.Transform ThirdPersonCamController::_camTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____camTransform_10;
	// System.Single ThirdPersonCamController::_mouseX
	float ____mouseX_11;
	// System.Single ThirdPersonCamController::_mouseY
	float ____mouseY_12;
	// System.Single ThirdPersonCamController::_zoom
	float ____zoom_13;
	// System.Boolean ThirdPersonCamController::_cursorLocked
	bool ____cursorLocked_14;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityMainThreadHelper
struct UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Queue`1<System.Action> UnityMainThreadHelper::jobs
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___jobs_5;
};

struct UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F_StaticFields
{
	// UnityMainThreadHelper UnityMainThreadHelper::wkr
	UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F* ___wkr_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// WebSocketService
struct WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD  : public Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249
{
	// StatusController WebSocketService::_statusController
	StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* ____statusController_7;
	// Menu WebSocketService::_menu
	Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* ____menu_8;
	// EnemyPositionHandler WebSocketService::_enemyPositionHandler
	EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* ____enemyPositionHandler_9;
	// PlayerColorService WebSocketService::_playerColorService
	PlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD* ____playerColorService_10;
	// UnityEngine.Rigidbody WebSocketService::localPlayerReference
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___localPlayerReference_11;
	// System.Boolean WebSocketService::intentionalClose
	bool ___intentionalClose_12;
	// System.String WebSocketService::matchId
	String_t* ___matchId_13;
	// System.Int32 WebSocketService::playerMovementMessageSequence
	int32_t ___playerMovementMessageSequence_14;
	// NativeWebSocket.WebSocket WebSocketService::_websocket
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* ____websocket_15;
	// System.String WebSocketService::_webSocketDns
	String_t* ____webSocketDns_16;
	// System.Boolean WebSocketService::matchInitialized
	bool ___matchInitialized_23;
	// System.String WebSocketService::playerNum
	String_t* ___playerNum_24;
	// System.String WebSocketService::enemyNum
	String_t* ___enemyNum_25;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedList`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_TryGetValue_mEC0A4DA6468E9346A62DDFBDC5E3C6620D3CFD39_gshared (SortedList_2_tF16B6F62549BC3DF1B8A838626BCF47B638D9793* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedList`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_Remove_mC4309AE3FA488864A2B875DE93B01F5DEC588DA2_gshared (SortedList_2_tF16B6F62549BC3DF1B8A838626BCF47B638D9793* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedList`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Add_m621C68567D45FD55427E74A95670EF940C70F133_gshared (SortedList_2_tF16B6F62549BC3DF1B8A838626BCF47B638D9793* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedList`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2__ctor_mCC2E04456B868A356FE905758E349A8E35FCF330_gshared (SortedList_2_tF16B6F62549BC3DF1B8A838626BCF47B638D9793* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<FindMatch>d__21>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_mD8DE659724468EDC789D193E57B353F76399917D_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<SendWebSocketMessage>d__23>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mD8A739B3AA5D8771500B542B6FA93E16EF859AA4_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<QuitGame>d__26>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m1157CC50C1C11A49A7B597EBC17B9F688B357D41_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<OnApplicationQuit>d__27>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mE22A1E09B52DAC5A20CF8E5721B647E15E6DFABA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C* ___stateMachine0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared (Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<FindMatch>d__21>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_m01FC2597C452461729AEC706CC470D4B1815AE57_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<SendWebSocketMessage>d__23>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mC216C5561824D5140BBBF290D06699E9D29A4FD2_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<QuitGame>d__26>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m0ECB1DDC381A287393AB3ED883F2B96162F7D2AC_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<OnApplicationQuit>d__27>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mAA1640391143F62F48F5100E31B8AD5A89021922_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C* ___stateMachine1, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Bumper::Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Bumper_Revert_mE490A9F63282AD9A8EAB417FD9346397AEB1FFD1 (Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Bumper/<Revert>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevertU3Ed__6__ctor_mD361FA90D818B5FC98B32258FB884E9FACDA40C0 (U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T Singleton`1<WebSocketService>::get_Instance()
inline WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770 (const RuntimeMethod* method)
{
	return ((  WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared)(method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedList`2<System.Int32,PlayerPositionMessage>::TryGetValue(TKey,TValue&)
inline bool SortedList_2_TryGetValue_mA500EFE63DFADB6BD11259FAB6EB8389FF7FF6FC (SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8* __this, int32_t ___key0, PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8*, int32_t, PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851**, const RuntimeMethod*))SortedList_2_TryGetValue_mEC0A4DA6468E9346A62DDFBDC5E3C6620D3CFD39_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 SerializableVector3::op_Implicit(SerializableVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SerializableVector3_op_Implicit_mE4906FCECA59C119F6880FDF931D789218D0F66D (SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 ___rValue0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Enemy::CorrectDrift(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_CorrectDrift_mDE5097FD03EE6D272494BCA00AF1DABAE4F574F0 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thisTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPos2, float ___correctionDuration3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedList`2<System.Int32,PlayerPositionMessage>::Remove(TKey)
inline bool SortedList_2_Remove_m216C821F187BB4A09CCD77252834B5790711A728 (SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8*, int32_t, const RuntimeMethod*))SortedList_2_Remove_mC4309AE3FA488864A2B875DE93B01F5DEC588DA2_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mDEF1E073986286F6EFA1552A5D0E1A0F6CBF4500_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Enemy/<CorrectDrift>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCorrectDriftU3Ed__8__ctor_mEDF0CD2A6031E42CE6A3BE9C1EE9E729E03C3D82 (U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedList`2<System.Int32,PlayerPositionMessage>::Add(TKey,TValue)
inline void SortedList_2_Add_mA2BA94E81A33E7F4DC17D1EF2C52D001B1BB4E8A (SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8* __this, int32_t ___key0, PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8*, int32_t, PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851*, const RuntimeMethod*))SortedList_2_Add_m621C68567D45FD55427E74A95670EF940C70F133_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.SortedList`2<System.Int32,PlayerPositionMessage>::.ctor()
inline void SortedList_2__ctor_m0EE2ABDE86A177F4A9C44E50CA36F3DC59A5FA6B (SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8*, const RuntimeMethod*))SortedList_2__ctor_mCC2E04456B868A356FE905758E349A8E35FCF330_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Enemy::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_SetActive_mA13E0DA5F8A543333FECB5616B21E56FE328AF53 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, bool ___activeFlag0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void Enemy::Reset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Reset_m6D8DE8ED733FCD98EA7014827F22337A98D470FA (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___enemyPosMessage0, const RuntimeMethod* method) ;
// System.Void Enemy::BufferState(PlayerPositionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_BufferState_m5FC5C7AB8CDE2A0765FDC88FFABD849CC6367CB0 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* ___state0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void WebSocketService::FindMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_FindMatch_mAB374BAA4CFBE1ECB11FFF3E69ACEF46DC9D39F9 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) ;
// System.Void StatusController::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusController_SetText_mD3E18C34FC3D180E2D73611E9F32190F701967C5 (StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void WebSocketService::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_QuitGame_m6E3A665C4F5DDD2BAB1B44C29BBB285EED2AE069 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void WebSocketService::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_init_m52B0AB0DA785CE9D7B7989F7665B96C3B2EAACF3 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) ;
// System.Void WebSocketService::SetLocalPlayerRef(UnityEngine.Rigidbody)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketService_SetLocalPlayerRef_m0D42272CF5B787E7C0A322A6E6C7E2AE446F6642_inline (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___localPlayerReferenceIn0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerMove::WaitToMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMove_WaitToMove_m87F7F092A225D28A7003C87CC24E417210984A35 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void PlayerMove::PlayerIdleCheck(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_PlayerIdleCheck_m8A97F191FE2F5CF6EF18968EDA9703C07FA39525 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, float ___zSpeed0, float ___xSpeed1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void PlayerMove/<WaitToMove>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToMoveU3Ed__9__ctor_m328436F1C9C5D11CBE719E71968FF2A73E73FA2E (U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlayerMovementController::PlayerIdleCheck(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementController_PlayerIdleCheck_m4C1B5A271272E1745A4EEB1F619FA4F2FE720D47 (PlayerMovementController_t8798F5FB5B4B88CE015EF6C092C04C3B71CBA4BE* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void WebSocketService::SendVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendVelocity_m87374FBF954FE625D1D7D9F3FBF89F1824871E29 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocityIn0, const RuntimeMethod* method) ;
// System.Void PlayerMovementController::PlayerMovement(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementController_PlayerMovement_m7AB153EB2EBF0734A5C237E392C59DFC3F3606A4 (PlayerMovementController_t8798F5FB5B4B88CE015EF6C092C04C3B71CBA4BE* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void GameMessage::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMessage__ctor_mE0340C4B3130492F8D68B11968436825EA083E19 (GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* __this, String_t* ___actionIn0, String_t* ___opcodeIn1, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void SerializableVector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableVector3__ctor_mA087E357CB00C79CFB351BA67162615F9D11288A (SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9* __this, float ___rX0, float ___rY1, float ___rZ2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String SerializableVector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableVector3_ToString_mBAD5C695720A76EF7ABC0948F7222905B7C599AB (SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9* __this, const RuntimeMethod* method) ;
// System.Single SerializableVector3::NullCheckParse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SerializableVector3_NullCheckParse_mC3D9A0C6E6E0BD665732B813E118963F15BD6A66 (String_t* ___valueToCheck0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ThirdPersonCamController::CamControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamController_CamControl_m8E941FF04C907A134C388F23F44A2EC58279174D (ThirdPersonCamController_t63EB39C6A53D2DB78D86521CBC5157B10A2F162F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(T)
inline void Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// T UnityEngine.JsonUtility::FromJson<GameMessage>(System.String)
inline GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* JsonUtility_FromJson_TisGameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764_m9E1C4C7D9EF37FB5908E86C55D9B6115908A4B55 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// T UnityEngine.JsonUtility::FromJson<PlayerPositionMessage>(System.String)
inline PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* JsonUtility_FromJson_TisPlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851_m1545532A21433933AB65A7C944114E17197CFAA8 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void PlayerColorService::SetColors(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColorService_SetColors_m58C5FBD05B872F87E3CDEC11924B57FDAFDFCE7B (PlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD* __this, String_t* ___localPlayerNumber0, const RuntimeMethod* method) ;
// System.Void EnemyPositionHandler::init(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPositionHandler_init_m0051F3B369742BC081699B4E9FDCBAF6FC53A476 (EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___enemyPosMessage0, const RuntimeMethod* method) ;
// System.Void EnemyPositionHandler::UpdateVelocity(PlayerPositionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPositionHandler_UpdateVelocity_m084C3EC2BEE5A77BA4F5E884BC7CAD63334F7B6D (EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* __this, PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* ___posMessage0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_m9C0F1F9240E959710FE2E7F9F1F97AF5D3D440AF (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_mE4848C3EB53A6CF346B790895D636D7A8BA4DDA3 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___value0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_mCF39CA9F24C0F9804D5B6E51EF946CEB60142764 (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m5D0A672A02F5BF6252DA825D7AB7EFC1020C2B4A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___value0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_m15BC0672C78EDC192A2ECACCD3B9762149A5A7A8 (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_mB2D438685DB29D57498A0AC6BEF756F5FEB0BDE5 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* ___value0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_m57F2C1BA800F30F50FD411F8461AAA24D40FBAF9 (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_mA10F34789A6C13F5AA64EC0F35D45ED4EDCDABA0 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<FindMatch>d__21>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_mD8DE659724468EDC789D193E57B353F76399917D (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_mD8DE659724468EDC789D193E57B353F76399917D_gshared)(__this, ___stateMachine0, method);
}
// SerializableVector3 SerializableVector3::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 SerializableVector3_op_Implicit_m455C85877BD27AB980B412FE4E06C4613CADE834 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rValue0, const RuntimeMethod* method) ;
// System.Void PlayerPositionMessage::.ctor(System.String,System.String,SerializableVector3,SerializableVector3,System.Double,System.Int32,System.String,SerializableVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPositionMessage__ctor_mBF9BFEA786783700653E8240DE93571E73F4BB4F (PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* __this, String_t* ___actionIn0, String_t* ___opcodeIn1, SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 ___velocityIn2, SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 ___enemyVelocityIn3, double ___timestamp4, int32_t ___seqIn5, String_t* ___playerIn6, SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 ___currentPosIn7, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void WebSocketService::SendWebSocketMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendWebSocketMessage_mB8D70479443C8DA0D88D9EB1B35F69E258E2CF71 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<SendWebSocketMessage>d__23>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mD8A739B3AA5D8771500B542B6FA93E16EF859AA4 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mD8A739B3AA5D8771500B542B6FA93E16EF859AA4_gshared)(__this, ___stateMachine0, method);
}
// System.Void WebSocketService::SendVectorAsMessage(UnityEngine.Vector3,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendVectorAsMessage_m369B8BA1212772EB63BC782441E92666203E6D47 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, String_t* ___opCode1, int32_t ___seq2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<QuitGame>d__26>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m1157CC50C1C11A49A7B597EBC17B9F688B357D41 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m1157CC50C1C11A49A7B597EBC17B9F688B357D41_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<OnApplicationQuit>d__27>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mE22A1E09B52DAC5A20CF8E5721B647E15E6DFABA (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mE22A1E09B52DAC5A20CF8E5721B647E15E6DFABA_gshared)(__this, ___stateMachine0, method);
}
// T UnityEngine.Object::FindObjectOfType<StatusController>()
inline StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* Object_FindObjectOfType_TisStatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B_m671DEBB05A75B0700F577E9E95EA6CC149E9F37E (const RuntimeMethod* method)
{
	return ((  StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<Menu>()
inline Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* Object_FindObjectOfType_TisMenu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_mA523EFA275D6EFCD2DB86CC31DCCE6B4D97B8293 (const RuntimeMethod* method)
{
	return ((  Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<EnemyPositionHandler>()
inline EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* Object_FindObjectOfType_TisEnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93_m1035E16DEDA6D47E8DA6CBBE29275DEECF984A68 (const RuntimeMethod* method)
{
	return ((  EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___url0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<PlayerColorService>()
inline PlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD* Object_FindObjectOfType_TisPlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD_m3CC7B655B9A210CE07B270ADBD4A71C3B48DBE8C (const RuntimeMethod* method)
{
	return ((  PlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void WebSocketService::SetupWebsocketCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SetupWebsocketCallbacks_m46FFA60FBC46C5072E28AE12D1E4F0D2A6DFF35F (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Singleton`1<WebSocketService>::.ctor()
inline void Singleton_1__ctor_m22176DA86E41DD4403C0B4C8FDCFDB1538C856BD (Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityMainThreadHelper::AddJob(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadHelper_AddJob_m56A49EFDF8685178B35D3A6EB3F2B9BDBC03D0D3 (UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___newJob0, const RuntimeMethod* method) ;
// System.Void Menu::Disconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Disconnected_m37CDEF9CE1BC89FBC0C7B5B896135502B4DCE1BA (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Void WebSocketService::ProcessReceivedMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_ProcessReceivedMessage_mC31C45AD44B75D614E35879A9EC37F50BB24C532 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void WebSocketService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7E7355E59B65774B0843B9DE9ED4C9957B10270D (U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Connect_m6668D9F07FE1BFD16D5391B1AB8980FA740E705A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<FindMatch>d__21>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_m01FC2597C452461729AEC706CC470D4B1815AE57 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_m01FC2597C452461729AEC706CC470D4B1815AE57_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void WebSocketService/<FindMatch>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMatchU3Ed__21_MoveNext_mE4A5DC799BF424574DAE96006F65BAF3EE67640D (U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void WebSocketService/<FindMatch>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMatchU3Ed__21_SetStateMachine_mC6C0C70604508C01785E9B5003F6AB889C763834 (U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<SendWebSocketMessage>d__23>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mC216C5561824D5140BBBF290D06699E9D29A4FD2 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mC216C5561824D5140BBBF290D06699E9D29A4FD2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebSocketService/<SendWebSocketMessage>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendWebSocketMessageU3Ed__23_MoveNext_mE72CBD82F9825DE97DE0C130C1DC0BB79F345DAF (U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC* __this, const RuntimeMethod* method) ;
// System.Void WebSocketService/<SendWebSocketMessage>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendWebSocketMessageU3Ed__23_SetStateMachine_mCFA811BAEFB42D1964D91BFE5DD71F28F63DE9BF (U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Menu::ShowFindMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ShowFindMatch_m230C16AB5AD6F026C87067613343E2AB55027DAA (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close(NativeWebSocket.WebSocketCloseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Close_m5E661C600C35E9DAC15128D52843D1C5CD2FB9C9 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, int32_t ___code0, String_t* ___reason1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<QuitGame>d__26>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m0ECB1DDC381A287393AB3ED883F2B96162F7D2AC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m0ECB1DDC381A287393AB3ED883F2B96162F7D2AC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebSocketService/<QuitGame>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuitGameU3Ed__26_MoveNext_m9FC148A181232E4D0151E70FF752DE7C5370B9C6 (U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2* __this, const RuntimeMethod* method) ;
// System.Void WebSocketService/<QuitGame>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuitGameU3Ed__26_SetStateMachine_m376F71D3340CBF15DE5160716AA3CCEC8BF00615 (U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<OnApplicationQuit>d__27>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mAA1640391143F62F48F5100E31B8AD5A89021922 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mAA1640391143F62F48F5100E31B8AD5A89021922_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebSocketService/<OnApplicationQuit>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__27_MoveNext_m96AE870E5C85C02E3A38B6F88EEFB4D2050475DE (U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C* __this, const RuntimeMethod* method) ;
// System.Void WebSocketService/<OnApplicationQuit>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__27_SetStateMachine_mA3084818A04A7B6194CB8C71323288D72723744C (U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void Bumper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bumper_Start_m3B697B6FFCF5F780FBDD19EA2CDE2698F53D9E6A (Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rend_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_6), (void*)L_0);
		// defaultMat = rend.material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___rend_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___defaultMat_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMat_5), (void*)L_2);
		// redLight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___redLight_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Bumper::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bumper_OnCollisionEnter_m6CFEFC09FF32EAE55CE298E7851451AAE39652AB (Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player")) {
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// rend.material = lightMat;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->___rend_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___lightMat_4;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_3, L_4, NULL);
		// StartCoroutine(Revert());
		RuntimeObject* L_5;
		L_5 = Bumper_Revert_mE490A9F63282AD9A8EAB417FD9346397AEB1FFD1(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// redLight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___redLight_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Bumper::Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Bumper_Revert_mE490A9F63282AD9A8EAB417FD9346397AEB1FFD1 (Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA* L_0 = (U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA*)il2cpp_codegen_object_new(U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA_il2cpp_TypeInfo_var);
		U3CRevertU3Ed__6__ctor_mD361FA90D818B5FC98B32258FB884E9FACDA40C0(L_0, 0, NULL);
		U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Bumper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bumper__ctor_m14CF85C16A20E77DD0678D6CDB80CCEFFFCC5DC9 (Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0* __this, const RuntimeMethod* method) 
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
// System.Void Bumper/<Revert>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevertU3Ed__6__ctor_mD361FA90D818B5FC98B32258FB884E9FACDA40C0 (U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Bumper/<Revert>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevertU3Ed__6_System_IDisposable_Dispose_m22096B98568AB5FD6F0927B1035CBED786BEDEC6 (U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Bumper/<Revert>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRevertU3Ed__6_MoveNext_m9B81341BF53E7BD41EECBF143A2B5439BBA7ACB8 (U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// rend.material = defaultMat;
		Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0* L_5 = V_1;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6 = L_5->___rend_6;
		Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0* L_7 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = L_7->___defaultMat_5;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_6, L_8, NULL);
		// redLight.SetActive(false);
		Bumper_t596D6492778F1F9F9383E97DA386E0AE0BEDEED0* L_9 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___redLight_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Bumper/<Revert>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRevertU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m45C32EB52CDEBF5F3FA74FAA630F742B1DD35C85 (U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Bumper/<Revert>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevertU3Ed__6_System_Collections_IEnumerator_Reset_mA90CBDD1A1F8FBB3A8944B5D90009FE5FF9FE025 (U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRevertU3Ed__6_System_Collections_IEnumerator_Reset_mA90CBDD1A1F8FBB3A8944B5D90009FE5FF9FE025_RuntimeMethod_var)));
	}
}
// System.Object Bumper/<Revert>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRevertU3Ed__6_System_Collections_IEnumerator_get_Current_mE83DA8104898ABBD2B2EA69948CC09EA5C599526 (U3CRevertU3Ed__6_t59A0A927E1D68DF3BFE96A52ADD4FCC9952569EA* __this, const RuntimeMethod* method) 
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
// System.Void CameraFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Start_m99884706C63F385A5C536C8837C14A38D1B6D78D (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_0);
		// offset = transform.position - player.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_5, NULL);
		__this->___offset_5 = L_6;
		// }
		return;
	}
}
// System.Void CameraFollow::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_LateUpdate_m9C559F2A33098CED5CB8BD82CCD6FC98AB521D61 (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = player.transform.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m113CC547D419EF599BC487F0F44B06BB2D4EE11B (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
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
// System.Void Enemy::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FixedUpdate_mC96E5B789335D23FC34546AD504EEBB0F054490B (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Remove_m216C821F187BB4A09CCD77252834B5790711A728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_TryGetValue_mA500EFE63DFADB6BD11259FAB6EB8389FF7FF6FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* V_0 = NULL;
	PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* V_1 = NULL;
	{
		// if (WebSocketService.Instance.matchInitialized && enemyPositionMessageQueue != null)
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_0;
		L_0 = Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770(Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		bool L_1 = L_0->___matchInitialized_23;
		if (!L_1)
		{
			goto IL_010e;
		}
	}
	{
		SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8* L_2 = __this->___enemyPositionMessageQueue_4;
		if (!L_2)
		{
			goto IL_010e;
		}
	}
	{
		// Vector3 movementPlane = new Vector3(_enemy.velocity.x, 0, _enemy.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->____enemy_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_3, NULL);
		float L_5 = L_4.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->____enemy_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_6, NULL);
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_5, (0.0f), L_8, /*hidden argument*/NULL);
		// if (enemyPositionMessageQueue.TryGetValue(enemyPositionSequence, out enemyPositionToRender))
		SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8* L_10 = __this->___enemyPositionMessageQueue_4;
		int32_t L_11 = __this->___enemyPositionSequence_9;
		bool L_12;
		L_12 = SortedList_2_TryGetValue_mA500EFE63DFADB6BD11259FAB6EB8389FF7FF6FC(L_10, L_11, (&V_0), SortedList_2_TryGetValue_mA500EFE63DFADB6BD11259FAB6EB8389FF7FF6FC_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_010e;
		}
	}
	{
		// if (enemyPositionSequence > 1 && enemyPositionMessageQueue.TryGetValue(enemyPositionSequence - 1, out previousEnemyPositionMessage))
		int32_t L_13 = __this->___enemyPositionSequence_9;
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8* L_14 = __this->___enemyPositionMessageQueue_4;
		int32_t L_15 = __this->___enemyPositionSequence_9;
		bool L_16;
		L_16 = SortedList_2_TryGetValue_mA500EFE63DFADB6BD11259FAB6EB8389FF7FF6FC(L_14, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), (&V_1), SortedList_2_TryGetValue_mA500EFE63DFADB6BD11259FAB6EB8389FF7FF6FC_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00e9;
		}
	}
	{
		// float drift = Vector3.Distance(_enemy.position, previousEnemyPositionMessage.currentPos);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->____enemy_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_17, NULL);
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_19 = V_1;
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_20 = L_19->___currentPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = SerializableVector3_op_Implicit_mE4906FCECA59C119F6880FDF931D789218D0F66D(L_20, NULL);
		float L_22;
		L_22 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_18, L_21, NULL);
		// if (drift >= DriftThreshold)
		if ((!(((float)L_22) >= ((float)(0.5f)))))
		{
			goto IL_00d5;
		}
	}
	{
		// StartCoroutine(CorrectDrift(_enemy.transform, _enemy.position, previousEnemyPositionMessage.currentPos, .2f));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_23 = __this->____enemy_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25 = __this->____enemy_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_25, NULL);
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_27 = V_1;
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_28 = L_27->___currentPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = SerializableVector3_op_Implicit_mE4906FCECA59C119F6880FDF931D789218D0F66D(L_28, NULL);
		RuntimeObject* L_30;
		L_30 = Enemy_CorrectDrift_mDE5097FD03EE6D272494BCA00AF1DABAE4F574F0(__this, L_24, L_26, L_29, (0.200000003f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_31;
		L_31 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_30, NULL);
	}

IL_00d5:
	{
		// enemyPositionMessageQueue.Remove(enemyPositionToRender.seq - 1);
		SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8* L_32 = __this->___enemyPositionMessageQueue_4;
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_33 = V_0;
		int32_t L_34 = L_33->___seq_9;
		bool L_35;
		L_35 = SortedList_2_Remove_m216C821F187BB4A09CCD77252834B5790711A728(L_32, ((int32_t)il2cpp_codegen_subtract(L_34, 1)), SortedList_2_Remove_m216C821F187BB4A09CCD77252834B5790711A728_RuntimeMethod_var);
	}

IL_00e9:
	{
		// _enemy.AddForce(enemyPositionToRender.velocity, ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_36 = __this->____enemy_6;
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_37 = V_0;
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_38 = L_37->___velocity_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = SerializableVector3_op_Implicit_mE4906FCECA59C119F6880FDF931D789218D0F66D(L_38, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_36, L_39, 2, NULL);
		// enemyPositionSequence++;
		int32_t L_40 = __this->___enemyPositionSequence_9;
		__this->___enemyPositionSequence_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_010e:
	{
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_m4149CFC3AC081AF0D654D9BDB6BC9B5540CE03D8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_enemy.velocity.magnitude > maxSpeed)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____enemy_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_3 = __this->___maxSpeed_8;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_003c;
		}
	}
	{
		// _enemy.velocity = Vector3.ClampMagnitude(_enemy.velocity, maxSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->____enemy_6;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->____enemy_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_5, NULL);
		float L_7 = __this->___maxSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_ClampMagnitude_mDEF1E073986286F6EFA1552A5D0E1A0F6CBF4500_inline(L_6, L_7, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_4, L_8, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy::CorrectDrift(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_CorrectDrift_mDE5097FD03EE6D272494BCA00AF1DABAE4F574F0 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thisTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPos2, float ___correctionDuration3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* L_0 = (U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0*)il2cpp_codegen_object_new(U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0_il2cpp_TypeInfo_var);
		U3CCorrectDriftU3Ed__8__ctor_mEDF0CD2A6031E42CE6A3BE9C1EE9E729E03C3D82(L_0, 0, NULL);
		U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* L_1 = L_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___thisTransform0;
		L_1->___thisTransform_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___thisTransform_2), (void*)L_2);
		U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___startPos1;
		L_3->___startPos_3 = L_4;
		U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___endPos2;
		L_5->___endPos_4 = L_6;
		U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* L_7 = L_5;
		float L_8 = ___correctionDuration3;
		L_7->___correctionDuration_5 = L_8;
		return L_7;
	}
}
// System.Void Enemy::BufferState(PlayerPositionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_BufferState_m5FC5C7AB8CDE2A0765FDC88FFABD849CC6367CB0 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Add_mA2BA94E81A33E7F4DC17D1EF2C52D001B1BB4E8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state.opcode == WebSocketService.OpponentVelocity)
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_0 = ___state0;
		String_t* L_1 = ((GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764*)L_0)->___opcode_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// enemyPositionMessageQueue.Add(state.seq, state);
		SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8* L_3 = __this->___enemyPositionMessageQueue_4;
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_4 = ___state0;
		int32_t L_5 = L_4->___seq_9;
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_6 = ___state0;
		SortedList_2_Add_mA2BA94E81A33E7F4DC17D1EF2C52D001B1BB4E8A(L_3, L_5, L_6, SortedList_2_Add_mA2BA94E81A33E7F4DC17D1EF2C52D001B1BB4E8A_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Enemy::Reset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Reset_m6D8DE8ED733FCD98EA7014827F22337A98D470FA (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___enemyPosMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2__ctor_m0EE2ABDE86A177F4A9C44E50CA36F3DC59A5FA6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _enemy.transform.position = enemyPosMessage;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____enemy_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___enemyPosMessage0;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// enemyPositionSequence = 0;
		__this->___enemyPositionSequence_9 = 0;
		// enemyPositionMessageQueue = new SortedList<int, PlayerPositionMessage>();
		SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8* L_3 = (SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8*)il2cpp_codegen_object_new(SortedList_2_t605B0A45691B3B5BD59FC33154A4D25F078A19E8_il2cpp_TypeInfo_var);
		SortedList_2__ctor_m0EE2ABDE86A177F4A9C44E50CA36F3DC59A5FA6B(L_3, SortedList_2__ctor_m0EE2ABDE86A177F4A9C44E50CA36F3DC59A5FA6B_RuntimeMethod_var);
		__this->___enemyPositionMessageQueue_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyPositionMessageQueue_4), (void*)L_3);
		// }
		return;
	}
}
// System.Void Enemy::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_SetActive_mA13E0DA5F8A543333FECB5616B21E56FE328AF53 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, bool ___activeFlag0, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(activeFlag);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___activeFlag0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mB58E74200229275689E6D9ADCDB6443D4E426624 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6DEC1189C46D94DEA70426E933F399DDE930451);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Enemy Awake");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA6DEC1189C46D94DEA70426E933F399DDE930451, NULL);
		// _enemy = gameObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_0, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->____enemy_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemy_6), (void*)L_1);
		// SetActive(false);
		Enemy_SetActive_mA13E0DA5F8A543333FECB5616B21E56FE328AF53(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m8BBD9A5AE10A27ABDFCD9168B93CD9C69D229034 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3719A12CE3D4CB872A68B58FA16D30463FA55458);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Enemy start");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral3719A12CE3D4CB872A68B58FA16D30463FA55458, NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// private float maxSpeed = 10;
		__this->___maxSpeed_8 = (10.0f);
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
// System.Void Enemy/<CorrectDrift>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCorrectDriftU3Ed__8__ctor_mEDF0CD2A6031E42CE6A3BE9C1EE9E729E03C3D82 (U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Enemy/<CorrectDrift>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCorrectDriftU3Ed__8_System_IDisposable_Dispose_m60AAB545E5F343C6038015C02245E1F14DF3AFC3 (U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Enemy/<CorrectDrift>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCorrectDriftU3Ed__8_MoveNext_m269A0D5D840CA65F7DAF911CAEB949478EECF211 (U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float i = 0.0f;
		V_1 = (0.0f);
		goto IL_0044;
	}

IL_001f:
	{
		// i += Time.deltaTime;
		float L_3 = V_1;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_1 = ((float)il2cpp_codegen_add(L_3, L_4));
		// thisTransform.position = Vector3.Lerp(startPos, endPos, i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___thisTransform_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___startPos_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___endPos_4;
		float L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_6, L_7, L_8, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_9, NULL);
	}

IL_0044:
	{
		// while (i < correctionDuration)
		float L_10 = V_1;
		float L_11 = __this->___correctionDuration_5;
		if ((((float)L_10) < ((float)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<CorrectDrift>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCorrectDriftU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7C71E2DD13463774503930B952704F957A894B51 (U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Enemy/<CorrectDrift>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCorrectDriftU3Ed__8_System_Collections_IEnumerator_Reset_mE42328A1B5330ADF22F8C9C123FD1C2AA75CC12B (U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCorrectDriftU3Ed__8_System_Collections_IEnumerator_Reset_mE42328A1B5330ADF22F8C9C123FD1C2AA75CC12B_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<CorrectDrift>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCorrectDriftU3Ed__8_System_Collections_IEnumerator_get_Current_mC8846A1CBBD4609458A701850D7865340A8C8324 (U3CCorrectDriftU3Ed__8_t61BB88741BA3E9AF07A4D80753D91C5B06FEA9D0* __this, const RuntimeMethod* method) 
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
// System.Void EnemyPositionHandler::init(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPositionHandler_init_m0051F3B369742BC081699B4E9FDCBAF6FC53A476 (EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___enemyPosMessage0, const RuntimeMethod* method) 
{
	{
		// if (!enemy.isActiveAndEnabled)
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = __this->___enemy_4;
		bool L_1;
		L_1 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// enemy.SetActive(true);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_2 = __this->___enemy_4;
		Enemy_SetActive_mA13E0DA5F8A543333FECB5616B21E56FE328AF53(L_2, (bool)1, NULL);
	}

IL_0019:
	{
		// enemy.Reset(enemyPosMessage);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_3 = __this->___enemy_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___enemyPosMessage0;
		Enemy_Reset_m6D8DE8ED733FCD98EA7014827F22337A98D470FA(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void EnemyPositionHandler::UpdateVelocity(PlayerPositionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPositionHandler_UpdateVelocity_m084C3EC2BEE5A77BA4F5E884BC7CAD63334F7B6D (EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* __this, PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* ___posMessage0, const RuntimeMethod* method) 
{
	{
		// enemy.BufferState(posMessage);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = __this->___enemy_4;
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_1 = ___posMessage0;
		Enemy_BufferState_m5FC5C7AB8CDE2A0765FDC88FFABD849CC6367CB0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void EnemyPositionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPositionHandler__ctor_mAC2B7EECACB6DBBF2DF6924F5281F916AB4871C6 (EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* __this, const RuntimeMethod* method) 
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
// System.Void GameMessage::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMessage__ctor_mE0340C4B3130492F8D68B11968436825EA083E19 (GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* __this, String_t* ___actionIn0, String_t* ___opcodeIn1, const RuntimeMethod* method) 
{
	{
		// public GameMessage(string actionIn, string opcodeIn)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// action = actionIn;
		String_t* L_0 = ___actionIn0;
		__this->___action_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___action_4), (void*)L_0);
		// opcode = opcodeIn;
		String_t* L_1 = ___opcodeIn1;
		__this->___opcode_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___opcode_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void GameMessage::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMessage__ctor_m42B91231146C2D289A8D29955B114B5290E970A5 (GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* __this, String_t* ___actionIn0, String_t* ___opcodeIn1, String_t* ___messageIn2, const RuntimeMethod* method) 
{
	{
		// public GameMessage(string actionIn, string opcodeIn, string messageIn)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// action = actionIn;
		String_t* L_0 = ___actionIn0;
		__this->___action_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___action_4), (void*)L_0);
		// opcode = opcodeIn;
		String_t* L_1 = ___opcodeIn1;
		__this->___opcode_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___opcode_1), (void*)L_1);
		// message = messageIn;
		String_t* L_2 = ___messageIn2;
		__this->___message_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_2), (void*)L_2);
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
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_mC49986718939F87924A1391044721CAC6E28919D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C70BBA41445618E21460F91418BB964221FD192);
		s_Il2CppMethodInitialized = true;
	}
	{
		// quitButton = GameObject.Find("Quit").GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_0, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___quitButton_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___quitButton_5), (void*)L_1);
		// findMatchButton = GameObject.Find("FindMatchAndPlay").GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral8C70BBA41445618E21460F91418BB964221FD192, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3;
		L_3 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_2, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___findMatchButton_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___findMatchButton_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void Menu::OnFindMatchPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_OnFindMatchPressed_m3B4BC52EB2FA88DD38F5A326E2AE1D296BD4E430 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CF8F807730B6E4FC014101059E86FF146A6384D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebSocketService.Instance.FindMatch();
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_0;
		L_0 = Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770(Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		WebSocketService_FindMatch_mAB374BAA4CFBE1ECB11FFF3E69ACEF46DC9D39F9(L_0, NULL);
		// _statusController.SetText(StatusController.WaitingOnMatch);
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_1 = __this->____statusController_4;
		StatusController_SetText_mD3E18C34FC3D180E2D73611E9F32190F701967C5(L_1, _stringLiteral5CF8F807730B6E4FC014101059E86FF146A6384D, NULL);
		// quitButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___quitButton_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// findMatchButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___findMatchButton_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Menu::OnQuitPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_OnQuitPressed_m329BE44AD97CB648ECB992BAF18DB48CFA80D206 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebSocketService.Instance.QuitGame();
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_0;
		L_0 = Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770(Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		WebSocketService_QuitGame_m6E3A665C4F5DDD2BAB1B44C29BBB285EED2AE069(L_0, NULL);
		// quitButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___quitButton_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// findMatchButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___findMatchButton_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// _statusController.SetText(StatusController.GameOver);
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_5 = __this->____statusController_4;
		StatusController_SetText_mD3E18C34FC3D180E2D73611E9F32190F701967C5(L_5, _stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B, NULL);
		// }
		return;
	}
}
// System.Void Menu::ShowFindMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ShowFindMatch_m230C16AB5AD6F026C87067613343E2AB55027DAA (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// quitButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___quitButton_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// findMatchButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___findMatchButton_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Menu::Disconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Disconnected_m37CDEF9CE1BC89FBC0C7B5B896135502B4DCE1BA (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// quitButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___quitButton_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// findMatchButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___findMatchButton_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// _statusController.SetText(StatusController.GameOver);
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_4 = __this->____statusController_4;
		StatusController_SetText_mD3E18C34FC3D180E2D73611E9F32190F701967C5(L_4, _stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B, NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
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
// System.Void NextLevel::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextLevel_OnTriggerEnter_m6FD7D39C0045D15A96DDEC582FF8FBFE740DB15B (NextLevel_tAE8431DE6927C98CF2CDAAD06465C0E69FB01B60* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player")) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// SceneManager.LoadScene("Level" + levelToLoad);
		int32_t* L_2 = (&__this->___levelToLoad_4);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void NextLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextLevel__ctor_m6C999E9091E8CD76CDB223415FCDEB105F8AEDEE (NextLevel_tAE8431DE6927C98CF2CDAAD06465C0E69FB01B60* __this, const RuntimeMethod* method) 
{
	{
		// public int levelToLoad = 2;
		__this->___levelToLoad_4 = 2;
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
// System.Void PlayerColorService::SetColors(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColorService_SetColors_m58C5FBD05B872F87E3CDEC11924B57FDAFDFCE7B (PlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD* __this, String_t* ___localPlayerNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B2_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B1_0 = NULL;
	{
		// var playerRenderer = player.GetComponent<Renderer>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___player_5;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_0, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		// var enemyRenderer = enemy.GetComponent<Renderer>();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_2 = __this->___enemy_4;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_2, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_0 = L_3;
		// Color playerColor = Color.blue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline(NULL);
		V_1 = L_4;
		// Color enemyColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		V_2 = L_5;
		// if (localPlayerNumber == "2")
		String_t* L_6 = ___localPlayerNumber0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, NULL);
		G_B1_0 = L_1;
		if (!L_7)
		{
			G_B2_0 = L_1;
			goto IL_003c;
		}
	}
	{
		// playerColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		V_1 = L_8;
		// enemyColor = Color.blue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline(NULL);
		V_2 = L_9;
		G_B2_0 = G_B1_0;
	}

IL_003c:
	{
		// playerRenderer.material.SetColor("_Color", playerColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(G_B2_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_1;
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_10, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_11, NULL);
		// enemyRenderer.material.SetColor("_Color", enemyColor);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_12, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = V_2;
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_13, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_14, NULL);
		// }
		return;
	}
}
// System.Void PlayerColorService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColorService__ctor_m5A29B978010DCB71619EBB972DDB41FC1D3D3FAB (PlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD* __this, const RuntimeMethod* method) 
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
// System.Void PlayerMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Start_m1ACFD10BF71998671B39878CE4208A1F880BE62E (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_0);
		// rb.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_7;
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_1, (bool)0, NULL);
		// vert = "Vertical";
		__this->___vert_4 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vert_4), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// horiz = "Horizontal";
		__this->___horiz_5 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horiz_5), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// WebSocketService.Instance.init();
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_2;
		L_2 = Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770(Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		WebSocketService_init_m52B0AB0DA785CE9D7B7989F7665B96C3B2EAACF3(L_2, NULL);
		// WebSocketService.Instance.SetLocalPlayerRef(rb);
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_3;
		L_3 = Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770(Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rb_7;
		WebSocketService_SetLocalPlayerRef_m0D42272CF5B787E7C0A322A6E6C7E2AE446F6642_inline(L_3, L_4, NULL);
		// StartCoroutine(WaitToMove());
		RuntimeObject* L_5;
		L_5 = PlayerMove_WaitToMove_m87F7F092A225D28A7003C87CC24E417210984A35(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void PlayerMove::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_FixedUpdate_m14B3B72D3E9205DA2A6E0E75EBAFE4A09F93C1F1 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!isAlive) {
		bool L_0 = __this->___isAlive_8;
		if (L_0)
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
		// float zSpeed = Input.GetAxis(vert) * speed;
		String_t* L_1 = __this->___vert_4;
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(L_1, NULL);
		int32_t L_3 = __this->___speed_6;
		V_0 = ((float)il2cpp_codegen_multiply(L_2, ((float)L_3)));
		// float xSpeed = Input.GetAxis(horiz) * speed;
		String_t* L_4 = __this->___horiz_5;
		float L_5;
		L_5 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(L_4, NULL);
		int32_t L_6 = __this->___speed_6;
		V_1 = ((float)il2cpp_codegen_multiply(L_5, ((float)L_6)));
		// PlayerIdleCheck(zSpeed, xSpeed);
		float L_7 = V_0;
		float L_8 = V_1;
		PlayerMove_PlayerIdleCheck_m8A97F191FE2F5CF6EF18968EDA9703C07FA39525(__this, L_7, L_8, NULL);
		// if (!playerIdle) {
		bool L_9 = __this->___playerIdle_9;
		if (L_9)
		{
			goto IL_0088;
		}
	}
	{
		// rb.AddForce(new Vector3(xSpeed, 0, zSpeed));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_7;
		float L_11 = V_1;
		float L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_11, (0.0f), L_12, /*hidden argument*/NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_10, L_13, NULL);
		// if (transform.position.y < -11) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___y_3;
		if ((!(((float)L_16) < ((float)(-11.0f)))))
		{
			goto IL_0088;
		}
	}
	{
		// isAlive = false;
		__this->___isAlive_8 = (bool)0;
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_17;
		L_17 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_17;
		String_t* L_18;
		L_18 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_18, NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerMove::WaitToMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMove_WaitToMove_m87F7F092A225D28A7003C87CC24E417210984A35 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F* L_0 = (U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F*)il2cpp_codegen_object_new(U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F_il2cpp_TypeInfo_var);
		U3CWaitToMoveU3Ed__9__ctor_m328436F1C9C5D11CBE719E71968FF2A73E73FA2E(L_0, 0, NULL);
		U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerMove::PlayerIdleCheck(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_PlayerIdleCheck_m8A97F191FE2F5CF6EF18968EDA9703C07FA39525 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, float ___zSpeed0, float ___xSpeed1, const RuntimeMethod* method) 
{
	{
		// if (zSpeed == 0 && xSpeed == 0) {
		float L_0 = ___zSpeed0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		float L_1 = ___xSpeed1;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// if (firstZeroReceivedInARow) {
		bool L_2 = __this->___firstZeroReceivedInARow_10;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// playerIdle = true;
		__this->___playerIdle_9 = (bool)1;
		return;
	}

IL_0020:
	{
		// firstZeroReceivedInARow = true;
		__this->___firstZeroReceivedInARow_10 = (bool)1;
		return;
	}

IL_0028:
	{
		// firstZeroReceivedInARow = false;
		__this->___firstZeroReceivedInARow_10 = (bool)0;
		// playerIdle = false;
		__this->___playerIdle_9 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove__ctor_m259C024B72725E14EF78BC65889964013830B7B2 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	{
		// public int speed = 12;
		__this->___speed_6 = ((int32_t)12);
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
// System.Void PlayerMove/<WaitToMove>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToMoveU3Ed__9__ctor_m328436F1C9C5D11CBE719E71968FF2A73E73FA2E (U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerMove/<WaitToMove>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToMoveU3Ed__9_System_IDisposable_Dispose_m0903C08D0F5C4F0794584E46C9724DD49384E294 (U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerMove/<WaitToMove>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitToMoveU3Ed__9_MoveNext_m848E35A99ADDCCDAE3FBB23F01916B06FC312C05 (U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isAlive = true;
		PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* L_5 = V_1;
		L_5->___isAlive_8 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object PlayerMove/<WaitToMove>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitToMoveU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1387E81D204762CD54D768ED173AE1F1C7138440 (U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerMove/<WaitToMove>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToMoveU3Ed__9_System_Collections_IEnumerator_Reset_m6DB65C23BC985104ED7E5F731F128AD09DFA0BB9 (U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitToMoveU3Ed__9_System_Collections_IEnumerator_Reset_m6DB65C23BC985104ED7E5F731F128AD09DFA0BB9_RuntimeMethod_var)));
	}
}
// System.Object PlayerMove/<WaitToMove>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitToMoveU3Ed__9_System_Collections_IEnumerator_get_Current_m5AECCEA4C1127F8479392B20E629993F65143975 (U3CWaitToMoveU3Ed__9_t9E2E7EE47431EEA860D2C450538ACB60DB0C892F* __this, const RuntimeMethod* method) 
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
// System.Void PlayerMovementController::PlayerMovement(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementController_PlayerMovement_m7AB153EB2EBF0734A5C237E392C59DFC3F3606A4 (PlayerMovementController_t8798F5FB5B4B88CE015EF6C092C04C3B71CBA4BE* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21017E95E72FEB5F51E399A3C40D3C263C73EBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5514D8BE9E761133A77457A12D3915CB3E07E5AF);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!isAlive) {
		bool L_0 = __this->___isAlive_13;
		if (L_0)
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
		// PlayerIdleCheck(x, y);
		float L_1 = ___x0;
		float L_2 = ___y1;
		PlayerMovementController_PlayerIdleCheck_m4C1B5A271272E1745A4EEB1F619FA4F2FE720D47(__this, L_1, L_2, NULL);
		// if (!playerIdle) // skip sending extra zero vertors when player isn't moving
		bool L_3 = __this->___playerIdle_11;
		if (L_3)
		{
			goto IL_0108;
		}
	}
	{
		// Vector3 playerMovementRotation = new Vector3(x, 0f, y) * maxSpeed;
		float L_4 = ___x0;
		float L_5 = ___y1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_4, (0.0f), L_5, /*hidden argument*/NULL);
		float L_7 = __this->___maxSpeed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_7, NULL);
		V_0 = L_8;
		// Vector3 camRotation = playerCamera.transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___playerCamera_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		V_1 = L_11;
		// camRotation.y = 0f; // zero out camera's vertical axis so it doesn't make them fly
		(&V_1)->___y_3 = (0.0f);
		// Vector3 playerMovementWithCameraRotation = Quaternion.LookRotation(camRotation) * playerMovementRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_13, L_14, NULL);
		V_2 = L_15;
		// Vector3 roundedVelocity
		//     = new Vector3(Mathf.Round(playerMovementWithCameraRotation.x * 100f) / 100f, -1f, Mathf.Round(playerMovementWithCameraRotation.z * 100f) / 100f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		float L_17 = L_16.___x_2;
		float L_18;
		L_18 = bankers_roundf(((float)il2cpp_codegen_multiply(L_17, (100.0f))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20 = L_19.___z_4;
		float L_21;
		L_21 = bankers_roundf(((float)il2cpp_codegen_multiply(L_20, (100.0f))));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), ((float)(L_18/(100.0f))), (-1.0f), ((float)(L_21/(100.0f))), NULL);
		// Debug.Log("velocity to send: " + roundedVelocity.ToString("f6"));
		String_t* L_22;
		L_22 = Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1((&V_3), _stringLiteral5514D8BE9E761133A77457A12D3915CB3E07E5AF, NULL);
		String_t* L_23;
		L_23 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral21017E95E72FEB5F51E399A3C40D3C263C73EBDC, L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
		// player.AddForce(roundedVelocity, ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = __this->___player_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_24, L_25, 2, NULL);
		// if (transform.position.y < -11) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = L_27.___y_3;
		if ((!(((float)L_28) < ((float)(-11.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		// isAlive = false;
		__this->___isAlive_13 = (bool)0;
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_29;
		L_29 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_4 = L_29;
		String_t* L_30;
		L_30 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_4), NULL);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_30, NULL);
	}

IL_00f1:
	{
		// if (WebSocketService.Instance.matchInitialized)
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_31;
		L_31 = Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770(Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		bool L_32 = L_31->___matchInitialized_23;
		if (!L_32)
		{
			goto IL_0108;
		}
	}
	{
		// WebSocketService.Instance.SendVelocity(roundedVelocity);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_33;
		L_33 = Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770(Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_3;
		WebSocketService_SendVelocity_m87374FBF954FE625D1D7D9F3FBF89F1824871E29(L_33, L_34, NULL);
	}

IL_0108:
	{
		// }
		return;
	}
}
// System.Void PlayerMovementController::PlayerIdleCheck(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementController_PlayerIdleCheck_m4C1B5A271272E1745A4EEB1F619FA4F2FE720D47 (PlayerMovementController_t8798F5FB5B4B88CE015EF6C092C04C3B71CBA4BE* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		// if (x == 0 && y == 0)
		float L_0 = ___x0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		float L_1 = ___y1;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// if (firstZeroReceivedInARow)
		bool L_2 = __this->___firstZeroReceivedInARow_10;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// playerIdle = true;
		__this->___playerIdle_11 = (bool)1;
		return;
	}

IL_0020:
	{
		// firstZeroReceivedInARow = true;
		__this->___firstZeroReceivedInARow_10 = (bool)1;
		return;
	}

IL_0028:
	{
		// firstZeroReceivedInARow = false;
		__this->___firstZeroReceivedInARow_10 = (bool)0;
		// playerIdle = false;
		__this->___playerIdle_11 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerMovementController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementController_Update_m2276F80B10CCFA5C33E0046A414ECA2E0DD77F3C (PlayerMovementController_t8798F5FB5B4B88CE015EF6C092C04C3B71CBA4BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (player.velocity.magnitude > maxSpeed)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___player_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_3 = __this->___maxSpeed_12;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_003c;
		}
	}
	{
		// player.velocity = Vector3.ClampMagnitude(player.velocity, maxSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___player_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___player_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_5, NULL);
		float L_7 = __this->___maxSpeed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_ClampMagnitude_mDEF1E073986286F6EFA1552A5D0E1A0F6CBF4500_inline(L_6, L_7, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_4, L_8, NULL);
	}

IL_003c:
	{
		// inputHorX = Input.GetAxis("Horizontal");
		float L_9;
		L_9 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___inputHorX_8 = L_9;
		// inputVertY = Input.GetAxis("Vertical");
		float L_10;
		L_10 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		__this->___inputVertY_9 = L_10;
		// }
		return;
	}
}
// System.Void PlayerMovementController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementController_FixedUpdate_mE77EC99C77C6BC21D509D0CAC744BA9C36031983 (PlayerMovementController_t8798F5FB5B4B88CE015EF6C092C04C3B71CBA4BE* __this, const RuntimeMethod* method) 
{
	{
		// PlayerMovement(inputHorX, inputVertY);
		float L_0 = __this->___inputHorX_8;
		float L_1 = __this->___inputVertY_9;
		PlayerMovementController_PlayerMovement_m7AB153EB2EBF0734A5C237E392C59DFC3F3606A4(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovementController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementController_Start_mB897062BC85516682C7F70D6D0360661481B2F2E (PlayerMovementController_t8798F5FB5B4B88CE015EF6C092C04C3B71CBA4BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isAlive = true;
		__this->___isAlive_13 = (bool)1;
		// WebSocketService.Instance.init();
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_0;
		L_0 = Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770(Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		WebSocketService_init_m52B0AB0DA785CE9D7B7989F7665B96C3B2EAACF3(L_0, NULL);
		// player = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___player_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_1);
		// WebSocketService.Instance.SetLocalPlayerRef(player);
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_2;
		L_2 = Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770(Singleton_1_get_Instance_m9E70BB4AD8BFB3203645386AB948F87B6A198770_RuntimeMethod_var);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___player_4;
		WebSocketService_SetLocalPlayerRef_m0D42272CF5B787E7C0A322A6E6C7E2AE446F6642_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovementController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementController__ctor_m3867CAF53A0A1A5DD4BCFB83E0F0BB632679EF96 (PlayerMovementController_t8798F5FB5B4B88CE015EF6C092C04C3B71CBA4BE* __this, const RuntimeMethod* method) 
{
	{
		// private float maxSpeed = 5;
		__this->___maxSpeed_12 = (5.0f);
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
// System.Void PlayerPositionMessage::.ctor(System.String,System.String,SerializableVector3,SerializableVector3,System.Double,System.Int32,System.String,SerializableVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPositionMessage__ctor_mBF9BFEA786783700653E8240DE93571E73F4BB4F (PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* __this, String_t* ___actionIn0, String_t* ___opcodeIn1, SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 ___velocityIn2, SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 ___enemyVelocityIn3, double ___timestamp4, int32_t ___seqIn5, String_t* ___playerIn6, SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 ___currentPosIn7, const RuntimeMethod* method) 
{
	{
		// : base(actionIn, opcodeIn)
		String_t* L_0 = ___actionIn0;
		String_t* L_1 = ___opcodeIn1;
		GameMessage__ctor_mE0340C4B3130492F8D68B11968436825EA083E19(__this, L_0, L_1, NULL);
		// velocity = velocityIn;
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_2 = ___velocityIn2;
		__this->___velocity_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___velocity_6))->___x_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___velocity_6))->___y_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___velocity_6))->___z_2), (void*)NULL);
		#endif
		// enemyVelocity = enemyVelocityIn;
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_3 = ___enemyVelocityIn3;
		__this->___enemyVelocity_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enemyVelocity_7))->___x_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enemyVelocity_7))->___y_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enemyVelocity_7))->___z_2), (void*)NULL);
		#endif
		// seq = seqIn;
		int32_t L_4 = ___seqIn5;
		__this->___seq_9 = L_4;
		// player = playerIn;
		String_t* L_5 = ___playerIn6;
		__this->___player_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_10), (void*)L_5);
		// currentPos = currentPosIn;
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_6 = ___currentPosIn7;
		__this->___currentPos_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___currentPos_8))->___x_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___currentPos_8))->___y_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___currentPos_8))->___z_2), (void*)NULL);
		#endif
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
// Conversion methods for marshalling of: SerializableVector3
IL2CPP_EXTERN_C void SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshal_pinvoke(const SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9& unmarshaled, SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshaled_pinvoke& marshaled)
{
	marshaled.___x_0 = il2cpp_codegen_marshal_string(unmarshaled.___x_0);
	marshaled.___y_1 = il2cpp_codegen_marshal_string(unmarshaled.___y_1);
	marshaled.___z_2 = il2cpp_codegen_marshal_string(unmarshaled.___z_2);
}
IL2CPP_EXTERN_C void SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshal_pinvoke_back(const SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshaled_pinvoke& marshaled, SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9& unmarshaled)
{
	unmarshaled.___x_0 = il2cpp_codegen_marshal_string_result(marshaled.___x_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___x_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___x_0));
	unmarshaled.___y_1 = il2cpp_codegen_marshal_string_result(marshaled.___y_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___y_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___y_1));
	unmarshaled.___z_2 = il2cpp_codegen_marshal_string_result(marshaled.___z_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___z_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___z_2));
}
// Conversion method for clean up from marshalling of: SerializableVector3
IL2CPP_EXTERN_C void SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshal_pinvoke_cleanup(SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___x_0);
	marshaled.___x_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___y_1);
	marshaled.___y_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___z_2);
	marshaled.___z_2 = NULL;
}
// Conversion methods for marshalling of: SerializableVector3
IL2CPP_EXTERN_C void SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshal_com(const SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9& unmarshaled, SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshaled_com& marshaled)
{
	marshaled.___x_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___x_0);
	marshaled.___y_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___y_1);
	marshaled.___z_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___z_2);
}
IL2CPP_EXTERN_C void SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshal_com_back(const SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshaled_com& marshaled, SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9& unmarshaled)
{
	unmarshaled.___x_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___x_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___x_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___x_0));
	unmarshaled.___y_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___y_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___y_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___y_1));
	unmarshaled.___z_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___z_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___z_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___z_2));
}
// Conversion method for clean up from marshalling of: SerializableVector3
IL2CPP_EXTERN_C void SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshal_com_cleanup(SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___x_0);
	marshaled.___x_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___y_1);
	marshaled.___y_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___z_2);
	marshaled.___z_2 = NULL;
}
// System.Void SerializableVector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableVector3__ctor_mA087E357CB00C79CFB351BA67162615F9D11288A (SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9* __this, float ___rX0, float ___rY1, float ___rZ2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// x = rX.ToString("f3");
		String_t* L_0;
		L_0 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___rX0), _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, NULL);
		__this->___x_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_0), (void*)L_0);
		// y = rY.ToString("f3");
		String_t* L_1;
		L_1 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___rY1), _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, NULL);
		__this->___y_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y_1), (void*)L_1);
		// z = rZ.ToString("f3");
		String_t* L_2;
		L_2 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___rZ2), _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, NULL);
		__this->___z_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z_2), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SerializableVector3__ctor_mA087E357CB00C79CFB351BA67162615F9D11288A_AdjustorThunk (RuntimeObject* __this, float ___rX0, float ___rY1, float ___rZ2, const RuntimeMethod* method)
{
	SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9*>(__this + _offset);
	SerializableVector3__ctor_mA087E357CB00C79CFB351BA67162615F9D11288A(_thisAdjusted, ___rX0, ___rY1, ___rZ2, method);
}
// System.String SerializableVector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableVector3_ToString_mBAD5C695720A76EF7ABC0948F7222905B7C599AB (SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F994A61C5B0E83FDA3716A4260541F80048DA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return String.Format("[{0}, {1}, {2}]", x, y, z);
		String_t* L_0 = __this->___x_0;
		String_t* L_1 = __this->___y_1;
		String_t* L_2 = __this->___z_2;
		String_t* L_3;
		L_3 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralA2F994A61C5B0E83FDA3716A4260541F80048DA2, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* SerializableVector3_ToString_mBAD5C695720A76EF7ABC0948F7222905B7C599AB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SerializableVector3_ToString_mBAD5C695720A76EF7ABC0948F7222905B7C599AB(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 SerializableVector3::op_Implicit(SerializableVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SerializableVector3_op_Implicit_mE4906FCECA59C119F6880FDF931D789218D0F66D (SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 ___rValue0, const RuntimeMethod* method) 
{
	{
		// return new Vector3(NullCheckParse(rValue.x), NullCheckParse(rValue.y), NullCheckParse(rValue.z));
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_0 = ___rValue0;
		String_t* L_1 = L_0.___x_0;
		float L_2;
		L_2 = SerializableVector3_NullCheckParse_mC3D9A0C6E6E0BD665732B813E118963F15BD6A66(L_1, NULL);
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_3 = ___rValue0;
		String_t* L_4 = L_3.___y_1;
		float L_5;
		L_5 = SerializableVector3_NullCheckParse_mC3D9A0C6E6E0BD665732B813E118963F15BD6A66(L_4, NULL);
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_6 = ___rValue0;
		String_t* L_7 = L_6.___z_2;
		float L_8;
		L_8 = SerializableVector3_NullCheckParse_mC3D9A0C6E6E0BD665732B813E118963F15BD6A66(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// SerializableVector3 SerializableVector3::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 SerializableVector3_op_Implicit_m455C85877BD27AB980B412FE4E06C4613CADE834 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rValue0, const RuntimeMethod* method) 
{
	{
		// return new SerializableVector3(rValue.x, rValue.y, rValue.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___rValue0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rValue0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___rValue0;
		float L_5 = L_4.___z_4;
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_6;
		memset((&L_6), 0, sizeof(L_6));
		SerializableVector3__ctor_mA087E357CB00C79CFB351BA67162615F9D11288A((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Single SerializableVector3::NullCheckParse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SerializableVector3_NullCheckParse_mC3D9A0C6E6E0BD665732B813E118963F15BD6A66 (String_t* ___valueToCheck0, const RuntimeMethod* method) 
{
	{
		// if (valueToCheck == null)
		String_t* L_0 = ___valueToCheck0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return 0f;
		return (0.0f);
	}

IL_0009:
	{
		// return float.Parse(valueToCheck);
		String_t* L_1 = ___valueToCheck0;
		float L_2;
		L_2 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_1, NULL);
		return L_2;
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
// System.Void StatusController::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusController_SetText_mD3E18C34FC3D180E2D73611E9F32190F701967C5 (StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// _outcomeText.text = text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____outcomeText_11;
		String_t* L_1 = ___text0;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void StatusController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusController_Start_m39072AB98C605051DAC962E6E3C9C64BE1166AFE (StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CF8F807730B6E4FC014101059E86FF146A6384D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3F18D32969865AE5CD8BE3CD6A7AC371410C7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECF07590319033FB48E25F3AA1302EC34DD303A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _outcomeText = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____outcomeText_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outcomeText_11), (void*)L_0);
		// _outcomeText.text = WaitingOnMatch;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->____outcomeText_11;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral5CF8F807730B6E4FC014101059E86FF146A6384D);
		// if (_p1 != null && _p2 != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____p1_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____p2_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		// _p1.text = "p1";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->____p1_9;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralA3F18D32969865AE5CD8BE3CD6A7AC371410C7DA);
		// _p2.text = "p2";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->____p2_10;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteralBECF07590319033FB48E25F3AA1302EC34DD303A);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Boolean StatusController::IsGamePlayActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StatusController_IsGamePlayActive_mEE72AF1CBCC0FFE57B56965424B73F448E2B38B6 (StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E948894C10C057AC0B925C34F4686969B3F6785);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _outcomeText.text == Playing;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____outcomeText_11;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral3E948894C10C057AC0B925C34F4686969B3F6785, NULL);
		return L_2;
	}
}
// System.Void StatusController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusController__ctor_mD66B9BF15C8D9F6A427FD128B1A726461E51ABCE (StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* __this, const RuntimeMethod* method) 
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
// System.Void ThirdPersonCamController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamController_Start_m283CB5B2A6F406DB221060D8656E2180B3925BA4 (ThirdPersonCamController_t63EB39C6A53D2DB78D86521CBC5157B10A2F162F* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// _camTransform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____camTransform_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camTransform_10), (void*)L_0);
		// _zoom = -10;
		__this->____zoom_13 = (-10.0f);
		// }
		return;
	}
}
// System.Void ThirdPersonCamController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamController_LateUpdate_mD24D632D4AB2B9E6779F5C9BEDC7632E3755CABC (ThirdPersonCamController_t63EB39C6A53D2DB78D86521CBC5157B10A2F162F* __this, const RuntimeMethod* method) 
{
	{
		// CamControl();
		ThirdPersonCamController_CamControl_m8E941FF04C907A134C388F23F44A2EC58279174D(__this, NULL);
		// }
		return;
	}
}
// System.Void ThirdPersonCamController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamController_Update_mF225D605A206076A72AF05DFB23A0413B828A31D (ThirdPersonCamController_t63EB39C6A53D2DB78D86521CBC5157B10A2F162F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown("escape") && !_cursorLocked)
		bool L_0;
		L_0 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07, NULL);
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		bool L_1 = __this->____cursorLocked_14;
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// _cursorLocked = !_cursorLocked;
		bool L_2 = __this->____cursorLocked_14;
		__this->____cursorLocked_14 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		return;
	}

IL_0030:
	{
		// else if (Input.GetKeyDown("escape") && _cursorLocked)
		bool L_3;
		L_3 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07, NULL);
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		bool L_4 = __this->____cursorLocked_14;
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// _cursorLocked = !_cursorLocked;
		bool L_5 = __this->____cursorLocked_14;
		__this->____cursorLocked_14 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void ThirdPersonCamController::CamControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamController_CamControl_m8E941FF04C907A134C388F23F44A2EC58279174D (ThirdPersonCamController_t63EB39C6A53D2DB78D86521CBC5157B10A2F162F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// _zoom += Input.GetAxis("Mouse ScrollWheel") * zoomSpeed;
		float L_0 = __this->____zoom_13;
		float L_1;
		L_1 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		float L_2 = __this->___zoomSpeed_7;
		__this->____zoom_13 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if (_zoom > zoomMin)
		float L_3 = __this->____zoom_13;
		float L_4 = __this->___zoomMin_8;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0038;
		}
	}
	{
		// _zoom = zoomMin;
		float L_5 = __this->___zoomMin_8;
		__this->____zoom_13 = L_5;
	}

IL_0038:
	{
		// if (_zoom < zoomMax)
		float L_6 = __this->____zoom_13;
		float L_7 = __this->___zoomMax_9;
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_0052;
		}
	}
	{
		// _zoom = zoomMax;
		float L_8 = __this->___zoomMax_9;
		__this->____zoom_13 = L_8;
	}

IL_0052:
	{
		// _mouseX += Input.GetAxis("Mouse X") * RotationSpeed;
		float L_9 = __this->____mouseX_11;
		float L_10;
		L_10 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_11 = __this->___RotationSpeed_6;
		__this->____mouseX_11 = ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_10, L_11))));
		// _mouseY -= Input.GetAxis("Mouse Y") * RotationSpeed;
		float L_12 = __this->____mouseY_12;
		float L_13;
		L_13 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_14 = __this->___RotationSpeed_6;
		__this->____mouseY_12 = ((float)il2cpp_codegen_subtract(L_12, ((float)il2cpp_codegen_multiply(L_13, L_14))));
		// _mouseY = Mathf.Clamp(_mouseY, -2, 60);
		float L_15 = __this->____mouseY_12;
		float L_16;
		L_16 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_15, (-2.0f), (60.0f), NULL);
		__this->____mouseY_12 = L_16;
		// Vector3 dir = new Vector3(0, 0, _zoom);
		float L_17 = __this->____zoom_13;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.0f), (0.0f), L_17, NULL);
		// Quaternion rotation = Quaternion.Euler(_mouseY, _mouseX, 0);
		float L_18 = __this->____mouseY_12;
		float L_19 = __this->____mouseX_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_18, L_19, (0.0f), NULL);
		V_1 = L_20;
		// if (Input.GetMouseButton(1))
		bool L_21;
		L_21 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(1, NULL);
		if (!L_21)
		{
			goto IL_0118;
		}
	}
	{
		// _camTransform.position = Target.position + rotation * dir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->____camTransform_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_24, L_27, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_28, NULL);
		// _camTransform.LookAt(Target.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->____camTransform_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_29, L_31, NULL);
		return;
	}

IL_0118:
	{
		// _camTransform.position = Target.position + rotation * dir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->____camTransform_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_35, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_34, L_37, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_32, L_38, NULL);
		// _camTransform.LookAt(Target.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->____camTransform_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_39, L_41, NULL);
		// Player.rotation = Quaternion.Euler(0, _mouseX, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___Player_5;
		float L_43 = __this->____mouseX_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_43, (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_42, L_44, NULL);
		// }
		return;
	}
}
// System.Void ThirdPersonCamController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamController__ctor_mA057335DB5E25425424863F3336A5BB635B783F4 (ThirdPersonCamController_t63EB39C6A53D2DB78D86521CBC5157B10A2F162F* __this, const RuntimeMethod* method) 
{
	{
		// public float RotationSpeed = 1;
		__this->___RotationSpeed_6 = (1.0f);
		// public float zoomSpeed = 2;
		__this->___zoomSpeed_7 = (2.0f);
		// public float zoomMin = -2f;
		__this->___zoomMin_8 = (-2.0f);
		// public float zoomMax = -10f;
		__this->___zoomMax_9 = (-10.0f);
		// private bool _cursorLocked = true;
		__this->____cursorLocked_14 = (bool)1;
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
// System.Void UnityMainThreadHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadHelper_Awake_m6D68EAD264D7C5C7628688DB8CEC10C1EDC37D23 (UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wkr = this;
		((UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F_il2cpp_TypeInfo_var))->___wkr_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F_il2cpp_TypeInfo_var))->___wkr_4), (void*)__this);
		// }
		return;
	}
}
// System.Void UnityMainThreadHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadHelper_Update_mDA0DFF2F754EC25E4A556A24F82548268C5383DC (UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0012;
	}

IL_0002:
	{
		// jobs.Dequeue().Invoke();
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = __this->___jobs_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1;
		L_1 = Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E(L_0, Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0012:
	{
		// while (jobs.Count > 0)
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_2 = __this->___jobs_5;
		int32_t L_3;
		L_3 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_2, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityMainThreadHelper::AddJob(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadHelper_AddJob_m56A49EFDF8685178B35D3A6EB3F2B9BDBC03D0D3 (UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___newJob0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jobs.Enqueue(newJob);
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = __this->___jobs_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___newJob0;
		Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4(L_0, L_1, Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityMainThreadHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadHelper__ctor_m413BB7D55FF2A9927F172C94A4904E096816A3A1 (UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Queue<Action> jobs = new Queue<Action>();
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*)il2cpp_codegen_object_new(Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272(L_0, Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		__this->___jobs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jobs_5), (void*)L_0);
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
// System.Void WebSocketService::ProcessReceivedMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_ProcessReceivedMessage_mC31C45AD44B75D614E35879A9EC37F50BB24C532 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisGameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764_m9E1C4C7D9EF37FB5908E86C55D9B6115908A4B55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851_m1545532A21433933AB65A7C944114E17197CFAA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E948894C10C057AC0B925C34F4686969B3F6785);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B60B7A207B7FFAB38B7C829859104FBA1704CF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4D6860B76928498777DED120D3B401E9055DA61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CE345142BA508093F573A71F797B6A49373D56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* V_0 = NULL;
	PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* V_1 = NULL;
	PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* V_2 = NULL;
	{
		// GameMessage gameMessage = JsonUtility.FromJson<GameMessage>(message);
		String_t* L_0 = ___message0;
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_1;
		L_1 = JsonUtility_FromJson_TisGameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764_m9E1C4C7D9EF37FB5908E86C55D9B6115908A4B55(L_0, JsonUtility_FromJson_TisGameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764_m9E1C4C7D9EF37FB5908E86C55D9B6115908A4B55_RuntimeMethod_var);
		V_0 = L_1;
		// if (gameMessage.opcode == PlayingOp)
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_2 = V_0;
		String_t* L_3 = L_2->___opcode_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC, NULL);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		// Debug.Log("Playing op code received: player 2 joined, game started");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD5CE345142BA508093F573A71F797B6A49373D56, NULL);
		// matchId = gameMessage.uuid;
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_5 = V_0;
		String_t* L_6 = L_5->___uuid_0;
		__this->___matchId_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___matchId_13), (void*)L_6);
		// _statusController.SetText(StatusController.Playing);
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_7 = __this->____statusController_7;
		StatusController_SetText_mD3E18C34FC3D180E2D73611E9F32190F701967C5(L_7, _stringLiteral3E948894C10C057AC0B925C34F4686969B3F6785, NULL);
		// PlayerPositionMessage posMessage = JsonUtility.FromJson<PlayerPositionMessage>(message);
		String_t* L_8 = ___message0;
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_9;
		L_9 = JsonUtility_FromJson_TisPlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851_m1545532A21433933AB65A7C944114E17197CFAA8(L_8, JsonUtility_FromJson_TisPlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851_m1545532A21433933AB65A7C944114E17197CFAA8_RuntimeMethod_var);
		V_1 = L_9;
		// localPlayerReference.position = posMessage.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___localPlayerReference_11;
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_11 = V_1;
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_12 = L_11->___velocity_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = SerializableVector3_op_Implicit_mE4906FCECA59C119F6880FDF931D789218D0F66D(L_12, NULL);
		Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C(L_10, L_13, NULL);
		// playerNum = posMessage.player;
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_14 = V_1;
		String_t* L_15 = L_14->___player_10;
		__this->___playerNum_24 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerNum_24), (void*)L_15);
		// if (playerNum == "1")
		String_t* L_16 = __this->___playerNum_24;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		if (!L_17)
		{
			goto IL_008a;
		}
	}
	{
		// enemyNum = "2";
		__this->___enemyNum_25 = _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyNum_25), (void*)_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		goto IL_0095;
	}

IL_008a:
	{
		// enemyNum = "1";
		__this->___enemyNum_25 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyNum_25), (void*)_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
	}

IL_0095:
	{
		// _playerColorService.SetColors(playerNum);
		PlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD* L_18 = __this->____playerColorService_10;
		String_t* L_19 = __this->___playerNum_24;
		PlayerColorService_SetColors_m58C5FBD05B872F87E3CDEC11924B57FDAFDFCE7B(L_18, L_19, NULL);
		// _enemyPositionHandler.init(posMessage.enemyVelocity);
		EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* L_20 = __this->____enemyPositionHandler_9;
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_21 = V_1;
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_22 = L_21->___enemyVelocity_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = SerializableVector3_op_Implicit_mE4906FCECA59C119F6880FDF931D789218D0F66D(L_22, NULL);
		EnemyPositionHandler_init_m0051F3B369742BC081699B4E9FDCBAF6FC53A476(L_20, L_23, NULL);
		// matchInitialized = true;
		__this->___matchInitialized_23 = (bool)1;
		// playerMovementMessageSequence = 0;
		__this->___playerMovementMessageSequence_14 = 0;
		return;
	}

IL_00cb:
	{
		// else if (gameMessage.opcode == OpponentVelocity)
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_24 = V_0;
		String_t* L_25 = L_24->___opcode_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE, NULL);
		if (!L_26)
		{
			goto IL_00f1;
		}
	}
	{
		// PlayerPositionMessage posMessage = JsonUtility.FromJson<PlayerPositionMessage>(message);
		String_t* L_27 = ___message0;
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_28;
		L_28 = JsonUtility_FromJson_TisPlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851_m1545532A21433933AB65A7C944114E17197CFAA8(L_27, JsonUtility_FromJson_TisPlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851_m1545532A21433933AB65A7C944114E17197CFAA8_RuntimeMethod_var);
		V_2 = L_28;
		// _enemyPositionHandler.UpdateVelocity(posMessage);
		EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* L_29 = __this->____enemyPositionHandler_9;
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_30 = V_2;
		EnemyPositionHandler_UpdateVelocity_m084C3EC2BEE5A77BA4F5E884BC7CAD63334F7B6D(L_29, L_30, NULL);
		return;
	}

IL_00f1:
	{
		// else if (gameMessage.opcode == YouWonOp)
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_31 = V_0;
		String_t* L_32 = L_31->___opcode_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99, NULL);
		if (!L_33)
		{
			goto IL_011a;
		}
	}
	{
		// _statusController.SetText(StatusController.YouWon);
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_34 = __this->____statusController_7;
		StatusController_SetText_mD3E18C34FC3D180E2D73611E9F32190F701967C5(L_34, _stringLiteralC4D6860B76928498777DED120D3B401E9055DA61, NULL);
		// QuitGame();
		WebSocketService_QuitGame_m6E3A665C4F5DDD2BAB1B44C29BBB285EED2AE069(__this, NULL);
		return;
	}

IL_011a:
	{
		// else if (gameMessage.opcode == YouLostOp)
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_35 = V_0;
		String_t* L_36 = L_35->___opcode_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9, NULL);
		if (!L_37)
		{
			goto IL_0143;
		}
	}
	{
		// _statusController.SetText(StatusController.YouLost);
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_38 = __this->____statusController_7;
		StatusController_SetText_mD3E18C34FC3D180E2D73611E9F32190F701967C5(L_38, _stringLiteral9B60B7A207B7FFAB38B7C829859104FBA1704CF8, NULL);
		// QuitGame();
		WebSocketService_QuitGame_m6E3A665C4F5DDD2BAB1B44C29BBB285EED2AE069(__this, NULL);
		return;
	}

IL_0143:
	{
		// else if (gameMessage.opcode == FirstToJoinOp)
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_39 = V_0;
		String_t* L_40 = L_39->___opcode_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		if (!L_41)
		{
			goto IL_0161;
		}
	}
	{
		// matchId = gameMessage.uuid;
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_42 = V_0;
		String_t* L_43 = L_42->___uuid_0;
		__this->___matchId_13 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___matchId_13), (void*)L_43);
	}

IL_0161:
	{
		// }
		return;
	}
}
// System.Void WebSocketService::SetupWebsocketCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SetupWebsocketCallbacks_m46FFA60FBC46C5072E28AE12D1E4F0D2A6DFF35F (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetupWebsocketCallbacksU3Eb__20_3_mEE744BB2D2F021828F238D0FC1E66B03A809019D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_0_m01699312BEED972A6DE9CE2F57DA93EBC7A479D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_1_m855587E333E35081A2BCFCEAC05BE6434C6AE03D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_2_mE03423E68715709C5C2B8DC4B039EE24820D6C7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* G_B2_0 = NULL;
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* G_B2_1 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* G_B1_0 = NULL;
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* G_B1_1 = NULL;
	{
		// _websocket.OnOpen += () =>
		// {
		//    Debug.Log("Connection open!");
		//    intentionalClose = false;
		//    GameMessage startRequest = new GameMessage("OnMessage", RequestStartOp);
		//    SendWebSocketMessage(JsonUtility.ToJson(startRequest));
		// };
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_0 = __this->____websocket_15;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_1 = (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)il2cpp_codegen_object_new(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var);
		WebSocketOpenEventHandler__ctor_m9C0F1F9240E959710FE2E7F9F1F97AF5D3D440AF(L_1, __this, (intptr_t)((void*)WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_0_m01699312BEED972A6DE9CE2F57DA93EBC7A479D0_RuntimeMethod_var), NULL);
		WebSocket_add_OnOpen_mE4848C3EB53A6CF346B790895D636D7A8BA4DDA3(L_0, L_1, NULL);
		// _websocket.OnClose += (e) =>
		// {
		//    Debug.Log("Connection closed!");
		// 
		//    // only do this if someone quit the game session, and not for a game ending event
		//    if (!intentionalClose)
		//    {
		//       UnityMainThreadHelper.wkr.AddJob(() =>
		//       {
		//          _menu.Disconnected();
		//       });
		//    }
		// };
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_2 = __this->____websocket_15;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_3 = (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)il2cpp_codegen_object_new(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
		WebSocketCloseEventHandler__ctor_mCF39CA9F24C0F9804D5B6E51EF946CEB60142764(L_3, __this, (intptr_t)((void*)WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_1_m855587E333E35081A2BCFCEAC05BE6434C6AE03D_RuntimeMethod_var), NULL);
		WebSocket_add_OnClose_m5D0A672A02F5BF6252DA825D7AB7EFC1020C2B4A(L_2, L_3, NULL);
		// _websocket.OnMessage += (bytes) =>
		// {
		//    // Debug.Log("OnMessage!");
		//    string message = System.Text.Encoding.UTF8.GetString(bytes);
		//    // Debug.Log(message.ToString());
		// 
		//    ProcessReceivedMessage(message);
		// };
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_4 = __this->____websocket_15;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_5 = (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)il2cpp_codegen_object_new(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var);
		WebSocketMessageEventHandler__ctor_m15BC0672C78EDC192A2ECACCD3B9762149A5A7A8(L_5, __this, (intptr_t)((void*)WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_2_mE03423E68715709C5C2B8DC4B039EE24820D6C7E_RuntimeMethod_var), NULL);
		WebSocket_add_OnMessage_mB2D438685DB29D57498A0AC6BEF756F5FEB0BDE5(L_4, L_5, NULL);
		// _websocket.OnError += (e) =>
		// {
		//    Debug.Log("Error! " + e);
		// };
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_6 = __this->____websocket_15;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var);
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_7 = ((U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var))->___U3CU3E9__20_3_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_6;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_6;
			goto IL_006a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var);
		U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496* L_9 = ((U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_10 = (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)il2cpp_codegen_object_new(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var);
		WebSocketErrorEventHandler__ctor_m57F2C1BA800F30F50FD411F8461AAA24D40FBAF9(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CSetupWebsocketCallbacksU3Eb__20_3_mEE744BB2D2F021828F238D0FC1E66B03A809019D_RuntimeMethod_var), NULL);
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_11 = L_10;
		((U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var))->___U3CU3E9__20_3_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var))->___U3CU3E9__20_3_1), (void*)L_11);
		G_B2_0 = L_11;
		G_B2_1 = G_B1_1;
	}

IL_006a:
	{
		WebSocket_add_OnError_mA10F34789A6C13F5AA64EC0F35D45ED4EDCDABA0(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void WebSocketService::FindMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_FindMatch_mAB374BAA4CFBE1ECB11FFF3E69ACEF46DC9D39F9 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_mD8DE659724468EDC789D193E57B353F76399917D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_mD8DE659724468EDC789D193E57B353F76399917D(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_mD8DE659724468EDC789D193E57B353F76399917D_RuntimeMethod_var);
		return;
	}
}
// System.Void WebSocketService::SendVectorAsMessage(UnityEngine.Vector3,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendVectorAsMessage_m369B8BA1212772EB63BC782441E92666203E6D47 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, String_t* ___opCode1, int32_t ___seq2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* V_1 = NULL;
	SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// SerializableVector3 posToSend = vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_1;
		L_1 = SerializableVector3_op_Implicit_m455C85877BD27AB980B412FE4E06C4613CADE834(L_0, NULL);
		V_0 = L_1;
		// GameMessage posMessage = new PlayerPositionMessage("OnMessage", opCode, posToSend, new SerializableVector3(), 0, seq, "", localPlayerReference.position);
		String_t* L_2 = ___opCode1;
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_3 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9));
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_4 = V_2;
		int32_t L_5 = ___seq2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___localPlayerReference_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_6, NULL);
		SerializableVector3_tA40FC13A0B917D5ADEBD65122D27C3CE8DA173D9 L_8;
		L_8 = SerializableVector3_op_Implicit_m455C85877BD27AB980B412FE4E06C4613CADE834(L_7, NULL);
		PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851* L_9 = (PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851*)il2cpp_codegen_object_new(PlayerPositionMessage_t2F5F6F8D36BBC40A30DCE72A520FF22541CB6851_il2cpp_TypeInfo_var);
		PlayerPositionMessage__ctor_mBF9BFEA786783700653E8240DE93571E73F4BB4F(L_9, _stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726, L_2, L_3, L_4, (0.0), L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_8, NULL);
		V_1 = L_9;
		// posMessage.uuid = matchId;
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_10 = V_1;
		String_t* L_11 = __this->___matchId_13;
		L_10->___uuid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___uuid_0), (void*)L_11);
		// SendWebSocketMessage(JsonUtility.ToJson(posMessage));
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_12 = V_1;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_12, NULL);
		WebSocketService_SendWebSocketMessage_mB8D70479443C8DA0D88D9EB1B35F69E258E2CF71(__this, L_13, NULL);
		// }
		return;
	}
}
// System.Void WebSocketService::SendWebSocketMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendWebSocketMessage_mB8D70479443C8DA0D88D9EB1B35F69E258E2CF71 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mD8A739B3AA5D8771500B542B6FA93E16EF859AA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___message0;
		(&V_0)->___message_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___message_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mD8A739B3AA5D8771500B542B6FA93E16EF859AA4(L_2, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mD8A739B3AA5D8771500B542B6FA93E16EF859AA4_RuntimeMethod_var);
		return;
	}
}
// System.Void WebSocketService::SendVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendVelocity_m87374FBF954FE625D1D7D9F3FBF89F1824871E29 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocityIn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// SendVectorAsMessage(velocityIn, OpponentVelocity, playerMovementMessageSequence++);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___velocityIn0;
		int32_t L_1 = __this->___playerMovementMessageSequence_14;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___playerMovementMessageSequence_14 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		WebSocketService_SendVectorAsMessage_m369B8BA1212772EB63BC782441E92666203E6D47(__this, L_0, _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE, L_3, NULL);
		// }
		return;
	}
}
// System.Void WebSocketService::SetLocalPlayerRef(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SetLocalPlayerRef_m0D42272CF5B787E7C0A322A6E6C7E2AE446F6642 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___localPlayerReferenceIn0, const RuntimeMethod* method) 
{
	{
		// localPlayerReference = localPlayerReferenceIn;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = ___localPlayerReferenceIn0;
		__this->___localPlayerReference_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localPlayerReference_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void WebSocketService::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_QuitGame_m6E3A665C4F5DDD2BAB1B44C29BBB285EED2AE069 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m1157CC50C1C11A49A7B597EBC17B9F688B357D41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m1157CC50C1C11A49A7B597EBC17B9F688B357D41(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m1157CC50C1C11A49A7B597EBC17B9F688B357D41_RuntimeMethod_var);
		return;
	}
}
// System.Void WebSocketService::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_OnApplicationQuit_mE4265CE31314E00367C019C1118C117164450A8F (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mE22A1E09B52DAC5A20CF8E5721B647E15E6DFABA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mE22A1E09B52DAC5A20CF8E5721B647E15E6DFABA(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mE22A1E09B52DAC5A20CF8E5721B647E15E6DFABA_RuntimeMethod_var);
		return;
	}
}
// System.Void WebSocketService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_Start_mBCD7C984276D78430EC3EDB15B3EAC16401F7C58 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93_m1035E16DEDA6D47E8DA6CBBE29275DEECF984A68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMenu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_mA523EFA275D6EFCD2DB86CC31DCCE6B4D97B8293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD_m3CC7B655B9A210CE07B270ADBD4A71C3B48DBE8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisStatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B_m671DEBB05A75B0700F577E9E95EA6CC149E9F37E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DE8F78A2209F845310E2ADD7CA75E30B88D050D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Websocket start");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8DE8F78A2209F845310E2ADD7CA75E30B88D050D, NULL);
		// intentionalClose = false;
		__this->___intentionalClose_12 = (bool)0;
		// _statusController = FindObjectOfType<StatusController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_0;
		L_0 = Object_FindObjectOfType_TisStatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B_m671DEBB05A75B0700F577E9E95EA6CC149E9F37E(Object_FindObjectOfType_TisStatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B_m671DEBB05A75B0700F577E9E95EA6CC149E9F37E_RuntimeMethod_var);
		__this->____statusController_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____statusController_7), (void*)L_0);
		// _menu = FindObjectOfType<Menu>();
		Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* L_1;
		L_1 = Object_FindObjectOfType_TisMenu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_mA523EFA275D6EFCD2DB86CC31DCCE6B4D97B8293(Object_FindObjectOfType_TisMenu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_mA523EFA275D6EFCD2DB86CC31DCCE6B4D97B8293_RuntimeMethod_var);
		__this->____menu_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____menu_8), (void*)L_1);
		// _enemyPositionHandler = FindObjectOfType<EnemyPositionHandler>();
		EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* L_2;
		L_2 = Object_FindObjectOfType_TisEnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93_m1035E16DEDA6D47E8DA6CBBE29275DEECF984A68(Object_FindObjectOfType_TisEnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93_m1035E16DEDA6D47E8DA6CBBE29275DEECF984A68_RuntimeMethod_var);
		__this->____enemyPositionHandler_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemyPositionHandler_9), (void*)L_2);
		// _websocket = new WebSocket(_webSocketDns);
		String_t* L_3 = __this->____webSocketDns_16;
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_4 = (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F*)il2cpp_codegen_object_new(WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var);
		WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24(L_4, L_3, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, NULL);
		__this->____websocket_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____websocket_15), (void*)L_4);
		// _playerColorService = FindObjectOfType<PlayerColorService>();
		PlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD* L_5;
		L_5 = Object_FindObjectOfType_TisPlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD_m3CC7B655B9A210CE07B270ADBD4A71C3B48DBE8C(Object_FindObjectOfType_TisPlayerColorService_t2EE45292F43B9757799297482505EC96160D8FCD_m3CC7B655B9A210CE07B270ADBD4A71C3B48DBE8C_RuntimeMethod_var);
		__this->____playerColorService_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerColorService_10), (void*)L_5);
		// SetupWebsocketCallbacks();
		WebSocketService_SetupWebsocketCallbacks_m46FFA60FBC46C5072E28AE12D1E4F0D2A6DFF35F(__this, NULL);
		// FindMatch();
		WebSocketService_FindMatch_mAB374BAA4CFBE1ECB11FFF3E69ACEF46DC9D39F9(__this, NULL);
		// }
		return;
	}
}
// System.Void WebSocketService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_Update_m98F66671E3F30729EF1F1BCC96039B383E17A533 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE127E188140BCCBBFCD10BCB235937A22D810C9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_statusController != null && _enemyPositionHandler != null && localPlayerReference != null
		//    && _statusController._p1 != null && _statusController._p2 != null)
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_0 = __this->____statusController_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00e5;
		}
	}
	{
		EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* L_2 = __this->____enemyPositionHandler_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_00e5;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___localPlayerReference_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00e5;
		}
	}
	{
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_6 = __this->____statusController_7;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = L_6->____p1_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00e5;
		}
	}
	{
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_9 = __this->____statusController_7;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = L_9->____p2_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_00e5;
		}
	}
	{
		// _statusController._p1.text = "P" + playerNum + " (You): " + localPlayerReference.position.ToString();
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_12 = __this->____statusController_7;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = L_12->____p1_9;
		String_t* L_14 = __this->___playerNum_24;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___localPlayerReference_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_15, NULL);
		V_0 = L_16;
		String_t* L_17;
		L_17 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		String_t* L_18;
		L_18 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34, L_14, _stringLiteralE127E188140BCCBBFCD10BCB235937A22D810C9F, L_17, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_18);
		// _statusController._p2.text = "P" + enemyNum + ": " + _enemyPositionHandler.enemy.transform.position.ToString();
		StatusController_t2AA85175AD79028C8FD8155A3B69A0B4A1DC178B* L_19 = __this->____statusController_7;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = L_19->____p2_10;
		String_t* L_21 = __this->___enemyNum_25;
		EnemyPositionHandler_t7F9F1C909E41C503A290CCD378851AF84B440D93* L_22 = __this->____enemyPositionHandler_9;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_23 = L_22->___enemy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		V_0 = L_25;
		String_t* L_26;
		L_26 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		String_t* L_27;
		L_27 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34, L_21, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_26, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_27);
	}

IL_00e5:
	{
		// }
		return;
	}
}
// System.Void WebSocketService::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_init_m52B0AB0DA785CE9D7B7989F7665B96C3B2EAACF3 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) 
{
	{
		// public void init() { }
		return;
	}
}
// System.Void WebSocketService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService__ctor_m2BB6E99219A942905455A0DA98AE3AF3EB00FF64 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m22176DA86E41DD4403C0B4C8FDCFDB1538C856BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BE299D040FCFFE23C03C53F600D5BA58462C445);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _webSocketDns = "wss://6jz0kbzw7b.execute-api.us-east-1.amazonaws.com/test";
		__this->____webSocketDns_16 = _stringLiteral4BE299D040FCFFE23C03C53F600D5BA58462C445;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____webSocketDns_16), (void*)_stringLiteral4BE299D040FCFFE23C03C53F600D5BA58462C445);
		// protected WebSocketService() { }
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAEAFF42A4DB47734E10FC1404AE68B0F3E28E249_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m22176DA86E41DD4403C0B4C8FDCFDB1538C856BD(__this, Singleton_1__ctor_m22176DA86E41DD4403C0B4C8FDCFDB1538C856BD_RuntimeMethod_var);
		// protected WebSocketService() { }
		return;
	}
}
// System.Void WebSocketService::<SetupWebsocketCallbacks>b__20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_0_m01699312BEED972A6DE9CE2F57DA93EBC7A479D0 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A09CDCF43F709AAED3C395930DB9F2E4AE559C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* V_0 = NULL;
	{
		// Debug.Log("Connection open!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral60A09CDCF43F709AAED3C395930DB9F2E4AE559C, NULL);
		// intentionalClose = false;
		__this->___intentionalClose_12 = (bool)0;
		// GameMessage startRequest = new GameMessage("OnMessage", RequestStartOp);
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_0 = (GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764*)il2cpp_codegen_object_new(GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764_il2cpp_TypeInfo_var);
		GameMessage__ctor_mE0340C4B3130492F8D68B11968436825EA083E19(L_0, _stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		V_0 = L_0;
		// SendWebSocketMessage(JsonUtility.ToJson(startRequest));
		GameMessage_t427CC62AF5FFF841A8C05B743C289CEC4F4AC764* L_1 = V_0;
		String_t* L_2;
		L_2 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_1, NULL);
		WebSocketService_SendWebSocketMessage_mB8D70479443C8DA0D88D9EB1B35F69E258E2CF71(__this, L_2, NULL);
		// };
		return;
	}
}
// System.Void WebSocketService::<SetupWebsocketCallbacks>b__20_1(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_1_m855587E333E35081A2BCFCEAC05BE6434C6AE03D (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, int32_t ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_4_mA1B792EA9299A8DEE822EC1486A714F0AA4CFFD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AD7E578430F8B768F833E1AE4B29FAF526BF73B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Connection closed!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral3AD7E578430F8B768F833E1AE4B29FAF526BF73B, NULL);
		// if (!intentionalClose)
		bool L_0 = __this->___intentionalClose_12;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// UnityMainThreadHelper.wkr.AddJob(() =>
		// {
		//    _menu.Disconnected();
		// });
		UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F* L_1 = ((UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadHelper_tC390BC14745AFA6AD1D2D902EA30CFF739F86B2F_il2cpp_TypeInfo_var))->___wkr_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_4_mA1B792EA9299A8DEE822EC1486A714F0AA4CFFD0_RuntimeMethod_var), NULL);
		UnityMainThreadHelper_AddJob_m56A49EFDF8685178B35D3A6EB3F2B9BDBC03D0D3(L_1, L_2, NULL);
	}

IL_0028:
	{
		// };
		return;
	}
}
// System.Void WebSocketService::<SetupWebsocketCallbacks>b__20_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_4_mA1B792EA9299A8DEE822EC1486A714F0AA4CFFD0 (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, const RuntimeMethod* method) 
{
	{
		// _menu.Disconnected();
		Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* L_0 = __this->____menu_8;
		Menu_Disconnected_m37CDEF9CE1BC89FBC0C7B5B896135502B4DCE1BA(L_0, NULL);
		// });
		return;
	}
}
// System.Void WebSocketService::<SetupWebsocketCallbacks>b__20_2(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_U3CSetupWebsocketCallbacksU3Eb__20_2_mE03423E68715709C5C2B8DC4B039EE24820D6C7E (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// string message = System.Text.Encoding.UTF8.GetString(bytes);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		V_0 = L_2;
		// ProcessReceivedMessage(message);
		String_t* L_3 = V_0;
		WebSocketService_ProcessReceivedMessage_mC31C45AD44B75D614E35879A9EC37F50BB24C532(__this, L_3, NULL);
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
// System.Void WebSocketService/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m400940A334FEBE574FEFDD99DD262E6E20F65A99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496* L_0 = (U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496*)il2cpp_codegen_object_new(U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7E7355E59B65774B0843B9DE9ED4C9957B10270D(L_0, NULL);
		((U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void WebSocketService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7E7355E59B65774B0843B9DE9ED4C9957B10270D (U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WebSocketService/<>c::<SetupWebsocketCallbacks>b__20_3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSetupWebsocketCallbacksU3Eb__20_3_mEE744BB2D2F021828F238D0FC1E66B03A809019D (U3CU3Ec_t6E20C1A6242AC5FFB94B88C36CDEBAB04619D496* __this, String_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE56A055ADD365F679EB5EE36CE42502E80C542);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Error! " + e);
		String_t* L_0 = ___e0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCEE56A055ADD365F679EB5EE36CE42502E80C542, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
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
// System.Void WebSocketService/<FindMatch>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMatchU3Ed__21_MoveNext_mE4A5DC799BF424574DAE96006F65BAF3EE67640D (U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_m01FC2597C452461729AEC706CC470D4B1815AE57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004b_1;
			}
		}
		{
			// await _websocket.Connect();
			WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_3 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_4 = L_3->____websocket_15;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = WebSocket_Connect_m6668D9F07FE1BFD16D5391B1AB8980FA740E705A(L_4, NULL);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6;
			L_6 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_5, NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_7)
			{
				goto IL_0067_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_2;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_m01FC2597C452461729AEC706CC470D4B1815AE57(L_10, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6_m01FC2597C452461729AEC706CC470D4B1815AE57_RuntimeMethod_var);
			goto IL_009a;
		}

IL_004b_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_3;
			V_2 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0067_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_0087;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0070;
		}
		throw e;
	}

CATCH_0070:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_14 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_14, L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009a;
	}// end catch (depth: 1)

IL_0087:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_16, NULL);
	}

IL_009a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFindMatchU3Ed__21_MoveNext_mE4A5DC799BF424574DAE96006F65BAF3EE67640D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6*>(__this + _offset);
	U3CFindMatchU3Ed__21_MoveNext_mE4A5DC799BF424574DAE96006F65BAF3EE67640D(_thisAdjusted, method);
}
// System.Void WebSocketService/<FindMatch>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMatchU3Ed__21_SetStateMachine_mC6C0C70604508C01785E9B5003F6AB889C763834 (U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFindMatchU3Ed__21_SetStateMachine_mC6C0C70604508C01785E9B5003F6AB889C763834_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFindMatchU3Ed__21_t0D31A82F823CF5D7138D86ECE610FF0568F2EBB6*>(__this + _offset);
	U3CFindMatchU3Ed__21_SetStateMachine_mC6C0C70604508C01785E9B5003F6AB889C763834(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocketService/<SendWebSocketMessage>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendWebSocketMessageU3Ed__23_MoveNext_mE72CBD82F9825DE97DE0C130C1DC0BB79F345DAF (U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mC216C5561824D5140BBBF290D06699E9D29A4FD2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0067_1;
			}
		}
		{
			// if (_websocket != null && _websocket.State == WebSocketState.Open)
			WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_3 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_4 = L_3->____websocket_15;
			if (!L_4)
			{
				goto IL_008a_1;
			}
		}
		{
			WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_5 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_6 = L_5->____websocket_15;
			int32_t L_7;
			L_7 = WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD(L_6, NULL);
			if ((!(((uint32_t)L_7) == ((uint32_t)1))))
			{
				goto IL_008a_1;
			}
		}
		{
			// await _websocket.SendText(message);
			WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_8 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_9 = L_8->____websocket_15;
			String_t* L_10 = __this->___message_3;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
			L_11 = WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C(L_9, L_10, NULL);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12;
			L_12 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_11, NULL);
			V_2 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_13)
			{
				goto IL_0083_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = V_2;
			__this->___U3CU3Eu__1_4 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mC216C5561824D5140BBBF290D06699E9D29A4FD2(L_16, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC_mC216C5561824D5140BBBF290D06699E9D29A4FD2_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0067_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_17 = __this->___U3CU3Eu__1_4;
			V_2 = L_17;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_18 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_0083_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
		}

IL_008a_1:
		{
			goto IL_00a3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008c;
		}
		throw e;
	}

CATCH_008c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_20, L_21, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	}// end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_22, NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendWebSocketMessageU3Ed__23_MoveNext_mE72CBD82F9825DE97DE0C130C1DC0BB79F345DAF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC*>(__this + _offset);
	U3CSendWebSocketMessageU3Ed__23_MoveNext_mE72CBD82F9825DE97DE0C130C1DC0BB79F345DAF(_thisAdjusted, method);
}
// System.Void WebSocketService/<SendWebSocketMessage>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendWebSocketMessageU3Ed__23_SetStateMachine_mCFA811BAEFB42D1964D91BFE5DD71F28F63DE9BF (U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendWebSocketMessageU3Ed__23_SetStateMachine_mCFA811BAEFB42D1964D91BFE5DD71F28F63DE9BF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendWebSocketMessageU3Ed__23_t627AD3C6255D45B9417C26993897CDD4B3ED16FC*>(__this + _offset);
	U3CSendWebSocketMessageU3Ed__23_SetStateMachine_mCFA811BAEFB42D1964D91BFE5DD71F28F63DE9BF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocketService/<QuitGame>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuitGameU3Ed__26_MoveNext_m9FC148A181232E4D0151E70FF752DE7C5370B9C6 (U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m0ECB1DDC381A287393AB3ED883F2B96162F7D2AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006a_1;
			}
		}
		{
			// intentionalClose = true;
			WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_3 = V_1;
			L_3->___intentionalClose_12 = (bool)1;
			// matchInitialized = false;
			WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_4 = V_1;
			L_4->___matchInitialized_23 = (bool)0;
			// _menu.ShowFindMatch();
			WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_5 = V_1;
			Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* L_6 = L_5->____menu_8;
			Menu_ShowFindMatch_m230C16AB5AD6F026C87067613343E2AB55027DAA(L_6, NULL);
			// await _websocket.Close();
			WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_7 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_8 = L_7->____websocket_15;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
			L_9 = WebSocket_Close_m5E661C600C35E9DAC15128D52843D1C5CD2FB9C9(L_8, ((int32_t)1000), (String_t*)NULL, NULL);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10;
			L_10 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_9, NULL);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_11)
			{
				goto IL_0086_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13 = V_2;
			__this->___U3CU3Eu__1_3 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m0ECB1DDC381A287393AB3ED883F2B96162F7D2AC(L_14, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2_m0ECB1DDC381A287393AB3ED883F2B96162F7D2AC_RuntimeMethod_var);
			goto IL_00b9;
		}

IL_006a_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = __this->___U3CU3Eu__1_3;
			V_2 = L_15;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_16 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_0086_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_00a6;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008f;
		}
		throw e;
	}

CATCH_008f:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_18, L_19, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b9;
	}// end catch (depth: 1)

IL_00a6:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_20 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_20, NULL);
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CQuitGameU3Ed__26_MoveNext_m9FC148A181232E4D0151E70FF752DE7C5370B9C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2*>(__this + _offset);
	U3CQuitGameU3Ed__26_MoveNext_m9FC148A181232E4D0151E70FF752DE7C5370B9C6(_thisAdjusted, method);
}
// System.Void WebSocketService/<QuitGame>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuitGameU3Ed__26_SetStateMachine_m376F71D3340CBF15DE5160716AA3CCEC8BF00615 (U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CQuitGameU3Ed__26_SetStateMachine_m376F71D3340CBF15DE5160716AA3CCEC8BF00615_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CQuitGameU3Ed__26_tE392796294E2E2FFBFBD6DC041FFE2D750FC92B2*>(__this + _offset);
	U3CQuitGameU3Ed__26_SetStateMachine_m376F71D3340CBF15DE5160716AA3CCEC8BF00615(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocketService/<OnApplicationQuit>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__27_MoveNext_m96AE870E5C85C02E3A38B6F88EEFB4D2050475DE (U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mAA1640391143F62F48F5100E31B8AD5A89021922_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0051_1;
			}
		}
		{
			// await _websocket.Close();
			WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* L_3 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_4 = L_3->____websocket_15;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = WebSocket_Close_m5E661C600C35E9DAC15128D52843D1C5CD2FB9C9(L_4, ((int32_t)1000), (String_t*)NULL, NULL);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6;
			L_6 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_5, NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_7)
			{
				goto IL_006d_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_2;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mAA1640391143F62F48F5100E31B8AD5A89021922(L_10, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C_mAA1640391143F62F48F5100E31B8AD5A89021922_RuntimeMethod_var);
			goto IL_00a0;
		}

IL_0051_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_3;
			V_2 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006d_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_008d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_14 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_14, L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a0;
	}// end catch (depth: 1)

IL_008d:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_16, NULL);
	}

IL_00a0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnApplicationQuitU3Ed__27_MoveNext_m96AE870E5C85C02E3A38B6F88EEFB4D2050475DE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C*>(__this + _offset);
	U3COnApplicationQuitU3Ed__27_MoveNext_m96AE870E5C85C02E3A38B6F88EEFB4D2050475DE(_thisAdjusted, method);
}
// System.Void WebSocketService/<OnApplicationQuit>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__27_SetStateMachine_mA3084818A04A7B6194CB8C71323288D72723744C (U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnApplicationQuitU3Ed__27_SetStateMachine_mA3084818A04A7B6194CB8C71323288D72723744C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COnApplicationQuitU3Ed__27_t02BB14C39C1C3D5EF1A8177EFB4A183FC26B443C*>(__this + _offset);
	U3COnApplicationQuitU3Ed__27_SetStateMachine_mA3084818A04A7B6194CB8C71323288D72723744C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mDEF1E073986286F6EFA1552A5D0E1A0F6CBF4500_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___vector0;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___maxLength1;
		float L_18 = V_4;
		float L_19 = ___maxLength1;
		float L_20 = V_5;
		float L_21 = ___maxLength1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___vector0;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketService_SetLocalPlayerRef_m0D42272CF5B787E7C0A322A6E6C7E2AE446F6642_inline (WebSocketService_t3CF40611D82D68902B03CFA89E30A691D60C62DD* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___localPlayerReferenceIn0, const RuntimeMethod* method) 
{
	{
		// localPlayerReference = localPlayerReferenceIn;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = ___localPlayerReferenceIn0;
		__this->___localPlayerReference_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localPlayerReference_11), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
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
