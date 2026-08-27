/* FUN_2c010d20 @ 0x2c010d20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c010d20(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  ushort uStack_16;
  int iStack_14;
  
  puVar2 = _DAT_2c010e40;
  iStack_14 = *_DAT_2c010e38;
  if (param_1 - 0x50U < 2) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = getBasePriority();
    }
    if (iVar3 != 0x40) {
      param_3 = 0x2c010d66;
      *_DAT_2c010e40 = 0x2c010d66;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    FUN_2c008e4c(0x3a,&uStack_16,param_3,0x40);
    if (param_1 == 0x50) {
      uStack_16 = uStack_16 & 0xebff;
      if (param_2 == 1) {
        uStack_16 = uStack_16 | 0x400;
      }
      else if (param_2 == 2) {
        uStack_16 = uStack_16 | 0x1000;
      }
    }
    else {
      uStack_16 = uStack_16 & 0xffeb;
      if (param_2 == 1) {
        uStack_16 = uStack_16 | 4;
      }
      else if (param_2 == 2) {
        uStack_16 = uStack_16 | 0x10;
      }
    }
    FUN_2c008f74(0x3a);
    if (iVar3 == 0) {
      *_DAT_2c010e40 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar3);
    }
  }
  else if ((*_DAT_2c010e3c - 1 < 2) && (param_1 == 0x52)) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = getBasePriority();
    }
    if (iVar3 != 0x40) {
      param_3 = 0x2c010dc4;
      *_DAT_2c010e40 = 0x2c010dc4;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    FUN_2c008e4c(0x127,&uStack_16,param_3,0x40);
    uStack_16 = uStack_16 & 0xffe7;
    if (param_2 == 1) {
      uStack_16 = uStack_16 | 0x10;
    }
    else if (param_2 == 2) {
      uStack_16 = uStack_16 | 8;
    }
    if (iVar3 == 0) {
      *_DAT_2c010e40 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar3);
    }
  }
  if (*_DAT_2c010e38 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return;
}

