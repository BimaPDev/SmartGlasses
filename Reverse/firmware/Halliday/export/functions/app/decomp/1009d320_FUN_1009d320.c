/* FUN_1009d320 @ 0x1009d320 */

undefined4 FUN_1009d320(undefined4 param_1,int param_2,int *param_3,float *param_4,int param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_a4;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [76];
  
  uVar2 = FUN_1009dbd4();
  bVar1 = *(byte *)(param_5 + 0x28);
  if ((*(byte *)(param_5 + 0x24) < 0xfd) || (uVar4 = bVar1 & 0x38, (bVar1 & 0x38) != 0)) {
    uVar4 = FUN_1012cf78((bVar1 & 0x3f) >> 3);
  }
  fVar10 = (float)VectorSignedToFloat(-(int)*(short *)(param_2 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = *param_4;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 10),(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 6) + (int)*(short *)(param_2 + 10),
                                     (byte)(in_fpscr >> 0x16) & 3);
  fVar7 = (float)VectorSignedToFloat(-(int)*(short *)(param_2 + 0xc) - (int)*(short *)(param_2 + 8),
                                     (byte)(in_fpscr >> 0x16) & 3);
  iVar3 = FUN_1010ef00(fVar5 / fVar11,fVar7 / fVar11,fVar9 / fVar11,fVar10 / fVar11,auStack_70,1,0,
                       (int)*(short *)(param_4 + 2),param_4[1]);
  if (iVar3 == 0) {
    FUN_1013b700(auStack_a0);
    uVar8 = VectorSignedToFloat((int)*(short *)(param_2 + 0xc) + param_3[1] +
                                (int)*(short *)(param_2 + 8),(byte)(in_fpscr >> 0x16) & 3);
    uVar6 = VectorSignedToFloat(*param_3 - (int)*(short *)(param_2 + 10),
                                (byte)(in_fpscr >> 0x16) & 3);
    FUN_1013b722(uVar6,uVar8,auStack_a0);
    FUN_1013b756(*param_4,auStack_a0);
    iVar3 = FUN_1012cf1a(&local_a4,
                         ((int)((uint)(*(byte *)(param_5 + 0xd) >> 3) * 0x107 + 7) >> 5 & 0xffU) <<
                         0x10 | ((int)(((*(ushort *)(param_5 + 0xc) & 0x7ff) >> 5) * 0x103 + 3) >> 6
                                & 0xffU) << 8 |
                         (int)((*(byte *)(param_5 + 0xc) & 0x1f) * 0x107 + 7) >> 5 & 0xffU |
                         0xff000000,*(undefined1 *)(param_5 + 0x24),0x400);
    if (iVar3 == 1) {
      iVar3 = FUN_1010efdc(uVar2,auStack_70,0x1901,auStack_a0,uVar4,local_a4);
      if (iVar3 == 0) {
        iVar3 = FUN_1009dc5c(param_1);
        if (iVar3 != 1) {
          return 0;
        }
        iVar3 = FUN_1013b79e(auStack_70);
        if (iVar3 == 0) {
          return 1;
        }
        uVar6 = 0x5a;
        uVar2 = DAT_1009d4c4;
      }
      else {
        uVar6 = 0x54;
        uVar2 = DAT_1009d4c0;
      }
      FUN_10094174(3,DAT_1009d4bc,uVar6,DAT_1009d4b8,uVar2,iVar3);
    }
  }
  else {
    FUN_10094174(3,DAT_1009d4bc,0x45,DAT_1009d4b8,DAT_1009d4b4,iVar3);
  }
  return 0;
}

