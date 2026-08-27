/* FUN_2c4a50bc @ 0x2c4a50bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4a50bc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  short sVar7;
  uint in_fpscr;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 uVar8;
  double dVar9;
  undefined4 extraout_s1;
  float extraout_s14;
  float fVar10;
  int iStack_68;
  int aiStack_64 [16];
  int iStack_24;
  
  iStack_24 = *_LAB_2c4a5210;
  iVar2 = FUN_2c4a4f60();
  iVar1 = _LAB_2c4a5214;
  if (iVar2 != 0) {
    if (*_LAB_2c4a5210 == iStack_24) {
      return 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  sVar7 = 0x560;
  while( true ) {
    piVar6 = aiStack_64;
    iVar2 = 0;
    do {
      iVar3 = FUN_2c4a4514(sVar7,piVar6);
      if (iVar3 != 0) {
        uVar5 = 0x483;
        uVar8 = _LAB_2c4a5228;
        goto LAB_2c4a51a6;
      }
      iVar3 = *piVar6;
      piVar6 = piVar6 + 1;
      iVar2 = iVar2 + iVar3;
    } while (piVar6 != &iStack_24);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    coprocessor_function2(10,3,4,in_cr7,in_cr8,in_cr8);
    fVar10 = (float)VectorSignedToFloat(iVar2 >> 4,(byte)(in_fpscr >> 0x16) & 3);
    iVar2 = (int)(fVar10 + extraout_s14);
    if (1000 < iVar2) break;
    piVar6 = &iStack_68;
    iVar3 = 0;
    do {
      piVar6 = piVar6 + 1;
      iVar3 = (*piVar6 - iVar2) * (*piVar6 - iVar2) + iVar3;
    } while (aiStack_64 + 0xf != piVar6);
    iVar4 = ((int)((ulonglong)((longlong)iVar1 * (longlong)iVar3) >> 0x20) + iVar3 >> 3) -
            (iVar3 >> 0x1f);
    dVar9 = (double)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
    in_fpscr = in_fpscr & 0xfffffff;
    if (dVar9 < 0.0) {
      uVar8 = FUN_2c667350(iVar2,iVar4,(int)((longlong)iVar1 * (longlong)iVar3));
      dVar9 = (double)CONCAT44(extraout_s1,uVar8);
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    iVar2 = VectorFloatToSigned(dVar9,3);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x495,_LAB_2c4a5224,_LAB_2c4a5220,_LAB_2c4a522c,_LAB_2c4a5218,0x495);
    }
    sVar7 = sVar7 + 4;
    if (sVar7 == 0x56c) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x49a,_LAB_2c4a5224,_LAB_2c4a5220,_LAB_2c4a521c,_LAB_2c4a5218,0x49a);
    }
  }
  uVar5 = 0x48d;
  uVar8 = _LAB_2c4a5230;
LAB_2c4a51a6:
                    /* WARNING: Subroutine does not return */
  TRACE(4,uVar5,_LAB_2c4a5224,_LAB_2c4a5220,uVar8,_LAB_2c4a5218,uVar5);
}

