/* FUN_2c01849e @ 0x2c01849e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c01849e(uint param_1,uint *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  puVar2 = _DAT_2c01852c;
  uVar4 = param_1 >> 4;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(_DAT_2c018538,uVar4,param_3,uVar4,param_4);
  }
  if ((int)(param_1 << 0x1c) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(_DAT_2c018534,uVar4,param_1 & 0xf,uVar4,param_4);
  }
  iVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    *_DAT_2c01852c = 0x2c0184ba;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  iVar3 = *(int *)(_DAT_2c018530 + uVar4 * 4) + (param_1 & 0xf) * 0x20;
  uVar5 = *(uint *)(iVar3 + 0x10c);
  uVar8 = *(undefined4 *)(iVar3 + 0x100);
  uVar4 = *(uint *)(iVar3 + 0x10c);
  uVar7 = *(undefined4 *)(iVar3 + 0x100);
  if (iVar6 == 0) {
    *_DAT_2c01852c = 0xffffffff;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    if ((uVar5 & 0xfff) == (uVar4 & 0xfff)) goto LAB_2c018512;
  }
  else {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar6);
    }
    if ((uVar5 & 0xfff) == (uVar4 & 0xfff)) {
LAB_2c018512:
      *param_2 = uVar5 & 0xfff;
      *param_3 = uVar8;
      return;
    }
  }
  *param_2 = uVar4 & 0xfff;
  *param_3 = uVar7;
  return;
}

