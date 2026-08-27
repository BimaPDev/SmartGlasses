/* FUN_2c59663c @ 0x2c59663c */

undefined1 FUN_2c59663c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_2c5479e0(iVar1,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c),
                           *(int *)(param_1 + 0x40),iVar1,param_4), iVar1 == 0)) {
    return *DAT_2c59a680;
  }
  return 0;
}

