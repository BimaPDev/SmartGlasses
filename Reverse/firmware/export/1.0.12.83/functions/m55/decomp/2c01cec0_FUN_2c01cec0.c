/* FUN_2c01cec0 @ 0x2c01cec0 */

undefined4
FUN_2c01cec0(byte *param_1,undefined4 param_2,uint param_3,ushort *param_4,byte *param_5,
            ushort param_6,float *param_7,undefined1 param_8)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int extraout_r3;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 extraout_r12;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr13;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float extraout_s15;
  float fVar23;
  uint local_34;
  
  *param_4 = (ushort)param_3;
  pbVar13 = param_1 + 0x9ac;
  *(undefined4 *)(param_1 + 0xbb0) = param_2;
LAB_2c01ceee:
  if (param_3 != 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 0xbae);
    uVar9 = *(ushort *)(param_1 + 0xbac) - uVar6 & 0xffff;
    if (param_3 <= uVar9) {
      uVar9 = param_3;
    }
    if (uVar9 != 0) goto code_r0x2c01cf0e;
    do {
    } while (*(ushort *)(param_1 + 0xbac) != uVar6);
    goto LAB_2c01cf88;
  }
  uVar3 = 0x18;
LAB_2c01cfac:
  *param_4 = *param_4 - (short)param_3;
  return uVar3;
code_r0x2c01cf0e:
  if (uVar9 < 0x10) {
    iVar4 = *(int *)(param_1 + 0xbb0);
    uVar12 = param_3;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xbb0);
    pbVar8 = pbVar13 + uVar6;
    do {
      coprocessor_load(0xe,in_cr7,iVar4);
      coprocessor_store(0xe,in_cr7,pbVar8);
      uVar9 = uVar9 - 0x10 & 0xffff;
      iVar4 = *(int *)(param_1 + 0xbb0) + 0x10;
      uVar12 = (uint)(pbVar13 + uVar6 + (param_3 - (int)(pbVar8 + 0x10))) & 0xffff;
      uVar7 = (uint)(ushort)(*(short *)(param_1 + 0xbae) + 0x10U);
      *(int *)(param_1 + 0xbb0) = iVar4;
      *(ushort *)(param_1 + 0xbae) = *(short *)(param_1 + 0xbae) + 0x10U;
      if (uVar9 == 0) {
        uVar2 = *(ushort *)(param_1 + 0xbac);
        param_3 = uVar12;
        goto LAB_2c01cf84;
      }
      pbVar8 = pbVar8 + 0x10;
    } while (0xf < uVar9);
  }
  uVar3 = FUN_2c01ff54(iVar4);
  coprocessor_function2(0xf,7,2,in_cr0,in_cr1,in_cr13);
  coprocessor_load(0xe,in_cr7,uVar3);
  coprocessor_function2(0xf,7,2,in_cr0,in_cr1,in_cr13);
  coprocessor_store(0xe,in_cr7,extraout_r12);
  uVar2 = *(ushort *)(param_1 + 0xbac);
  uVar7 = (uint)*(ushort *)(param_1 + 0xbae) + extraout_r3 & 0xffff;
  *(int *)(param_1 + 0xbb0) = extraout_r3 + *(int *)(param_1 + 0xbb0);
  *(short *)(param_1 + 0xbae) = (short)((uint)*(ushort *)(param_1 + 0xbae) + extraout_r3);
  param_3 = uVar12 - extraout_r3 & 0xffff;
LAB_2c01cf84:
  if (uVar7 != uVar2) goto LAB_2c01ceee;
