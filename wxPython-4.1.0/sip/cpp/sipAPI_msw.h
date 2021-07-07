/*
 * Internal module API header file.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#ifndef __mswAPI_H
#define __mswAPI_H

#include <sip.h>

/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_GetMainWindowOfCompositeControl 0
#define sipName_GetMainWindowOfCompositeControl &sipStrings__msw[0]
#define sipNameNr_GetDefaultBorderForControl 32
#define sipName_GetDefaultBorderForControl &sipStrings__msw[32]
#define sipNameNr_HasTransparentBackground 59
#define sipName_HasTransparentBackground &sipStrings__msw[59]
#define sipNameNr_AcceptsFocusFromKeyboard 84
#define sipName_AcceptsFocusFromKeyboard &sipStrings__msw[84]
#define sipNameNr_AcceptsFocusRecursively 109
#define sipName_AcceptsFocusRecursively &sipStrings__msw[109]
#define sipNameNr_TransferDataFromWindow 133
#define sipName_TransferDataFromWindow &sipStrings__msw[133]
#define sipNameNr_ShowContextHelpPopup 156
#define sipName_ShowContextHelpPopup &sipStrings__msw[156]
#define sipNameNr_TransferDataToWindow 177
#define sipName_TransferDataToWindow &sipStrings__msw[177]
#define sipNameNr_ShouldInheritColours 198
#define sipName_ShouldInheritColours &sipStrings__msw[198]
#define sipNameNr_InformFirstDirection 219
#define sipName_InformFirstDirection &sipStrings__msw[219]
#define sipNameNr_wxCHMHelpController 240
#define sipName_wxCHMHelpController &sipStrings__msw[240]
#define sipNameNr_MSWTranslateMessage 260
#define sipName_MSWTranslateMessage &sipStrings__msw[260]
#define sipNameNr_DisplayContextPopup 280
#define sipName_DisplayContextPopup &sipStrings__msw[280]
#define sipNameNr_DoGetBestClientSize 300
#define sipName_DoGetBestClientSize &sipStrings__msw[300]
#define sipNameNr_GetClientAreaOrigin 320
#define sipName_GetClientAreaOrigin &sipStrings__msw[320]
#define sipNameNr_SetFrameParameters 340
#define sipName_SetFrameParameters &sipStrings__msw[340]
#define sipNameNr_GetFrameParameters 359
#define sipName_GetFrameParameters &sipStrings__msw[359]
#define sipNameNr_DoSetWindowVariant 378
#define sipName_DoSetWindowVariant &sipStrings__msw[378]
#define sipNameNr_CHMHelpController 242
#define sipName_CHMHelpController &sipStrings__msw[242]
#define sipNameNr_InheritAttributes 397
#define sipName_InheritAttributes &sipStrings__msw[397]
#define sipNameNr_wxPyAxBaseWindow 415
#define sipName_wxPyAxBaseWindow &sipStrings__msw[415]
#define sipNameNr_DisplayTextPopup 432
#define sipName_DisplayTextPopup &sipStrings__msw[432]
#define sipNameNr_SendDestroyEvent 449
#define sipName_SendDestroyEvent &sipStrings__msw[449]
#define sipNameNr_GetDefaultBorder 466
#define sipName_GetDefaultBorder &sipStrings__msw[466]
#define sipNameNr_SetParentWindow 483
#define sipName_SetParentWindow &sipStrings__msw[483]
#define sipNameNr_GetParentWindow 499
#define sipName_GetParentWindow &sipStrings__msw[499]
#define sipNameNr_DisplayContents 515
#define sipName_DisplayContents &sipStrings__msw[515]
#define sipNameNr_DoGetBorderSize 531
#define sipName_DoGetBorderSize &sipStrings__msw[531]
#define sipNameNr_DoSetClientSize 547
#define sipName_DoSetClientSize &sipStrings__msw[547]
#define sipNameNr_DoGetClientSize 563
#define sipName_DoGetClientSize &sipStrings__msw[563]
#define sipNameNr_PyAxBaseWindow 417
#define sipName_PyAxBaseWindow &sipStrings__msw[417]
#define sipNameNr_DisplaySection 579
#define sipName_DisplaySection &sipStrings__msw[579]
#define sipNameNr_DoSetSizeHints 594
#define sipName_DoSetSizeHints &sipStrings__msw[594]
#define sipNameNr_OnInternalIdle 609
#define sipName_OnInternalIdle &sipStrings__msw[609]
#define sipNameNr_KeywordSearch 624
#define sipName_KeywordSearch &sipStrings__msw[624]
#define sipNameNr_DoGetBestSize 638
#define sipName_DoGetBestSize &sipStrings__msw[638]
#define sipNameNr_DoGetPosition 652
#define sipName_DoGetPosition &sipStrings__msw[652]
#define sipNameNr_DisplayBlock 666
#define sipName_DisplayBlock &sipStrings__msw[666]
#define sipNameNr_parentWindow 679
#define sipName_parentWindow &sipStrings__msw[679]
#define sipNameNr_DoMoveWindow 692
#define sipName_DoMoveWindow &sipStrings__msw[692]
#define sipNameNr_SetValidator 705
#define sipName_SetValidator &sipStrings__msw[705]
#define sipNameNr_GetValidator 718
#define sipName_GetValidator &sipStrings__msw[718]
#define sipNameNr_AcceptsFocus 731
#define sipName_AcceptsFocus &sipStrings__msw[731]
#define sipNameNr_ProcessEvent 744
#define sipName_ProcessEvent &sipStrings__msw[744]
#define sipNameNr_GetHelpFile 757
#define sipName_GetHelpFile &sipStrings__msw[757]
#define sipNameNr_SetCanFocus 769
#define sipName_SetCanFocus &sipStrings__msw[769]
#define sipNameNr_RemoveChild 781
#define sipName_RemoveChild &sipStrings__msw[781]
#define sipNameNr_widthTitle 793
#define sipName_widthTitle &sipStrings__msw[793]
#define sipNameNr_Initialize 804
#define sipName_Initialize &sipStrings__msw[804]
#define sipNameNr_InitDialog 815
#define sipName_InitDialog &sipStrings__msw[815]
#define sipNameNr_SetViewer 826
#define sipName_SetViewer &sipStrings__msw[826]
#define sipNameNr_sectionNo 836
#define sipName_sectionNo &sipStrings__msw[836]
#define sipNameNr_contextId 846
#define sipName_contextId &sipStrings__msw[846]
#define sipNameNr_columnMax 856
#define sipName_columnMax &sipStrings__msw[856]
#define sipNameNr_columnMin 866
#define sipName_columnMin &sipStrings__msw[866]
#define sipNameNr_DoSetSize 876
#define sipName_DoSetSize &sipStrings__msw[876]
#define sipNameNr_DoGetSize 886
#define sipName_DoGetSize &sipStrings__msw[886]
#define sipNameNr_sizeFlags 896
#define sipName_sizeFlags &sipStrings__msw[896]
#define sipNameNr_TryBefore 906
#define sipName_TryBefore &sipStrings__msw[906]
#define sipNameNr_DoFreeze 916
#define sipName_DoFreeze &sipStrings__msw[916]
#define sipNameNr_DoEnable 925
#define sipName_DoEnable &sipStrings__msw[925]
#define sipNameNr_Validate 934
#define sipName_Validate &sipStrings__msw[934]
#define sipNameNr_AddChild 943
#define sipName_AddChild &sipStrings__msw[943]
#define sipNameNr_TryAfter 952
#define sipName_TryAfter &sipStrings__msw[952]
#define sipNameNr_LoadFile 961
#define sipName_LoadFile &sipStrings__msw[961]
#define sipNameNr_location 970
#define sipName_location &sipStrings__msw[970]
#define sipNameNr_section 979
#define sipName_section &sipStrings__msw[979]
#define sipNameNr_blockNo 987
#define sipName_blockNo &sipStrings__msw[987]
#define sipNameNr_unitMax 995
#define sipName_unitMax &sipStrings__msw[995]
#define sipNameNr_unitMin 1003
#define sipName_unitMin &sipStrings__msw[1003]
#define sipNameNr_variant 1011
#define sipName_variant &sipStrings__msw[1011]
#define sipNameNr_Destroy 1019
#define sipName_Destroy &sipStrings__msw[1019]
#define sipNameNr_wx__msw 1027
#define sipName_wx__msw &sipStrings__msw[1027]
#define sipNameNr_client 1035
#define sipName_client &sipStrings__msw[1035]
#define sipNameNr_OnQuit 1042
#define sipName_OnQuit &sipStrings__msw[1042]
#define sipNameNr_dialog 1049
#define sipName_dialog &sipStrings__msw[1049]
#define sipNameNr_rowMax 1056
#define sipName_rowMax &sipStrings__msw[1056]
#define sipNameNr_rowMin 1063
#define sipName_rowMin &sipStrings__msw[1063]
#define sipNameNr_DoThaw 1070
#define sipName_DoThaw &sipStrings__msw[1070]
#define sipNameNr_parent 1077
#define sipName_parent &sipStrings__msw[1077]
#define sipNameNr_enable 1084
#define sipName_enable &sipStrings__msw[1084]
#define sipNameNr_stream 1091
#define sipName_stream &sipStrings__msw[1091]
#define sipNameNr_column 1098
#define sipName_column &sipStrings__msw[1098]
#define sipNameNr_window 1105
#define sipName_window &sipStrings__msw[1105]
#define sipNameNr_height 1112
#define sipName_height &sipStrings__msw[1112]
#define sipNameNr_popup 1119
#define sipName_popup &sipStrings__msw[1119]
#define sipNameNr_order 477
#define sipName_order &sipStrings__msw[477]
#define sipNameNr_sizer 1125
#define sipName_sizer &sipStrings__msw[1125]
#define sipNameNr_event 1131
#define sipName_event &sipStrings__msw[1131]
#define sipNameNr_level 1137
#define sipName_level &sipStrings__msw[1137]
#define sipNameNr_child 1143
#define sipName_child &sipStrings__msw[1143]
#define sipNameNr_style 1149
#define sipName_style &sipStrings__msw[1149]
#define sipNameNr_width 1155
#define sipName_width &sipStrings__msw[1155]
#define sipNameNr_count 1161
#define sipName_count &sipStrings__msw[1161]
#define sipNameNr_flags 1167
#define sipName_flags &sipStrings__msw[1167]
#define sipNameNr_Quit 1044
#define sipName_Quit &sipStrings__msw[1044]
#define sipNameNr_unit 1173
#define sipName_unit &sipStrings__msw[1173]
#define sipNameNr_incH 1178
#define sipName_incH &sipStrings__msw[1178]
#define sipNameNr_incW 1183
#define sipName_incW &sipStrings__msw[1183]
#define sipNameNr_maxH 1188
#define sipName_maxH &sipStrings__msw[1188]
#define sipNameNr_maxW 1193
#define sipName_maxW &sipStrings__msw[1193]
#define sipNameNr_minH 1198
#define sipName_minH &sipStrings__msw[1198]
#define sipNameNr_minW 1203
#define sipName_minW &sipStrings__msw[1203]
#define sipNameNr_show 1208
#define sipName_show &sipStrings__msw[1208]
#define sipNameNr_text 1213
#define sipName_text &sipStrings__msw[1213]
#define sipNameNr_file 1218
#define sipName_file &sipStrings__msw[1218]
#define sipNameNr_rect 1223
#define sipName_rect &sipStrings__msw[1223]
#define sipNameNr_size 1228
#define sipName_size &sipStrings__msw[1228]
#define sipNameNr_name 1233
#define sipName_name &sipStrings__msw[1233]
#define sipNameNr_mode 1238
#define sipName_mode &sipStrings__msw[1238]
#define sipNameNr_time 1243
#define sipName_time &sipStrings__msw[1243]
#define sipNameNr_item 1248
#define sipName_item &sipStrings__msw[1248]
#define sipNameNr_info 1253
#define sipName_info &sipStrings__msw[1253]
#define sipNameNr_idx 1258
#define sipName_idx &sipStrings__msw[1258]
#define sipNameNr_msg 1262
#define sipName_msg &sipStrings__msw[1262]
#define sipNameNr_row 1266
#define sipName_row &sipStrings__msw[1266]
#define sipNameNr_pos 1270
#define sipName_pos &sipStrings__msw[1270]
#define sipNameNr_dc 1274
#define sipName_dc &sipStrings__msw[1274]
#define sipNameNr_id 1277
#define sipName_id &sipStrings__msw[1277]
#define sipNameNr_k 677
#define sipName_k &sipStrings__msw[677]
#define sipNameNr_y 131
#define sipName_y &sipStrings__msw[131]
#define sipNameNr_x 864
#define sipName_x &sipStrings__msw[864]
#define sipNameNr_n 238
#define sipName_n &sipStrings__msw[238]

#define sipMalloc                   sipAPI__msw->api_malloc
#define sipFree                     sipAPI__msw->api_free
#define sipBuildResult              sipAPI__msw->api_build_result
#define sipCallMethod               sipAPI__msw->api_call_method
#define sipCallProcedureMethod      sipAPI__msw->api_call_procedure_method
#define sipCallErrorHandler         sipAPI__msw->api_call_error_handler
#define sipParseResultEx            sipAPI__msw->api_parse_result_ex
#define sipParseResult              sipAPI__msw->api_parse_result
#define sipParseArgs                sipAPI__msw->api_parse_args
#define sipParseKwdArgs             sipAPI__msw->api_parse_kwd_args
#define sipParsePair                sipAPI__msw->api_parse_pair
#define sipInstanceDestroyed        sipAPI__msw->api_instance_destroyed
#define sipInstanceDestroyedEx      sipAPI__msw->api_instance_destroyed_ex
#define sipConvertFromSequenceIndex sipAPI__msw->api_convert_from_sequence_index
#define sipConvertFromSliceObject   sipAPI__msw->api_convert_from_slice_object
#define sipConvertFromVoidPtr       sipAPI__msw->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI__msw->api_convert_to_void_ptr
#define sipAddException             sipAPI__msw->api_add_exception
#define sipNoFunction               sipAPI__msw->api_no_function
#define sipNoMethod                 sipAPI__msw->api_no_method
#define sipAbstractMethod           sipAPI__msw->api_abstract_method
#define sipBadClass                 sipAPI__msw->api_bad_class
#define sipBadCatcherResult         sipAPI__msw->api_bad_catcher_result
#define sipBadCallableArg           sipAPI__msw->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI__msw->api_bad_operator_arg
#define sipTrace                    sipAPI__msw->api_trace
#define sipTransferBack             sipAPI__msw->api_transfer_back
#define sipTransferTo               sipAPI__msw->api_transfer_to
#define sipTransferBreak            sipAPI__msw->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI__msw->api_simplewrapper_type
#define sipWrapper_Type             sipAPI__msw->api_wrapper_type
#define sipWrapperType_Type         sipAPI__msw->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI__msw->api_voidptr_type
#define sipGetPyObject              sipAPI__msw->api_get_pyobject
#define sipGetAddress               sipAPI__msw->api_get_address
#define sipGetMixinAddress          sipAPI__msw->api_get_mixin_address
#define sipGetCppPtr                sipAPI__msw->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI__msw->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI__msw->api_is_py_method
#define sipCallHook                 sipAPI__msw->api_call_hook
#define sipEndThread                sipAPI__msw->api_end_thread
#define sipConnectRx                sipAPI__msw->api_connect_rx
#define sipDisconnectRx             sipAPI__msw->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI__msw->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI__msw->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI__msw->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI__msw->api_add_type_instance
#define sipFreeSipslot              sipAPI__msw->api_free_sipslot
#define sipSameSlot                 sipAPI__msw->api_same_slot
#define sipPySlotExtend             sipAPI__msw->api_pyslot_extend
#define sipConvertRx                sipAPI__msw->api_convert_rx
#define sipAddDelayedDtor           sipAPI__msw->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI__msw->api_can_convert_to_type
#define sipConvertToType            sipAPI__msw->api_convert_to_type
#define sipForceConvertToType       sipAPI__msw->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI__msw->api_can_convert_to_enum
#define sipConvertToEnum            sipAPI__msw->api_convert_to_enum
#define sipConvertToBool            sipAPI__msw->api_convert_to_bool
#define sipReleaseType              sipAPI__msw->api_release_type
#define sipConvertFromType          sipAPI__msw->api_convert_from_type
#define sipConvertFromNewType       sipAPI__msw->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI__msw->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI__msw->api_convert_from_enum
#define sipGetState                 sipAPI__msw->api_get_state
#define sipExportSymbol             sipAPI__msw->api_export_symbol
#define sipImportSymbol             sipAPI__msw->api_import_symbol
#define sipFindType                 sipAPI__msw->api_find_type
#define sipFindNamedEnum            sipAPI__msw->api_find_named_enum
#define sipBytes_AsChar             sipAPI__msw->api_bytes_as_char
#define sipBytes_AsString           sipAPI__msw->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI__msw->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI__msw->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI__msw->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI__msw->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI__msw->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI__msw->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI__msw->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI__msw->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI__msw->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI__msw->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI__msw->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI__msw->api_invoke_slot
#define sipInvokeSlotEx             sipAPI__msw->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI__msw->api_save_slot
#define sipClearAnySlotReference    sipAPI__msw->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI__msw->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->wt_td->td_cname)
#define sipDeprecated               sipAPI__msw->api_deprecated
#define sipGetReference             sipAPI__msw->api_get_reference
#define sipKeepReference            sipAPI__msw->api_keep_reference
#define sipRegisterProxyResolver    sipAPI__msw->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI__msw->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI__msw->api_type_from_py_type_object
#define sipTypeScope                sipAPI__msw->api_type_scope
#define sipResolveTypedef           sipAPI__msw->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI__msw->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI__msw->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI__msw->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI__msw->api_enable_autoconversion
#define sipEnableOverflowChecking   sipAPI__msw->api_enable_overflow_checking
#define sipInitMixin                sipAPI__msw->api_init_mixin
#define sipExportModule             sipAPI__msw->api_export_module
#define sipInitModule               sipAPI__msw->api_init_module
#define sipGetInterpreter           sipAPI__msw->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI__msw->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI__msw->api_set_type_user_data
#define sipGetTypeUserData          sipAPI__msw->api_get_type_user_data
#define sipPyTypeDict               sipAPI__msw->api_py_type_dict
#define sipPyTypeName               sipAPI__msw->api_py_type_name
#define sipGetCFunction             sipAPI__msw->api_get_c_function
#define sipGetMethod                sipAPI__msw->api_get_method
#define sipFromMethod               sipAPI__msw->api_from_method
#define sipGetDate                  sipAPI__msw->api_get_date
#define sipFromDate                 sipAPI__msw->api_from_date
#define sipGetDateTime              sipAPI__msw->api_get_datetime
#define sipFromDateTime             sipAPI__msw->api_from_datetime
#define sipGetTime                  sipAPI__msw->api_get_time
#define sipFromTime                 sipAPI__msw->api_from_time
#define sipIsUserType               sipAPI__msw->api_is_user_type
#define sipGetFrame                 sipAPI__msw->api_get_frame
#define sipCheckPluginForType       sipAPI__msw->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI__msw->api_unicode_new
#define sipUnicodeWrite             sipAPI__msw->api_unicode_write
#define sipUnicodeData              sipAPI__msw->api_unicode_data
#define sipGetBufferInfo            sipAPI__msw->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI__msw->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI__msw->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI__msw->api_is_derived_class
#define sipGetUserObject            sipAPI__msw->api_get_user_object
#define sipSetUserObject            sipAPI__msw->api_set_user_object
#define sipRegisterEventHandler     sipAPI__msw->api_register_event_handler
#define sipLong_AsChar              sipAPI__msw->api_long_as_char
#define sipLong_AsSignedChar        sipAPI__msw->api_long_as_signed_char
#define sipLong_AsUnsignedChar      sipAPI__msw->api_long_as_unsigned_char
#define sipLong_AsShort             sipAPI__msw->api_long_as_short
#define sipLong_AsUnsignedShort     sipAPI__msw->api_long_as_unsigned_short
#define sipLong_AsInt               sipAPI__msw->api_long_as_int
#define sipLong_AsUnsignedInt       sipAPI__msw->api_long_as_unsigned_int
#define sipLong_AsLong              sipAPI__msw->api_long_as_long
#define sipLong_AsUnsignedLong      sipAPI__msw->api_long_as_unsigned_long
#define sipLong_AsLongLong          sipAPI__msw->api_long_as_long_long
#define sipLong_AsUnsignedLongLong  sipAPI__msw->api_long_as_unsigned_long_long
#define sipLong_AsSizeT             sipAPI__msw->api_long_as_size_t
#define sipVisitWrappers            sipAPI__msw->api_visit_wrappers
#define sipRegisterExitNotifier     sipAPI__msw->api_register_exit_notifier

/* These are deprecated. */
#define sipMapStringToClass         sipAPI__msw->api_map_string_to_class
#define sipMapIntToClass            sipAPI__msw->api_map_int_to_class
#define sipFindClass                sipAPI__msw->api_find_class
#define sipFindMappedType           sipAPI__msw->api_find_mapped_type
#define sipConvertToArray           sipAPI__msw->api_convert_to_array
#define sipConvertToTypedArray      sipAPI__msw->api_convert_to_typed_array
#define sipEnableGC                 sipAPI__msw->api_enable_gc
#define sipPrintObject              sipAPI__msw->api_print_object
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI__msw->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->wt_td)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->wt_td, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->wt_td, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->wt_td, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->wt_td, (t))

