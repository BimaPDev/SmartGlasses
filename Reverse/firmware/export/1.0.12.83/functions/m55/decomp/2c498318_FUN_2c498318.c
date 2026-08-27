/* FUN_2c498318 @ 0x2c498318 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c498318(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  int aiStack_88 [4];
  double dStack_78;
  uint uStack_70;
  int iStack_6c;
  float *pfStack_68;
  int iStack_64;
  float afStack_5c [5];
  float afStack_48 [2];
  byte bStack_3e;
  byte bStack_3d;
  undefined4 uStack_3c;
  
  piVar7 = _LAB_2c4984f0;
  piVar6 = _LAB_2c4984ec;
  fVar13 = fRam2c4984d4;
  iVar11 = 0x14;
  iVar3 = -(param_4 & 0xfffffff8);
  iStack_6c = 0;
  uStack_3c = *_LAB_2c4984d8;
  iStack_64 = 0;
  uStack_70 = param_3;
  do {
    if ((*piVar6 == 1) || (*piVar7 == 1)) {
      if ((*piVar6 != 1) && (*piVar7 != 1)) {
        bVar5 = false;
        iVar9 = -1;
        pfVar8 = afStack_48;
LAB_2c498392:
        FUN_2c497d98(param_1,0x1fe1,pfVar8,0xc);
        iVar10 = (uint)bStack_3d + (uint)bStack_3e * 0x100;
        if (((iVar10 != 0) && (!bVar5)) && (iVar10 != iVar9)) goto LAB_2c4983b6;
      }
    }
    else {
      pfStack_68 = afStack_48;
      FUN_2c497d98(param_1,0x1fe0,pfStack_68,0xc);
      iVar9 = (uint)bStack_3d + (uint)bStack_3e * 0x100;
      if ((*piVar6 != 1) && (*piVar7 != 1)) {
        bVar5 = iVar9 == 0;
        pfVar8 = pfStack_68;
        goto LAB_2c498392;
      }
      if (iVar9 == 0) goto LAB_2c498414;
      iVar10 = -1;
LAB_2c4983b6:
      FUN_2c497ce0(param_1,param_2,(int)&uStack_70 + iVar3,uStack_70 & 0xffff);
      iStack_6c = FUN_2c4981f8((int)&uStack_70 + iVar3);
      fVar12 = (float)VectorSignedToFloat(((iStack_6c - iVar9) * 0x32) / (iVar10 - iVar9),
                                          (byte)(in_fpscr >> 0x16) & 3);
      fVar12 = fVar12 + 30.0;
      uVar1 = in_fpscr & 0xfffffff;
      uVar2 = uVar1 | (uint)(fVar12 < 0.0) << 0x1f | (uint)(fVar12 == 0.0) << 0x1e;
      in_fpscr = uVar2 | (uint)NAN(fVar12) << 0x1c;
      bVar4 = (byte)(uVar2 >> 0x18);
      if ((!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
         (in_fpscr = uVar1, fVar12 < fVar13)) {
        afStack_5c[iStack_64] = fVar12;
        iStack_64 = iStack_64 + 1;
      }
    }
LAB_2c498414:
    if (iStack_64 == 5) {
      pfVar8 = afStack_5c + 1;
      do {
        fVar13 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        if ((int)((uint)(fVar13 < afStack_5c[0]) << 0x1f) < 0) {
          afStack_5c[0] = fVar13;
        }
      } while (afStack_48 != pfVar8);
      *(int *)((int)aiStack_88 + iVar3 + 8) = iStack_6c;
      *(undefined4 *)((int)aiStack_88 + iVar3) = _LAB_2c4984dc;
      *(undefined4 *)((int)aiStack_88 + iVar3 + 4) = param_1;
      *(double *)((int)&dStack_78 + iVar3) = (double)afStack_5c[0];
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2c3,_LAB_2c4984e4,_LAB_2c4984e0);
    }
    iVar11 = iVar11 + -1;
    if (iVar11 == 0) {
      *(undefined4 *)((int)aiStack_88 + iVar3) = _LAB_2c4984e8;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2b0,_LAB_2c4984e4,_LAB_2c4984e0);
    }
  } while( true );
}

