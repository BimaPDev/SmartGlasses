/* FUN_1009b34c @ 0x1009b34c */

undefined4
FUN_1009b34c(int *param_1,uint *param_2,int *param_3,undefined4 param_4,byte param_5,char param_6)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  byte local_31 [5];
  
  if (param_5 < 0xfd) {
    iVar3 = 1;
  }
  else {
    iVar3 = FUN_1008c0c0((byte)*param_2 & 0x1f);
  }
  piVar7 = (int *)param_1[2];
  iVar13 = *piVar7;
  iVar14 = piVar7[1];
  iVar21 = (int)(short)(((short)piVar7[2] + 1) - (short)iVar13);
  iVar22 = (int)(short)(((short)piVar7[3] + 1) - (short)iVar14);
  if (0x1f < (uint)(iVar22 * iVar21)) {
    piVar7 = (int *)param_1[1];
    iVar8 = piVar7[2];
    iVar9 = *piVar7;
    iVar15 = piVar7[1];
    iVar10 = *param_1;
    uVar19 = param_2[2];
    uVar4 = FUN_100e8ae8((byte)*param_2 & 0x1f,local_31);
    *(uint *)(DAT_1009b5ac + 0x34) = uVar4;
    iVar5 = DAT_1009b5ac;
    if (uVar4 != 0) {
      uVar11 = (*param_2 & 0x1fffff) >> 10;
      uVar23 = local_31[0] * uVar11;
      uVar20 = uVar23;
      if (param_6 == '\0') {
        uVar20 = uVar23 + 7 & 0xfffffff8;
      }
      if (param_3 == (int *)0x0) {
        *(undefined1 *)(DAT_1009b5ac + 0x44) = 0;
        uVar1 = *(ushort *)((int)param_2 + 2);
        *(uint *)(iVar5 + 0x38) = uVar11;
        *(uint *)(iVar5 + 0x3c) = (uint)(uVar1 >> 5);
      }
      else {
        iVar16 = param_3[1];
        iVar17 = *param_3;
        uVar6 = uVar20 * iVar16 + iVar17 * (uint)local_31[0];
        uVar19 = uVar19 + (uVar6 >> 3);
        uVar2 = 0;
        if ((uVar4 & DAT_1009b5b0) != 0) {
          uVar2 = (undefined1)((uVar6 & 7) >> (uint)(local_31[0] >> 1));
        }
        *(undefined1 *)(DAT_1009b5ac + 0x44) = uVar2;
        *(int *)(iVar5 + 0x38) = (param_3[2] + 1) - iVar17;
        *(int *)(iVar5 + 0x3c) = (param_3[3] + 1) - iVar16;
      }
      if ((param_6 == '\0') || ((uVar23 & 7) == 0)) {
        *(uint *)(DAT_1009b5ac + 0x40) = uVar20 >> 3;
      }
      else {
        if (*(char *)(DAT_1009b5ac + 0x44) != '\0') {
          return 0;
        }
        if (*(uint *)(DAT_1009b5ac + 0x38) != uVar11) {
          return 0;
        }
        *(undefined4 *)(DAT_1009b5ac + 0x40) = 0;
      }
      iVar5 = DAT_1009b5ac;
      *(undefined1 *)(DAT_1009b5ac + 0x45) = 2;
      uVar4 = FUN_1012c618(param_4);
      *(uint *)(iVar5 + 0x48) = uVar4 & 0xffffff | (uint)param_5 << 0x18;
      FUN_1013d9f0(iVar5,1);
      if ((*(uint *)(iVar5 + 0x34) & 0xf000) != 0) {
        puVar18 = (uint *)param_2[2];
        if ((*param_2 & 0x1f) == 0x1a) {
          uVar4 = *puVar18;
          if (0xff < uVar4 - 1) {
            FUN_10094174(3,DAT_1009b5bc,0x174,DAT_1009b5b8,DAT_1009b5b4,uVar4);
            return 0;
          }
          iVar5 = (uVar4 + 1) * 4;
          puVar18 = puVar18 + 1;
        }
        else {
          iVar5 = 4 << local_31[0];
          uVar4 = 1 << local_31[0];
        }
        uVar19 = uVar19 + iVar5;
        iVar5 = FUN_1011ddfc(DAT_1009b5ac,1,uVar4 & 0xffff,puVar18);
        if (iVar5 < 0) {
          return 0;
        }
        FUN_1009af48();
      }
      iVar5 = DAT_1009b5ac;
      if (iVar3 == 0) {
        uVar12 = 2;
      }
      else {
        uVar12 = 4;
      }
      *(undefined2 *)(DAT_1009b5ac + 0x18) = uVar12;
      FUN_1013d9b0(iVar5);
      if (iVar3 != 0) {
        *(int *)(iVar5 + 0x20) = iVar21;
        *(int *)(iVar5 + 0x24) = iVar22;
        FUN_1013d9f0(iVar5,0);
      }
      iVar16 = FUN_10138cfa(uVar19,0);
      if (iVar16 == 0) {
        FUN_1011e848(uVar19,*(int *)(iVar5 + 0x3c) * uVar20 + 0xf >> 3);
        FUN_1011e8f6();
      }
      FUN_1009af58(param_1,1,param_1[2]);
      iVar14 = iVar14 - iVar15;
      iVar10 = iVar10 + ((iVar8 - iVar9) * iVar14 + iVar14 + (iVar13 - iVar9)) * 2;
      if (iVar3 == 0) {
        iVar3 = FUN_1013da10(DAT_1009b5ac,uVar19,iVar10,iVar21,iVar22);
      }
      else {
        iVar3 = FUN_1013da20(DAT_1009b5ac,uVar19,iVar10,iVar10,iVar21,iVar22);
      }
      if (-1 < iVar3) {
        FUN_1009b254(param_1,param_1[2]);
        FUN_1009af48();
        return 1;
      }
    }
  }
  return 0;
}

