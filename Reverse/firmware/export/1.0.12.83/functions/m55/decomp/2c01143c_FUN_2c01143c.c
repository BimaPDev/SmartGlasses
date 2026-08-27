/* FUN_2c01143c @ 0x2c01143c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c01143c(int param_1,undefined4 param_2,int *param_3,byte *param_4)

{
  ushort uStack_e;
  int iStack_c;
  
  iStack_c = *param_3;
  if (*param_4 - 1 < 2) {
    FUN_2c008e4c(0x6c,&uStack_e,0);
    if (param_1 == 0) {
      uStack_e = uStack_e & 0xdfff;
    }
    else {
      uStack_e = uStack_e | 0x2000;
    }
    FUN_2c008f74(0x6c);
  }
  if (*_DAT_2c011494 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

