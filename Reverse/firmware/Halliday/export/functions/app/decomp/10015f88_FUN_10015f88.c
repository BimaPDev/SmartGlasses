/* FUN_10015f88 @ 0x10015f88 */

void FUN_10015f88(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_1001600c;
  iVar3 = *DAT_10016008;
  if (*DAT_1001600c == 0) {
    iVar2 = thunk_FUN_1009f30c(0x268,DAT_10016010,param_3,0,param_1);
    *piVar1 = iVar2;
    if (iVar2 != 0) goto LAB_10015fdc;
    if (*DAT_10016008 == iVar3) goto LAB_10015fba;
  }
  else {
LAB_10015fdc:
    if (*DAT_10016024 < 3) {
      iVar2 = *piVar1;
      *DAT_10016024 = *DAT_10016024 + 1;
      FUN_10016384(iVar2,10);
    }
    if (*DAT_10016008 == iVar3) {
      FUN_10015b7c(param_1);
      return;
    }
  }
  FUN_1013cdc0();
LAB_10015fba:
  FUN_100a5b78((DAT_10016018 - DAT_10016014) * 0x20 & 0xff00U | 0xfc0011,DAT_10016020,DAT_1001601c);
  return;
}

