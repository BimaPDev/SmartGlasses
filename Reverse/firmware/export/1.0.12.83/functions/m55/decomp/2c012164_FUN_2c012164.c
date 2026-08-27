/* FUN_2c012164 @ 0x2c012164 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c012164(int param_1,undefined4 param_2,uint *param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  ushort uStack_10;
  ushort uStack_e;
  uint uStack_c;
  
  uStack_c = *param_3;
  if (*param_4 == '\x02') {
    FUN_2c008e4c(3,&uStack_e,0);
    FUN_2c008e4c(0x62,&uStack_10);
    if (param_1 == 0) {
      uStack_e = uStack_e & 0xcfff;
      uStack_10 = (ushort)(((uint)uStack_10 << 0x11) >> 0x11);
    }
    else {
      uStack_e = uStack_e | 0x3000;
      uStack_10 = uStack_10 | 0x8000;
    }
    FUN_2c008f74(0x62);
    FUN_2c008f74(3,uStack_e);
    uVar1 = 0;
    param_2 = extraout_r1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if ((*_DAT_2c0121e8 ^ uStack_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8(uVar1,param_2,*_DAT_2c0121e8 ^ uStack_c,0);
}

