/* FUN_1013c736 @ 0x1013c736 */

undefined4 FUN_1013c736(int param_1,uint *param_2)

{
  uint uVar1;
  
  for (uVar1 = 0;
      (uVar1 < *(int *)(param_1 + 0xa0) - 4U &&
      (*(char *)(*(int *)(param_1 + 0x9c) + uVar1 + 4) == -0x56)); uVar1 = uVar1 + 1) {
  }
  *param_2 = uVar1;
  return 0;
}

