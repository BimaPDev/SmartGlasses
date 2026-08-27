/* FUN_2c5cfde8 @ 0x2c5cfde8 */

int FUN_2c5cfde8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c62e4a8(*(undefined4 *)(param_2 + 0x30),0,*(undefined4 *)(param_2 + 0x2c),0,0x400);
  uVar1 = FUN_2c62e2d0(uVar1,*param_1,param_1[1],param_1[2],param_1[3]);
  iVar2 = FUN_2c62e27c(uVar1,0,param_1[1],param_1[3],0x400);
  return *(int *)(param_2 + 0x20) +
         ((*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x20)) * iVar2 >> 10);
}

