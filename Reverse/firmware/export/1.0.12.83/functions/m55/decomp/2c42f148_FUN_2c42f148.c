/* FUN_2c42f148 @ 0x2c42f148 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c42f148(char *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  code *pcVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r1;
  undefined4 *extraout_r2;
  int iVar8;
  int extraout_r3;
  uint *unaff_r4;
  uint *puVar9;
  uint unaff_r5;
  int *unaff_r6;
  int *piVar10;
  int *piVar11;
  int unaff_r7;
  int iVar12;
  uint uVar13;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 unaff_pc;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined4 extraout_s4;
  undefined1 in_q1 [16];
  undefined1 extraout_var [12];
  undefined1 auVar17 [16];
  undefined1 in_q6 [16];
  
  iVar12 = unaff_r7 + -0xef;
  uVar7 = (uint)*(ushort *)((int)param_3 + unaff_r5);
  iVar8 = param_4;
  if (iVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xa6,0x2c42f188);
    (*pcVar2)();
  }
  while( true ) {
    *(int *)(iVar12 + -0xef + unaff_r5) = iVar8;
    puVar9 = (uint *)((int)unaff_r4 + -0x7d);
    *(char *)(iVar12 + -0xe5) = (char)param_1;
    if (param_3 == (undefined4 *)0x0) {
      *param_1 = (char)iVar12 + '\"';
      *(char **)(iVar12 + -0x2ad) = param_1;
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xe1,0x2c42f16c);
      (*pcVar2)();
    }
    uVar3 = *(ushort *)(unaff_r5 + 8);
    unaff_r5 = (uint)uVar3;
    *(uint *)((int)unaff_r4 + -0x79) = uVar7;
    iVar8 = *unaff_r6;
    piVar10 = unaff_r6 + 1;
    iVar12 = iVar12 + -0x3ba;
    bVar16 = SBORROW4((int)param_3,0x27);
    bVar14 = param_3 == (undefined4 *)0x27;
    bVar15 = false;
    if ((int)param_3 + -0x27 < 0) break;
    while( true ) {
      if (bVar14 || bVar15 != bVar16) {
        *(char **)param_1 = param_1;
        software_interrupt(0x59);
        if ((int)param_1 < 0) {
          *(uint **)(iVar8 + 0x5c) = puVar9;
          return CONCAT44(param_4,param_1);
        }
        *param_3 = param_1;
        param_3[1] = puVar9;
        param_3[2] = unaff_r5;
        param_3[3] = piVar10;
        param_3 = param_3 + 4;
        *(char *)(uVar7 + 6) = (char)uVar3;
        bVar16 = SBORROW4(iVar12 + -0xe6,0xd4);
        iVar12 = iVar12 + -0x1ba;
        bVar15 = iVar12 < 0;
        bVar14 = iVar12 == 0;
        if (!bVar16) {
          return CONCAT44(param_4,param_4);
        }
        goto LAB_2c42f19a;
      }
      iVar8 = iVar8 + (int)piVar10;
      uVar6 = iVar12 - 0xef;
      if (uVar6 == 0 || iVar12 < 0xef) goto LAB_2c42f210;
      if ((int)uVar6 < 0) break;
      sVar4 = *(short *)(param_1 + uVar7);
      param_1 = (char *)func_0x2c72b0ee();
      in_q1._4_12_ = extraout_var;
      in_q1._0_4_ = extraout_s4;
      bVar16 = SBORROW4((int)sVar4,0xee);
      iVar12 = sVar4 + -0xee;
      bVar15 = iVar12 < 0;
      bVar14 = iVar12 == 0;
      *(short *)(extraout_r3 + (int)extraout_r2) = (short)puVar9;
      uVar7 = extraout_r1;
      param_3 = extraout_r2;
      iVar8 = extraout_r3;
      in_r12 = extraout_r12;
    }
    iVar12 = iVar12 + -0x1dd;
    unaff_r4 = puVar9;
    unaff_r6 = piVar10;
    if (0xed < uVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  bVar15 = true;
LAB_2c42f19a:
  iVar5 = _DAT_2c42f3a8;
  if (!bVar14 && bVar15 == bVar16) {
    unaff_r5 = (uint)*(char *)(iVar8 + (int)param_3);
    iVar5 = iVar12;
  }
  iVar8 = iVar5 + -0xee;
  param_1[unaff_r5] = (char)uVar7;
  if (iVar8 != 0 && 0xed < iVar5) {
    param_1[(int)piVar10] = (char)unaff_r5;
    *(int *)(iVar5 + -0x266) = iVar5 + -0x2ca;
    *in_r12 = unaff_r9;
    in_r12[1] = unaff_pc;
    *(undefined1 *)(unaff_r5 + 0xf) = 0x2f;
    uRam2c42f3f8 = 0x2c42f544;
    puRam2c42f3fc = param_3;
    uRam2c42f400 = 0x2c42f3f8;
    piRam2c42f404 = unaff_r6 + 4;
    uRam2c42f408 = 0x10bd0a36;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_2c42f23a:
  iVar12 = _DAT_2c42f484;
  uVar6 = *(uint *)(iVar8 + 0x2c);
  uVar13 = iVar8 - 0xac;
  bVar15 = uVar13 != 0;
  *puVar9 = uVar6;
  puVar9[1] = uVar7;
  puVar9[2] = (uint)puVar9;
  puVar9[3] = unaff_r5;
  puVar9[4] = (uint)piVar10;
  puVar9[5] = uVar13;
  *(undefined4 **)(uVar13 + iVar12) = param_3;
  if (bVar15 && 0xab < iVar8) {
    uVar13 = iVar8 - 0x17a;
  }
  if (!bVar15 || iVar8 < 0xac) {
    *(short *)((int)param_3 + iVar12) = (short)piVar10;
  }
  auVar17 = FloatVectorCompareGreaterThanOrEqual(in_q6,in_q1,2,0x20);
  uVar6 = uVar6 | uVar13 - 0xe6;
  *(short *)(uVar13 - 0xd0) = (short)piVar10;
  *(int *)(unaff_r5 + 0x50) = iVar12;
  iVar8 = _DAT_2c42f4ac;
  uVar6 = (int)uVar6 >> 0x15 ^ uVar6;
  piVar11 = piVar10 + -0x2f;
  *puVar9 = *(uint *)(uVar6 + 0x2c);
  puVar9[1] = uVar7;
  puVar9[2] = (uint)puVar9;
  puVar9[3] = unaff_r5;
  puVar9[4] = (uint)piVar11;
  puVar9[5] = uVar6;
  *(undefined4 **)(uVar6 + iVar8) = param_3;
  if (piVar11 == (int *)0x0 || (int)piVar10 < 0xbc) {
    *(short *)((int)param_3 + iVar8) = (short)piVar11;
  }
  FloatVectorCompareGreaterThanOrEqual(in_q6,auVar17,2,0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_2c42f210:
  do {
    iVar12 = uVar6 + 0x20;
    uVar6 = uVar6 - 0xcf;
  } while (uVar6 != 0 && 0xee < iVar12);
  pbVar1 = (byte *)((int)param_3 + 0x12);
  param_3 = (undefined4 *)0x2c42f4b8;
  puVar9 = (uint *)0x2c42f4e8;
  piVar10 = (int *)(uint)*(ushort *)(unaff_r5 * 2);
  if (*(int *)(param_1 + iVar8) == unaff_r8) {
    *(undefined4 *)(uVar7 + 8) = 0x2c42f4e8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar8 = *pbVar1 - 0x2cd;
  goto LAB_2c42f23a;
}

