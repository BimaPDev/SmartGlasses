/* FUN_2c011938 @ 0x2c011938 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c011938(uint param_1,undefined4 param_2,uint *param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  uint uVar2;
  ushort uStack_e;
  uint uStack_c;
  
  uStack_c = *param_3;
  if (*param_4 == '\x02') {
    if (param_1 < 99) {
      uVar1 = 0x145;
      uVar2 = param_1 - 0x53 & 0xffff;
    }
    else if (param_1 < 0x73) {
      uVar1 = 0x146;
      uVar2 = param_1 - 99 & 0xffff;
    }
    else if (param_1 < 0x83) {
      uVar1 = 0x147;
      uVar2 = param_1 - 0x73 & 0xffff;
    }
    else {
      uVar1 = 0x148;
      uVar2 = param_1 - 0x83 & 0xffff;
    }
    FUN_2c008e4c(uVar1,&uStack_e,0);
    param_2 = extraout_r1;
    if ((1 << (uVar2 & 0xff) & (uint)uStack_e) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0xf;
  }
  if ((*_DAT_2c0119bc ^ uStack_c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8(uVar1,param_2,*_DAT_2c0119bc ^ uStack_c,0);
  }
  return;
}

