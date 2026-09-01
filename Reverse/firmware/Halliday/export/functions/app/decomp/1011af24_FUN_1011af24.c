/* FUN_1011af24 @ 0x1011af24 */

void FUN_1011af24(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  
  sVar2 = *(short *)(*(int *)(param_1 + 8) + 0x3e);
  iVar3 = *(int *)(param_1 + 8);
  sVar1 = *(short *)(iVar3 + 0x3e);
  sVar5 = (*(short *)(*(int *)(param_1 + 8) + 0x3c) - sVar2) + sVar1;
  FUN_1011ad32(iVar3 + 0x20,sVar1,*(undefined2 *)(iVar3 + 0x3c),sVar1,sVar2);
  iVar3 = FUN_1011ad1c(*(int *)(param_1 + 8) + 0x20,*(undefined2 *)(*(int *)(param_1 + 8) + 0x3e),
                       sVar5);
  uVar4 = FUN_1011acfe(*(int *)(param_1 + 8) + 0x20,*(undefined2 *)(*(int *)(param_1 + 8) + 0x3e),
                       sVar5);
  FUN_100596bc(param_1,-iVar3);
  FUN_100596dc(param_1,uVar4);
  *(short *)(*(int *)(param_1 + 8) + 0x3e) = sVar5;
  return;
}

