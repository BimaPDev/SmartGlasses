/* FUN_14075aec @ 0x14075aec */

uint FUN_14075aec(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  undefined4 unaff_lr;
  
  uVar6 = DAT_140a2a1c;
  puVar4 = DAT_140a2a18;
  pbVar3 = DAT_140a2a14;
  if (0x17ff < param_1 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14075b24,param_1);
  }
  piVar5 = DAT_14075b1c;
  if (0x7f < param_1) {
    piVar5 = DAT_14075b20;
  }
  piVar5 = (int *)*piVar5;
  uVar10 = (param_1 + 8 & 0xffff) + 3 & 0xfffffffc;
  if (uVar10 == 0) {
    return 0;
  }
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 0) {
      if (uVar10 <= (uint)piVar5[2]) {
        puVar8 = (uint *)piVar5[6];
        iVar14 = 0;
        if (puVar8 != (uint *)0x0) goto LAB_140a2942;
      }
    }
    else {
      iVar14 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar14 = getBasePriority();
      }
      if (iVar14 != 0x40) {
        bVar1 = *DAT_140a2a14;
        *DAT_140a2a18 = 0x140a290a;
        puVar4[1] = unaff_lr;
        uVar7 = bVar1 + 1;
        *pbVar3 = (char)uVar7 + (char)(uint)((ulonglong)uVar6 * (ulonglong)uVar7 >> 0x23) * -10;
        *(undefined4 *)(DAT_140a2a20 + (uint)bVar1 * 4) = unaff_lr;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x40);
      }
      if (uVar10 <= (uint)piVar5[2]) {
        puVar8 = (uint *)piVar5[6];
        if (puVar8 == (uint *)0x0) {
          uVar6 = 0;
LAB_140a2982:
          if (*piVar5 != 0) {
            if (iVar14 == 0) {
              *DAT_140a2a18 = 0xffffffff;
            }
            bVar1 = *DAT_140a2a24;
            uVar10 = bVar1 + 1;
            *DAT_140a2a24 =
                 (char)uVar10 +
                 (char)(uint)((ulonglong)DAT_140a2a1c * (ulonglong)uVar10 >> 0x23) * -10;
            *(undefined4 *)(DAT_140a2a28 + (uint)bVar1 * 4) = unaff_lr;
            bVar2 = (bool)isCurrentModePrivileged();
            if (bVar2) {
              setBasePriority(iVar14);
            }
          }
          return uVar6;
        }
LAB_140a2942:
        puVar9 = (uint *)(piVar5 + 5);
        puVar12 = puVar9;
        if (puVar9 < puVar8) {
          uVar7 = 0xffffffff;
          puVar13 = (uint *)0x0;
          do {
            puVar9 = puVar8;
            uVar6 = *puVar9 & 1;
            if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1402b0f8(DAT_140a2a2c);
            }
            uVar11 = *puVar9 & 0xfffffffc;
            if ((((uVar11 != 0) && (uVar11 = (uVar11 - (int)puVar9) - 4, uVar10 <= uVar11)) &&
                (uVar11 < uVar7)) && (puVar13 = puVar9, uVar7 = uVar11, uVar10 == uVar11))
            goto LAB_140a2982;
            puVar8 = (uint *)puVar9[1];
            if (puVar8 == (uint *)0x0) {
              uVar6 = 0;
              if (puVar13 != (uint *)0x0) {
                uVar6 = 1;
              }
              goto LAB_140a2982;
            }
            puVar12 = puVar8;
          } while (puVar9 < puVar8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a2a2c,puVar9 + 1,uVar10,puVar12,param_4);
      }
      if (*piVar5 != 0) {
        if (iVar14 == 0) {
          *DAT_140a2a18 = 0xffffffff;
        }
        pbVar3 = DAT_140a2a24;
        bVar1 = *DAT_140a2a24;
        *(undefined4 *)(DAT_140a2a28 + (uint)bVar1 * 4) = unaff_lr;
        uVar6 = bVar1 + 1;
        *pbVar3 = (char)uVar6 +
                  (char)(uint)((ulonglong)DAT_140a2a1c * (ulonglong)uVar6 >> 0x23) * -10;
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          setBasePriority(iVar14);
        }
      }
    }
  }
  return 0;
}

