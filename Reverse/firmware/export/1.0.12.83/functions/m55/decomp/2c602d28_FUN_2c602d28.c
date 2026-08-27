/* FUN_2c602d28 @ 0x2c602d28 */

int FUN_2c602d28(void)

{
  int iVar1;
  
  iVar1 = FUN_2c62c938(DAT_2c602d54);
  if (iVar1 != 0) {
    FUN_2c62c928(iVar1,4);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) & 0xf0 | 0xc;
  }
  return iVar1;
}

