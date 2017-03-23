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

// TextController
struct TextController_t949652095;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_TextController949652095.h"
#include "AssemblyU2DCSharp_TextController949652095MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "AssemblyU2DCSharp_TextController_States2214569690.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "AssemblyU2DCSharp_TextController_States2214569690MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextController::.ctor()
extern "C"  void TextController__ctor_m4032868830 (TextController_t949652095 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextController::Start()
extern "C"  void TextController_Start_m3645149610 (TextController_t949652095 * __this, const MethodInfo* method)
{
	{
		__this->set_myState_3(0);
		return;
	}
}
// System.Void TextController::Update()
extern Il2CppClass* States_t2214569690_il2cpp_TypeInfo_var;
extern const uint32_t TextController_Update_m1619616711_MetadataUsageId;
extern "C"  void TextController_Update_m1619616711 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_Update_m1619616711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_myState_3();
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(States_t2214569690_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_myState_3();
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		TextController_cell_m4144292976(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_0026:
	{
		int32_t L_4 = __this->get_myState_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_003d;
		}
	}
	{
		TextController_sheets_0_m1900131469(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_003d:
	{
		int32_t L_5 = __this->get_myState_3();
		if ((!(((uint32_t)L_5) == ((uint32_t)5))))
		{
			goto IL_0054;
		}
	}
	{
		TextController_sheets_1_m1758968968(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_0054:
	{
		int32_t L_6 = __this->get_myState_3();
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_006b;
		}
	}
	{
		TextController_lock_0_m1379755700(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_006b:
	{
		int32_t L_7 = __this->get_myState_3();
		if ((!(((uint32_t)L_7) == ((uint32_t)6))))
		{
			goto IL_0082;
		}
	}
	{
		TextController_lock_1_m4128842031(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_0082:
	{
		int32_t L_8 = __this->get_myState_3();
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0099;
		}
	}
	{
		TextController_mirror_m4223947427(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_0099:
	{
		int32_t L_9 = __this->get_myState_3();
		if ((!(((uint32_t)L_9) == ((uint32_t)4))))
		{
			goto IL_00b0;
		}
	}
	{
		TextController_cell_mirror_m1109585584(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_00b0:
	{
		int32_t L_10 = __this->get_myState_3();
		if ((!(((uint32_t)L_10) == ((uint32_t)7))))
		{
			goto IL_00c7;
		}
	}
	{
		TextController_corridor_0_m1434786193(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_00c7:
	{
		int32_t L_11 = __this->get_myState_3();
		if ((!(((uint32_t)L_11) == ((uint32_t)8))))
		{
			goto IL_00de;
		}
	}
	{
		TextController_stairs_0_m2021502911(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_00de:
	{
		int32_t L_12 = __this->get_myState_3();
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00f6;
		}
	}
	{
		TextController_stairs_1_m1880340410(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_00f6:
	{
		int32_t L_13 = __this->get_myState_3();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_010e;
		}
	}
	{
		TextController_stairs_2_m2303827913(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_010e:
	{
		int32_t L_14 = __this->get_myState_3();
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0126;
		}
	}
	{
		TextController_courtyard_m700192827(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_0126:
	{
		int32_t L_15 = __this->get_myState_3();
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_013e;
		}
	}
	{
		TextController_floor_m1410047488(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_013e:
	{
		int32_t L_16 = __this->get_myState_3();
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0156;
		}
	}
	{
		TextController_corridor_1_m1575948694(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_0156:
	{
		int32_t L_17 = __this->get_myState_3();
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_016e;
		}
	}
	{
		TextController_corridor_2_m1717111195(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_016e:
	{
		int32_t L_18 = __this->get_myState_3();
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0186;
		}
	}
	{
		TextController_corridor_3_m1858273696(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_0186:
	{
		int32_t L_19 = __this->get_myState_3();
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_019e;
		}
	}
	{
		TextController_closet_door_m623823733(__this, /*hidden argument*/NULL);
		goto IL_01b1;
	}

IL_019e:
	{
		int32_t L_20 = __this->get_myState_3();
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_01b1;
		}
	}
	{
		TextController_in_closet_m1286627702(__this, /*hidden argument*/NULL);
	}

IL_01b1:
	{
		return;
	}
}
// System.Void TextController::in_closet()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3169416211;
extern const uint32_t TextController_in_closet_m1286627702_MetadataUsageId;
extern "C"  void TextController_in_closet_m1286627702 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_in_closet_m1286627702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3169416211);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)14));
		goto IL_003d;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		__this->set_myState_3(((int32_t)15));
	}

IL_003d:
	{
		return;
	}
}
// System.Void TextController::closet_door()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral731854013;
extern const uint32_t TextController_closet_door_m623823733_MetadataUsageId;
extern "C"  void TextController_closet_door_m623823733 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_closet_door_m623823733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral731854013);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(7);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::corridor_3()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1686166805;
extern const uint32_t TextController_corridor_3_m1858273696_MetadataUsageId;
extern "C"  void TextController_corridor_3_m1858273696 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_corridor_3_m1858273696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1686166805);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)11));
		goto IL_003d;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)117), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		__this->set_myState_3(((int32_t)17));
	}

IL_003d:
	{
		return;
	}
}
// System.Void TextController::corridor_2()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1579170846;
extern const uint32_t TextController_corridor_2_m1717111195_MetadataUsageId;
extern "C"  void TextController_corridor_2_m1717111195 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_corridor_2_m1717111195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1579170846);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)99), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)17));
		goto IL_003d;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		__this->set_myState_3(((int32_t)10));
	}

