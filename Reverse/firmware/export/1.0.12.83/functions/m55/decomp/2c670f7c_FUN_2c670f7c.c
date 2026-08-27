/* FUN_2c670f7c @ 0x2c670f7c */

undefined4 FUN_2c670f7c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_s1;
  int extraout_s1_00;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_30 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  uVar3 = FUN_2c670e24(param_1,&local_30);
  uVar4 = FUN_2c670e24(param_2,&iStack_2c);
  iVar1 = (local_30 - iStack_2c) + (*(int *)(param_1 + 0x10) - *(int *)(param_2 + 0x10)) * 0x20;
  if (iVar1 < 1) {
    iVar1 = extraout_s1_00 + iVar1 * -0x100000;
    iVar2 = extraout_s1;
  }
  else {
    iVar2 = extraout_s1 + iVar1 * 0x100000;
    iVar1 = extraout_s1_00;
  }
  return SUB84((double)CONCAT44(iVar2,uVar3) / (double)CONCAT44(iVar1,uVar4),0);
}

