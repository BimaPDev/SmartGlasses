/* FUN_1012a7b8 @ 0x1012a7b8 */

int FUN_1012a7b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_1012b19a(*(undefined4 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x2c),0,0x400,
                       param_2,param_3);
  iVar2 = FUN_1012b0b6(uVar1,0,900,0x3b6,0x400);
  return *(int *)(param_1 + 0x20) +
         ((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) * iVar2 >> 10);
}

