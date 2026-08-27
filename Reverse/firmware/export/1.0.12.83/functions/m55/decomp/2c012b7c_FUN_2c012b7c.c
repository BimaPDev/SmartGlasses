/* FUN_2c012b7c @ 0x2c012b7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c012b7c(void)

{
  byte *pbVar1;
  ushort uStack_10;
  ushort uStack_e;
  int iStack_c;
  
  pbVar1 = _DAT_2c012c10;
  iStack_c = *_DAT_2c012c0c;
  if (*_DAT_2c012c10 - 1 < 2) {
    FUN_2c008e4c(0x101,&uStack_10);
    uStack_10 = uStack_10 | 0x20;
    FUN_2c008f74(0x101);
    FUN_2c008e4c(0x25,&uStack_10);
    uStack_10 = uStack_10 | 0x1800;
    FUN_2c008f74(0x25);
    if (*pbVar1 - 1 < 2) {
      FUN_2c008e4c(0x1e,&uStack_e);
      uStack_e = uStack_e & 0xfffb;
      FUN_2c008f74(0x1e);
    }
  }
  if (*_DAT_2c012c0c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

