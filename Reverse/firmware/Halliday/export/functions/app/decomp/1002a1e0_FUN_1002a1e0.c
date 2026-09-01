/* FUN_1002a1e0 @ 0x1002a1e0 */

void FUN_1002a1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  iVar2 = *DAT_1002a228;
  FUN_10126e5a(param_1,param_2,0,0,param_1,iVar2,param_3);
  FUN_10126e64(param_1,param_2,0);
  FUN_10126e46(param_1,param_2,0);
  if (*DAT_1002a228 != iVar2) {
    FUN_1013cdc0();
  }
  uVar1 = FUN_1008a718(param_1,0,param_2,0,param_1,param_2,unaff_r4,unaff_r5);
  FUN_100949b4(uVar1,0x11,param_2);
  FUN_1008a83c(param_1,0,0x11);
  return;
}

