/* FUN_2c5207a0 @ 0x2c5207a0 */

int FUN_2c5207a0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c62e4a8(*(undefined4 *)(param_1 + 0x30),param_4,*(undefined4 *)(param_1 + 0x2c),
                       param_4,0x400);
  uVar1 = FUN_2c62e2d0(uVar1,*param_2,param_2[1],param_2[2],param_2[3]);
  iVar2 = FUN_2c62e27c(uVar1,0,param_2[1],param_2[3],0x400);
  return *(int *)(param_1 + 0x20) +
         ((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) * iVar2 >> 10);
}

