/* FUN_100537d8 @ 0x100537d8 */

int FUN_100537d8(int param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int unaff_r5;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *DAT_10053854;
  local_20 = param_3;
  if ((param_1 != 0) && (param_2 != (code *)0x0)) {
    unaff_r5 = FUN_100ed61c(2,0x4000,DAT_10053858,0,param_1,param_2);
    if (unaff_r5 != 0) {
      local_20 = 0;
      iVar1 = FUN_10053684(param_1,unaff_r5,0x4000,&local_20,param_4);
      if (iVar1 == 0) goto LAB_10053832;
      while( true ) {
        FUN_100ed77c(2,unaff_r5);
LAB_10053824:
        if (*DAT_10053854 == local_1c) break;
        FUN_1013cdc0();
LAB_10053832:
        iVar1 = (*param_2)(unaff_r5,local_20,param_3);
      }
      return iVar1;
    }
    iVar1 = -0xc;
    goto LAB_10053824;
  }
  iVar1 = -0x16;
  goto LAB_10053824;
}

