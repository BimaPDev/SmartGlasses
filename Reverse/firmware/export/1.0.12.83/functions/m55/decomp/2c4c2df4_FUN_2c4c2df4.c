/* FUN_2c4c2df4 @ 0x2c4c2df4 */

void FUN_2c4c2df4(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c4c2ef0;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 != (uint *)0x0) {
    iVar8 = 0;
    if (*param_1 != 0) {
      iVar8 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar8 = getBasePriority();
      }
      if (iVar8 != 0x40) {
        param_3 = 0x2c4c2e14;
        *DAT_2c4c2ef0 = 0x2c4c2e14;
        puVar2[1] = unaff_lr;
      }
      param_4 = 0x40;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
    }
    puVar4 = param_2 + -1;
    FUN_2c4c2b34(param_1,puVar4,param_3,param_4);
    if ((int)(param_2[-1] << 0x1f) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c2ef8,puVar4);
    }
    piVar9 = (int *)(param_2[-1] & 0xfffffffc);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c2ef8,puVar4);
    }
    if (puVar4 == (uint *)(param_1 + 5)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c2ef8,puVar4);
    }
    if ((int)piVar9 <= (int)puVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c2ef4,piVar9,puVar4);
    }
    puVar3 = (uint *)FUN_2c4c29e8(param_1,puVar4);
    puVar5 = (uint *)puVar3[1];
    if ((puVar5 != (uint *)0x0) && (puVar5 <= puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c2ef8,puVar3 + 1);
    }
    *param_2 = (uint)puVar5;
    puVar3[1] = (uint)puVar4;
    uVar6 = param_2[-1] & 0xfffffffc;
    param_2[-1] = param_2[-1] | 1;
    iVar7 = 0;
    if (uVar6 != 0) {
      iVar7 = (uVar6 - (int)puVar4) + -4;
    }
    param_1[2] = iVar7 + param_1[2];
    puVar5 = (uint *)(*puVar3 & 0xfffffffc);
    if (puVar5 != (uint *)0x0) {
      if ((int)puVar5 <= (int)puVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4c2ef4,puVar5,puVar3);
      }
      if (puVar4 == puVar5) {
        puVar4 = (uint *)FUN_2c4c2b88(param_1,puVar3,puVar4);
      }
    }
    if (*piVar9 << 0x1f < 0) {
      FUN_2c4c2b88(param_1,puVar4,piVar9);
    }
    if (*param_1 != 0) {
      if (iVar8 == 0) {
        *DAT_2c4c2ef0 = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar8);
      }
    }
  }
  return;
}

