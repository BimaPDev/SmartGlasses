/* FUN_2c5327c8 @ 0x2c5327c8 */

int FUN_2c5327c8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = DAT_2c532878;
  iVar3 = *DAT_2c532878;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (iVar3 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  iVar3 = FUN_2c47245c(0,0x20);
  iVar4 = *piVar1;
  *(int *)(param_1 + 4) = iVar3;
  uVar5 = *(int *)(param_1 + 8) - 1U >> 1;
  iVar6 = iVar3 + uVar5 * 4;
  if (iVar4 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  uVar2 = FUN_2c47245c(0,500);
  *(undefined4 *)(iVar3 + uVar5 * 4) = uVar2;
  *(int *)(param_1 + 0x18) = iVar6;
  iVar4 = *(int *)(iVar3 + uVar5 * 4);
  *(int *)(param_1 + 0x28) = iVar6;
  *(int *)(param_1 + 0x10) = iVar4;
  *(int *)(param_1 + 0x14) = iVar4 + 500;
  iVar3 = *(int *)(iVar3 + uVar5 * 4);
  *(int *)(param_1 + 0xc) = iVar4;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(int *)(param_1 + 0x24) = iVar3 + 500;
  *(int *)(param_1 + 0x1c) = iVar3;
  *(int *)(param_1 + 0x20) = iVar3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_2c530730(param_1 + 0x2c);
  return param_1;
}

