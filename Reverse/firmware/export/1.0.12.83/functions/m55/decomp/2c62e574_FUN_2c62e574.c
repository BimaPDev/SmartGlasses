/* FUN_2c62e574 @ 0x2c62e574 */

int FUN_2c62e574(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c62e4a8(*(undefined4 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x2c),0,0x400);
  return *(int *)(param_1 + 0x20) +
         ((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) * iVar1 >> 10);
}

