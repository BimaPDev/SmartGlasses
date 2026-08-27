/* FUN_2c4bd870 @ 0x2c4bd870 */

void FUN_2c4bd870(void)

{
  char *pcVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_20;
  ushort local_1e;
  int local_1c;
  
  pcVar1 = DAT_2c4bd978;
  local_1c = *DAT_2c4bd974;
  local_20 = 0;
  local_1e = 0;
  if (*DAT_2c4bd978 == '\0') {
    FUN_2c673a68(3,&local_20);
    uVar7 = (uint)local_20;
    if (uVar7 == 0) {
      uVar7 = 0x1ac << (*DAT_2c4bd97c - 10 & 0xff);
    }
    fVar11 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
    FUN_2c673a68(4,&local_1e);
    pfVar2 = DAT_2c4bd990;
    uVar7 = (uint)local_1e;
    if (uVar7 == 0) {
      fVar9 = (float)VectorSignedToFloat(0x235 << (*DAT_2c4bd97c - 10 & 0xff),
                                         (byte)(in_fpscr >> 0x16) & 3);
    }
    else {
      fVar9 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
    }
    fVar8 = DAT_2c4bd988 / (fVar9 - fVar11);
    fVar10 = (-(DAT_2c4bd980 * fVar11) + fVar9 * DAT_2c4bd984) / (fVar9 - fVar11);
    *DAT_2c4bd98c = fVar8;
    uVar6 = DAT_2c4bd9a0;
    uVar5 = DAT_2c4bd99c;
    uVar4 = DAT_2c4bd998;
    uVar3 = DAT_2c4bd994;
    *pfVar2 = fVar10;
    *pcVar1 = '\x01';
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1d9,uVar6,uVar5,uVar4,uVar3,local_20,uVar7,(int)fVar11,(int)fVar9,(int)fVar8,
          (int)fVar10);
  }
  if (*DAT_2c4bd974 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

