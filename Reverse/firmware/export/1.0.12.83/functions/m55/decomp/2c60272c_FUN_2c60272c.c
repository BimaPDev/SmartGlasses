/* FUN_2c60272c @ 0x2c60272c */

/* WARNING: Removing unreachable block (ram,0x2c62ee70) */

undefined4 FUN_2c60272c(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_2c62a470();
    iVar1 = FUN_2c5feea8();
  }
  else {
    FUN_2c604188();
    iVar1 = FUN_2c5feea8();
  }
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x10);
  }
  return *(undefined4 *)(DAT_2c62ee78 + 0x44);
}

