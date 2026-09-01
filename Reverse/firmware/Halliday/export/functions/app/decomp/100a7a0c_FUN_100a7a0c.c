/* FUN_100a7a0c @ 0x100a7a0c */

undefined4 FUN_100a7a0c(void)

{
  undefined4 uVar1;
  
  if (*DAT_100a7a20 != 0) {
    uVar1 = FUN_1011dbf4(*DAT_100a7a20,0xffffffff);
    return uVar1;
  }
  return 0xfffffffd;
}

