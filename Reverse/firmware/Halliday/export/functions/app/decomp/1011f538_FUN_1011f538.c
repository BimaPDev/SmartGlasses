/* FUN_1011f538 @ 0x1011f538 */

undefined4 FUN_1011f538(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10) + 0x4c;
  FUN_10113cfc(iVar2,param_2,0xffffffff,0xffffffff,param_1);
  uVar1 = FUN_1005f5f4(param_2,param_3,param_4);
  FUN_10113e2c(iVar2);
  return uVar1;
}

