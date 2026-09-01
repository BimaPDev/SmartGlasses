/* FUN_1009a718 @ 0x1009a718 */

undefined4
FUN_1009a718(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,byte *param_6)

{
  undefined2 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint *unaff_r6;
  uint *puVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  bool bVar19;
  undefined2 local_3c [2];
  int local_38 [5];
  
  bVar3 = *(byte *)(param_2 + 0x14);
  if ((bVar3 & 0x1e) == 0x18) {
    piVar17 = local_38;
    local_3c[0] = 0xff00;
    piVar7 = piVar17;
    piVar10 = DAT_1009a9b4;
    do {
      iVar4 = *piVar10;
      iVar6 = piVar10[1];
      piVar10 = piVar10 + 2;
      *piVar7 = iVar4;
      piVar7[1] = iVar6;
      piVar7 = piVar7 + 2;
    } while (piVar10 != DAT_1009a9b4 + 4);
    uVar1 = *(undefined2 *)(param_2 + 8);
    pbVar13 = param_6;
    for (iVar4 = 0; iVar4 < param_5; iVar4 = iVar4 + 1) {
      *pbVar13 = (byte)uVar1;
      pbVar13[1] = (byte)((ushort)uVar1 >> 8);
      pbVar13 = pbVar13 + 3;
    }
    bVar3 = FUN_1008c0b0(*(byte *)(param_2 + 0x14) & 0x1f);
    uVar11 = (*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10;
    if ((*(byte *)(param_2 + 0x14) & 0x1f) == 0x19) {
      iVar4 = (int)(uVar11 + 1) >> 1;
      iVar6 = iVar4 * param_4 + (param_3 >> 1);
      uVar11 = (uint)(char)(((int)(char)param_3 & 1U) << 2);
    }
    else {
      iVar4 = (int)(uVar11 + 7) >> 3;
      if ((uVar11 & 7) != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar6 = iVar4 * param_4 + (param_3 >> 3);
      uVar11 = (int)(char)param_3 & 7;
      piVar17 = (int *)local_3c;
    }
    if (*(char *)(param_2 + 0x10) == '\0') {
      pbVar5 = (byte *)0x0;
      pbVar13 = (byte *)(*(int *)(*(int *)(param_2 + 4) + 8) + iVar6);
    }
    else {
      uVar18 = *(undefined4 *)(param_2 + 0x24);
      pbVar5 = (byte *)FUN_100942d8(iVar4);
      if (pbVar5 == (byte *)0x0) {
        return 0;
      }
      FUN_1012af70(uVar18,iVar6 + 0xc,0);
      FUN_10093c80(uVar18,pbVar5,iVar4,0);
      pbVar13 = pbVar5;
    }
    iVar4 = 0;
    while (iVar4 < param_5) {
      uVar12 = (int)(uint)*pbVar13 >> (uVar11 & 0xff) & (int)(short)((short)(1 << (uint)bVar3) + -1)
               & 0xff;
      if ((*(byte *)(param_2 + 0x14) & 0x1f) != 0xe) {
        uVar12 = (uint)*(byte *)((int)piVar17 + uVar12);
      }
      param_6[iVar4 * 3 + 2] = (byte)uVar12;
      iVar4 = iVar4 + 1;
      cVar2 = (char)uVar11 + bVar3;
      uVar11 = (uint)cVar2;
      if (7 < (int)uVar11) {
        uVar11 = (uint)(char)(cVar2 + -8);
        pbVar13 = pbVar13 + 1;
      }
    }
  }
  else {
    if ((bVar3 & 0x1f) != 0x1a) {
      uVar11 = FUN_1008c0b0(bVar3 & 0x1f);
      uVar11 = (uVar11 & 0x7ff) >> 3;
      iVar4 = uVar11 * (param_4 * ((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + param_3);
      if (*(char *)(param_2 + 0x10) == '\0') {
        iVar6 = *(int *)(*(int *)(param_2 + 4) + 8) + iVar4;
        iVar4 = 0;
LAB_1009a928:
        uVar18 = FUN_1009a564(param_6,iVar6,param_5,*(byte *)(param_2 + 0x14) & 0x1f);
        if (iVar4 == 0) {
          return uVar18;
        }
        FUN_10094444(iVar4);
        return uVar18;
      }
      iVar16 = uVar11 * param_5;
      uVar18 = *(undefined4 *)(param_2 + 0x24);
      local_38[0] = 0;
      iVar6 = FUN_100942d8(iVar16);
      if (iVar6 != 0) {
        iVar4 = FUN_1012af70(uVar18,iVar4 + 0xc,0);
        if (iVar4 == 0) {
          iVar4 = FUN_10093c80(uVar18,iVar6,iVar16,local_38);
          if ((iVar4 == 0) && (iVar4 = iVar6, iVar16 - local_38[0] == 0)) goto LAB_1009a928;
          uVar9 = 0x1bb;
          uVar18 = DAT_1009a9c8;
        }
        else {
          uVar9 = 0x1b4;
          uVar18 = DAT_1009a9bc;
        }
        FUN_10094174(2,DAT_1009a9c4,uVar9,DAT_1009a9c0,uVar18);
        FUN_10094444(iVar6);
      }
      return 0;
    }
    uVar11 = *(uint *)(param_2 + 0x14);
    bVar19 = *(char *)(param_2 + 0x10) != '\x01';
    uVar12 = (uVar11 & 0x1fffff) >> 10;
    if (bVar19) {
      uVar11 = *(uint *)(param_2 + 4);
    }
    iVar4 = *(int *)(param_2 + 0x24);
    if (bVar19) {
      unaff_r6 = *(uint **)(uVar11 + 8);
    }
    if (bVar19) {
      puVar15 = unaff_r6 + 1;
      uVar11 = *unaff_r6 & 0xffff;
    }
    else {
      uVar11 = (uint)*(ushort *)(iVar4 + 0xc);
      puVar15 = unaff_r6;
    }
    if (!bVar19) {
      puVar15 = *(uint **)(iVar4 + 0x10);
    }
    iVar6 = uVar12 * param_4 + param_3 + (uVar11 + 1) * 4;
    if (*(char *)(param_2 + 0x10) == '\0') {
      pbVar13 = (byte *)(*(int *)(*(int *)(param_2 + 4) + 8) + iVar6);
      uVar11 = DAT_1009a9b8;
      pbVar14 = pbVar13;
      pbVar5 = (byte *)0x0;
    }
    else {
      pbVar13 = (byte *)FUN_100942d8(param_5);
      if (pbVar13 == (byte *)0x0) {
        return 0;
      }
      FUN_1012af70(iVar4,iVar6 + 0xc,0);
      FUN_10093c80(iVar4,pbVar13,uVar12,0);
      uVar11 = DAT_1009a9b8;
      pbVar14 = pbVar13;
      pbVar5 = pbVar13;
    }
    for (; (int)pbVar13 - (int)pbVar14 < param_5; pbVar13 = pbVar13 + 1) {
      bVar3 = *pbVar13;
      uVar8 = puVar15[bVar3];
      uVar12 = uVar11 & uVar8 >> 8 & 0xffff | uVar8 >> 5 & 0x7e0;
      *param_6 = (byte)uVar12 | (byte)((uVar8 & 0xff) >> 3);
      param_6[1] = (byte)(uVar12 >> 8);
      param_6[2] = *(byte *)((int)puVar15 + (uint)bVar3 * 4 + 3);
      param_6 = param_6 + 3;
    }
  }
  if (pbVar5 != (byte *)0x0) {
    FUN_10094444();
  }
  return 1;
}

