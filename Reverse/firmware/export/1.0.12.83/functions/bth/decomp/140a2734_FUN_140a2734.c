/* FUN_140a2734 @ 0x140a2734 */

uint * FUN_140a2734(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  undefined4 unaff_lr;
  bool bVar14;
  
  uVar8 = DAT_140a28d4;
  puVar3 = DAT_140a28d0;
  pbVar2 = DAT_140a28cc;
  puVar6 = (uint *)(param_2 + 3U & 0xfffffffc);
  if (puVar6 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      if (puVar6 <= (uint *)param_1[2]) {
        puVar9 = (uint *)param_1[6];
        puVar7 = (uint *)0x0;
        iVar12 = 0;
        if (puVar9 != (uint *)0x0) goto LAB_140a279c;
      }
    }
    else {
      iVar12 = 0;
      bVar14 = (bool)isCurrentModePrivileged();
      if (bVar14) {
        iVar12 = getBasePriority();
      }
      if (iVar12 != 0x40) {
        bVar1 = *DAT_140a28cc;
        *DAT_140a28d0 = 0x140a2760;
        puVar3[1] = unaff_lr;
        uVar5 = bVar1 + 1;
        *pbVar2 = (char)uVar5 + (char)(uint)((ulonglong)uVar8 * (ulonglong)uVar5 >> 0x23) * -10;
        *(undefined4 *)(DAT_140a28d8 + (uint)bVar1 * 4) = unaff_lr;
      }
      bVar14 = (bool)isCurrentModePrivileged();
      if (bVar14) {
        setBasePriority(0x40);
      }
      puVar7 = (uint *)param_1[2];
      if ((puVar6 <= puVar7) && (puVar9 = (uint *)param_1[6], puVar9 != (uint *)0x0)) {
LAB_140a279c:
        puVar10 = (uint *)(param_1 + 5);
        if (puVar10 < puVar9) {
          puVar7 = (uint *)0x0;
          puVar13 = (uint *)0xffffffff;
          puVar11 = (uint *)0x0;
          puVar4 = puVar10;
          do {
            puVar10 = puVar9;
            if (-1 < (int)(*puVar10 << 0x1f)) {
                    /* WARNING: Subroutine does not return */
              FUN_1402b0f8(DAT_140a28e4,puVar10,puVar6,puVar7,param_4);
            }
            uVar8 = *puVar10 & 0xfffffffc;
            if ((((uVar8 != 0) && (puVar9 = (uint *)((uVar8 - (int)puVar10) + -4), puVar6 <= puVar9)
                 ) && (puVar9 < puVar13)) &&
               (puVar7 = puVar4, puVar11 = puVar10, puVar13 = puVar9, puVar6 == puVar9)) {
LAB_140a27e8:
              puVar7[1] = puVar11[1];
              uVar8 = *puVar11;
              *puVar11 = uVar8 & 0xfffffffe;
              uVar8 = uVar8 & 0xfffffffc;
              bVar14 = uVar8 != 0;
              if (bVar14) {
                uVar8 = uVar8 - (int)puVar11;
              }
              if (bVar14) {
                uVar8 = uVar8 - 4;
              }
              param_1[2] = param_1[2] - uVar8;
              FUN_140a2494(param_1,puVar11);
              if ((uint)param_1[2] < (uint)param_1[3]) {
                param_1[3] = param_1[2];
              }
              if (*param_1 != 0) {
                if (iVar12 == 0) {
                  *DAT_140a28d0 = 0xffffffff;
                }
                bVar1 = *DAT_140a28dc;
                uVar8 = bVar1 + 1;
                *DAT_140a28dc =
                     (char)uVar8 +
                     (char)(uint)((ulonglong)DAT_140a28d4 * (ulonglong)uVar8 >> 0x23) * -10;
                *(undefined4 *)(DAT_140a28e0 + (uint)bVar1 * 4) = unaff_lr;
                bVar14 = (bool)isCurrentModePrivileged();
                if (bVar14) {
                  setBasePriority(iVar12);
                }
              }
              return puVar11 + 1;
            }
            puVar9 = (uint *)puVar10[1];
            if (puVar9 == (uint *)0x0) {
              if (puVar11 != (uint *)0x0) goto LAB_140a27e8;
              goto LAB_140a287a;
            }
            puVar4 = puVar10;
          } while (puVar10 < puVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a28e4,puVar10 + 1,puVar6,puVar7,param_4);
      }
LAB_140a287a:
      if (*param_1 != 0) {
        if (iVar12 == 0) {
          *DAT_140a28d0 = 0xffffffff;
        }
        pbVar2 = DAT_140a28dc;
        bVar1 = *DAT_140a28dc;
        *(undefined4 *)(DAT_140a28e0 + (uint)bVar1 * 4) = unaff_lr;
        uVar8 = bVar1 + 1;
        *pbVar2 = (char)uVar8 +
                  (char)(uint)((ulonglong)DAT_140a28d4 * (ulonglong)uVar8 >> 0x23) * -10;
        bVar14 = (bool)isCurrentModePrivileged();
        if (bVar14) {
          setBasePriority(iVar12);
        }
      }
    }
  }
  return (uint *)0x0;
}

