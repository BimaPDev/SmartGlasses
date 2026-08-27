/* FUN_2c4d0e54 @ 0x2c4d0e54 */

void FUN_2c4d0e54(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
                 int param_7,int param_8)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  short *psVar13;
  int iVar14;
  int local_5c;
  short *local_58;
  int local_54;
  int local_50;
  int local_4c;
  
  if ((char)param_1[0x22] != '\0') {
    if (*(char *)(param_2 + 0xb) == '\x02') {
      param_6 = param_6 + 1;
    }
    psVar2 = (short *)*param_6;
    uVar4 = (uint)*(byte *)(param_2 + 8);
    bVar1 = *(byte *)(param_2 + 0xc);
    if (uVar4 != 0) {
      psVar13 = psVar2 + bVar1;
      local_4c = 0;
      local_54 = 0;
      do {
        uVar6 = (uint)*(byte *)(param_2 + local_4c);
        if (uVar6 != 0) {
          iVar14 = param_3 + local_54 * param_7 * 4;
          local_58 = (short *)(param_4 + local_54 * 2);
          local_50 = 0;
          do {
            if (bVar1 != 0) {
              iVar11 = local_54 << 6;
              psVar9 = psVar2;
              iVar10 = local_4c << 4;
              pbVar12 = (byte *)(param_1 + local_4c * 4 + 1);
LAB_2c4d0ede:
              do {
                if ((int)((uint)*pbVar12 << 0x1f) < 0) {
                  iVar7 = (int)psVar9[1] - (int)*psVar9;
                  if ((param_8 < 1) || (-1 < (int)((uint)*(byte *)(*param_1 + iVar10) << 0x1f))) {
                    *(undefined4 *)(param_1[0x24] + iVar11) = *(undefined4 *)param_1[0x23];
                    local_5c = FUN_2c4d0c10(iVar14 + *psVar9 * 4,iVar7,param_1[0x23]);
                  }
                  else {
                    local_5c = FUN_2c4d0c10(iVar14 + *psVar9 * 4,iVar7,param_1[0x24] + iVar11);
                  }
                  uVar4 = (uint)*(short *)(param_5 + iVar10 * 2);
                  iVar3 = *(int *)(DAT_2c4d1008 + (uVar4 & 3) * 0x38);
                  if ((*(byte *)(*param_1 + iVar10) & 2) != 0) {
                    iVar3 = -iVar3;
                  }
                  piVar5 = (int *)(iVar14 + *psVar9 * 4);
                  uVar4 = (((int)uVar4 >> 2) - (int)*local_58) + 2 + local_5c;
                  if ((int)uVar4 < 0) {
                    uVar4 = -uVar4;
                    if (0x1e < (int)uVar4) {
                      uVar4 = 0x1f;
                    }
                    if (iVar7 != 0) {
                      piVar8 = piVar5 + iVar7;
                      do {
                        piVar8 = piVar8 + -1;
                        *piVar8 = (int)((ulonglong)((longlong)*piVar8 * (longlong)iVar3) >> 0x20) >>
                                  (uVar4 & 0xff);
                      } while (piVar5 != piVar8);
                      psVar9 = psVar9 + 1;
                      iVar10 = iVar10 + 1;
                      iVar11 = iVar11 + 4;
                      pbVar12 = pbVar12 + 1;
                      if (psVar13 == psVar9) break;
                      goto LAB_2c4d0ede;
                    }
                  }
                  else {
                    if (0x1e < (int)uVar4) {
                      uVar4 = 0x1f;
                    }
                    if (iVar7 != 0) {
                      piVar8 = piVar5 + iVar7;
                      do {
                        piVar8 = piVar8 + -1;
                        *piVar8 = (int)((ulonglong)((longlong)*piVar8 * (longlong)iVar3) >> 0x20) <<
                                  (uVar4 & 0xff);
                      } while (piVar8 != piVar5);
                    }
                  }
                }
                psVar9 = psVar9 + 1;
                iVar10 = iVar10 + 1;
                iVar11 = iVar11 + 4;
                pbVar12 = pbVar12 + 1;
              } while (psVar13 != psVar9);
              uVar6 = (uint)*(byte *)(param_2 + local_4c);
            }
            local_54 = local_54 + 1;
            local_50 = local_50 + 1;
            iVar14 = iVar14 + param_7 * 4;
            local_58 = local_58 + 1;
          } while (local_50 < (int)uVar6);
          uVar4 = (uint)*(byte *)(param_2 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)uVar4);
    }
  }
  return;
}

