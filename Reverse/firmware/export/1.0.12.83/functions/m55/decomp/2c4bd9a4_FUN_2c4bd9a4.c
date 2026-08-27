/* FUN_2c4bd9a4 @ 0x2c4bd9a4 */

void FUN_2c4bd9a4(int param_1,int param_2)

{
  float *pfVar1;
  float *extraout_r1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  uint local_2c;
  
  local_2c = *DAT_2c4bdc30;
  if (param_2 - 5U < 2) {
LAB_2c4bda4c:
    FUN_2c4bd870();
    pfVar1 = extraout_r1;
    if (param_1 != 0xffff) {
      fVar2 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      uVar5 = (uint)(*DAT_2c4bdc50 + fVar2 * *DAT_2c4bdc4c);
      uVar5 = uVar5 & ~((int)uVar5 >> 0x1f) & 0xffff;
      goto LAB_2c4bda2c;
    }
  }
  else {
    if (param_2 == 1) goto LAB_2c4bda4c;
    local_32 = 0;
    local_2e = 0;
    local_30 = local_32;
    if (*DAT_2c4bdc34 == '\0') {
      FUN_2c673a68(0x10,&local_32);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1ef,DAT_2c4bdc5c,DAT_2c4bdc58,DAT_2c4bdc54,local_32,local_32);
    }
    pfVar1 = (float *)0x0;
    if (param_1 != 0xffff) {
      fVar3 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      fVar2 = *DAT_2c4bdc3c;
      fVar4 = *DAT_2c4bdc40;
      if (*DAT_2c4bdc38 < fVar3) {
        fVar2 = *DAT_2c4bdc44;
        fVar4 = *DAT_2c4bdc48;
      }
      uVar5 = (uint)(fVar4 + fVar3 * fVar2);
      uVar5 = uVar5 & ~((int)uVar5 >> 0x1f) & 0xffff;
      pfVar1 = DAT_2c4bdc38;
      goto LAB_2c4bda2c;
    }
  }
  uVar5 = 0xffff;
LAB_2c4bda2c:
  if ((*DAT_2c4bdc30 ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar5,pfVar1,*DAT_2c4bdc30 ^ local_2c,0);
}

