/* FUN_100847dc @ 0x100847dc */

int FUN_100847dc(undefined4 *param_1)

{
  bool bVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char cVar7;
  undefined4 extraout_r1;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  int iVar19;
  undefined8 uVar20;
  undefined4 local_84;
  char acStack_80 [7];
  char local_79 [12];
  byte local_6d;
  
  uVar14 = *(byte *)((int)param_1 + 0x4b) & 0xa0;
  if ((*(byte *)((int)param_1 + 0x4b) & 0xa0) == 0) {
    pcVar16 = (char *)*param_1;
    for (; *(short *)(*(int *)(pcVar16 + 0xc) + uVar14 * 2) != 0; uVar14 = uVar14 + 1) {
    }
    if (*pcVar16 == '\x04') {
      uVar14 = (uVar14 + 0xe) / 0xf;
      iVar4 = FUN_10122f08(param_1,uVar14 + 2);
      if (iVar4 == 0) {
        param_1[0x13] = param_1[0xc] + (uVar14 + 1) * -0x20;
        if ((param_1[2] != 0) && ((int)((uint)*(byte *)((int)param_1 + 7) << 0x1d) < 0)) {
          *(byte *)((int)param_1 + 7) = *(byte *)((int)param_1 + 7) & 3;
          *(ulonglong *)(param_1 + 4) =
               (ulonglong)*(ushort *)(pcVar16 + 10) * 0x200 + *(longlong *)(param_1 + 4);
          iVar15 = FUN_10122ab6(param_1);
          if (iVar15 != 0) {
            return iVar15;
          }
          uVar20 = FUN_10122ed8(local_79 + 1,param_1);
          if ((int)uVar20 != 0) {
            return (int)uVar20;
          }
          FUN_101222c6(*(int *)(pcVar16 + 0x10) + 0x38,(int)((ulonglong)uVar20 >> 0x20),param_1[4],
                       param_1[5]);
          FUN_101222c6(*(int *)(pcVar16 + 0x10) + 0x28,extraout_r1,param_1[4],param_1[5]);
          *(byte *)(*(int *)(pcVar16 + 0x10) + 0x21) = *(byte *)((int)param_1 + 7) | 1;
          iVar15 = FUN_10122f62(local_79 + 1);
          if (iVar15 != 0) {
            return iVar15;
          }
        }
        iVar15 = *(int *)(pcVar16 + 0xc);
        puVar13 = *(undefined1 **)(pcVar16 + 0x10);
        FUN_101222e4(puVar13,0,0x40);
        *puVar13 = 0x85;
        puVar13[0x20] = 0xc0;
        uVar3 = FUN_1012234e(iVar15);
        uVar14 = 1;
        uVar9 = 0;
        puVar13[0x24] = (char)uVar3;
        puVar13[0x25] = (char)((ushort)uVar3 >> 8);
        uVar11 = 0x40;
        cVar7 = '\x01';
        do {
          puVar13[uVar11] = 0xc1;
          puVar13[uVar11 + 1] = 0;
          uVar11 = uVar11 + 2;
          do {
            if ((uVar14 != 0) && (uVar14 = (uint)*(ushort *)(iVar15 + uVar9 * 2), uVar14 != 0)) {
              uVar9 = uVar9 + 1 & 0xff;
            }
            puVar13[uVar11] = (char)uVar14;
            puVar13[uVar11 + 1] = (char)(uVar14 >> 8);
            uVar11 = uVar11 + 2;
          } while ((uVar11 & 0x1f) != 0);
          cVar7 = cVar7 + '\x01';
        } while (*(short *)(iVar15 + uVar9 * 2) != 0);
        puVar13[0x23] = (char)uVar9;
        puVar13[1] = cVar7;
      }
    }
    else {
      puVar17 = param_1 + 0x10;
      FUN_10122580(local_79 + 1,puVar17,0xc);
      uVar9 = DAT_10084b20;
      if ((int)((uint)local_6d << 0x1f) < 0) {
        uVar11 = 1;
        *(undefined1 *)((int)param_1 + 0x4b) = 0x40;
        do {
          iVar4 = *(int *)(pcVar16 + 0xc);
          FUN_10122580(puVar17,local_79 + 1,0xb);
          uVar6 = uVar11;
          if (5 < uVar11) {
            puVar8 = (ushort *)(iVar4 + -2);
            while( true ) {
              puVar8 = puVar8 + 1;
              uVar10 = (uint)*puVar8;
              if (uVar10 == 0) break;
              iVar4 = 0x10;
              do {
                uVar6 = (uVar10 & 1) + uVar6 * 2;
                if ((uVar6 & 0x10000) != 0) {
                  uVar6 = uVar6 ^ uVar9;
                }
                iVar4 = iVar4 + -1;
                uVar10 = uVar10 >> 1;
              } while (iVar4 != 0);
            }
          }
          pcVar5 = local_79;
          uVar10 = 7;
          do {
            uVar12 = uVar10;
            uVar10 = (uVar6 & 0xf) + 0x30;
            cVar7 = (char)uVar10;
            if (0x39 < uVar10) {
              cVar7 = (char)(uVar6 & 0xf) + '7';
            }
            *pcVar5 = cVar7;
            uVar10 = uVar12 - 1;
            bVar1 = 0xf < uVar6;
            pcVar5 = pcVar5 + -1;
            uVar6 = uVar6 >> 4;
          } while (bVar1);
          acStack_80[uVar12 - 1] = '~';
          pcVar5 = (char *)((int)param_1 + 0x3f);
          uVar6 = 0;
          do {
            uVar12 = uVar6;
            if (uVar10 == uVar12) break;
            pcVar5 = pcVar5 + 1;
            uVar6 = uVar12 + 1;
          } while (*pcVar5 != ' ');
          do {
            if (uVar10 < 8) {
              cVar7 = acStack_80[uVar10];
              uVar10 = uVar10 + 1;
            }
            else {
              cVar7 = ' ';
            }
            uVar12 = uVar12 + 1;
            ((char *)((int)param_1 + 0x3f))[uVar12] = cVar7;
          } while (uVar12 < 8);
          iVar4 = FUN_100845f0(param_1);
          if (iVar4 != 0) {
            if (iVar4 != 4) {
              return iVar4;
            }
            *(byte *)((int)param_1 + 0x4b) = local_6d;
            goto LAB_10084ac0;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != 100);
        iVar4 = 7;
      }
      else {
LAB_10084ac0:
        if ((int)((uint)local_6d << 0x1e) < 0) {
          iVar15 = (uVar14 + 0xc) / 0xd + 1;
        }
        else {
          iVar15 = 1;
        }
        iVar4 = FUN_10122f08(param_1,iVar15);
        if (iVar4 == 0) {
          uVar14 = iVar15 - 1;
          if (uVar14 != 0) {
            iVar4 = FUN_10122840(param_1,param_1[0xc] + uVar14 * -0x20);
            if (iVar4 != 0) {
              return iVar4;
            }
            local_84 = FUN_10122306(puVar17);
            do {
              iVar4 = FUN_10122662(pcVar16,param_1[0xe]);
              if (iVar4 != 0) {
                return iVar4;
              }
              puVar13 = (undefined1 *)param_1[0xf];
              iVar19 = *(int *)(pcVar16 + 0xc);
              puVar13[0xd] = (char)local_84;
              uVar11 = uVar14 & 0xff;
              puVar13[0xb] = 0xf;
              pbVar18 = DAT_10084b24;
              iVar15 = (uVar11 - 1) * 0xd;
              puVar13[0xc] = 0;
              puVar13[0x1a] = 0;
              puVar13[0x1b] = 0;
              uVar9 = 0;
              iVar4 = 0;
              do {
                uVar6 = uVar9;
                if (uVar9 != 0xffff) {
                  uVar6 = (uint)*(ushort *)(iVar19 + iVar15 * 2);
                }
                bVar2 = *pbVar18;
                iVar4 = iVar4 + 1;
                puVar13[bVar2] = (char)uVar6;
                if (uVar9 != 0xffff) {
                  iVar15 = iVar15 + 1;
                }
                uVar9 = uVar6;
                if (uVar6 == 0) {
                  uVar9 = 0xffff;
                }
                puVar13[bVar2 + 1] = (char)(uVar6 >> 8);
                pbVar18 = pbVar18 + 1;
              } while (iVar4 != 0xd);
              if ((uVar9 == 0xffff) || (*(short *)(iVar19 + iVar15 * 2) == 0)) {
                uVar11 = uVar11 | 0x40;
              }
              *puVar13 = (char)uVar11;
              pcVar16[3] = '\x01';
              iVar4 = FUN_10122d32(param_1,0);
              if (iVar4 != 0) {
                return iVar4;
              }
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          iVar4 = FUN_10122662(pcVar16,param_1[0xe]);
          if (iVar4 == 0) {
            FUN_101222e4(param_1[0xf],0,0x20);
            FUN_10122580(param_1[0xf],puVar17,0xb);
            *(byte *)(param_1[0xf] + 0xc) = *(byte *)((int)param_1 + 0x4b) & 0x18;
            pcVar16[3] = '\x01';
          }
        }
      }
    }
  }
  else {
    iVar4 = 6;
  }
  return iVar4;
}

