/* FUN_1008ca4c @ 0x1008ca4c */

int FUN_1008ca4c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = DAT_1008ca88 + iVar1 * 8;
    if (*(int *)(DAT_1008ca88 + iVar1 * 8) == 0) {
      *(undefined4 *)(DAT_1008ca88 + iVar1 * 8) = param_1;
      *(undefined4 *)(iVar2 + 4) = param_2;
      return (int)(short)((ushort)iVar1 & 0xff);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  FUN_10094174(2,PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_1008ca94,0x5a,
               PTR_s_lv_draw_mask_add_1008ca90,PTR_s_lv_mask_add__no_place_to_add_the_1008ca8c,
               param_2);
  return -1;
}

