/* FUN_2c528c60 @ 0x2c528c60 */

int FUN_2c528c60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c62e4a8(*(undefined4 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x2c),0,0x400);
  uVar1 = FUN_2c62e2d0(uVar1,0,0,0,0x400);
  iVar2 = FUN_2c62e27c(uVar1,0,0,0x400,0x400);
  return *(int *)(param_1 + 0x20) +
         ((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) * iVar2 >> 10);
}

