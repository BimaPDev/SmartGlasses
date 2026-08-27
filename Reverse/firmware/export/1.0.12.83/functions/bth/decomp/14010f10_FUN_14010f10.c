/* FUN_14010f10 @ 0x14010f10 */

undefined4
FUN_14010f10(byte *param_1,undefined4 param_2,uint param_3,ushort *param_4,byte *param_5,
            ushort param_6,float *param_7,undefined1 param_8)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  byte *local_3c;
  
  *param_4 = (ushort)param_3;
  pbVar12 = param_1 + 0x9ac;
  *(undefined4 *)(param_1 + 0xbb0) = param_2;
LAB_14010f44:
  if (param_3 != 0) {
    uVar8 = (uint)*(ushort *)(param_1 + 0xbae);
    uVar11 = (uint)*(ushort *)(param_1 + 0xbac);
    uVar14 = uVar11 - uVar8 & 0xffff;
    if (param_3 <= uVar14) {
      uVar14 = param_3;
    }
    if (uVar14 != 0) goto code_r0x14010f64;
    do {
    } while (uVar11 != uVar8);
    goto LAB_14010f94;
  }
  uVar2 = 0x18;
LAB_14010fb6:
  *param_4 = *param_4 - (short)param_3;
  return uVar2;
code_r0x14010f64:
  uVar13 = uVar8 + uVar14;
  pbVar7 = *(byte **)(param_1 + 0xbb0);
  do {
    uVar3 = uVar8 + 1;
    param_1[uVar8 + 0x9ac] = *pbVar7;
    uVar8 = uVar3 & 0xffff;
    *(byte **)(param_1 + 0xbb0) = pbVar7 + 1;
    *(short *)(param_1 + 0xbae) = (short)uVar3;
    pbVar7 = pbVar7 + 1;
  } while (uVar8 != (uVar13 & 0xffff));
  param_3 = param_3 - uVar14 & 0xffff;
  if (uVar11 != uVar8) goto LAB_14010f44;
LAB_14010f94:
  switch(param_1[0xbb6]) {
  case 0:
    pcVar9 = *(char **)(param_1 + 0xbb0);
    if ((param_1[7] & 3) == 0) {
      do {
        param_3 = param_3 - 1 & 0xffff;
        if (*pcVar9 == -100) goto LAB_140110e0;
        *(char **)(param_1 + 0xbb0) = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
      } while (param_3 != 0);
    }
    else if ((param_1[7] & 1) == 0) {
      do {
        param_3 = param_3 - 1 & 0xffff;
        if (*pcVar9 == -0x72) goto LAB_140110e0;
        *(char **)(param_1 + 0xbb0) = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
      } while (param_3 != 0);
    }
    else {
      do {
        param_3 = param_3 - 1 & 0xffff;
        if (*pcVar9 == -0x53) goto LAB_140110e0;
        *(char **)(param_1 + 0xbb0) = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
      } while (param_3 != 0);
    }
    param_3 = 0;
    break;
  case 1:
    iVar4 = FUN_1400db68(param_1,pbVar12);
    if (iVar4 == 3) {
      param_3 = param_3 + 1 & 0xffff;
      *(int *)(param_1 + 0xbb0) = *(int *)(param_1 + 0xbb0) + -1;
LAB_1401113e:
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
        uVar2 = 0;
        goto LAB_14010fb6;
      }
      param_5[1] = bVar1;
      *param_5 = param_1[1];
      param_1[0xbae] = 0;
      param_1[0xbaf] = 0;
      goto LAB_14010f44;
    }
    if (iVar4 == 4) goto LAB_1401113e;
LAB_140111fe:
    if (param_5 == (byte *)0x0) goto LAB_1401121a;
    uVar14 = (uint)*(ushort *)(param_1 + 0x4a8);
    iVar4 = *(int *)(param_5 + 4) + (uint)*(ushort *)(param_5 + 2);
    goto LAB_1401120c;
  case 2:
    uVar2 = FUN_1400dc8c(param_1,pbVar12);
    if (param_1[0xb] != param_1[10]) goto LAB_140111fe;
    uVar14 = (uint)*(ushort *)(param_1 + 0x4a8);
    if (param_6 < uVar14) {
      uVar2 = 0xc;
      goto LAB_14010fb6;
    }
    uVar8 = (uint)param_1[2];
    if (uVar8 == 1) {
      uVar2 = FUN_1400d52c(uVar2,0);
      FUN_1400d52c(uVar2,1);
LAB_140111bc:
      param_1[0xbb6] = 3;
      if (param_1[2] < 2) {
        uVar14 = (uint)(ushort)((ushort)param_1[4] * (ushort)param_1[6] * (ushort)*param_1);
      }
      else {
        uVar14 = (uint)param_1[4] * (uint)*param_1;
      }
      sVar5 = (short)(uVar14 >> 3);
      if ((uVar14 & 7) != 0) {
        sVar5 = sVar5 + 1;
      }
      *(short *)(param_1 + 0xbac) = sVar5;
      if ((*(ushort *)(param_1 + 8) & 7) != 0) {
        *(short *)(param_1 + 0xbac) = sVar5 + 1;
        param_3 = param_3 + 1 & 0xffff;
        *(int *)(param_1 + 0xbb0) = *(int *)(param_1 + 0xbb0) + -1;
      }
      break;
    }
    if (uVar8 < 2) {
      FUN_1400d52c(uVar2,0);
      goto LAB_140111bc;
    }
    if (uVar8 - 2 < 2) {
      FUN_1400d7c4();
      goto LAB_140111bc;
    }
    if (param_5 == (byte *)0x0) goto LAB_1401121a;
    iVar4 = *(int *)(param_5 + 4) + (uint)*(ushort *)(param_5 + 2);
