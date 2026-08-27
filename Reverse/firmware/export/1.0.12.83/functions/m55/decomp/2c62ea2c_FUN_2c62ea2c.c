/* FUN_2c62ea2c @ 0x2c62ea2c */

int FUN_2c62ea2c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c62e4a8(*(undefined4 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x2c),0,0x400);
  iVar2 = FUN_2c62e27c(uVar1,0,900,0x3b6,0x400);
  return *(int *)(param_1 + 0x20) +
         ((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) * iVar2 >> 10);
}

