/* FUN_14036b34 @ 0x14036b34 */

float FUN_14036b34(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  iVar3 = DAT_14036c58;
  uVar2 = DAT_14036c54;
  uVar1 = DAT_14036c50;
  iVar6 = 0;
  fVar8 = DAT_14036c4c;
  do {
    *param_1 = *param_1 & uVar2 | param_2 & 0x3fff;
    *param_1 = *param_1 & uVar1 | (param_3 & 0x3fff) << 0xe;
    FUN_140e5398(2);
    *(uint *)(iVar3 + 0x334) = *(uint *)(iVar3 + 0x334) & 0xbfffffff;
    *(uint *)(iVar3 + 0x334) = *(uint *)(iVar3 + 0x334) & 0xbfffffff | 0x40000000;
    FUN_140e5398(8);
    uVar4 = *(uint *)(iVar3 + 0x338) & 0x3fffff;
    uVar5 = *(uint *)(iVar3 + 0x33c) & 0x3fffff;
    if ((int)(*(uint *)(iVar3 + 0x338) << 10) < 0) {
      uVar4 = uVar4 - 0x400000;
    }
    if ((int)(*(uint *)(iVar3 + 0x33c) << 10) < 0) {
      uVar5 = uVar5 - 0x400000;
    }
    if ((int)uVar4 < 0) {
      uVar4 = uVar4 + 7;
    }
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + 7;
    }
    fVar7 = (float)VectorSignedToFloat(((int)uVar4 >> 3) * ((int)uVar4 >> 3) +
                                       ((int)uVar5 >> 3) * ((int)uVar5 >> 3),
                                       (byte)(in_fpscr >> 0x16) & 3);
    in_fpscr = in_fpscr & 0xfffffff;
    if (fVar7 < 0.0) {
      fVar7 = (float)FUN_140d9350();
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    iVar6 = iVar6 + 1;
    fVar8 = fVar8 + fVar7;
  } while (param_4 != iVar6);
  fVar7 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
  return fVar8 / fVar7;
}

