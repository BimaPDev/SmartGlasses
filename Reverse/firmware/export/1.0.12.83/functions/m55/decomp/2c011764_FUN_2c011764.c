/* FUN_2c011764 @ 0x2c011764 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c011764(uint param_1,undefined4 param_2,int *param_3,char *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uStack_16;
  int iStack_14;
  
  iStack_14 = *param_3;
  if (*param_4 == '\x02') {
    if (param_1 < 0x5b) {
      uVar2 = 299;
      uVar1 = (ushort)(1 << (param_1 - 0x53 & 0xff));
    }
    else if (param_1 < 99) {
      uVar2 = 0x130;
      uVar1 = (ushort)(1 << (param_1 - 0x5b & 0xff));
    }
    else if (param_1 < 0x6b) {
      uVar2 = 0x133;
      uVar1 = (ushort)(1 << (param_1 - 99 & 0xff));
    }
    else if (param_1 < 0x73) {
      uVar2 = 0x137;
      uVar1 = (ushort)(1 << (param_1 - 0x6b & 0xff));
    }
    else if (param_1 < 0x7b) {
      uVar2 = 0x13a;
      uVar1 = (ushort)(1 << (param_1 - 0x73 & 0xff));
    }
    else if (param_1 < 0x83) {
      uVar2 = 0x13e;
      uVar1 = (ushort)(1 << (param_1 - 0x7b & 0xff));
    }
    else if (param_1 < 0x8b) {
      uVar2 = 0x141;
      uVar1 = (ushort)(1 << (param_1 - 0x83 & 0xff));
    }
    else {
      uVar2 = 0x144;
      uVar1 = (ushort)(1 << (param_1 - 0x8b & 0xff));
    }
    FUN_2c008e4c(uVar2,&uStack_16,0);
    uStack_16 = uStack_16 | uVar1;
    FUN_2c008f74(uVar2);
  }
  if (*_DAT_2c011844 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

