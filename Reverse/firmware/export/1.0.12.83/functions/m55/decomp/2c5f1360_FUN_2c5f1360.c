/* FUN_2c5f1360 @ 0x2c5f1360 */

int FUN_2c5f1360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c5fefc8(DAT_2c5f1388,param_1,param_3,param_1,param_4);
  FUN_2c5ff0b8();
  *(undefined4 *)(iVar1 + 0x28) = param_2;
  *(undefined1 *)(iVar1 + 0x25) = 2;
  uVar2 = FUN_2c5e2e58(DAT_2c5f138c);
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  return iVar1;
}

