/* FUN_140391f0 @ 0x140391f0 */

void FUN_140391f0(int param_1,int param_2,float *param_3,float *param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  
  fVar4 = DAT_14039260;
  fVar3 = DAT_1403925c;
  if (param_2 < 1) {
    return;
  }
  iVar5 = 0;
  do {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + iVar5 * 2),
                                       (byte)(in_fpscr >> 0x16) & 3);
    *param_3 = fVar6;
    iVar2 = iVar5 * 2;
    iVar5 = iVar5 + 2;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 2 + iVar2),
                                       (byte)(in_fpscr >> 0x16) & 3);
    *param_4 = fVar6;
    if (!NAN(*param_3) && !NAN(fVar3)) {
      *param_3 = *param_3 - fVar4;
      fVar6 = *param_4;
    }
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar3) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(fVar6) || NAN(fVar3)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      *param_4 = fVar6 - fVar4;
    }
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
  } while (iVar5 < param_2);
  return;
}

