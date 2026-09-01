/* FUN_1012845c @ 0x1012845c */

void FUN_1012845c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int extraout_r1;
  
  if ((param_1 != 0) &&
     (uVar2 = *(byte *)(param_1 + 7) & 0x40, (*(byte *)(param_1 + 7) & 0x40) == 0)) {
    while ((int)uVar2 < param_4) {
      uVar1 = FUN_1008f514(*(undefined4 *)(*(int *)(param_1 + 0x14) + uVar2 * 4));
      *(undefined2 *)(*(int *)(param_1 + 8) + extraout_r1 * 2) = uVar1;
      uVar2 = extraout_r1 + 1;
    }
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 0x40;
  }
  return;
}

