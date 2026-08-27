/* FUN_2c35dbca @ 0x2c35dbca */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c35e040) */
/* WARNING: Removing unreachable block (ram,0x2c35e050) */
/* WARNING: Removing unreachable block (ram,0x2c35e060) */
/* WARNING: Removing unreachable block (ram,0x2c35e070) */
/* WARNING: Removing unreachable block (ram,0x2c35df60) */
/* WARNING: Removing unreachable block (ram,0x2c35e000) */
/* WARNING: Removing unreachable block (ram,0x2c35e010) */
/* WARNING: Removing unreachable block (ram,0x2c35e020) */
/* WARNING: Removing unreachable block (ram,0x2c35e030) */
/* WARNING: Removing unreachable block (ram,0x2c35df80) */
/* WARNING: Removing unreachable block (ram,0x2c35df8c) */
/* WARNING: Removing unreachable block (ram,0x2c35df90) */
/* WARNING: Removing unreachable block (ram,0x2c35df9c) */
/* WARNING: Removing unreachable block (ram,0x2c35dfa0) */
/* WARNING: Removing unreachable block (ram,0x2c35dfac) */
/* WARNING: Removing unreachable block (ram,0x2c35dfb0) */
/* WARNING: Removing unreachable block (ram,0x2c35dfbc) */
/* WARNING: Removing unreachable block (ram,0x2c35dfc0) */
/* WARNING: Removing unreachable block (ram,0x2c35dfd0) */
/* WARNING: Removing unreachable block (ram,0x2c35dfe0) */
/* WARNING: Removing unreachable block (ram,0x2c35dff0) */
/* WARNING: Removing unreachable block (ram,0x2c35df6c) */
/* WARNING: Removing unreachable block (ram,0x2c35df70) */
/* WARNING: Removing unreachable block (ram,0x2c35df7c) */

void FUN_2c35dbca(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_r4;
  uint uVar5;
  int unaff_r8;
  bool bVar6;
  bool bVar7;
  undefined8 in_d0;
  
  uVar5 = *(uint *)(unaff_r4 + 0x3c);
  *(char *)(param_2 + 0x10 + *(int *)(unaff_r4 + 0x2c)) = (char)*(undefined4 *)(unaff_r4 + 0x38);
  uVar4 = unaff_r8 + 0xc0 >> 0x20;
  VectorHalvingAdd(in_d0,in_d0,1,1);
  VectorHalvingAdd(in_d0,in_d0,1,1);
  VectorHalvingAdd(in_d0,in_d0,1,1);
  VectorHalvingAdd(in_d0,in_d0,1,1);
  VectorHalvingAdd(in_d0,in_d0,1,1);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  do {
    do {
      do {
        do {
          uVar1 = uVar4 << 3;
          bVar6 = (int)uVar1 < 0;
          if ((int)uVar1 < 1) goto code_r0x2c35df2e;
code_r0x2c35dedc:
          iVar2 = uVar4 << 0x17;
          bVar6 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        } while ((iVar2 < 1) || (iVar2 < 1));
code_r0x2c35deec:
      } while (bVar7 || bVar6);
      iVar2 = 0xda;
      bVar6 = false;
code_r0x2c35defc:
    } while ((bVar6) || (bVar6 = false, iVar2 == 0));
    while ((!bVar6 && (iVar3 = iVar2 << 0x10, iVar2 != 0))) {
      bVar6 = false;
      while( true ) {
        if (bVar6) goto code_r0x2c35dedc;
        if (iVar3 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = (uVar4 & 0x1fffffff) >> 0x11;
          bVar6 = false;
code_r0x2c35df2e:
          bVar7 = true;
          if (uVar1 == 0) goto code_r0x2c35deec;
          uVar1 = uVar4 << 3;
        }
        iVar2 = 0;
        bVar6 = true;
        if (uVar1 >> 0x14 == 0) goto code_r0x2c35defc;
        iVar2 = 0;
        bVar6 = true;
        if ((uVar5 & 0x3fffffff) >> 0x12 == 0) break;
        iVar3 = 0;
        bVar6 = true;
      }
    }
  } while( true );
}

