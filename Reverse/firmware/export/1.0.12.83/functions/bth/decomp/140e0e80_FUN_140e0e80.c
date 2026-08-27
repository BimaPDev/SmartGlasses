/* FUN_140e0e80 @ 0x140e0e80 */

undefined4 FUN_140e0e80(int param_1,int param_2,undefined4 param_3)

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
  uVar3 = FUN_140e0d28(param_1,&local_30);
  uVar4 = FUN_140e0d28(param_2,&iStack_2c);
  iVar1 = (local_30 - iStack_2c) + (*(int *)(param_1 + 0x10) - *(int *)(param_2 + 0x10)) * 0x20;
  if (iVar1 < 1) {
    iVar2 = extraout_s1_00 + iVar1 * -0x100000;
    iVar1 = extraout_s1;
  }
  else {
    iVar1 = extraout_s1 + iVar1 * 0x100000;
    iVar2 = extraout_s1_00;
  }
  uVar3 = FUN_140e3a54(uVar3,iVar1,uVar4,iVar2);
  return uVar3;
}