LAB_1401120c:
    func_0x13f43514(iVar4,0,uVar14);
    *(short *)(param_5 + 2) = *(short *)(param_5 + 2) + *(short *)(param_1 + 0x4a8);
LAB_1401121a:
    uVar2 = 1;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xbb6] = 0;
    param_1[0xbac] = 0;
    param_1[0xbad] = 0;
    param_1[0xbae] = 0;
    param_1[0xbaf] = 0;
    goto LAB_14010fb6;
  case 3:
    FUN_1400ddac(param_1,pbVar12);
    if ((param_1[2] == 3) && (bVar1 = param_1[4], bVar1 != 0)) {
      uVar14 = (uint)param_1[5];
      if (uVar14 != 0) {
        uVar8 = 0;
        pbVar10 = param_1 + 0xb;
        pbVar6 = param_1 + 0xa4;
        pbVar7 = pbVar10;
        local_3c = pbVar6;
        do {
          do {
            pbVar7 = pbVar7 + 1;
            if (*pbVar7 == 1) {
              iVar4 = *(int *)pbVar6 + *(int *)(pbVar6 + 0x20);
              *(int *)pbVar6 = iVar4;
              *(int *)(pbVar6 + 0x20) = iVar4 + *(int *)(pbVar6 + 0x20) * -2;
            }
            pbVar6 = pbVar6 + 4;
          } while (pbVar10 + uVar14 != pbVar7);
          uVar8 = uVar8 + 1;
          pbVar6 = local_3c + 0x40;
          pbVar7 = pbVar10;
          local_3c = pbVar6;
        } while (bVar1 != uVar8);
        goto LAB_14010fda;
      }
    }
    else {
      uVar14 = (uint)param_1[5];
LAB_14010fda:
      if (uVar14 == 4) {
        fVar15 = *param_7;
        fVar16 = param_7[1];
        fVar23 = (float)((uint)(1.0 < fVar15) * (int)fVar15 + (uint)(fVar15 <= 1.0) * 0x3f800000);
        fVar17 = param_7[2];
        if ((int)((uint)(fVar23 < fVar16) << 0x1f) < 0) {
          fVar23 = fVar16;
        }
        fVar18 = param_7[3];
        if ((int)((uint)(fVar23 < fVar17) << 0x1f) < 0) {
          fVar23 = fVar17;
        }
        if ((int)((uint)(fVar23 < fVar18) << 0x1f) < 0) {
          fVar23 = fVar18;
        }
        if (1.0 < fVar23) {
          *param_7 = fVar15 / fVar23;
          param_7[1] = fVar16 / fVar23;
          param_7[2] = fVar17 / fVar23;
          param_7[3] = fVar18 / fVar23;
        }
        FUN_1400ef10(param_1,param_5,param_7,0,param_8);
      }
      else if (uVar14 == 8) {
        fVar15 = *param_7;
        fVar16 = param_7[1];
        fVar23 = (float)((uint)(1.0 < fVar15) * (int)fVar15 + (uint)(fVar15 <= 1.0) * 0x3f800000);
        fVar17 = param_7[2];
        if ((int)((uint)(fVar23 < fVar16) << 0x1f) < 0) {
          fVar23 = fVar16;
        }
        fVar18 = param_7[3];
        if ((int)((uint)(fVar23 < fVar17) << 0x1f) < 0) {
          fVar23 = fVar17;
        }
        fVar19 = param_7[4];
        if ((int)((uint)(fVar23 < fVar18) << 0x1f) < 0) {
          fVar23 = fVar18;
        }
        fVar20 = param_7[5];
        if ((int)((uint)(fVar23 < fVar19) << 0x1f) < 0) {
          fVar23 = fVar19;
        }
        fVar21 = param_7[6];
        if ((int)((uint)(fVar23 < fVar20) << 0x1f) < 0) {
          fVar23 = fVar20;
        }
        fVar22 = param_7[7];
        if ((int)((uint)(fVar23 < fVar21) << 0x1f) < 0) {
          fVar23 = fVar21;
        }
        if ((int)((uint)(fVar23 < fVar22) << 0x1f) < 0) {
          fVar23 = fVar22;
        }
        if (1.0 < fVar23) {
          *param_7 = fVar15 / fVar23;
          param_7[1] = fVar16 / fVar23;
          param_7[2] = fVar17 / fVar23;
          param_7[3] = fVar18 / fVar23;
          param_7[4] = fVar19 / fVar23;
          param_7[5] = fVar20 / fVar23;
          param_7[6] = fVar21 / fVar23;
          param_7[7] = fVar22 / fVar23;
        }
        FUN_1400fbe4(param_1,param_5,param_7,0,param_8);
      }
    }
    if ((int)((uint)param_6 - (uint)*(ushort *)(param_5 + 2)) <
        (int)(uint)*(ushort *)(param_1 + 0x4a8)) {
      uVar2 = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[0xbb6] = 0;
      param_1[0xbac] = 0;
      param_1[0xbad] = 0;
      param_1[0xbae] = 0;
      param_1[0xbaf] = 0;
      goto LAB_14010fb6;
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xbb6] = 0;
    param_1[0xbac] = 0;
    param_1[0xbad] = 0;
  }
switchD_14010f9e_default:
  param_1[0xbae] = 0;
  param_1[0xbaf] = 0;
  goto LAB_14010f44;
LAB_140110e0:
  param_1[0xbb6] = 1;
  *(char **)(param_1 + 0xbb0) = pcVar9 + 1;
  param_1[0xbac] = 4;
  param_1[0xbad] = 0;
  goto switchD_14010f9e_default;
}

