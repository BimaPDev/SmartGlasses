/* FUN_2c0100d0 @ 0x2c0100d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0100d0(uint param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  ushort uStack_26;
  int iStack_24;
  
  uVar3 = _DAT_2c010230;
  pbVar2 = _DAT_2c010228;
  iStack_24 = *_DAT_2c010224;
  bVar1 = *_DAT_2c010228;
  if (bVar1 == 0) {
    if ((param_1 & 0x80000) != 0) {
      param_1 = param_1 & 0xffe7ffff | 0x100000;
    }
    if ((param_1 & 0x400000) == 0) {
      uVar4 = 100;
    }
    else {
      uVar4 = 100;
      param_1 = param_1 & 0xffb7ffff | 0x80000;
    }
joined_r0x2c010126:
    if (param_2 < 0x641) {
      uVar6 = 0xc0;
      goto LAB_2c01014c;
    }
  }
  else {
    if (bVar1 == 1) {
      if (*_DAT_2c01022c == '\x01') {
        uVar4 = 0x78;
      }
      else {
        uVar4 = 100;
      }
      goto joined_r0x2c010126;
    }
    if (param_2 < 0x641) {
      if (bVar1 == 2) {
        uVar6 = 0xe0;
      }
      else {
        uVar6 = 0xc0;
      }
      goto LAB_2c01014c;
    }
    uVar4 = 100;
  }
  uVar7 = uVar4 >> 1;
  if (param_2 < uVar7 + 0x76c) {
    if (bVar1 == 2) {
      iVar5 = 7;
    }
    else {
      iVar5 = 6;
    }
    uVar6 = (ushort)((iVar5 + (((param_2 - 0x640) + uVar7) / uVar4 & 0xff) & 0xff) << 5);
  }
  else if (param_2 < uVar7 + 0x9c4) {
    if (bVar1 == 1) {
      iVar5 = 9;
    }
    else {
      iVar5 = 10;
    }
    uVar6 = (ushort)((iVar5 + (((param_2 - 2000) + uVar7) / uVar4 & 0xff) & 0xff) << 5);
  }
  else {
    if (bVar1 == 1) {
      iVar5 = 0x10;
    }
    else {
      iVar5 = 0x14;
    }
    uVar4 = iVar5 + (((param_2 - 0xa28) + uVar7) / uVar4 & 0xff) & 0xff;
    if (0x1e < uVar4) {
      uVar4 = 0x1f;
    }
    uVar6 = (ushort)(uVar4 << 5);
  }
LAB_2c01014c:
  uVar4 = 0;
  do {
    if ((0x40000 << (uVar4 & 0xff) & param_1) != 0) {
      if ((uVar4 == 2) && (*pbVar2 - 1 < 2)) {
        uVar7 = 0x38;
      }
      else {
        uVar7 = uVar4 + 0x3b & 0xffff;
      }
      FUN_2c008e4c(uVar7,&uStack_26);
      uStack_26 = uStack_26 & (ushort)uVar3 | uVar6 | 0x1e;
      FUN_2c008f74(uVar7);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 3);
  if (*_DAT_2c010224 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return;
}

