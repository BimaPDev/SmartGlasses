/* FUN_1406cdd0 @ 0x1406cdd0 */

void FUN_1406cdd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar6;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  char cVar7;
  int *piVar8;
  int iVar9;
  undefined4 unaff_lr;
  
  iVar9 = *(int *)(DAT_1406cf44 + (param_1 + 0x22) * 4);
  iVar4 = FUN_14066108(*(undefined1 *)(param_2 + 0x13));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406cf50,0x123,DAT_1406cf4c);
  }
  if (*(char *)(param_2 + 0x11) == '9') {
    cVar7 = '\0';
  }
  else {
    cVar7 = -(*(char *)(param_2 + 0x11) != '\0');
  }
  *(char *)(param_2 + 0x10) = cVar7;
  *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xf0;
  FUN_14058974(param_2 + 8,param_1,2);
  if (((-1 < (int)((uint)*(byte *)(iVar9 + 0x54) << 0x1f)) ||
      ((uVar6 = extraout_r2, *(char *)(param_2 + 0x11) != '(' && (*(char *)(param_2 + 0x11) != '@'))
      )) && (iVar5 = FUN_14068dec(param_1,0xff,param_2,*(undefined2 *)(iVar4 + 6)),
            puVar3 = DAT_1406cf48, uVar6 = extraout_r2_00, iVar5 != 0)) {
    iVar4 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar4 = getBasePriority();
    }
    if (iVar4 != 0x40) {
      uVar6 = 0x1406ce48;
      *DAT_1406cf48 = 0x1406ce48;
      puVar3[1] = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    FUN_14073a28(iVar9 + 0x28,param_2,uVar6,0x40);
    uVar6 = extraout_r2_01;
    if (iVar4 == 0) {
      uVar6 = 0xffffffff;
      *DAT_1406cf48 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar4);
    }
    *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xf0 | 1;
    FUN_14058748(param_2 + 8,0,uVar6,param_4);
    return;
  }
  puVar3 = DAT_1406cf48;
  piVar8 = *(int **)(iVar9 + 0x30);
  if (piVar8 == (int *)0x0) {
    iVar4 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar4 = getBasePriority();
    }
    if (iVar4 != 0x40) {
      uVar6 = 0x1406ceda;
      *DAT_1406cf48 = 0x1406ceda;
      puVar3[1] = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    FUN_14073a28(iVar9 + 0x30,param_2,uVar6,0x40);
  }
  else {
    bVar1 = *(byte *)(iVar4 + 8);
    do {
      iVar4 = FUN_14066108(*(undefined1 *)((int)piVar8 + 0x13));
      puVar3 = DAT_1406cf48;
      if (*(byte *)(iVar4 + 8) < bVar1) {
        iVar4 = 0;
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          iVar4 = getBasePriority();
        }
        if (iVar4 != 0x40) {
          *DAT_1406cf48 = 0x1406cf06;
          puVar3[1] = unaff_lr;
        }
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          setBasePriority(0x40);
        }
        FUN_14073b34(iVar9 + 0x30,piVar8,param_2,0x40);
        if (iVar4 == 0) {
          *DAT_1406cf48 = 0xffffffff;
        }
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          setBasePriority(iVar4);
        }
        return;
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)0x0);
    iVar4 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar4 = getBasePriority();
    }
    uVar6 = extraout_r2_02;
    if (iVar4 != 0x40) {
      uVar6 = 0x1406cea8;
      *DAT_1406cf48 = 0x1406cea8;
      puVar3[1] = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    FUN_140739f0(iVar9 + 0x30,param_2,uVar6,0x40);
  }
  if (iVar4 == 0) {
    *DAT_1406cf48 = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar4);
  }
  return;
}

