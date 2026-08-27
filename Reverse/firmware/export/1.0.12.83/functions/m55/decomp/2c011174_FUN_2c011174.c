/* FUN_2c011174 @ 0x2c011174 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c011174(undefined4 param_1,undefined4 param_2,int *param_3,short *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  int iVar4;
  undefined4 unaff_lr;
  undefined2 uStack_16;
  int iStack_14;
  
  iStack_14 = *param_3;
  if (*param_4 != 0) {
    if ((*_DAT_2c0111f4 == '\0') || (*_DAT_2c0111f4 == '\x03')) {
      uVar3 = 0x6a;
    }
    else {
      uVar3 = 0x10b;
    }
    FUN_2c008f74(uVar3,*param_4,0);
    puVar2 = _DAT_2c0111f8;
    iVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar4 = getBasePriority();
    }
    uVar3 = extraout_r2;
    if (iVar4 != 0x40) {
      uVar3 = 0x2c0111a4;
      *_DAT_2c0111f8 = 0x2c0111a4;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    FUN_2c008e4c(0xb,&uStack_16,uVar3,0x40);
    FUN_2c008f74(0xb,uStack_16);
    if (iVar4 == 0) {
      *_DAT_2c0111f8 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar4);
    }
  }
  if (*_DAT_2c0111f0 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

