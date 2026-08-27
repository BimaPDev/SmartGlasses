/* FUN_2c626cf4 @ 0x2c626cf4 */

int FUN_2c626cf4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c5fefc8(param_1,param_4);
  FUN_2c5ff0b8();
  *(undefined4 *)(iVar1 + 0x78) = param_2;
  *(undefined4 *)(iVar1 + 0x7c) = param_3;
  return iVar1;
}

