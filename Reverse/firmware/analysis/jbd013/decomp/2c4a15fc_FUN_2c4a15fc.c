/* FUN_2c4a15fc @ 0x2c4a15fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4a15fc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  short sVar6;
  uint in_fpscr;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 uVar7;
  double dVar8;
  undefined4 extraout_s1;
  float extraout_s14;
  float fVar9;
  int iStack_68;
  int aiStack_64 [16];
  int iStack_24;
  
  iStack_24 = *_LAB_2c4a174c;
  iVar2 = FUN_2c4a14bc();
  iVar1 = _LAB_2c4a1750;
  if (iVar2 != 0) {
    if (*_LAB_2c4a174c == iStack_24) {
      return 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  sVar6 = 0x560;
  while( true ) {
    piVar5 = aiStack_64;
    iVar2 = 0;
    do {
      iVar3 = FUN_2c4a09bc(sVar6,piVar5);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x4b1,_LAB_2c4a175c,_LAB_2c4a1758,_LAB_2c4a1760);
      }
      iVar3 = *piVar5;
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + iVar3;
    } while (piVar5 != &iStack_24);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    coprocessor_function2(10,3,4,in_cr7,in_cr8,in_cr8);
    fVar9 = (float)VectorSignedToFloat(iVar2 >> 4,(byte)(in_fpscr >> 0x16) & 3);
    iVar2 = (int)(fVar9 + extraout_s14);
    if (1000 < iVar2) break;
    piVar5 = &iStack_68;
    iVar3 = 0;
    do {
      piVar5 = piVar5 + 1;
      iVar3 = (*piVar5 - iVar2) * (*piVar5 - iVar2) + iVar3;
    } while (aiStack_64 + 0xf != piVar5);
    iVar4 = ((int)((ulonglong)((longlong)iVar1 * (longlong)iVar3) >> 0x20) + iVar3 >> 3) -
            (iVar3 >> 0x1f);
    dVar8 = (double)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
    in_fpscr = in_fpscr & 0xfffffff;
    if (dVar8 < 0.0) {
      uVar7 = FUN_2c667350(iVar2,iVar4,(int)((longlong)iVar1 * (longlong)iVar3));
      dVar8 = (double)CONCAT44(extraout_s1,uVar7);
    }
    else {
      dVar8 = SQRT(dVar8);
    }
    iVar2 = VectorFloatToSigned(dVar8,3);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x4c3,_LAB_2c4a175c,_LAB_2c4a1758,_LAB_2c4a1764);
    }
    sVar6 = sVar6 + 4;
    if (sVar6 == 0x56c) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x4c8,_LAB_2c4a175c,_LAB_2c4a1758,_LAB_2c4a1754);
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x4bb,_LAB_2c4a175c,_LAB_2c4a1758,_LAB_2c4a1768);
}

