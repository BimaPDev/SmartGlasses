/* FUN_2c64f9d4 @ 0x2c64f9d4 */

undefined4 *
FUN_2c64f9d4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  iVar1 = param_1[4];
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x20) = param_3;
  *(undefined4 *)(iVar1 + 0x28) = param_3;
  *(undefined4 *)(iVar1 + 0x30) = param_3;
  FUN_2c64f89e(param_1 + 3);
  func_0x2c64dfb0(param_1);
  return param_1;
}

