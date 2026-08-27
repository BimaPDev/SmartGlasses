/* FUN_2c4c2efc @ 0x2c4c2efc */

uint * FUN_2c4c2efc(int *param_1,uint *param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined4 unaff_lr;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c30f8);
  }
  puVar8 = (uint *)(param_3 + 3U & 0xfffffffc);
  if (param_2 == (uint *)0x0) {
    puVar8 = (uint *)FUN_2c4c2cd8(param_1,puVar8);
    return puVar8;
  }
  puVar4 = param_2 + -1;
  FUN_2c4c2b34(param_1,puVar4);
  puVar2 = DAT_2c4c30f4;
  if ((int)(param_2[-1] << 0x1f) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c30fc,puVar4);
  }
  if (puVar8 == (uint *)0x0) {
    FUN_2c4c2df4(param_1,param_2);
    return (uint *)0x0;
  }
  if (*param_1 == 0) {
    puVar9 = (uint *)(param_2[-1] & 0xfffffffc);
    iVar10 = 0;
    iVar11 = 0;
    if (puVar9 == (uint *)0x0) goto LAB_2c4c3032;
LAB_2c4c2f5c:
    puVar12 = (uint *)((int)puVar9 + (-4 - (int)puVar4));
    puVar3 = param_2;
    if (puVar12 < puVar8) {
      iVar10 = iVar11;
      if ((uint)param_1[2] < (uint)((int)puVar8 - (int)puVar12)) {
LAB_2c4c3072:
        if (*param_1 == 0) {
          return (uint *)0x0;
        }
        if (iVar10 == 0) {
          *DAT_2c4c30f4 = 0xffffffff;
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(iVar10);
        }
        return (uint *)0x0;
      }
      if ((int)puVar9 <= (int)puVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4c3100,puVar9,puVar4);
      }
      goto LAB_2c4c2f78;
    }
LAB_2c4c2ff6:
    FUN_2c4c2a3c(param_1,puVar4,puVar8,0);
  }
  else {
    iVar10 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar10 = getBasePriority();
    }
    if (iVar10 != 0x40) {
      *DAT_2c4c30f4 = 0x2c4c2f48;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    puVar9 = (uint *)(param_2[-1] & 0xfffffffc);
    iVar11 = iVar10;
    if (puVar9 != (uint *)0x0) goto LAB_2c4c2f5c;
LAB_2c4c3032:
    iVar11 = iVar10;
    puVar12 = puVar9;
    if ((uint *)param_1[2] < puVar8) goto LAB_2c4c3072;
LAB_2c4c2f78:
    puVar3 = (uint *)FUN_2c4c29e8(param_1,puVar4);
    puVar5 = (uint *)(*puVar3 & 0xfffffffc);
    if (puVar5 == (uint *)0x0) {
LAB_2c4c2f96:
      uVar6 = *puVar9;
      if ((int)(uVar6 << 0x1f) < 0) {
        puVar7 = (uint *)0x0;
        puVar5 = puVar12;
LAB_2c4c2fa0:
        iVar10 = 0;
        if ((uVar6 & 0xfffffffc) != 0) {
          iVar10 = ((uVar6 & 0xfffffffc) - (int)puVar9) + -4;
        }
        if (puVar8 <= (uint *)(iVar10 + (int)puVar5)) {
          puVar4 = (uint *)FUN_2c4c2b88(param_1,puVar4,puVar9);
        }
        goto LAB_2c4c2fb0;
      }
LAB_2c4c2fd4:
      if ((*puVar4 & 0xfffffffc) != 0) {
        iVar10 = (*puVar4 & 0xfffffffc) - (int)puVar4;
LAB_2c4c2fe2:
        if (puVar8 <= (uint *)(iVar10 + -4)) {
          puVar3 = puVar4 + 1;
          FUN_2c673eb8(puVar3,param_2,puVar12);
          goto LAB_2c4c2ff6;
        }
      }
    }
    else {
      if ((int)puVar5 <= (int)puVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4c3100,puVar5,puVar3);
      }
      if (puVar4 != puVar5) goto LAB_2c4c2f96;
      uVar6 = *puVar9;
      puVar7 = (uint *)((int)puVar4 + (-4 - (int)puVar3));
      if ((int)(uVar6 << 0x1f) < 0) {
        puVar5 = (uint *)((int)puVar7 + (int)puVar12);
        goto LAB_2c4c2fa0;
      }
LAB_2c4c2fb0:
      if (puVar7 == (uint *)0x0) goto LAB_2c4c2fd4;
      if ((*puVar4 & 0xfffffffc) != 0) {
        iVar10 = (*puVar4 & 0xfffffffc) - (int)puVar4;
        if (puVar8 <= (uint *)((int)puVar7 + iVar10 + -4)) goto LAB_2c4c2fc8;
        goto LAB_2c4c2fe2;
      }
      if (puVar8 <= puVar7) {
LAB_2c4c2fc8:
        puVar4 = (uint *)FUN_2c4c2b88(param_1,puVar3,puVar4);
        goto LAB_2c4c2fd4;
      }
    }
    puVar3 = (uint *)FUN_2c4c2cd8(param_1,puVar8);
    if (puVar3 != (uint *)0x0) {
      iVar10 = 0;
      if ((*puVar4 & 0xfffffffc) != 0) {
        iVar10 = ((*puVar4 & 0xfffffffc) - (int)puVar4) + -4;
      }
      FUN_2c674668(puVar3,puVar4 + 1,iVar10);
      FUN_2c4c2df4(param_1,puVar4 + 1);
    }
  }
  if ((uint)param_1[2] < (uint)param_1[3]) {
    param_1[3] = param_1[2];
  }
  if (*param_1 != 0) {
    if (iVar11 == 0) {
      *DAT_2c4c30f4 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar11);
    }
  }
  return puVar3;
}

