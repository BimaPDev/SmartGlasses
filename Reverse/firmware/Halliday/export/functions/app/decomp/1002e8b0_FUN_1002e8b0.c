/* FUN_1002e8b0 @ 0x1002e8b0 */

void FUN_1002e8b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  
  iVar3 = *DAT_1002e8fc;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_1002e858();
    uVar2 = FUN_1002e82c(param_1);
    uVar1 = FUN_10094d74(param_2,uVar1,uVar2,param_3,param_4,0);
  }
  while (*DAT_1002e8fc != iVar3) {
    FUN_1013cdc0(uVar1);
    uVar1 = extraout_r1;
  }
  return;
}

