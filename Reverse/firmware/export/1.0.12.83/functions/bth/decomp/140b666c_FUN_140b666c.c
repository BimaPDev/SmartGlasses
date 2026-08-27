/* FUN_140b666c @ 0x140b666c */

void FUN_140b666c(int *param_1,short *param_2,int param_3,uint param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  byte *pbVar14;
  short *psVar15;
  int iVar16;
  short *psVar17;
  short *psVar18;
  int iVar19;
  byte *pbVar20;
  short *psVar21;
  int local_54;
  byte *local_48;
  int local_34;
  uint local_30;
  
  iVar4 = *(int *)(*param_1 + 0xc4);
  if (0 < (int)param_4) {
    local_48 = (byte *)(param_3 + -1);
    iVar19 = 0;
    local_34 = 0x200;
    local_30 = 0;
    do {
      local_48 = local_48 + 1;
      uVar2 = (uint)*local_48;
      iVar8 = param_1[1];
      iVar13 = *(int *)(iVar8 + 0xc0);
      iVar11 = iVar13 + local_34;
      psVar15 = (short *)(iVar13 + local_30 * 0x20);
      if (uVar2 != 0) {
        local_54 = 0;
        do {
          iVar5 = *(int *)(iVar8 + 0xb8);
          iVar7 = *param_1;
          iVar9 = *(int *)(iVar8 + 0x94);
          iVar10 = *(int *)(iVar7 + 0xb8);
          iVar8 = *(int *)(iVar7 + 0x94);
          iVar16 = iVar19 * 0x20 + 0x100;
          psVar18 = (short *)(*(int *)(iVar7 + 0xc0) + iVar16);
          psVar17 = (short *)(iVar16 + iVar13);
          if (0 < param_5) {
            pbVar14 = (byte *)(iVar11 + -1);
            pbVar20 = (byte *)(iVar4 + 0x1371);
            psVar6 = param_2;
            psVar21 = psVar15;
            do {
              pbVar14 = pbVar14 + 1;
              if (*pbVar14 - 0xe < 2) {
                sVar1 = *psVar21;
                *psVar17 = *psVar18 + 1 + (short)((int)(0xffffff9cU - (int)sVar1) >> 2);
                iVar13 = *(int *)(DAT_140b67fc + (0xffffff9cU - (int)sVar1 & 3) * 0x38);
                if ((1 << (local_30 & 0xff) & 0xffU & (uint)*pbVar20) == 0) {
                  if (*pbVar14 == 0xe) goto LAB_140b67da;
                }
                else if (*pbVar14 == 0xf) {
LAB_140b67da:
                  iVar13 = -iVar13;
                }
                iVar7 = (int)*psVar6;
                if (iVar7 < psVar6[1]) {
                  piVar12 = (int *)(iVar8 + (iVar10 * iVar19 + 0x3fffffff + iVar7) * 4);
                  piVar3 = (int *)(iVar9 + (iVar5 * iVar19 + 0x3fffffff + iVar7) * 4);
                  do {
                    piVar12 = piVar12 + 1;
                    piVar3 = piVar3 + 1;
                    *piVar3 = (int)((ulonglong)((longlong)*piVar12 * (longlong)iVar13) >> 0x20) << 1
                    ;
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < psVar6[1]);
                }
              }
              psVar6 = psVar6 + 1;
              psVar21 = psVar21 + 1;
              psVar18 = psVar18 + 1;
              psVar17 = psVar17 + 1;
              pbVar20 = pbVar20 + 1;
            } while ((byte *)(iVar11 + param_5 + -1) != pbVar14);
            uVar2 = (uint)*local_48;
          }
          iVar19 = iVar19 + 1;
          local_54 = local_54 + 1;
          if ((int)uVar2 <= local_54) break;
          iVar8 = param_1[1];
          iVar13 = *(int *)(iVar8 + 0xc0);
        } while( true );
      }
      local_34 = local_34 + 0x10;
      local_30 = local_30 + 1;
    } while (param_4 != local_30);
  }
  return;
}

