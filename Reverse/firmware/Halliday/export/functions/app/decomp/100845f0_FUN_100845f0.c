/* FUN_100845f0 @ 0x100845f0 */

int FUN_100845f0(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  char *pcVar15;
  bool bVar16;
  
  pcVar15 = (char *)*param_1;
  iVar3 = FUN_10122840(param_1,0);
  if (iVar3 == 0) {
    if (*pcVar15 == '\x04') {
      uVar4 = FUN_1012234e(*(undefined4 *)(pcVar15 + 0xc));
LAB_10084618:
      do {
        do {
          iVar5 = FUN_100844c0(param_1);
          if (iVar5 != 0) {
            return iVar5;
          }
        } while (uVar4 != *(ushort *)(*(int *)(pcVar15 + 0x10) + 0x24));
        uVar14 = 0x40;
        bVar1 = *(byte *)(*(int *)(pcVar15 + 0x10) + 0x23);
        for (uVar12 = 0; uVar12 != bVar1; uVar12 = uVar12 + 1) {
          if ((uVar14 & 0x1f) == 0) {
            uVar14 = uVar14 + 2;
          }
          iVar5 = FUN_10086a1c(CONCAT11(*(undefined1 *)(*(int *)(pcVar15 + 0x10) + uVar14 + 1),
                                        *(undefined1 *)(*(int *)(pcVar15 + 0x10) + uVar14)));
          iVar6 = FUN_10086a1c(*(undefined2 *)(*(int *)(pcVar15 + 0xc) + uVar12 * 2));
          if (iVar5 != iVar6) goto LAB_10084618;
          uVar14 = uVar14 + 2;
        }
      } while (*(short *)(*(int *)(pcVar15 + 0xc) + uVar12 * 2) != 0);
    }
    else {
      uVar12 = 0xff;
      uVar4 = 0xff;
      param_1[0x13] = 0xffffffff;
      do {
        iVar3 = FUN_10122662(pcVar15,param_1[0xe]);
        if (iVar3 != 0) {
          return iVar3;
        }
        pbVar13 = (byte *)param_1[0xf];
        uVar14 = (uint)*pbVar13;
        if (uVar14 == 0) {
          return 4;
        }
        bVar1 = pbVar13[0xb];
        uVar10 = bVar1 & 0x3f;
        *(char *)((int)param_1 + 6) = (char)uVar10;
        if (uVar14 == 0xe5) {
LAB_100846c0:
          param_1[0x13] = 0xffffffff;
LAB_10084780:
          uVar4 = 0xff;
        }
        else {
          if ((int)((uint)bVar1 << 0x1c) < 0) {
            if (uVar10 != 0xf) goto LAB_100846c0;
          }
          else if (uVar10 != 0xf) {
            if ((uVar4 == 0) && (uVar4 = FUN_10122306(pbVar13), uVar4 == uVar12)) {
              return 0;
            }
            if (-1 < (int)((uint)*(byte *)((int)param_1 + 0x4b) << 0x1f)) {
              pbVar9 = (byte *)(param_1 + 0x10);
              pbVar11 = pbVar13;
              do {
                bVar1 = *pbVar11;
                bVar2 = *pbVar9;
                if (pbVar11 + 1 == pbVar13 + 0xb) {
                  if (bVar1 == bVar2) {
                    return 0;
                  }
                  break;
                }
                pbVar9 = pbVar9 + 1;
                pbVar11 = pbVar11 + 1;
              } while (bVar1 == bVar2);
            }
            goto LAB_100846c0;
          }
          if (-1 < (int)((uint)*(byte *)((int)param_1 + 0x4b) << 0x19)) {
            if ((int)(uVar14 << 0x19) < 0) {
              uVar12 = (uint)pbVar13[0xd];
              uVar14 = uVar14 & 0xbf;
              param_1[0x13] = param_1[0xc];
            }
            else if (uVar4 != uVar14) goto LAB_10084780;
            if ((pbVar13[0xd] == uVar12) && (*(short *)(pbVar13 + 0x1a) == 0)) {
              iVar3 = *(int *)(pcVar15 + 0xc);
              pbVar9 = DAT_100847d4;
              uVar4 = ((*pbVar13 & 0x3f) - 1) * 0xd;
              sVar7 = 1;
              do {
                pbVar11 = pbVar9 + 1;
                sVar8 = CONCAT11(pbVar13[*pbVar9 + 1],pbVar13[*pbVar9]);
                if (sVar7 == 0) {
                  bVar16 = sVar8 != -1;
                  uVar10 = uVar4;
                  sVar8 = sVar7;
                  if (bVar16) goto LAB_10084780;
                }
                else {
                  if (0xfe < uVar4) goto LAB_10084780;
                  iVar5 = FUN_10086a1c(sVar8);
                  uVar10 = uVar4 + 1;
                  iVar6 = FUN_10086a1c(*(undefined2 *)(iVar3 + uVar4 * 2));
                  if (iVar5 != iVar6) goto LAB_10084780;
                }
                pbVar9 = pbVar11;
                uVar4 = uVar10;
                sVar7 = sVar8;
              } while (DAT_100847d8 != pbVar11);
              if (((-1 < (int)((uint)*pbVar13 << 0x19)) || (sVar8 == 0)) ||
                 (*(short *)(iVar3 + uVar10 * 2) == 0)) {
                uVar4 = uVar14 - 1 & 0xff;
                goto LAB_1008476c;
              }
            }
            goto LAB_10084780;
          }
        }
LAB_1008476c:
        iVar3 = FUN_10122d32(param_1,0);
      } while (iVar3 == 0);
    }
  }
  return iVar3;
}

