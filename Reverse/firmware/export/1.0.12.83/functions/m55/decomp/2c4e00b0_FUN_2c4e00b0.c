/* FUN_2c4e00b0 @ 0x2c4e00b0 */

undefined4 FUN_2c4e00b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_2c4ddee8();
  if (iVar1 != 0) {
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x1c);
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) - *(int *)(param_2 + 0xc);
      if (*(int *)(param_2 + 0xc) == 0) {
        *(undefined4 *)(param_2 + 8) = 0;
      }
    }
    return 1;
  }
  return 0;
}

