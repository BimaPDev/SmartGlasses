/* FUN_2c623f94 @ 0x2c623f94 */

undefined4 FUN_2c623f94(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_2c62bea8();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_2c62c0d8(param_1,param_2,0x20,0,param_4);
  if (*(int *)(param_2 + 8) != 0) {
    iVar1 = FUN_2c62be98(0x40,0x400);
    *(int *)(param_1 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)(param_2 + 0xc) != 0)) {
      return 0x53;
    }
    FUN_2c62c0d8(iVar1,*(undefined4 *)(param_2 + 8),*(int *)(param_2 + 0xc) << 2);
  }
  return 0;
}

