/* FUN_2c016c10 @ 0x2c016c10 */

undefined4 FUN_2c016c10(uint param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 unaff_lr;
  
  puVar3 = DAT_2c016f24;
  pcVar2 = DAT_2c016f18;
  if ((1 < param_1 - 6) && ((DAT_2c016f14 & param_2) == 0x28000000)) {
    FUN_2c00d570(1,0xae9,DAT_2c016f30,DAT_2c016f2c,DAT_2c016f28,param_2);
    return 5;
  }
  if (*DAT_2c016f18 != '\0') {
    if (0x1a < param_1) {
      return 3;
    }
    if (DAT_2c016f18[param_1 * 0x2c + 4] != '\0') {
      if ((((param_2 & 0x3ffffff) < (*(uint *)(DAT_2c016f18 + param_1 * 0x2c + 8) & 0x3ffffff)) &&
          ((*(uint *)(DAT_2c016f18 + param_1 * 0x2c + 8) & 0x3ffffff) +
           *(int *)(DAT_2c016f18 + param_1 * 0x2c + 0xc) < (param_2 & 0x3ffffff) + param_3)) ||
         (uVar4 = *(uint *)(DAT_2c016f18 + param_1 * 0x2c + 0x14),
         uVar4 * (param_2 / uVar4) - param_2 != 0)) {
        return 5;
      }
      if ((uVar4 != param_3) && (*(uint *)(DAT_2c016f18 + param_1 * 0x2c + 0x10) != param_3)) {
        return 6;
      }
      if (param_4 == 0) {
        if (DAT_2c016f18[param_1 * 0x2c + 5] == '\0') {
          iVar6 = 0;
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            iVar6 = isIRQinterruptsEnabled();
          }
          if (-1 < iVar6 << 0x1f) {
            *DAT_2c016f24 = 0x2c016d98;
            puVar3[1] = unaff_lr;
            disableIRQinterrupts();
          }
          *DAT_2c016f20 = iVar6;
        }
        pcVar9 = *(char **)(pcVar2 + 0x4ac);
        if (pcVar9 != pcVar2 + param_1 * 0x2c + 4 && pcVar9 != (char *)0x0) {
          do {
            iVar6 = 0;
LAB_2c016e78:
            do {
              if (pcVar9[0x28] == '\x01') goto LAB_2c016dca;
              if (*(code **)(pcVar2 + 0x4b0) != (code *)0x0) {
                iVar5 = (**(code **)(pcVar2 + 0x4b0))();
                if (iVar5 == 0) goto LAB_2c016e78;
                pcVar2[0x4b0] = '\0';
                pcVar2[0x4b1] = '\0';
                pcVar2[0x4b2] = '\0';
                pcVar2[0x4b3] = '\0';
              }
              iVar6 = FUN_2c016170(pcVar9,1);
            } while (iVar6 != 0);
            pcVar2[0x4ac] = '\0';
            pcVar2[0x4ad] = '\0';
            pcVar2[0x4ae] = '\0';
            pcVar2[0x4af] = '\0';
          } while( true );
        }
        iVar6 = 0;
LAB_2c016dca:
        do {
          if (*(code **)(pcVar2 + 0x4b0) == (code *)0x0) {
LAB_2c016e64:
            iVar6 = FUN_2c016170(pcVar2 + param_1 * 0x2c + 4,1);
          }
          else {
            iVar5 = (**(code **)(pcVar2 + 0x4b0))();
            if (iVar5 != 0) {
              pcVar2[0x4b0] = '\0';
              pcVar2[0x4b1] = '\0';
              pcVar2[0x4b2] = '\0';
              pcVar2[0x4b3] = '\0';
              goto LAB_2c016e64;
            }
          }
        } while (iVar6 != 0);
        FUN_2c015e74(pcVar2[param_1 * 0x2c + 5],param_2,param_3);
        FUN_2c016004(pcVar2[param_1 * 0x2c + 5],param_2,param_3);
        iVar6 = FUN_2c00657c(pcVar2[param_1 * 0x2c + 5],param_2,param_3);
        FUN_2c016094(pcVar2[param_1 * 0x2c + 5],param_2,param_3);
        iVar5 = FUN_2c00647c(pcVar2[param_1 * 0x2c + 5],0x7c);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c00dfac(DAT_2c016f6c,DAT_2c016f68,iVar5);
        }
        uVar11 = 0;
        if (iVar6 != 0) {
          if (iVar6 == 0xb) {
            uVar11 = 5;
          }
          else if (iVar6 == 0xc) {
            uVar11 = 6;
          }
          else {
            uVar11 = 0xc;
          }
        }
        FUN_2c016124(pcVar2[param_1 * 0x2c + 5],param_2,param_3);
        if (pcVar2[param_1 * 0x2c + 5] != '\0') {
          return uVar11;
        }
LAB_2c016d1a:
        if (*DAT_2c016f20 << 0x1f < 0) {
          return uVar11;
        }
        *DAT_2c016f24 = 0xffffffff;
        enableIRQinterrupts();
        return uVar11;
      }
      cVar10 = DAT_2c016f18[param_1 * 0x2c + 5];
      if (cVar10 == '\0') {
        iVar6 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          iVar6 = isIRQinterruptsEnabled();
        }
        if (-1 < iVar6 << 0x1f) {
          *DAT_2c016f24 = 0x2c016eb0;
          puVar3[1] = unaff_lr;
          disableIRQinterrupts();
        }
        *DAT_2c016f20 = iVar6;
        pcVar8 = *(char **)(pcVar2 + param_1 * 0x2c + 0x24);
        pcVar9 = *(char **)(pcVar2 + param_1 * 0x2c + 0x24);
        goto joined_r0x2c016ec4;
      }
      pcVar7 = *(char **)(DAT_2c016f18 + param_1 * 0x2c + 0x24);
      pcVar12 = pcVar7;
      if (pcVar7 != (char *)0x0) {
        do {
          pcVar8 = *(char **)(pcVar7 + 0x1c);
          pcVar9 = pcVar7;
          if ((param_2 <= *(uint *)(pcVar7 + 4)) &&
             (*(uint *)(pcVar7 + 4) + *(int *)(pcVar7 + 8) <= param_2 + param_3)) {
            if (pcVar7[0x18] == '\0') {
              if (*(char **)(pcVar2 + param_1 * 0x2c + 0x24) == pcVar7) {
                *(char **)(pcVar2 + param_1 * 0x2c + 0x24) = pcVar8;
              }
              else {
                *(char **)(pcVar12 + 0x1c) = pcVar8;
              }
              if ((*pcVar7 == '\x01') && (*(int *)(pcVar7 + 0x14) != 0)) {
                FUN_2c015fb0(pcVar2[param_1 * 0x2c + 5]);
              }
              FUN_2c015fb0(pcVar2[param_1 * 0x2c + 5],pcVar7);
              pcVar9 = pcVar12;
            }
            else if (*pcVar7 == '\x02') {
              uVar11 = 0;
              if (pcVar2[param_1 * 0x2c + 5] != '\0') {
                return 0;
              }
              goto LAB_2c016d1a;
            }
          }
joined_r0x2c016ec4:
          pcVar7 = pcVar8;
          pcVar12 = pcVar9;
        } while (pcVar7 != (char *)0x0);
        cVar10 = pcVar2[param_1 * 0x2c + 5];
        if (cVar10 == '\0') {
          pcVar9 = DAT_2c016f1c;
          do {
            if (*pcVar9 == '\0') {
              pcVar9[0x10] = '\0';
              pcVar9[0x11] = '\0';
              pcVar9[0x12] = '\0';
              pcVar9[0x13] = '\0';
              pcVar9[0x14] = '\0';
              pcVar9[0x15] = '\0';
              pcVar9[0x16] = '\0';
              pcVar9[0x17] = '\0';
              pcVar9[0x18] = '\0';
              pcVar9[0x19] = '\0';
              pcVar9[0x1a] = '\0';
              pcVar9[0x1b] = '\0';
              pcVar9[0x1c] = '\0';
              uVar11 = *(undefined4 *)(pcVar2 + param_1 * 0x2c + 0x24);
              *(char **)(pcVar2 + param_1 * 0x2c + 0x24) = pcVar9 + 4;
              *(undefined4 *)(pcVar9 + 0x20) = uVar11;
              *pcVar9 = '\x01';
              pcVar9[4] = '\x02';
              *(uint *)(pcVar9 + 8) = param_2;
              *(uint *)(pcVar9 + 0xc) = param_3;
              uVar11 = 0;
              goto LAB_2c016d1a;
            }
            pcVar9 = pcVar9 + 0x24;
          } while (DAT_2c016f1c + 0xd8 != pcVar9);
          uVar11 = 1;
          goto LAB_2c016d1a;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c00dfac(DAT_2c016f74,DAT_2c016f70,cVar10);
    }
  }
  return 7;
}

