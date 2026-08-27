/* FUN_2c61669c @ 0x2c61669c */

void FUN_2c61669c(int param_1,int *param_2,int param_3,short *param_4)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = FUN_2c607404();
  iVar10 = (int)((uint)*(ushort *)(param_1 + 0x84) * iVar5 * 0x100) >> 0x10;
  iVar5 = FUN_2c607440(param_1);
  iVar5 = (uint)*(ushort *)(param_1 + 0x86) * iVar5;
  bVar9 = *(byte *)(param_1 + 0x88) & 7;
  if (bVar9 == 1) {
    *param_4 = (short)((param_3 * iVar10) / (int)(*(ushort *)(param_1 + 0x82) - 1));
  }
  else if (bVar9 == 3) {
    iVar11 = param_1 + ((int)((uint)*(byte *)((int)param_2 + 0xe) << 0x1c) >> 0x1f) * -2;
    sVar3 = FUN_2c62e4a8((int)*(short *)(*param_2 + param_3 * 2),(int)*(short *)(iVar11 + 0x74),
                         (int)*(short *)(iVar11 + 0x78),0,iVar10);
    *param_4 = sVar3;
  }
  else if (bVar9 == 2) {
    iVar11 = param_1 + 0x24;
    uVar6 = FUN_2c62ca30(iVar11);
    sVar4 = FUN_2c6033b4(param_1,0x50000,0x15);
    uVar1 = *(ushort *)(param_1 + 0x84);
    sVar3 = FUN_2c6033b4(param_1,0,0x15);
    uVar2 = *(ushort *)(param_1 + 0x84);
    uVar8 = (uint)*(ushort *)(param_1 + 0x82);
    *param_4 = (short)((iVar10 * param_3) / (int)uVar8);
    piVar7 = (int *)FUN_2c62ca18(iVar11);
    sVar3 = (short)((uint)(int)(short)((int)(iVar10 - (uVar8 - 1) *
                                                      ((int)((int)sVar3 * (uint)uVar2) >> 8)) /
                                      (int)uVar8) / uVar6);
    for (; (piVar7 != (int *)0x0 && (param_2 != piVar7));
        piVar7 = (int *)FUN_2c62ca28(iVar11,piVar7)) {
      *param_4 = *param_4 + sVar3;
    }
    iVar10 = (int)sVar3 - ((int)((uint)uVar1 * (int)sVar4) >> 8);
    if (iVar10 < 0) {
      iVar10 = iVar10 + 1;
    }
    *param_4 = *param_4 + (short)(iVar10 >> 1);
  }
  sVar3 = FUN_2c6033b4(param_1,0,0x32);
  sVar4 = FUN_2c6033b4(param_1,0,0x12);
  *param_4 = sVar4 + sVar3 + *param_4;
  sVar4 = FUN_2c605068(param_1);
  *param_4 = *param_4 - sVar4;
  iVar10 = param_1 + ((int)((uint)*(byte *)((int)param_2 + 0xe) << 0x1b) >> 0x1f) * -2;
  iVar11 = (int)*(short *)(iVar10 + 0x6c);
  param_4[1] = (short)((uint)iVar5 >> 8) -
               (short)(((*(short *)(param_2[1] + param_3 * 2) - iVar11) * (iVar5 * 0x100 >> 0x10)) /
                      (*(short *)(iVar10 + 0x70) - iVar11));
  sVar4 = FUN_2c6033b4(param_1,0,0x10);
  param_4[1] = sVar4 + sVar3 + param_4[1];
  sVar3 = FUN_2c604a44(param_1);
  param_4[1] = param_4[1] - sVar3;
  return;
}

