/* FUN_2c60f7a8 @ 0x2c60f7a8 */

void FUN_2c60f7a8(int param_1,undefined4 param_2,short *param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  undefined4 uVar11;
  uint uVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short local_44;
  short sStack_42;
  undefined4 local_40;
  undefined1 auStack_3c [8];
  int local_34;
  
  local_34 = *DAT_2c60fa90;
  if ((param_3 != (short *)0x0) && (2 < param_4)) {
    psVar5 = (short *)FUN_2c62bf1c(param_4 * 4,param_2,param_3,0);
    if (psVar5 != (short *)0x0) {
      *(undefined4 *)psVar5 = *(undefined4 *)param_3;
      uVar12 = 0;
      uVar15 = 0;
      do {
        while( true ) {
          if ((param_3[uVar12 * 2] != param_3[uVar12 * 2 + 2]) ||
             (param_3[uVar12 * 2 + 1] != param_3[uVar12 * 2 + 3])) break;
          uVar12 = uVar12 + 1 & 0xffff;
          if ((int)(param_4 - 1) <= (int)uVar12) goto LAB_2c60f834;
        }
        iVar6 = uVar12 * 2;
        uVar12 = uVar12 + 1 & 0xffff;
        *(undefined4 *)(psVar5 + uVar15 * 2) = *(undefined4 *)(param_3 + iVar6);
        uVar15 = uVar15 + 1 & 0xffff;
      } while ((int)uVar12 < (int)(param_4 - 1));
LAB_2c60f834:
      if ((*param_3 != param_3[param_4 * 2 + -2]) || (param_3[1] != (param_3 + param_4 * 2 + -2)[1])
         ) {
        *(undefined4 *)(psVar5 + uVar15 * 2) = *(undefined4 *)(param_3 + param_4 * 2 + -2);
        uVar15 = uVar15 + 1 & 0xffff;
      }
      if (uVar15 < 3) {
        if (*DAT_2c60fa90 == local_34) {
          FUN_2c62c040(psVar5,param_3 + param_4 * 2 + -2,0,0);
          return;
        }
        goto LAB_2c60fa8c;
      }
      sVar10 = 0x1fff;
      sVar8 = 0x1fff;
      iVar6 = DAT_2c60fa98;
      psVar14 = psVar5;
      iVar7 = DAT_2c60fa98;
      do {
        psVar13 = psVar14 + 2;
        if (*psVar14 <= sVar8) {
          sVar8 = *psVar14;
        }
        if (psVar14[1] <= sVar10) {
          sVar10 = psVar14[1];
        }
        _local_44 = CONCAT22(sVar10,sVar8);
        if (iVar6 < *psVar14) {
          iVar6 = (int)*psVar14;
        }
        if (iVar7 < psVar14[1]) {
          iVar7 = (int)psVar14[1];
        }
        local_40 = CONCAT22((short)iVar7,(short)iVar6);
        psVar14 = psVar13;
      } while (psVar5 + (uVar15 - 1 & 0xffff) * 2 + 2 != psVar13);
      iVar6 = FUN_2c62a6b4(auStack_3c,&local_44,*(undefined4 *)(param_1 + 8));
      if (iVar6 == 0) {
        FUN_2c62c040(psVar5);
      }
      else {
        iVar6 = 0;
        uVar11 = *(undefined4 *)(param_1 + 8);
        *(undefined1 **)(param_1 + 8) = auStack_3c;
        uVar12 = 1;
        sVar8 = psVar5[1];
        do {
          sVar10 = (psVar5 + 1)[uVar12 * 2];
          if (sVar10 < sVar8) {
            iVar6 = (int)(short)uVar12;
            sVar8 = sVar10;
          }
          uVar12 = uVar12 + 1;
        } while ((uVar12 & 0xffff) < uVar15);
        uVar12 = 0;
        iVar7 = FUN_2c62bf1c(uVar15 * 0x2c);
        iVar9 = iVar6 + -1;
        sVar8 = psVar5[iVar6 * 2];
        if (iVar9 < 0) {
          iVar9 = iVar9 + uVar15;
        }
        sVar10 = psVar5[iVar6 * 2 + 1];
        psVar14 = psVar5;
        if (iVar6 + 1 < (int)uVar15) {
          psVar14 = psVar5 + (iVar6 + 1) * 2;
        }
        sVar2 = psVar5[iVar9 * 2];
        sVar1 = *psVar14;
        sVar3 = psVar5[iVar9 * 2 + 1] - sVar10;
        sVar4 = psVar14[1] - sVar10;
        iVar9 = iVar6;
        iVar19 = iVar7;
        while( true ) {
          if ((int)sVar3 * (int)(short)(sVar1 - sVar8) < (int)sVar4 * (int)(short)(sVar2 - sVar8)) {
            iVar17 = iVar9 + 1;
            if (iVar17 < (int)uVar15) {
              psVar14 = psVar5 + iVar17 * 2;
            }
            else {
              iVar17 = 0;
              psVar14 = psVar5;
            }
            iVar16 = iVar6 + -1;
            if (iVar16 < 0) {
              iVar16 = iVar16 + uVar15;
            }
          }
          else {
            iVar17 = iVar9 + -1;
            iVar16 = iVar6 + 1;
            if (iVar17 < 0) {
              iVar17 = iVar17 + uVar15;
            }
            psVar14 = psVar5 + iVar17 * 2;
            if ((int)uVar15 <= iVar16) {
              iVar16 = 0;
            }
          }
          iVar18 = iVar19;
          if (sVar10 <= psVar14[1]) {
            if ((psVar14[1] != sVar10) && (*psVar14 != psVar5[iVar9 * 2])) {
              FUN_2c614004(iVar19);
              iVar18 = iVar19 + 0x2c;
              FUN_2c613e5c(iVar19,iVar7);
            }
            uVar12 = uVar12 + 1;
            iVar9 = iVar17;
          }
          if (uVar15 == uVar12) break;
          iVar19 = iVar18;
          if (psVar5[iVar6 * 2 + 1] <= psVar5[iVar16 * 2 + 1]) {
            if ((psVar5[iVar16 * 2 + 1] != psVar5[iVar6 * 2 + 1]) &&
               (psVar5[iVar16 * 2] != psVar5[iVar6 * 2])) {
              FUN_2c614004(iVar18);
              iVar19 = iVar18 + 0x2c;
              FUN_2c613e5c(iVar18,iVar7);
            }
            uVar12 = uVar12 + 1;
            iVar6 = iVar16;
          }
          if (uVar15 <= uVar12) break;
          sVar10 = psVar5[iVar9 * 2 + 1];
        }
        FUN_2c61319c(param_1,param_2,&local_44);
        FUN_2c613f08(iVar7);
        FUN_2c62c040(iVar7);
        FUN_2c62c040(psVar5);
        *(undefined4 *)(param_1 + 8) = uVar11;
      }
    }
  }
  if (*DAT_2c60fa90 == local_34) {
    return;
  }
LAB_2c60fa8c:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

