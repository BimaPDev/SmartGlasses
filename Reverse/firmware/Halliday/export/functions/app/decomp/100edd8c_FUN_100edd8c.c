/* FUN_100edd8c @ 0x100edd8c */

int FUN_100edd8c(int param_1,ushort *param_2,int param_3,int param_4,ushort param_5,byte param_6)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar4 = FUN_100674c4(param_1,(int)(short)*param_2,(int)(short)param_2[1]);
  uVar11 = (uint)(ushort)(*(short *)(param_1 + 0xc) * (ushort)(*(byte *)(param_1 + 0xe) >> 3));
  uVar2 = param_2[3];
  uVar12 = (param_2[2] + 1) - (uint)*param_2 & 0xffff;
  uVar3 = param_2[1];
  uVar5 = FUN_1005fb14(param_4);
  uVar14 = (uVar5 & 0x7ff) >> 3;
  uVar5 = param_5 * uVar14 & 0xffff;
  uVar13 = (uVar2 + 1) - (uint)uVar3 & 0xffff;
  if (*DAT_100edf9c == '\0') {
    iVar6 = -0x16;
  }
  else {
    FUN_1011dbf4(DAT_100edfa0,0xffffffff);
    iVar6 = DAT_100edfa4;
    if ((param_6 & 3) == 0) {
      uVar9 = 2;
    }
    else {
      uVar9 = 0x20;
    }
    *(undefined2 *)(DAT_100edfa4 + 0x18) = uVar9;
    *(uint *)(iVar6 + 0x14) = uVar11;
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_1 + 4);
    FUN_1013d9b0(iVar6);
    iVar6 = DAT_100edfa4;
    puVar1 = (uint *)(DAT_100edfa4 + 0x38);
    if ((param_6 & 1) == 0) {
      *(uint *)(DAT_100edfa4 + 0x38) = uVar12;
      *(uint *)(iVar6 + 0x3c) = uVar13;
    }
    else {
      *(uint *)(DAT_100edfa4 + 0x3c) = uVar12;
      *puVar1 = uVar13;
    }
    *(int *)(iVar6 + 0x34) = param_4;
    *(uint *)(iVar6 + 0x40) = uVar5;
    FUN_1013d9f0(DAT_100edfa4,1);
    iVar6 = DAT_100edfa4;
    if ((param_6 & 3) == 0) {
      iVar6 = FUN_1013da10(DAT_100edfa4,param_3,uVar4,*(undefined4 *)(DAT_100edfa4 + 0x38),
                           *(undefined4 *)(DAT_100edfa4 + 0x3c));
    }
    else {
      sVar10 = (param_6 & 1) * 4;
      if ((int)((uint)param_6 << 0x1e) < 0) {
        sVar10 = sVar10 + 3;
      }
      *(short *)(DAT_100edfa4 + 0x4c) = sVar10;
      FUN_100654e8(iVar6);
      iVar6 = FUN_100653c8(DAT_100edfa4,param_3,uVar4,0,0,uVar12,uVar13);
    }
    if (iVar6 < 0) {
      FUN_1011deaa(DAT_100edfa4,0xffffffff);
    }
    FUN_10113e2c(DAT_100edfa0);
    if (-1 < iVar6) {
      return iVar6;
    }
  }
  if ((param_6 & 3) == 0) {
    iVar7 = FUN_1011e910(uVar4);
    uVar14 = uVar12 * uVar14 & 0xffff;
    if (param_4 == *(int *)(param_1 + 4)) {
      if ((uVar11 == uVar14) && (uVar5 == uVar11)) {
        uVar4 = FUN_1011e910(param_3);
        FUN_100672a4(iVar7,uVar4,uVar13 * uVar5);
        FUN_100673b8(5000);
      }
      else {
        for (; uVar13 != 0; uVar13 = uVar13 - 1) {
          FUN_1011e89a(param_3,uVar14);
          FUN_1011ea40(iVar7,param_3,uVar14);
          iVar7 = iVar7 + uVar11;
          param_3 = param_3 + uVar5;
        }
      }
    }
    else {
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        FUN_1011e89a(param_3,uVar14);
        iVar8 = FUN_1011e2c0(iVar7,*(undefined4 *)(param_1 + 4),param_3,param_4,uVar12);
        if (iVar8 < 0) {
          FUN_100a5b78(DAT_100edfbc | (DAT_100edfac - DAT_100edfa8) * 0x20 & 0xff00U,DAT_100edfb8,
                       DAT_100edfc0,param_4,*(undefined4 *)(param_1 + 4));
          break;
        }
        iVar7 = iVar7 + uVar11;
        param_3 = param_3 + uVar5;
      }
    }
    FUN_1011e8e4();
  }
  else {
    FUN_100a5b78(DAT_100edfb0 | (DAT_100edfac - DAT_100edfa8) * 0x20 & 0xff00U,DAT_100edfb8,
                 DAT_100edfb4);
    iVar6 = -0x58;
  }
  return iVar6;
}

