/* FUN_2c012c18 @ 0x2c012c18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c012c18(undefined4 param_1,undefined4 param_2,int *param_3,byte *param_4)

{
  ushort uStack_e;
  int iStack_c;
  
  iStack_c = *param_3;
  if (*param_4 - 1 < 2) {
    FUN_2c008e4c(0x1e,&uStack_e,0);
    uStack_e = uStack_e | 4;
    FUN_2c008f74(0x1e);
    FUN_2c008e4c(0x25,&uStack_e);
    uStack_e = uStack_e & 0xe7ff;
    FUN_2c008f74(0x25);
    FUN_2c008e4c(0x101,&uStack_e);
    uStack_e = uStack_e & 0xffdf;
    FUN_2c008f74(0x101);
  }
  if (*_DAT_2c012ca8 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

