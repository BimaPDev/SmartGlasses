/* FUN_2c15e060 @ 0x2c15e060 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c15e016) overlaps instruction at (ram,0x2c15e014)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c15e060(int param_1,int param_2,undefined1 *param_3,undefined4 param_4)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int unaff_r4;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined4 unaff_r5;
  int iVar15;
  int unaff_r6;
  int iVar16;
  undefined4 uVar17;
  int unaff_r7;
  int in_r12;
  undefined4 in_cr0;
  undefined4 in_cr15;
  
  if (param_2 == 0) {
    *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
    *(undefined4 *)(unaff_r4 + 0x60) = unaff_r5;
    iVar9 = iRam2c15dfd4;
    *(undefined4 *)(param_3 + 0x54) = param_4;
    puVar14 = *(undefined1 **)(unaff_r4 + 0x34);
    *puVar14 = (char)param_1;
    uVar6 = (undefined1)iVar9;
    puVar14[0xd] = uVar6;
    *(int *)(unaff_r4 + param_1) = param_1;
    puVar14[0xd] = uVar6;
    puVar14[0x11] = 0;
    *(undefined1 **)(iVar9 + 0x60) = param_3 + -0x6e;
    iVar11 = *(int *)(unaff_r6 + 0x74);
    uVar6 = (undefined1)unaff_r6;
    puVar14[0x11] = uVar6;
    *(undefined1 **)(unaff_r4 + 0x60) = puVar14;
    iVar9 = iRam2c15dff8;
    *(undefined4 *)(iVar11 + 199) = param_4;
    puVar14 = *(undefined1 **)(unaff_r4 + 0x34);
    *puVar14 = (char)param_1;
    puVar14[0xd] = (char)iVar9;
    *(int *)(unaff_r4 + param_1) = param_1;
    puVar14[0xd] = (char)iVar9;
    puVar14[0x11] = 0;
    *(int *)(iVar9 + 0x60) = iVar11 + 5;
    iVar11 = *(int *)(unaff_r6 + 0x74);
    puVar14[0x11] = uVar6;
    *(short *)(puVar14 + iRam2c15df78) = (short)iVar9;
    *(undefined1 **)(unaff_r4 + 0x54) = puVar14;
    uRam00000054 = *(undefined4 *)(iVar11 + 0x74);
    iVar12 = *(int *)(unaff_r6 + 0x14);
    param_3 = *(undefined1 **)(unaff_r6 + 0x14);
    iVar9 = iVar11 + -0x3a;
    param_3[9] = uVar6;
    iVar15 = *(int *)(puVar14 + 100);
    *(undefined4 *)(unaff_r6 + 0x14) = uRam00000054;
    *(char *)(unaff_r6 + 0xd) = (char)iVar9;
    *(int *)(unaff_r6 + 0x14) = iVar9;
    *(int *)(in_r12 + 0x54) = in_r12;
    *(undefined4 *)(param_3 + 0x44) = 0;
    uVar7 = (undefined1)in_r12;
    param_3[9] = uVar7;
    sVar4 = *(short *)(param_3 + in_r12);
    param_3[9] = uVar6;
    *(int *)(iVar12 + 100) = iVar15;
    *(int *)(unaff_r6 + 0x14) = iVar9;
    *(int *)(in_r12 + 0x54) = in_r12;
    *(int *)(iVar11 + -0x26) = iVar12;
    *(undefined1 *)(in_r12 + 1) = uVar7;
    *(undefined1 **)(in_r12 + 0x54) = param_3;
    *(undefined4 *)(param_3 + 0x60) = 0;
    param_4 = *(undefined4 *)(unaff_r6 + 0x14);
    *(int *)(iVar15 + 0x54) = iVar9;
    *(int *)(unaff_r6 + 0x14) = (int)sVar4;
    *(undefined1 *)(unaff_r6 + 0xd) = 0x23;
    *(int *)(param_3 + 0x14) = unaff_r6;
    iVar9 = *(int *)(in_r12 + 0x44);
    *param_3 = (char)iVar9;
    param_3[9] = (char)iVar9;
    *(undefined4 *)(unaff_r6 + 0x54) = param_4;
    unaff_r6 = iRam00000079;
    *(undefined1 **)(in_r12 + 0x54) = param_3;
    *(undefined4 *)(iVar9 + 0x54) = 0x65;
    *(int *)(param_3 + 0x44) = iVar9;
    param_3[9] = uVar7;
    *(undefined4 *)(param_3 + 0x14) = 0x65;
    *(char *)(unaff_r6 + 0xd) = (char)param_3;
    puVar14 = param_3;
    if (in_r12 != 0) {
      if (in_r12 != 0) {
        if ((int)param_3 < 0x50) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xe9,0x2c15df9c);
        (*pcVar1)();
      }
      goto code_r0x2c15d8c6;
    }
  }
  else {
    if (unaff_r4 == 0x4e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (unaff_r4 != 0x4f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xd5,0x2c15e080);
      (*pcVar1)();
    }
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    puVar14 = &DAT_0000004f;
    iRam000000c3 = unaff_r4 - unaff_r7;
  }
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
code_r0x2c15d8c6:
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  iVar15 = unaff_r6 + -0x2d;
  *(undefined4 *)(param_3 + 0x54) = param_4;
  iVar12 = *(int *)(puVar14 + 0x34);
  *(undefined1 **)(iVar12 + 0x54) = puVar14;
  *(int *)(iVar12 + 0x74) = iVar15;
  iVar9 = *(int *)(param_3 + 0x74);
  iVar11 = *(int *)(unaff_r6 + -0x19);
  iVar16 = *(int *)(iVar12 + 100);
  cVar5 = (char)param_3 + -0x3a;
  *(char *)(iVar11 + 0x15) = (char)*(undefined4 *)(unaff_r6 + -0x19);
  *(char *)(unaff_r6 + -0x24) = cVar5;
  iVar12 = *(int *)(iVar11 + 100);
  *(char *)(iVar9 + 0xc) = (char)iVar9;
  *(undefined1 *)(iVar11 + 0xc) = 0x65;
  bVar2 = *(byte *)(iVar12 + -0x18);
  iVar9 = *(int *)(iVar11 + 0x74);
  *(char *)(iVar11 + 0x15) = cVar5;
  *(int *)(iVar11 + 100) = iVar15;
  *(undefined4 *)(unaff_r6 + 0x27) = 0x23;
  *(uint *)(iVar11 + 0x44) = (uint)bVar2;
  *(undefined4 *)(iVar11 + 0x50) = 0x65;
  *(undefined1 *)(unaff_r6 + -0x24) = 0x23;
  uRam00000001 = (undefined1)iVar16;
  *(undefined1 *)(iVar9 + 9) = uRam00000001;
  *(int *)(iVar11 + 0x40) = iVar9;
  *(int *)(iVar11 + 0x40) = iVar9 + -0x21;
  *(undefined1 *)(*(int *)(unaff_r6 + 0x37) + 0x1d) = uRam00000001;
  *(undefined4 *)(iVar11 + 0x40) = 0x2c;
  bVar2 = *(byte *)(unaff_r6 + -0x2c);
  *(byte *)(iVar11 + 9) = bVar2;
  uVar6 = (undefined1)iVar11;
  *(undefined1 *)(bVar2 + 0x10) = uVar6;
  bVar3 = *(byte *)(unaff_r6 + -0x28);
  *(undefined1 *)(iVar11 + 0x10) = 0x2c;
  *(byte *)(unaff_r6 + -0x20) = bVar2;
  iVar9 = bVar3 - 0x74;
  *(undefined1 *)(iVar11 + 0xc) = *(undefined1 *)(iVar11 + 1);
  uVar13 = (uint)*(byte *)(iVar11 + 1);
  *(char *)(iVar11 + 0x14) = (char)iVar9;
  *(char *)(uVar13 + 9) = (char)iVar15;
  *(uint *)(iVar11 + 0x34) = uVar13;
  *(int *)(uVar13 + 0x74) = iVar16;
  iVar12 = *(int *)(uVar13 + 0x14);
  *(int *)(iVar16 + 0x54) = iVar9;
  *(undefined4 *)(iVar11 + 0x40) = 0x65;
  bVar2 = *(byte *)(iVar12 + 1);
  *(byte *)(iVar11 + 9) = bVar2;
  *(byte *)(iVar11 + 0xc) = bVar2;
  *(byte *)(iVar12 + 0xd) = bVar2;
  uRam00000054 = 0x65;
  *(undefined4 *)(iVar11 + 0x44) = 0;
  iRam00000079 = CONCAT31(iRam00000079._1_3_,0x65);
  iVar12 = *(int *)(bVar2 + 0x74);
  *(int *)(iVar11 + 0x54) = iVar11;
  *(byte *)(bVar2 + 0x15) = bVar2;
  *(undefined4 *)(iVar16 + 0x54) = 0x77;
  *(undefined1 *)(iVar12 + 9) = uVar6;
  iVar9 = *(int *)(iVar12 + 0x74);
  *(undefined1 *)(iVar9 + 0x14) = 0x79;
  *(undefined4 *)(iVar12 + 0x54) = 0x74;
  *(undefined4 *)(iVar9 + 0x50) = 0x79;
  *(undefined1 *)(iVar16 + 0x11) = 0x79;
  *(undefined1 *)(iVar9 + 0x15) = uVar6;
  *(undefined1 *)(iVar9 + 0xc) = 0x3a;
  uRam00000099 = 0x79;
  *(undefined4 *)(iVar12 + 100) = 0x3a;
  *(undefined4 *)(iVar9 + 0x40) = 0x79;
  *(undefined1 *)(iVar9 + 0x11) = 0;
  uRam00000047 = 0;
  *(undefined1 *)(iVar9 + 0xc) = 0x78;
  *(undefined1 *)(iVar16 * 2 + 1) = 0;
  *(int *)(iVar12 + 0x54) = iVar16 * 2;
  uVar17 = uRam00000090;
  puVar14 = *(undefined1 **)(iVar12 + 0x44);
  iVar9 = *(int *)(iVar12 + 0x14);
  iRam00000084 = iVar12;
  *(undefined1 **)(puVar14 + 0x54) = puVar14;
  iVar9 = *(int *)(iVar9 + 0x14);
  *(undefined1 *)(iVar9 + 0x15) = 0;
  iVar9 = *(int *)(iVar9 + 0x14);
  *(undefined1 **)(puVar14 + 0x14) = puVar14;
  *(int *)(puVar14 + 0x54) = iVar12 << 1;
  uVar10 = *(undefined4 *)(iVar9 + 0x74);
  *(int *)(iVar12 + 0x54) = iVar11 + -0x66;
  *puVar14 = (char)uVar17;
  puVar14[0x15] = (char)iVar9;
  puVar8 = _DAT_00000074;
  uVar17 = *(undefined4 *)(iVar9 + 0x14);
  *_DAT_00000074 = (short)uVar17;
  *(undefined1 **)(puVar8 + 0x1a) = puVar14;
  puVar14[9] = (char)uVar17;
  *(char *)((int)puVar8 + 1) = (char)uVar10;
  *(char *)((int)puVar8 + 0x15) = (char)(iVar11 + -0x66);
  *(int *)(puVar8 + 0x32) = iVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

