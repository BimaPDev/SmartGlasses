/* FUN_10041164 @ 0x10041164 */

undefined4 FUN_10041164(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *DAT_100411d0;
  iVar1 = (**(code **)(*(int *)(DAT_100411d4 + 0x30) + 0x10))();
  if (iVar1 != 0) {
    FUN_100a5b78((DAT_100411d8 - DAT_100411dc) * 0x20 & 0xff00U | 0x2b0031,DAT_100411e4,DAT_100411e0
                 ,DAT_100411dc,param_1,iVar3,param_3);
  }
  iVar1 = FUN_100efda8();
  if ((iVar1 == 5) || (iVar1 = (**(code **)(DAT_100411e8 + 0xc))(), iVar1 != 0)) {
    if (*DAT_100411d0 == iVar3) {
      return 1;
    }
  }
  else if (*DAT_100411d0 == iVar3) goto LAB_100411b4;
  FUN_1013cdc0();
LAB_100411b4:
  uVar2 = FUN_1004b7d8();
  return uVar2;
}

