/* FUN_2c4cabf4 @ 0x2c4cabf4 */

undefined4 FUN_2c4cabf4(byte *param_1,undefined4 param_2,uint param_3,short *param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  FUN_2c674268(param_1,0,3000);
  *param_4 = (short)param_3;
  *(undefined4 *)(param_1 + 0xbb0) = param_2;
joined_r0x2c4cac1a:
  if (param_3 != 0) {
    uVar9 = (uint)*(ushort *)(param_1 + 0xbae);
    uVar8 = (uint)*(ushort *)(param_1 + 0xbac);
    uVar4 = uVar8 - uVar9 & 0xffff;
    if (param_3 <= uVar4) {
      uVar4 = param_3;
    }
    if (uVar4 != 0) goto code_r0x2c4cac34;
    if (uVar8 == uVar9) goto LAB_2c4cac66;
    do {
    } while (uVar9 != uVar8);
    bVar7 = param_1[0xbb6];
    if (bVar7 != 1) goto LAB_2c4cac70;
    goto LAB_2c4cacb0;
  }
  uVar2 = 0x18;
LAB_2c4cac88:
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xbb6] = 0;
  param_1[0xbac] = 0;
  param_1[0xbad] = 0;
  param_1[0xbae] = 0;
  param_1[0xbaf] = 0;
  *param_4 = *param_4 - (short)param_3;
  return uVar2;
code_r0x2c4cac34:
  pbVar1 = *(byte **)(param_1 + 0xbb0);
  uVar10 = uVar9;
  do {
    uVar11 = uVar10 + 1 & 0xffff;
    param_1[uVar10 + 0x9ac] = *pbVar1;
    *(byte **)(param_1 + 0xbb0) = pbVar1 + 1;
    *(short *)(param_1 + 0xbae) = (short)(uVar10 + 1);
    pbVar1 = pbVar1 + 1;
    uVar10 = uVar11;
  } while (uVar11 != (uVar9 + uVar4 & 0xffff));
  param_3 = param_3 - uVar4 & 0xffff;
  if (uVar8 != uVar11) goto joined_r0x2c4cac1a;
LAB_2c4cac66:
  bVar7 = param_1[0xbb6];
  if (bVar7 == 1) {
LAB_2c4cacb0:
    iVar3 = func_0x2c6747b8(param_1,param_1 + 0x9ac);
    if (iVar3 == 3) {
      param_3 = param_3 + 1 & 0xffff;
      *(int *)(param_1 + 0xbb0) = *(int *)(param_1 + 0xbb0) + -1;
    }
    else if (iVar3 != 4) goto LAB_2c4cadd4;
    param_1[0xbb6] = 2;
    sVar5 = (ushort)param_1[6] * (ushort)(param_1[5] >> 1);
    *(short *)(param_1 + 0xbac) = sVar5;
    if ((*(ushort *)(param_1 + 8) & 7) != 0) {
      *(short *)(param_1 + 0xbac) = sVar5 + 1;
    }
    *(ushort *)(param_1 + 0x4a8) = (ushort)param_1[4] * (ushort)param_1[6] * (ushort)param_1[5] * 2;
    param_1[0x4a4] = param_1[0xb];
    param_1[0xbae] = 0;
    param_1[0xbaf] = 0;
    goto joined_r0x2c4cac1a;
  }
LAB_2c4cac70:
  if (bVar7 == 2) {
    func_0x2c674228(param_1,param_1 + 0x9ac);
    if ((param_1[0xb] == param_1[10]) && (param_1[2] < 4)) {
      param_1[0xbb6] = 3;
      if (param_1[2] < 2) {
        uVar4 = (uint)(ushort)((ushort)param_1[4] * (ushort)param_1[6] * (ushort)*param_1);
      }
      else {
        uVar4 = (uint)param_1[4] * (uint)*param_1;
      }
      uVar8 = uVar4 >> 3;
      if ((uVar4 & 7) != 0) {
        uVar8 = uVar8 + 1;
      }
      *(short *)(param_1 + 0xbac) = (short)uVar8;
      if ((*(ushort *)(param_1 + 8) & 7) != 0) {
        uVar8 = uVar8 + 1;
        param_3 = param_3 + 1 & 0xffff;
        *(int *)(param_1 + 0xbb0) = *(int *)(param_1 + 0xbb0) + -1;
        *(short *)(param_1 + 0xbac) = (short)uVar8;
      }
      uVar2 = 0;
      if (uVar8 < param_3) {
        sVar5 = (short)uVar8;
      }
      else {
        sVar5 = (short)param_3;
      }
      *param_4 = *param_4 + sVar5;
      goto LAB_2c4cac88;
    }
LAB_2c4cadd4:
    uVar2 = 1;
    goto LAB_2c4cac88;
  }
  if (bVar7 == 0) {
    pcVar6 = *(char **)(param_1 + 0xbb0);
    if ((param_1[7] & 3) == 0) {
      do {
        param_3 = param_3 - 1 & 0xffff;
        if (*pcVar6 == -100) goto LAB_2c4cad8e;
        *(char **)(param_1 + 0xbb0) = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
      } while (param_3 != 0);
    }
    else if ((param_1[7] & 1) == 0) {
      do {
        param_3 = param_3 - 1 & 0xffff;
        if (*pcVar6 == -0x72) goto LAB_2c4cad8e;
        *(char **)(param_1 + 0xbb0) = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
      } while (param_3 != 0);
    }
    else {
      do {
        param_3 = param_3 - 1 & 0xffff;
        if (*pcVar6 == -0x53) goto LAB_2c4cad8e;
        *(char **)(param_1 + 0xbb0) = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
      } while (param_3 != 0);
    }
  }
LAB_2c4cac7c:
  param_1[0xbae] = 0;
  param_1[0xbaf] = 0;
  goto joined_r0x2c4cac1a;
LAB_2c4cad8e:
  param_1[0xbb6] = 1;
  *(char **)(param_1 + 0xbb0) = pcVar6 + 1;
  param_1[0xbac] = 4;
  param_1[0xbad] = 0;
  goto LAB_2c4cac7c;
}

