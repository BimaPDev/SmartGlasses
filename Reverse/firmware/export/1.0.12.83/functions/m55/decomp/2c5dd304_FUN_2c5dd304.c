/* FUN_2c5dd304 @ 0x2c5dd304 */

undefined4 FUN_2c5dd304(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    return 0;
  }
  if (iVar1 != *(int *)(param_1 + 0x28)) {
    return *(undefined4 *)(iVar1 + -4);
  }
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + -4) + 0x1fc);
}