/* The strings used by this module. */
extern const char sipStrings__msw[];

#define sipType_wxPyAxBaseWindow sipExportedTypes__msw[1]
#define sipClass_wxPyAxBaseWindow sipExportedTypes__msw[1]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef__msw_wxPyAxBaseWindow;

#define sipType_wxCHMHelpController sipExportedTypes__msw[0]
#define sipClass_wxCHMHelpController sipExportedTypes__msw[0]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef__msw_wxCHMHelpController;

#define sipType_wxHelpSearchMode sipImportedTypes__msw__core[5].it_td
#define sipEnum_wxHelpSearchMode sipImportedTypes__msw__core[5].it_td->u.td_py_type

#define sipType_wxWindowVariant sipImportedTypes__msw__core[14].it_td
#define sipEnum_wxWindowVariant sipImportedTypes__msw__core[14].it_td->u.td_py_type

#define sipType_wxBorder sipImportedTypes__msw__core[0].it_td
#define sipEnum_wxBorder sipImportedTypes__msw__core[0].it_td->u.td_py_type

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI__msw;
extern sipExportedModuleDef sipModuleAPI__msw;
extern sipTypeDef *sipExportedTypes__msw[];

#define sipType_wxObject sipImportedTypes__msw__core[6].it_td
#define sipClass_wxObject sipImportedTypes__msw__core[6].it_td->u.td_wrapper_type

