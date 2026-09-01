/* FUN_10012c18 @ 0x10012c18 */

void FUN_10012c18(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_10012c7c;
  if (param_2 == 0) {
    FUN_100e800c(0,1,0xffffffff,0,param_1,0,param_3);
    if (*DAT_10012c7c == iVar2) {
      uVar1 = 1;
      goto LAB_10012c4c;
    }
LAB_10012c40:
    FUN_1013cdc0();
  }
  else {
    FUN_100e800c(0,2,0xffffffff,0,param_1,param_2,param_3);
    if (*DAT_10012c7c != iVar2) goto LAB_10012c40;
  }
  param_2 = 0;
  uVar1 = 2;
LAB_10012c4c:
  FUN_100e800c(1,uVar1,0xffffffff,param_2);
  return;
}