IL_003d:
	{
		return;
	}
}
// System.Void TextController::corridor_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1362017166;
extern const uint32_t TextController_corridor_1_m1575948694_MetadataUsageId;
extern "C"  void TextController_corridor_1_m1575948694 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_corridor_1_m1575948694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1362017166);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)17));
		goto IL_003d;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		__this->set_myState_3(((int32_t)9));
	}

IL_003d:
	{
		return;
	}
}
// System.Void TextController::floor()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral108683346;
extern const uint32_t TextController_floor_m1410047488_MetadataUsageId;
extern "C"  void TextController_floor_m1410047488 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_floor_m1410047488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral108683346);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(7);
		goto IL_003c;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)104), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_myState_3(((int32_t)13));
	}

IL_003c:
	{
		return;
	}
}
// System.Void TextController::courtyard()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3377191923;
extern const uint32_t TextController_courtyard_m700192827_MetadataUsageId;
extern "C"  void TextController_courtyard_m700192827 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_courtyard_m700192827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3377191923);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::stairs_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2688978907;
extern const uint32_t TextController_stairs_0_m2021502911_MetadataUsageId;
extern "C"  void TextController_stairs_0_m2021502911 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_stairs_0_m2021502911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2688978907);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(7);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::stairs_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4284366888;
extern const uint32_t TextController_stairs_1_m1880340410_MetadataUsageId;
extern "C"  void TextController_stairs_1_m1880340410 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_stairs_1_m1880340410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4284366888);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)13));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::stairs_2()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1783423968;
extern const uint32_t TextController_stairs_2_m2303827913_MetadataUsageId;
extern "C"  void TextController_stairs_2_m2303827913 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_stairs_2_m2303827913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1783423968);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)14));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::cell()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2432598857;
extern const uint32_t TextController_cell_m4144292976_MetadataUsageId;
extern "C"  void TextController_cell_m4144292976 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_cell_m4144292976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2432598857);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(2);
		goto IL_0053;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)109), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_myState_3(1);
		goto IL_0053;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		__this->set_myState_3(3);
	}

IL_0053:
	{
		return;
	}
}
// System.Void TextController::mirror()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2612979092;
extern const uint32_t TextController_mirror_m4223947427_MetadataUsageId;
extern "C"  void TextController_mirror_m4223947427 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_mirror_m4223947427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2612979092);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)116), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(4);
		goto IL_003b;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_003b:
	{
		return;
	}
}
// System.Void TextController::cell_mirror()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2506052534;
extern const uint32_t TextController_cell_mirror_m1109585584_MetadataUsageId;
extern "C"  void TextController_cell_mirror_m1109585584 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_cell_mirror_m1109585584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2506052534);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(5);
		goto IL_003b;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		__this->set_myState_3(6);
	}

IL_003b:
	{
		return;
	}
}
// System.Void TextController::sheets_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral410430408;
extern const uint32_t TextController_sheets_0_m1900131469_MetadataUsageId;
extern "C"  void TextController_sheets_0_m1900131469 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_sheets_0_m1900131469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral410430408);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::sheets_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2631927991;
extern const uint32_t TextController_sheets_1_m1758968968_MetadataUsageId;
extern "C"  void TextController_sheets_1_m1758968968 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_sheets_1_m1758968968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2631927991);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(4);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::lock_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3064756690;
extern const uint32_t TextController_lock_0_m1379755700_MetadataUsageId;
extern "C"  void TextController_lock_0_m1379755700 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_lock_0_m1379755700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3064756690);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::lock_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3940539500;
extern const uint32_t TextController_lock_1_m4128842031_MetadataUsageId;
extern "C"  void TextController_lock_1_m4128842031 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_lock_1_m4128842031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3940539500);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)111), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(7);
		goto IL_003b;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		__this->set_myState_3(4);
	}

IL_003b:
	{
		return;
	}
}
// System.Void TextController::corridor_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1779198522;
extern const uint32_t TextController_corridor_0_m1434786193_MetadataUsageId;
extern "C"  void TextController_corridor_0_m1434786193 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_corridor_0_m1434786193_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1779198522);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(8);
		goto IL_0055;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)102), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_myState_3(((int32_t)12));
		goto IL_0055;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)99), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		__this->set_myState_3(((int32_t)16));
	}

IL_0055:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
