/* FUN_10041b10 @ 0x10041b10 */

void FUN_10041b10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_10041b40;
  FUN_1009eeac(DAT_10041b44,*DAT_10041b48,param_3,DAT_10041b48,param_1,iVar1,param_3);
  if (*DAT_10041b40 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_10041b44);
  return;
}

