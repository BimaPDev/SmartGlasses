/* FUN_14036c5c @ 0x14036c5c */

float FUN_14036c5c(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  uVar4 = DAT_14036dc8;
  iVar3 = DAT_14036dc4;
  uVar1 = DAT_14036dbc;
  iVar7 = 0;
  fVar9 = DAT_14036db8;
  do {
    *(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) & 0x7fffffff;
    *param_1 = *param_1 & uVar4 | param_2 & 0x3fff;
    *param_1 = *param_1 & uVar1 | (param_3 & 0x3fff) << 0x10;
    FUN_140e5398(2);
    iVar2 = DAT_14036dc0;
    *(undefined4 *)(DAT_14036dc0 + 0x58) = 0x800000;
    *(undefined4 *)(iVar2 + 0x60) = 0xffffffff;
    *(undefined4 *)(iVar2 + 100) = 0xffffffff;
    *(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) & 0x7fffffff | 0x80000000;
    *(uint *)(iVar3 + 0x334) = *(uint *)(iVar3 + 0x334) & 0xbfffffff;
    *(uint *)(iVar3 + 0x334) = *(uint *)(iVar3 + 0x334) & 0xbfffffff | 0x40000000;
    FUN_140e5398(8);
    uVar5 = *(uint *)(iVar3 + 0x338) & 0x3fffff;
    uVar6 = *(uint *)(iVar3 + 0x33c) & 0x3fffff;
    if ((int)(*(uint *)(iVar3 + 0x338) << 10) < 0) {
      uVar5 = uVar5 - 0x400000;
    }
    if ((int)(*(uint *)(iVar3 + 0x33c) << 10) < 0) {
      uVar6 = uVar6 - 0x400000;
    }
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + 7;
    }
    if ((int)uVar6 < 0) {
      uVar6 = uVar6 + 7;
    }
    fVar8 = (float)VectorSignedToFloat(((int)uVar5 >> 3) * ((int)uVar5 >> 3) +
                                       ((int)uVar6 >> 3) * ((int)uVar6 >> 3),
                                       (byte)(in_fpscr >> 0x16) & 3);
    in_fpscr = in_fpscr & 0xfffffff;
    if (fVar8 < 0.0) {
      fVar8 = (float)FUN_140d9350();
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    iVar7 = iVar7 + 1;
    fVar9 = fVar9 + fVar8;
  } while (param_4 != iVar7);
  fVar8 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
  return fVar9 / fVar8;
}

