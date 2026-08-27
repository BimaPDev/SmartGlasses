/* FUN_2c011ad4 @ 0x2c011ad4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c011ad4(int param_1,int param_2,uint *param_3,char *param_4)

{
  undefined1 uVar1;
  int extraout_r1;
  uint uVar2;
  ushort uStack_16;
  uint uStack_14;
  
  uStack_14 = *param_3;
  if (*param_4 == '\x02') {
    if ((param_1 - 0x53U & 0xff) < 0x3c) {
      uVar2 = ((int)(param_1 - 0x53U) >> 3) << 1;
      FUN_2c008e4c(0x129,&uStack_16);
      uStack_16 = uStack_16 & ~(ushort)(3 << (uVar2 & 0xff)) | (ushort)(param_2 << (uVar2 & 0xff));
      FUN_2c008f74(0x129);
      uVar1 = 0;
      param_2 = extraout_r1;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  if ((*_DAT_2c011b48 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8(uVar1,param_2,*_DAT_2c011b48 ^ uStack_14,0);
}

