/* FUN_2c64a800 @ 0x2c64a800 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64a800(uint param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r4;
  uint uVar7;
  undefined4 unaff_r5;
  uint uVar8;
  undefined4 unaff_lr;
  
  piVar4 = _DAT_2c64a838;
  iVar6 = *_DAT_2c64a838;
  *_DAT_2c64a838 = iVar6 + 1;
  if (param_3 == 0) {
    FUN_2c648600(_LAB_2c64a83c,iVar6 + 1);
  }
  else {
    FUN_2c648600(_LAB_2c64a844);
  }
  iVar6 = *_DAT_2c64a840;
  if (iVar6 == *piVar4) {
    *piVar4 = 0;
  }
  iVar5 = DAT_2c4bf088;
  uVar7 = param_1 >> 4;
  if (0x1f < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bf09c,uVar7,iVar6,param_4,unaff_r4,unaff_r5);
  }
  uVar8 = param_1 & 0xf;
  if ((int)(param_1 << 0x1c) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bf098,uVar7,uVar8,param_1 << 0x1c,unaff_r4,unaff_r5);
  }
  if (*(char *)(DAT_2c4bf088 + uVar7 * 8 + uVar8) != '\0') {
    FUN_2c4bedd8();
    puVar2 = DAT_2c4bf08c;
    iVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar6 = getBasePriority();
    }
    if (iVar6 != 0x40) {
      *DAT_2c4bf08c = 0x2c4bf032;
      puVar2[1] = unaff_lr;
    }
    iVar3 = DAT_2c4bf090;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(undefined1 *)(iVar5 + uVar7 * 8 + uVar8) = 0;
    iVar5 = *(int *)(iVar3 + uVar7 * 4);
    *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) & ~(0x1000 << uVar8 & 0xff000U);
    if (iVar6 == 0) {
      *DAT_2c4bf08c = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar6);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4bf094,uVar7,uVar8,0,unaff_r4,unaff_r5);
}

