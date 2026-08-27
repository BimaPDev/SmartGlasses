/* FUN_140a2a30 @ 0x140a2a30 */

uint * FUN_140a2a30(uint *param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 unaff_lr;
  bool bVar12;
  
  uVar9 = DAT_140a2b84;
  puVar4 = DAT_140a2b80;
  pbVar3 = DAT_140a2b7c;
  if (param_1 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (param_2 != (uint *)0x0) {
    iVar10 = 0;
    uVar7 = param_4;
    if (*param_1 != 0) {
      iVar10 = 0;
      bVar12 = (bool)isCurrentModePrivileged();
      if (bVar12) {
        iVar10 = getBasePriority();
      }
      if (iVar10 != 0x40) {
        bVar1 = *DAT_140a2b7c;
        *DAT_140a2b80 = 0x140a2a54;
        puVar4[1] = unaff_lr;
        param_3 = bVar1 + 1;
        *pbVar3 = (char)param_3 + (char)(uint)((ulonglong)uVar9 * (ulonglong)param_3 >> 0x23) * -10;
        *(undefined4 *)(DAT_140a2b88 + (uint)bVar1 * 4) = unaff_lr;
      }
      uVar7 = 0x40;
      bVar12 = (bool)isCurrentModePrivileged();
      if (bVar12) {
        setBasePriority(0x40);
      }
    }
    puVar6 = param_2 + -1;
    FUN_140a2588(param_1,puVar6,param_3,uVar7,param_4);
    if ((int)(param_2[-1] << 0x1f) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a2b94,puVar6);
    }
    piVar11 = (int *)(param_2[-1] & 0xfffffffc);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a2b94,puVar6);
    }
    if (puVar6 == param_1 + 5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a2b94,puVar6);
    }
    if ((int)piVar11 <= (int)puVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a2b98,piVar11,puVar6);
    }
    puVar5 = (uint *)FUN_140a2434(param_1,puVar6);
    puVar8 = (uint *)puVar5[1];
    if ((puVar8 != (uint *)0x0) && (puVar8 <= puVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a2b94,puVar5 + 1);
    }
    *param_2 = (uint)puVar8;
    puVar5[1] = (uint)puVar6;
    uVar9 = param_2[-1];
    param_2[-1] = uVar9 | 1;
    uVar9 = uVar9 & 0xfffffffc;
    bVar12 = uVar9 != 0;
    if (bVar12) {
      uVar9 = uVar9 - (int)puVar6;
    }
    if (bVar12) {
      uVar9 = uVar9 - 4;
    }
    param_1[2] = uVar9 + param_1[2];
    puVar8 = (uint *)(*puVar5 & 0xfffffffc);
    if (puVar8 != (uint *)0x0) {
      if ((int)puVar8 <= (int)puVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a2b98,puVar8,puVar5);
      }
      if (puVar6 == puVar8) {
        puVar5 = (uint *)FUN_140a25e0(param_1,puVar5,puVar6);
        puVar6 = puVar5;
      }
    }
    if (*piVar11 << 0x1f < 0) {
      puVar6 = (uint *)FUN_140a25e0(param_1,puVar6,piVar11);
      uVar9 = *param_1;
      param_1 = puVar6;
    }
    else {
      uVar9 = *param_1;
      param_1 = puVar5;
    }
    if (uVar9 != 0) {
      if (iVar10 == 0) {
        *DAT_140a2b80 = 0xffffffff;
      }
      pbVar3 = DAT_140a2b8c;
      bVar1 = *DAT_140a2b8c;
      *(undefined4 *)(DAT_140a2b90 + (uint)bVar1 * 4) = unaff_lr;
      uVar9 = bVar1 + 1;
      lVar2 = (ulonglong)DAT_140a2b84 * (ulonglong)uVar9;
      param_1 = (uint *)lVar2;
      *pbVar3 = (char)uVar9 + (char)(uint)((ulonglong)lVar2 >> 0x23) * -10;
      bVar12 = (bool)isCurrentModePrivileged();
      if (bVar12) {
        setBasePriority(iVar10);
      }
    }
  }
  return param_1;
}

