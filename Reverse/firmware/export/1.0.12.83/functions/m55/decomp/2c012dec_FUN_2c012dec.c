/* FUN_2c012dec @ 0x2c012dec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c012dec(uint param_1,int param_2,int *param_3,char *param_4)

{
  ushort uVar1;
  ushort uStack_16;
  int iStack_14;
  
  iStack_14 = *param_3;
  if (*param_4 == '\x01') {
    FUN_2c008e4c(0x20,&uStack_16,0);
    uVar1 = (ushort)(1 << (param_1 & 0xff)) & 0xff;
    if (param_2 == 0) {
      uStack_16 = uStack_16 & ~uVar1;
    }
    else {
      uStack_16 = uVar1 | uStack_16;
    }
    uStack_16 = uStack_16 | 0x100;
    FUN_2c008f74(0x20);
  }
  if (*_DAT_2c012e4c == iStack_14) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