#define sipType_wxPoint sipImportedTypes__msw__core[7].it_td
#define sipClass_wxPoint sipImportedTypes__msw__core[7].it_td->u.td_wrapper_type

#define sipType_wxSize sipImportedTypes__msw__core[8].it_td
#define sipClass_wxSize sipImportedTypes__msw__core[8].it_td->u.td_wrapper_type

#define sipType_wxTrackable sipImportedTypes__msw__core[10].it_td
#define sipClass_wxTrackable sipImportedTypes__msw__core[10].it_td->u.td_wrapper_type

#define sipType_wxEvtHandler sipImportedTypes__msw__core[2].it_td
#define sipClass_wxEvtHandler sipImportedTypes__msw__core[2].it_td->u.td_wrapper_type

#define sipType_wxEvent sipImportedTypes__msw__core[1].it_td
#define sipClass_wxEvent sipImportedTypes__msw__core[1].it_td->u.td_wrapper_type

#define sipType_wxWindowBase sipImportedTypes__msw__core[13].it_td
#define sipClass_wxWindowBase sipImportedTypes__msw__core[13].it_td->u.td_wrapper_type

#define sipType_wxWindow sipImportedTypes__msw__core[12].it_td
#define sipClass_wxWindow sipImportedTypes__msw__core[12].it_td->u.td_wrapper_type

