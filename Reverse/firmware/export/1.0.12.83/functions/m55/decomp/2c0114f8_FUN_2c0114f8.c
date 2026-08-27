/* FUN_2c0114f8 @ 0x2c0114f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0114f8(ushort param_1,undefined4 param_2,int *param_3,byte *param_4)

{
  ushort uStack_e;
  int iStack_c;
  
  iStack_c = *param_3;
  if (*param_4 - 1 < 2) {
    FUN_2c008e4c(0x6c,&uStack_e,0);
    uStack_e = param_1 & 0xf | uStack_e & 0xfff0;
    FUN_2c008f74(0x6c);
  }
  if (*_DAT_2c01154c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

