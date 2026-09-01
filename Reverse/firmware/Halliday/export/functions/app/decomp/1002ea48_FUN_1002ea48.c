/* FUN_1002ea48 @ 0x1002ea48 */

void FUN_1002ea48(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)PTR_DAT_1002eab4;
  iVar5 = param_1;
  if (param_1 != 0) goto LAB_1002ea68;
  do {
    uVar1 = 0;
    while( true ) {
      if (*(int *)PTR_DAT_1002eab4 == iVar3) {
        return;
      }
      FUN_1013cdc0(uVar1);
LAB_1002ea68:
      iVar2 = FUN_100ee9e0();
      if (iVar2 == param_1) break;
      (**(code **)(PTR_DAT_1002eab8 + 8))();
      iVar2 = FUN_10139636(param_1,0);
      if (iVar2 < 0) {
        uVar4 = ((int)PTR_DAT_1002eac0 - (int)PTR_DAT_1002eabc) * 0x20 & 0xff00;
        FUN_100a5b78(uVar4 | 0xc0031,PTR_s_ui_jump_to_view_1002eac4,
                     PTR_s_waring__ui_jump_to_view__view_st_1002eac8,uVar4,iVar5);
        FUN_100eea1c();
        FUN_10139636(param_1,0);
      }
      uVar1 = 1;
    }
  } while( true );
}