#define sipType_wxValidator sipImportedTypes__msw__core[11].it_td
#define sipClass_wxValidator sipImportedTypes__msw__core[11].it_td->u.td_wrapper_type

#define sipType_wxFrame sipImportedTypes__msw__core[3].it_td
#define sipClass_wxFrame sipImportedTypes__msw__core[3].it_td->u.td_wrapper_type

#define sipType_wxHelpControllerBase sipImportedTypes__msw__core[4].it_td
#define sipClass_wxHelpControllerBase sipImportedTypes__msw__core[4].it_td->u.td_wrapper_type

#define sipType_wxString sipImportedTypes__msw__core[9].it_td

#define sipType_wxHelpSearchMode sipImportedTypes__msw__core[5].it_td
#define sipEnum_wxHelpSearchMode sipImportedTypes__msw__core[5].it_td->u.td_py_type

#define sipType_wxWindowVariant sipImportedTypes__msw__core[14].it_td
#define sipEnum_wxWindowVariant sipImportedTypes__msw__core[14].it_td->u.td_py_type

#define sipType_wxBorder sipImportedTypes__msw__core[0].it_td
#define sipEnum_wxBorder sipImportedTypes__msw__core[0].it_td->u.td_py_type
extern sipImportedTypeDef sipImportedTypes__msw__core[];
#include <wxPython/wxpy_api.h>
        class wxPyAxBaseWindow : public wxWindow
        {
            DECLARE_DYNAMIC_CLASS(wxPyAxBaseWindow)
        public:
            wxPyAxBaseWindow(wxWindow* parent, const wxWindowID id=-1,
                            const wxPoint& pos = wxDefaultPosition,
                            const wxSize& size = wxDefaultSize,
                            long style = 0,
                            const wxString& name = wxPanelNameStr)
            : wxWindow(parent, id, pos, size, style, name) {}
            wxPyAxBaseWindow() : wxWindow() {}
            virtual bool MSWTranslateMessage(WXMSG* msg)
            {
                return wxWindow::MSWTranslateMessage(msg);
            }
        };
        

#endif
