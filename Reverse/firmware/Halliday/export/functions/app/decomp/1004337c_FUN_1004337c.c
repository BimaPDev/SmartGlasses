/* FUN_1004337c @ 0x1004337c */

void FUN_1004337c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_100433e0;
  iVar1 = FUN_10112e84(DAT_100433e4,param_2,param_3,0,param_1,param_1,param_3);
  if (iVar1 == 0) {
    if (*DAT_100433e0 == iVar2) goto LAB_100433a2;
  }
  else if (iVar2 == *DAT_100433e0) {
                    /* WARNING: Could not recover jumptable at 0x100433dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(iVar1 + 8) + 8))(iVar1,param_1);
    return;
  }
  FUN_1013cdc0();
LAB_100433a2:
  FUN_100a5b78((DAT_100433ec - DAT_100433e8) * 0x20 & 0xff00U | 0xf0011,DAT_100433f4,DAT_100433f0);
  return;
}

