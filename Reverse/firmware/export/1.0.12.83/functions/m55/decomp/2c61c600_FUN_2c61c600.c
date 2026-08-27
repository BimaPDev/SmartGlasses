/* FUN_2c61c600 @ 0x2c61c600 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61c600(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined2 uVar13;
  uint uVar14;
  undefined8 uVar15;
  
  iVar6 = FUN_2c629e10(*(undefined4 *)(param_1 + 0x70));
  uVar10 = _LAB_2c61c7c4;
  uVar7 = iVar6 + *(int *)(param_1 + 0x74);
  lVar2 = (ulonglong)_LAB_2c61c7c4 * (ulonglong)uVar7;
  uVar9 = (uint)((ulonglong)lVar2 >> 0x2a);
  iVar6 = uVar7 + uVar9 * -0x683;
  *(int *)(param_1 + 0x74) = iVar6;
  uVar15 = FUN_2c629df4(iVar6,(int)lVar2,0x683,uVar9,param_4);
  iVar6 = (int)((ulonglong)uVar15 >> 0x20);
  uVar7 = *(uint *)(param_1 + 0x74);
  *(int *)(param_1 + 0x70) = (int)uVar15;
  if (uVar7 < 0x341) {
    uVar14 = (uint)*(ushort *)(param_1 + 0x26);
    uVar7 = uVar7 * 0x168;
    iVar11 = (int)((ulonglong)_LAB_2c61c7c8 * (ulonglong)uVar7 >> 0x20);
    uVar10 = ((uint)((ulonglong)uVar10 * (ulonglong)uVar7 >> 0x20) & 0x3ffffff) >> 10;
    uVar12 = (iVar11 + (uVar7 - iVar11 >> 1) & 0x1ffffff) >> 9;
    if (uVar14 != uVar10) {
      uVar7 = 0;
LAB_2c61c6f6:
      uVar1 = *(ushort *)(param_1 + 0x28);
      sVar3 = uVar1 - (short)uVar14;
      sVar4 = (short)uVar10;
      iVar6 = (int)sVar3;
      iVar11 = (int)(short)(uVar1 - sVar4);
      if (iVar6 < 0) {
        iVar6 = (int)(short)(sVar3 + 0x168);
      }
      if (iVar11 < 0) {
        iVar11 = (int)(short)((uVar1 - sVar4) + 0x168);
      }
      iVar8 = iVar11 - iVar6;
      if (iVar8 < 0) {
        iVar8 = -iVar8;
      }
      if (iVar8 < 0xb5) {
        if (iVar11 < iVar6) {
          uVar15 = FUN_2c607e50(param_1);
          iVar6 = (int)((ulonglong)uVar15 >> 0x20);
          if (((((uint)uVar15 ^ 1) & 0xff) != 0) || (uVar10 == uVar14)) goto LAB_2c61c76a;
          FUN_2c61c54c(param_1,uVar14,uVar10);
          uVar1 = *(ushort *)(param_1 + 0x28);
          iVar6 = extraout_r1_04;
        }
        else if (iVar6 < iVar11) {
          uVar15 = FUN_2c607e50(param_1);
          iVar6 = (int)((ulonglong)uVar15 >> 0x20);
          if ((uVar10 != uVar14) && ((((uint)uVar15 ^ 1) & 0xff) == 0)) {
            FUN_2c61c54c(param_1,uVar10,uVar14);
            iVar6 = extraout_r1_00;
          }
LAB_2c61c76a:
          uVar10 = (uint)*(ushort *)(param_1 + 0x28);
          *(short *)(param_1 + 0x26) = sVar4;
          goto LAB_2c61c6d4;
        }
        uVar10 = (uint)uVar1;
        *(short *)(param_1 + 0x26) = sVar4;
      }
      else {
        FUN_2c607df0(param_1);
        uVar10 = (uint)*(ushort *)(param_1 + 0x28);
        *(short *)(param_1 + 0x26) = sVar4;
        iVar6 = extraout_r1_02;
      }
      goto LAB_2c61c6d4;
    }
    uVar10 = (uint)*(ushort *)(param_1 + 0x28);
    uVar7 = 0;
    if (uVar12 == uVar10) goto LAB_2c61c6d8;
  }
  else {
    uVar12 = 0x168;
    uVar14 = (uint)*(ushort *)(param_1 + 0x26);
    uVar9 = _LAB_2c61c7cc + uVar7 * 0x168;
    lVar2 = (ulonglong)uVar10 * (ulonglong)(uVar7 * 0x168);
    iVar6 = (int)lVar2;
    uVar10 = ((uint)((ulonglong)lVar2 >> 0x20) & 0x3ffffff) >> 10;
    iVar11 = (int)((ulonglong)_LAB_2c61c7c8 * (ulonglong)uVar9 >> 0x20);
    uVar7 = (iVar11 + (uVar9 - iVar11 >> 1) & 0x1ffffff) >> 9;
    if (uVar14 != uVar10) {
      if (0x168 < uVar10) {
        uVar10 = uVar10 - 0x168 & 0xffff;
      }
      goto LAB_2c61c6f6;
    }
    uVar10 = (uint)*(ushort *)(param_1 + 0x28);
LAB_2c61c6d4:
    if (uVar12 == uVar10) {
LAB_2c61c6d8:
      uVar13 = (undefined2)uVar7;
      if (*(ushort *)(param_1 + 0x24) == uVar7) {
        return;
      }
      goto LAB_2c61c6de;
    }
  }
  uVar13 = (undefined2)uVar7;
  sVar3 = (short)uVar10 - *(short *)(param_1 + 0x26);
  sVar5 = (short)uVar12;
  sVar4 = sVar5 - *(short *)(param_1 + 0x26);
  iVar6 = (int)sVar3;
  iVar11 = (int)sVar4;
  if (iVar6 < 0) {
    iVar6 = (int)(short)(sVar3 + 0x168);
  }
  if (iVar11 < 0) {
    iVar11 = (int)(short)(sVar4 + 0x168);
  }
  iVar8 = iVar11 - iVar6;
  if (iVar8 < 0) {
    iVar8 = -iVar8;
  }
  if (iVar8 < 0xb5) {
    if (iVar11 < iVar6) {
      uVar15 = FUN_2c607e50(param_1);
      iVar6 = (int)((ulonglong)uVar15 >> 0x20);
      if ((int)uVar15 != 0) {
        FUN_2c61c54c(param_1,uVar12,uVar10);
        iVar6 = extraout_r1_03;
      }
    }
    else if (iVar6 < iVar11) {
      uVar15 = FUN_2c607e50(param_1);
      iVar6 = (int)((ulonglong)uVar15 >> 0x20);
      if ((int)uVar15 != 0) {
        FUN_2c61c54c(param_1,uVar10,uVar12);
        iVar6 = extraout_r1;
      }
    }
    *(short *)(param_1 + 0x28) = sVar5;
  }
  else {
    FUN_2c607df0(param_1);
    *(short *)(param_1 + 0x28) = sVar5;
    iVar6 = extraout_r1_01;
  }
  if (*(ushort *)(param_1 + 0x24) == uVar7) {
    return;
  }
LAB_2c61c6de:
  *(undefined2 *)(param_1 + 0x24) = uVar13;
  iVar11 = *DAT_2c607e4c;
  FUN_2c600c2c(param_1,iVar6);
  FUN_2c6078f0(param_1,&stack0xffffffec);
  if (*DAT_2c607e4c != iVar11) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

