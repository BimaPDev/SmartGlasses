/* FUN_2c4ce350 @ 0x2c4ce350 */

void FUN_2c4ce350(int *param_1,short *param_2,int param_3,uint param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int *piVar11;
  byte *pbVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  short *psVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  short *psVar20;
  int local_54;
  byte *local_48;
  int local_34;
  uint local_30;
  
  iVar4 = *(int *)(*param_1 + 0xc4);
  if (0 < (int)param_4) {
    local_48 = (byte *)(param_3 + -1);
    iVar18 = 0;
    local_34 = 0x200;
    local_30 = 0;
    do {
      iVar5 = param_1[1];
      iVar15 = *(int *)(iVar5 + 0xc0);
      local_48 = local_48 + 1;
      uVar7 = (uint)*local_48;
      iVar10 = iVar15 + local_34;
      psVar9 = (short *)(iVar15 + local_30 * 0x20);
      if (uVar7 != 0) {
        local_54 = 0;
        do {
          iVar2 = *param_1;
          iVar13 = iVar18 * 0x20 + 0x100;
          psVar16 = (short *)(iVar15 + iVar13);
          psVar14 = (short *)(iVar13 + *(int *)(iVar2 + 0xc0));
          iVar13 = *(int *)(iVar2 + 0xb8);
          iVar15 = *(int *)(iVar2 + 0x94);
          iVar2 = *(int *)(iVar5 + 0xb8);
          iVar5 = *(int *)(iVar5 + 0x94);
          if (0 < param_5) {
            pbVar12 = (byte *)(iVar10 + -1);
            pbVar19 = (byte *)(iVar4 + 0x1371);
            psVar6 = param_2;
            psVar20 = psVar9;
            do {
              pbVar12 = pbVar12 + 1;
              if (*pbVar12 - 0xe < 2) {
                sVar1 = *psVar20;
                *psVar16 = *psVar14 + 1 + (short)((int)(0xffffff9cU - (int)sVar1) >> 2);
                iVar17 = *(int *)(DAT_2c4ce4dc + (0xffffff9cU - (int)sVar1 & 3) * 0x38);
                if ((1 << (local_30 & 0xff) & 0xffU & (uint)*pbVar19) == 0) {
                  if (*pbVar12 == 0xe) goto LAB_2c4ce4bc;
                }
                else if (*pbVar12 == 0xf) {
LAB_2c4ce4bc:
                  iVar17 = -iVar17;
                }
                iVar8 = (int)*psVar6;
                if (iVar8 < psVar6[1]) {
                  piVar11 = (int *)(iVar15 + (iVar13 * iVar18 + 0x3fffffff + iVar8) * 4);
                  piVar3 = (int *)(iVar5 + (iVar2 * iVar18 + 0x3fffffff + iVar8) * 4);
                  do {
                    piVar11 = piVar11 + 1;
                    iVar8 = iVar8 + 1;
                    piVar3 = piVar3 + 1;
                    *piVar3 = (int)((ulonglong)((longlong)*piVar11 * (longlong)iVar17) >> 0x20) << 1
                    ;
                  } while (iVar8 < psVar6[1]);
                }
              }
              psVar6 = psVar6 + 1;
              psVar20 = psVar20 + 1;
              psVar14 = psVar14 + 1;
              psVar16 = psVar16 + 1;
              pbVar19 = pbVar19 + 1;
            } while ((byte *)(iVar10 + param_5 + -1) != pbVar12);
            uVar7 = (uint)*local_48;
          }
          iVar18 = iVar18 + 1;
          local_54 = local_54 + 1;
          if ((int)uVar7 <= local_54) break;
          iVar5 = param_1[1];
          iVar15 = *(int *)(iVar5 + 0xc0);
        } while( true );
      }
      local_34 = local_34 + 0x10;
      local_30 = local_30 + 1;
    } while (param_4 != local_30);
  }
  return;
}

