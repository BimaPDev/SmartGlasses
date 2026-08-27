/* FUN_2c5f1014 @ 0x2c5f1014 */

int FUN_2c5f1014(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c5fefc8(DAT_2c5f103c,param_1);
  FUN_2c5ff0b8();
  FUN_2c627e28(iVar1,1);
  *(undefined4 *)(iVar1 + 0x28) = 1;
  *(undefined1 *)(iVar1 + 0x25) = 5;
  return iVar1;
}

