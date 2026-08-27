/* FUN_2c62a750 @ 0x2c62a750 */

void FUN_2c62a750(short *param_1,short *param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  uint local_2c;
  
  sVar1 = *param_2;
  iVar12 = (int)sVar1;
  sVar2 = *param_1;
  iVar11 = (int)sVar2;
  local_2c = *DAT_2c62a958;
  if (iVar11 <= iVar12) {
    sVar3 = param_1[2];
    iVar15 = (int)sVar3;
    if (iVar12 <= iVar15) {
      sVar4 = param_2[1];
      sVar5 = param_1[1];
      if ((sVar5 <= sVar4) && (sVar6 = param_1[3], sVar4 <= sVar6)) {
        if (0 < (int)param_3) {
          iVar13 = (int)(short)((sVar3 + 1) - sVar2);
          iVar10 = (int)(short)((sVar6 + 1) - sVar5);
          if (iVar13 < 0) {
            iVar13 = iVar13 + 1;
          }
          if (iVar10 < 0) {
            iVar10 = iVar10 + 1;
          }
          uVar14 = (uint)(short)(iVar13 >> 1);
          if (iVar10 >> 1 <= (int)uVar14) {
            uVar14 = iVar10 >> 1;
          }
          if ((int)uVar14 <= (int)param_3) {
            param_3 = uVar14;
          }
          uVar14 = param_3 & 0xffff;
          sVar9 = (short)param_3;
          sVar7 = sVar9 + sVar5;
          sVar8 = sVar9 + sVar2;
          local_34 = sVar2;
          local_30 = sVar8;
          if ((iVar12 <= sVar8) && (sVar4 <= sVar7)) {
            iVar11 = (short)(sVar9 + sVar8) - iVar11;
            if (iVar11 < 0) {
              iVar11 = iVar11 + 1;
            }
            sVar6 = (short)((uint)(iVar11 << 0xf) >> 0x10);
            sVar3 = (sVar4 - sVar5) - sVar6;
            iVar12 = (int)(short)((sVar1 - sVar2) - sVar6);
            bVar17 = (uint)(iVar12 * iVar12 + (int)sVar3 * (int)sVar3) <=
                     (uint)((iVar11 >> 1) * (iVar11 >> 1));
            local_2e = sVar7;
            goto LAB_2c62a82c;
          }
          local_32 = sVar6 - sVar9;
          local_2e = sVar6;
          iVar12 = FUN_2c62a750(&local_34,param_2,0);
          if (iVar12 != 0) {
            iVar11 = (short)(sVar8 + sVar9) - iVar11;
            if (iVar11 < 0) {
              iVar11 = iVar11 + 1;
            }
            sVar5 = (short)((uint)(iVar11 << 0xf) >> 0x10);
            sVar3 = ((sVar4 - sVar6) + (short)(uVar14 << 1)) - sVar5;
            iVar12 = (int)(short)((sVar1 - sVar2) - sVar5);
            bVar17 = (uint)(iVar12 * iVar12 + (int)sVar3 * (int)sVar3) <=
                     (uint)((iVar11 >> 1) * (iVar11 >> 1));
            goto LAB_2c62a82c;
          }
          sVar2 = sVar3 - sVar9;
          local_34 = sVar2;
          local_30 = sVar3;
          iVar11 = FUN_2c62a750(&local_34,param_2,0);
          if (iVar11 != 0) {
            iVar15 = iVar15 - (short)(sVar2 - sVar9);
            if (iVar15 < 0) {
              iVar15 = iVar15 + 1;
            }
            sVar7 = (short)(uVar14 << 1);
            sVar5 = (short)((uint)(iVar15 << 0xf) >> 0x10);
            sVar2 = (sVar7 + (sVar4 - sVar6)) - sVar5;
            iVar11 = (int)(short)(((sVar1 - sVar3) + sVar7) - sVar5);
            bVar17 = (uint)(iVar11 * iVar11 + (int)sVar2 * (int)sVar2) <=
                     (uint)((iVar15 >> 1) * (iVar15 >> 1));
            goto LAB_2c62a82c;
          }
          local_32 = sVar5;
          local_2e = sVar7;
          uVar18 = FUN_2c62a750(&local_34,param_2,0);
          param_2 = (short *)((ulonglong)uVar18 >> 0x20);
          if ((int)uVar18 != 0) {
            uVar16 = iVar15 - (short)(sVar2 - sVar9);
            if ((int)uVar16 < 0) {
              uVar16 = uVar16 + 1;
            }
            param_2 = (short *)((uVar16 & 0x1ffff) >> 1);
            sVar6 = (short)((uVar16 << 0xf) >> 0x10);
            sVar2 = (sVar4 - sVar5) - sVar6;
            iVar11 = (int)(short)(((sVar1 - sVar3) + (short)(uVar14 << 1)) - sVar6);
            bVar17 = (uint)(iVar11 * iVar11 + (int)sVar2 * (int)sVar2) <=
                     (uint)(((int)uVar16 >> 1) * ((int)uVar16 >> 1));
            goto LAB_2c62a82c;
          }
        }
        bVar17 = true;
        goto LAB_2c62a82c;
      }
    }
  }
  bVar17 = false;
LAB_2c62a82c:
  if ((*DAT_2c62a958 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(bVar17,param_2,*DAT_2c62a958 ^ local_2c,0);
  }
  return;
}

