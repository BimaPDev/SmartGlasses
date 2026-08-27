/* FUN_2c49d4ac @ 0x2c49d4ac */

undefined4 FUN_2c49d4ac(void)

{
  int iVar1;
  
  iVar1 = DAT_2c49d4c4;
  if (*(int *)(DAT_2c49d4c4 + 0x48) == 1) {
    FUN_2c49c7b0();
    return *(undefined4 *)(iVar1 + 0x34);
  }
  return 0xffffffff;
}

