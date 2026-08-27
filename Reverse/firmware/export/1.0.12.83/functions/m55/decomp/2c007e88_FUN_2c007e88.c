/* FUN_2c007e88 @ 0x2c007e88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c007e88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_2c0078a4(param_1,param_1,param_3,param_4,param_4);
  uVar1 = (uint)(uVar2 >> 0x20);
  if ((int)uVar2 == 0) {
    if (uVar2 < 0x1400000000) {
      _DAT_50000038 = 1 << (uVar1 & 0xff);
    }
    else if (uVar2 < 0x3000000000) {
      _DAT_50000040 = 1 << (uVar1 - 0x14 & 0xff);
    }
    else if (uVar2 < 0x5000000000) {
      _DAT_50000048 = 1 << (uVar1 - 0x30 & 0xff);
    }
    else if (uVar2 < 0x6100000000) {
      _DAT_50000174 = 1 << (uVar1 - 0x50 & 0xff);
    }
    else {
      if (0x72ffffffff < uVar2) {
        if (uVar2 < 0x8600000000) {
          *(int *)(DAT_2c0078a0 + 0x14) = 1 << (uVar1 - 0x73 & 0xff);
        }
        else {
          if (0x90ffffffff < uVar2) {
            if (uVar1 == 0x91) {
              _DAT_40000038 = 8;
            }
            else {
              _DAT_40000048 = 2;
            }
            DataSynchronizationBarrier(0xf);
            return 0;
          }
          *(int *)(DAT_2c0078a0 + 0xcc) = 1 << (uVar1 - 0x86 & 0xff);
        }
        DataSynchronizationBarrier(0xf);
        return 0;
      }
      _DAT_5000018c = 1 << (uVar1 - 0x61 & 0xff);
    }
    DataSynchronizationBarrier(0xf);
    return 0;
  }
  if (uVar2 < 0x1400000000) {
    _DAT_50000028 = 1 << (uVar1 & 0xff);
    DataSynchronizationBarrier(0xf);
  }
  else {
    if (uVar2 < 0x3000000000) {
      _DAT_5000002c = 1 << (uVar1 - 0x14 & 0xff);
    }
    else if (uVar2 < 0x5000000000) {
      _DAT_50000030 = 1 << (uVar1 - 0x30 & 0xff);
    }
    else if (uVar2 < 0x6100000000) {
      _DAT_5000016c = 1 << (uVar1 - 0x50 & 0xff);
    }
    else if (uVar2 < 0x7300000000) {
      _DAT_50000184 = 1 << (uVar1 - 0x61 & 0xff);
    }
    else if (uVar2 < 0x8600000000) {
      *(int *)(DAT_2c007f70 + 0xc) = 1 << (uVar1 - 0x73 & 0xff);
    }
    else if (uVar2 < 0x9100000000) {
      *(int *)(DAT_2c007f70 + 0xc4) = 1 << (uVar1 - 0x86 & 0xff);
    }
    else if (uVar1 == 0x91) {
      _DAT_40000028 = 8;
    }
    else {
      _DAT_40000030 = 2;
    }
    DataSynchronizationBarrier(0xf);
  }
  if (uVar2 < 0x7300000000) {
    DataSynchronizationBarrier(0xf);
    return 0;
  }
  DataSynchronizationBarrier(0xf);
  return 0;
}

