/* FUN_1013b608 @ 0x1013b608 */

int FUN_1013b608(float param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  float fVar4;
  
  fVar4 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = FUN_10003a58(fVar4 * param_1 + 0.5);
  uVar3 = FUN_10006668(uVar1);
  iVar2 = FUN_10004068(uVar3,extraout_s1);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    uVar3 = FUN_10006668(uVar1);
    iVar2 = FUN_10004068(uVar3,extraout_s1_00);
  }
  if (iVar2 <= param_2) {
    uVar3 = FUN_10006668(uVar1);
    iVar2 = FUN_10004068(uVar3,extraout_s1_01);
    if (iVar2 < 1) {
      param_2 = 0;
    }
    else {
      uVar1 = FUN_10006668(uVar1);
      param_2 = FUN_10004068(uVar1,extraout_s1_02);
    }
  }
  return param_2;
}

