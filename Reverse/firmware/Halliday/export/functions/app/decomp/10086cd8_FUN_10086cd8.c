/* FUN_10086cd8 @ 0x10086cd8 */

void FUN_10086cd8(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [20];
  
  if ((param_1 == 0) && (param_1 = FUN_10092f04(), param_1 == 0)) {
    FUN_10094174(2,PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_10086d34,0xcc,
                 PTR_s_lv_disp_set_bg_opa_10086d30,PTR_s_no_display_registered_10086d2c);
  }
  else {
    *(undefined1 *)(param_1 + 0x29) = param_2;
    iVar1 = FUN_10092f10(param_1);
    iVar2 = FUN_10092f2c(param_1);
    FUN_1012a82e(auStack_20,0,0,iVar1 + -1,iVar2 + -1);
    FUN_1008b9e4(param_1,auStack_20);
  }
  return;
}

