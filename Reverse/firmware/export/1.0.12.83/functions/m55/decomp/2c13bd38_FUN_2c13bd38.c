/* FUN_2c13bd38 @ 0x2c13bd38 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13bd38(void)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint in_fpscr;
  int aiStack_50 [3];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_14;
  
  uStack_14 = *_DAT_2c13bf14;
  uVar4 = func_0x2c141318();
  uVar3 = _DAT_2c13bf40;
  puVar2 = _DAT_2c13bf20;
  piVar6 = _DAT_2c13bf1c;
  *_DAT_2c13bf18 = uVar4;
LAB_2c13bd5a:
  do {
    while( true ) {
      func_0x2c14142c(0x80);
      func_0x2c141468(0x80,0,0xffffffff);
      aiStack_50[0] = 0;
      iVar5 = FUN_2c13bc94(0x544,aiStack_50);
      uVar10 = _DAT_2c13bf24;
      if (iVar5 == 0) break;
LAB_2c13befe:
      FUN_2c135988(4,0x652,_DAT_2c13bf38,uVar3,_DAT_2c13bf3c);
    }
    uVar15 = (uint)((ulonglong)_DAT_2c13bf24 * (ulonglong)*puVar2 >> 0x20);
    piVar6[*puVar2 + ((uVar15 & 0xfffffff0) - (uVar15 >> 4)) * -2] = aiStack_50[0];
    aiStack_50[0] = iVar5;
    iVar5 = FUN_2c13bc94(0x54c,aiStack_50);
    if (iVar5 != 0) goto LAB_2c13befe;
    uVar15 = *puVar2;
    uVar10 = (uint)((ulonglong)uVar10 * (ulonglong)uVar15 >> 0x20);
    *puVar2 = uVar15 + 1;
    piVar6[uVar15 + ((uVar10 & 0xfffffff0) - (uVar10 >> 4)) * -2 + 0x1e] = aiStack_50[0];
    if (0x1d < uVar15 + 1) {
      FUN_2c13e9dc(aiStack_50 + 1,0,0x38);
      piVar1 = _DAT_2c13bf28;
      *puVar2 = 0;
      if (*piVar1 != 0) {
        func_0x2c13f9c8();
      }
      piVar1 = _DAT_2c13bf1c;
      iVar11 = 0;
      iVar16 = *piVar6;
      iVar17 = piVar6[0x1e];
      sVar9 = 1;
      iVar14 = 0;
      iVar13 = 0;
      iVar5 = 0;
      piVar6 = _DAT_2c13bf1c;
      iVar7 = iVar17;
      iVar8 = iVar16;
      do {
        if (sVar9 == 1) {
          iVar14 = iVar8;
          iVar5 = iVar16;
          if (iVar16 <= iVar8) {
            iVar14 = iVar16;
            iVar5 = iVar8;
          }
          iVar11 = iVar7;
          iVar13 = iVar17;
          if (iVar17 <= iVar7) {
            iVar11 = iVar17;
            iVar13 = iVar7;
          }
        }
        else {
          if (iVar5 < iVar8) {
            iVar5 = iVar8;
          }
          if (iVar8 <= iVar14) {
            iVar14 = iVar8;
          }
          if (iVar13 < iVar7) {
            iVar13 = iVar7;
          }
          if (iVar7 <= iVar11) {
            iVar11 = iVar7;
          }
          if (sVar9 == 0x1e) goto LAB_2c13be50;
        }
        iVar8 = piVar6[1];
        sVar9 = sVar9 + 1;
        iVar7 = piVar6[0x1f];
        piVar6 = piVar6 + 1;
      } while( true );
    }
  } while( true );
LAB_2c13be50:
  aiStack_50[1] = 3;
  FUN_2c14486c();
  uVar4 = FUN_2c1448c4();
  fStack_44 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
  fStack_40 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x16) & 3);
  fStack_3c = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
  fStack_38 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x16) & 3);
  uVar12 = *(undefined4 *)(_DAT_2c13bf2c + 0x80);
  uStack_30 = VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
  aiStack_50[2] = VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  iVar7 = (int)fStack_3c;
  iVar14 = (int)fStack_38;
  iVar5 = (int)fStack_40;
  iVar8 = (int)fStack_44;
  uStack_2c = 7;
  FUN_2c13e9dc(_DAT_2c13bf1c,0,0xf0);
  FUN_2c13e9dc(_DAT_2c13bf30,0,0xf0);
  FUN_2c135988(4,0x69a,_DAT_2c13bf38,uVar3,_DAT_2c13bf34,iVar8,iVar5,iVar7,iVar14,uVar12);
  FUN_2c13aa78(aiStack_50 + 1);
  piVar6 = piVar1;
  goto LAB_2c13bd5a;
}

