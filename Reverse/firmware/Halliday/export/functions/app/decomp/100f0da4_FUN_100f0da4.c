/* FUN_100f0da4 @ 0x100f0da4 */

undefined4 FUN_100f0da4(int param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = FUN_1013938a(*(undefined4 *)(param_1 + 0x24));
  if (iVar5 != 0) {
    sVar3 = *(short *)(param_1 + 10);
    sVar1 = *(short *)(param_1 + 8);
    *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 0xe) - sVar3;
    *(short *)((int)param_2 + 10) = *(short *)((int)param_2 + 0x12) - sVar3;
    *(short *)(param_2 + 2) = (short)param_2[4] - sVar1;
    *(short *)(param_2 + 1) = (short)param_2[3] - sVar1;
    return 1;
  }
  iVar5 = *param_2;
  sVar3 = ((short)param_2[4] + 1) - (short)param_2[3];
  if ((int)sVar3 == (uint)*(ushort *)(iVar5 + 8)) {
    sVar1 = *(short *)((int)param_2 + 0x12);
    sVar2 = *(short *)((int)param_2 + 0xe);
    uVar6 = (uint)*(ushort *)(iVar5 + 10);
    sVar4 = (sVar1 + 1) - sVar2;
    if ((int)sVar4 == uVar6) {
      param_2[1] = 0;
      *(short *)(param_2 + 2) = sVar3 + -1;
      *(short *)((int)param_2 + 10) = sVar4 + -1;
      return 1;
    }
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar5 + 10);
    sVar2 = *(short *)((int)param_2 + 0xe);
    sVar1 = *(short *)((int)param_2 + 0x12);
  }
  FUN_100a5b78(DAT_100f0e58 | (DAT_100f0e54 - DAT_100f0e50) * 0x20 & 0xff00U,DAT_100f0e5c,
               (int)(short)param_2[3],(int)sVar2,(int)(short)param_2[4],(int)sVar1,
               (uint)*(ushort *)(iVar5 + 8),uVar6);
  return 0;
}

