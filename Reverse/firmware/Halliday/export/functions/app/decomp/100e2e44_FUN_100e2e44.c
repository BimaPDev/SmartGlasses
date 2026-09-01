/* FUN_100e2e44 @ 0x100e2e44 */

void FUN_100e2e44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = ((int)PTR_DAT_100e2e88 - (int)PTR_DAT_100e2e84) * 0x20 & 0xff00;
  FUN_100a5b78(uVar2 | 0x630011,PTR_s_SLC_error__disconnecting_100e2e8c);
  iVar1 = FUN_10137d14(param_1 + -0xd4);
  if (iVar1 != 0) {
    FUN_100a5b78(uVar2 | 0x660011,PTR_s_Rfcomm__Unable_to_disconnect___d_100e2e90,-iVar1,param_4);
    return;
  }
  return;
}