LAB_2c01cf88:
  switch(param_1[0xbb6]) {
  case 0:
    pcVar10 = *(char **)(param_1 + 0xbb0);
    if ((param_1[7] & 3) == 0) {
      do {
        param_3 = param_3 - 1 & 0xffff;
        if (*pcVar10 == -100) goto LAB_2c01d0d6;
        *(char **)(param_1 + 0xbb0) = pcVar10 + 1;
        pcVar10 = pcVar10 + 1;
      } while (param_3 != 0);
    }
    else if ((param_1[7] & 1) == 0) {
      do {
        param_3 = param_3 - 1 & 0xffff;
        if (*pcVar10 == -0x72) goto LAB_2c01d0d6;
        *(char **)(param_1 + 0xbb0) = pcVar10 + 1;
        pcVar10 = pcVar10 + 1;
      } while (param_3 != 0);
    }
    else {
      do {
        param_3 = param_3 - 1 & 0xffff;
        if (*pcVar10 == -0x53) goto LAB_2c01d0d6;
        *(char **)(param_1 + 0xbb0) = pcVar10 + 1;
        pcVar10 = pcVar10 + 1;
      } while (param_3 != 0);
    }
    param_3 = 0;
    break;
  case 1:
    iVar4 = FUN_2c019ef4(param_1,pbVar13);
    if (iVar4 == 3) {
      param_3 = param_3 + 1 & 0xffff;
      *(int *)(param_1 + 0xbb0) = *(int *)(param_1 + 0xbb0) + -1;
LAB_2c01d130:
      bVar1 = param_1[6];
      param_1[0xbb6] = 2;
      sVar5 = (ushort)bVar1 * (ushort)(param_1[5] >> 1);
      *(short *)(param_1 + 0xbac) = sVar5;
      if ((*(ushort *)(param_1 + 8) & 7) != 0) {
        *(short *)(param_1 + 0xbac) = sVar5 + 1;
      }
      *(ushort *)(param_1 + 0x4a8) = (ushort)param_1[4] * (ushort)bVar1 * (ushort)param_1[5] * 2;
      param_1[0x4a4] = param_1[0xb];
      if (param_5 == (byte *)0x0) {
        param_3 = (uint)*param_4;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[0xbb6] = 0;
        param_1[0xbac] = 0;
        param_1[0xbad] = 0;
        param_1[0xbae] = 0;
        param_1[0xbaf] = 0;
        uVar3 = 0;
        goto LAB_2c01cfac;
      }
      param_5[1] = bVar1;
      *param_5 = param_1[1];
      param_1[0xbae] = 0;
      param_1[0xbaf] = 0;
      goto LAB_2c01ceee;
    }
    if (iVar4 == 4) goto LAB_2c01d130;
LAB_2c01d1f6:
    if (param_5 == (byte *)0x0) goto LAB_2c01d21e;
    uVar9 = (uint)*(ushort *)(param_1 + 0x4a8);
    iVar4 = *(int *)(param_5 + 4) + (uint)*(ushort *)(param_5 + 2);
    goto LAB_2c01d20a;
  case 2:
    uVar3 = FUN_2c01a01c(param_1,pbVar13);
    if (param_1[0xb] != param_1[10]) goto LAB_2c01d1f6;
    uVar9 = (uint)*(ushort *)(param_1 + 0x4a8);
    if (param_6 < uVar9) {
      uVar3 = 0xc;
      goto LAB_2c01cfac;
    }
    uVar6 = (uint)param_1[2];
    if (uVar6 == 1) {
      uVar3 = FUN_2c0198c4(uVar3,0);
      FUN_2c0198c4(uVar3,1);
LAB_2c01d1b4:
      param_1[0xbb6] = 3;
      if (param_1[2] < 2) {
        uVar9 = (uint)(ushort)((ushort)param_1[4] * (ushort)param_1[6] * (ushort)*param_1);
      }
      else {
        uVar9 = (uint)param_1[4] * (uint)*param_1;
      }
      sVar5 = (short)(uVar9 >> 3);
      if ((uVar9 & 7) != 0) {
        sVar5 = sVar5 + 1;
      }
      *(short *)(param_1 + 0xbac) = sVar5;
      if ((*(ushort *)(param_1 + 8) & 7) != 0) {
        param_3 = param_3 + 1 & 0xffff;
        *(short *)(param_1 + 0xbac) = sVar5 + 1;
        *(int *)(param_1 + 0xbb0) = *(int *)(param_1 + 0xbb0) + -1;
      }
      break;
    }
    if (uVar6 < 2) {
      FUN_2c0198c4(uVar3,0);
      goto LAB_2c01d1b4;
    }
    if (uVar6 - 2 < 2) {
      FUN_2c019b58();
      goto LAB_2c01d1b4;
    }
    if (param_5 == (byte *)0x0) goto LAB_2c01d21e;
    iVar4 = *(int *)(param_5 + 4) + (uint)*(ushort *)(param_5 + 2);
LAB_2c01d20a:
    FUN_2c0068bc(iVar4,0,uVar9);
    *(short *)(param_5 + 2) = *(short *)(param_5 + 2) + *(short *)(param_1 + 0x4a8);
LAB_2c01d21e:
    uVar3 = 1;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xbb6] = 0;
    param_1[0xbac] = 0;
    param_1[0xbad] = 0;
    param_1[0xbae] = 0;
    param_1[0xbaf] = 0;
    goto LAB_2c01cfac;
  case 3:
    FUN_2c01a1a4(param_1,pbVar13);
    if ((param_1[2] == 3) && (bVar1 = param_1[4], bVar1 != 0)) {
      uVar9 = (uint)param_1[5];
      if (uVar9 != 0) {
        pbVar11 = param_1 + 0xb;
        pbVar14 = param_1 + 0xa4;
        local_34 = 0;
        pbVar8 = pbVar11;
        pbVar15 = pbVar14;
        do {
          do {
            pbVar8 = pbVar8 + 1;
            if (*pbVar8 == 1) {
              iVar4 = *(int *)pbVar14 + *(int *)(pbVar14 + 0x20);
              *(int *)pbVar14 = iVar4;
              *(int *)(pbVar14 + 0x20) = iVar4 + *(int *)(pbVar14 + 0x20) * -2;
            }
            pbVar14 = pbVar14 + 4;
          } while (pbVar11 + uVar9 != pbVar8);
          pbVar14 = pbVar15 + 0x40;
          local_34 = local_34 + 1;
          pbVar8 = pbVar11;
          pbVar15 = pbVar14;
        } while (bVar1 != local_34);
        goto LAB_2c01cfcc;
      }
    }
    else {
      uVar9 = (uint)param_1[5];
LAB_2c01cfcc:
      if (uVar9 == 4) {
        fVar16 = param_7[1];
        fVar17 = param_7[2];
        fVar18 = param_7[3];
        coprocessor_function2(10,7,4,in_cr7,in_cr5,in_cr5);
        fVar23 = extraout_s15;
        if ((int)((uint)(extraout_s15 < fVar16) << 0x1f) < 0) {
          fVar23 = fVar16;
        }
        if ((int)((uint)(fVar23 < fVar17) << 0x1f) < 0) {
          fVar23 = fVar17;
        }
        if ((int)((uint)(fVar23 < fVar18) << 0x1f) < 0) {
          fVar23 = fVar18;
        }
        if (1.0 < fVar23) {
          *param_7 = *param_7 / fVar23;
          param_7[1] = fVar16 / fVar23;
          param_7[2] = fVar17 / fVar23;
          param_7[3] = fVar18 / fVar23;
        }
        FUN_2c01b404(param_1,param_5,param_7,0,param_8);
      }
      else if (uVar9 == 8) {
        fVar16 = param_7[1];
        fVar17 = param_7[2];
        fVar18 = param_7[3];
        fVar19 = param_7[4];
        fVar20 = param_7[5];
        fVar21 = param_7[6];
        fVar22 = param_7[7];
        coprocessor_function2(10,7,4,in_cr7,in_cr3,in_cr3);
        fVar23 = extraout_s15;
        if ((int)((uint)(extraout_s15 < fVar16) << 0x1f) < 0) {
          fVar23 = fVar16;
        }
        if ((int)((uint)(fVar23 < fVar17) << 0x1f) < 0) {
          fVar23 = fVar17;
        }
        if ((int)((uint)(fVar23 < fVar18) << 0x1f) < 0) {
          fVar23 = fVar18;
        }
        if ((int)((uint)(fVar23 < fVar19) << 0x1f) < 0) {
          fVar23 = fVar19;
        }
        if ((int)((uint)(fVar23 < fVar20) << 0x1f) < 0) {
          fVar23 = fVar20;
        }
        if ((int)((uint)(fVar23 < fVar21) << 0x1f) < 0) {
          fVar23 = fVar21;
        }
        if ((int)((uint)(fVar23 < fVar22) << 0x1f) < 0) {
          fVar23 = fVar22;
        }
        if (1.0 < fVar23) {
          *param_7 = *param_7 / fVar23;
          param_7[1] = fVar16 / fVar23;
          param_7[2] = fVar17 / fVar23;
          param_7[3] = fVar18 / fVar23;
          param_7[4] = fVar19 / fVar23;
          param_7[5] = fVar20 / fVar23;
          param_7[6] = fVar21 / fVar23;
          param_7[7] = fVar22 / fVar23;
        }
        FUN_2c01c0a4(param_1,param_5,param_7,0,param_8);
      }
    }
    if ((int)((uint)param_6 - (uint)*(ushort *)(param_5 + 2)) <
        (int)(uint)*(ushort *)(param_1 + 0x4a8)) {
      uVar3 = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[0xbb6] = 0;
      param_1[0xbac] = 0;
      param_1[0xbad] = 0;
      param_1[0xbae] = 0;
      param_1[0xbaf] = 0;
      goto LAB_2c01cfac;
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xbb6] = 0;
    param_1[0xbac] = 0;
    param_1[0xbad] = 0;
  }
switchD_2c01cf92_default:
  param_1[0xbae] = 0;
  param_1[0xbaf] = 0;
  goto LAB_2c01ceee;
LAB_2c01d0d6:
  param_1[0xbb6] = 1;
  *(char **)(param_1 + 0xbb0) = pcVar10 + 1;
  param_1[0xbac] = 4;
  param_1[0xbad] = 0;
  goto switchD_2c01cf92_default;
}

