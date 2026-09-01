/* FUN_100e4cf4 @ 0x100e4cf4 */

undefined4 FUN_100e4cf4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar1 = FUN_100e4bd8();
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100e4d38 - DAT_100e4d34) * 0x20 & 0xff00U | 0xc00011,DAT_100e4d3c);
    return 0xfffffffb;
  }
  iVar2 = FUN_101386ac(iVar1,0,0,param_2,param_3 ^ 1,param_2,unaff_r4,unaff_lr);
  if (iVar2 != 0) {
    uVar3 = FUN_100e40e4(iVar1,iVar2);
    return uVar3;
  }
  return 0xfffffff4;
}

