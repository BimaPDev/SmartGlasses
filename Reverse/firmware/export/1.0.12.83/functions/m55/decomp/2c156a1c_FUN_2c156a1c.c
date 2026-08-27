/* FUN_2c156a1c @ 0x2c156a1c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c1569d2) overlaps instruction at (ram,0x2c1569d0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c156a1c(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int unaff_r4;
  int iVar12;
  undefined1 *puVar13;
  int unaff_r5;
  uint uVar14;
  int iVar15;
  int unaff_r7;
  uint in_r12;
  int *piVar16;
  undefined4 in_cr0;
  undefined4 in_cr15;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  piVar16 = &iStack_1c;
  iStack_1c = param_1;
  iStack_18 = param_2;
  uStack_14 = param_3;
  if (param_2 == 0) {
    *(int *)(unaff_r4 + 0x74) = unaff_r5;
    sVar3 = *(short *)(unaff_r4 + unaff_r5);
    uVar4 = (undefined1)*(undefined4 *)(unaff_r5 + 100);
    *(undefined1 *)(unaff_r5 + 0x11) = uVar4;
    *(undefined4 *)(unaff_r5 + 0x14) = *(undefined4 *)(unaff_r5 + 100);
    iVar10 = *(int *)(unaff_r5 + 0x14);
    *(undefined4 *)(param_1 + 0x54) = param_3;
    iVar8 = *(int *)(sVar3 + 0x54);
    uVar14 = (uint)*(byte *)(iVar10 + unaff_r5);
    *(char *)(iVar8 + 0x11) = (char)iVar8;
    *(char *)(iVar10 + 0xd) = (char)unaff_r5;
    iVar10 = *(int *)(iVar8 + 0x54);
    *(undefined4 *)(*(byte *)(uVar14 + unaff_r5) + 0x40) = 0x5d;
    iVar8 = _DAT_000000ad;
    iVar12 = *(int *)(uVar14 + 0x44);
    iVar11 = *(int *)(uVar14 + 0x14);
    *(int *)(iVar12 + 0x54) = iVar12;
    iVar11 = *(int *)(iVar11 + 0x14);
    *(undefined1 *)(iVar11 + 0x15) = uVar4;
    iVar11 = *(int *)(iVar11 + 0x14);
    *(int *)(iVar12 + 0x14) = iVar12;
    *(int *)(iVar12 + 0x54) = iVar10 + 0x33;
    uVar5 = *(uint *)(uVar14 + 0x74);
    *(char *)(uVar14 + 0x11) = (char)param_3;
    uVar7 = *(undefined4 *)(uVar14 + 0x54);
    iVar15 = (int)*(short *)(iVar11 + iVar12);
    uVar6 = *(undefined4 *)(iVar12 + 100);
    *(char *)(iVar12 + 0x11) = (char)uVar6;
    *(int *)(iVar12 + 0x30) = iVar15;
    *(char *)(iVar15 + 1) = (char)uVar5;
    *(uint *)(uVar5 + 0x40) = uVar5;
    puVar13 = *(undefined1 **)(iVar11 + 0x54);
    *(uint *)(uVar5 + 0x10) = uVar5;
    *(undefined4 *)(iVar11 + 0x34) = uVar6;
    iVar10 = (int)uVar5 >> (uVar5 & 0xff);
    *(undefined4 *)(iVar11 + 0x34) = uVar6;
    *(int *)(iVar10 + 0x54) = iVar11;
    puVar13[0x15] = (char)puVar13;
    *(int *)(iVar8 + 0x54) = iVar10;
    puVar13[0x15] = (char)puVar13;
    puVar13[0x11] = (char)iVar11;
    uVar6 = *(undefined4 *)(puVar13 + 0x54);
    *(undefined1 **)(iVar11 + 0x44) = puVar13;
    *(undefined4 *)(puVar13 + 0x14) = uVar6;
    *(int *)(puVar13 + 0x10) = iVar8;
    *(undefined1 **)(iVar15 + 0x44) = puVar13;
    iVar8 = *(int *)(iVar11 + 0x34);
    puVar13[0xc] = (char)*(undefined4 *)(puVar13 + 0x50);
    *(undefined1 **)(puVar13 + 100) = puVar13;
    *puVar13 = (char)*(undefined4 *)(puVar13 + 0x50);
    puVar13[0x15] = (char)iVar11;
    *(int *)(iVar11 + 0x14) = iVar8;
    *(char *)(iVar10 + 0x15) = (char)iVar8;
    iVar11 = *(int *)(iVar11 + 0x14);
    cVar2 = *(char *)(iVar15 + 1);
    *(char *)(iVar11 + 9) = cVar2;
    *(int *)(iVar10 + 0x14) = iVar8;
    *(char *)(iVar11 + 1) = (char)uVar7;
    if (cVar2 != '\0') {
      if (iVar8 != 0) {
        if (iVar11 < 0x50) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xe9,0x2c156958);
        (*pcVar1)();
      }
      goto LAB_2c15659e;
    }
  }
  else {
    if (unaff_r4 == 0x4e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iStack_2c = unaff_r4 - unaff_r7;
    if (unaff_r4 != 0x4f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xd5,0x2c156a3c);
      (*pcVar1)();
    }
    iStack_30 = param_2 + 4;
    piVar16 = &iStack_34;
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    iStack_34 = param_1;
    iRam000000c3 = iStack_2c;
  }
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
LAB_2c15659e:
  sVar3 = sRam0000005d;
  uVar5 = uRam00000044;
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
  uRam00000054 = 0;
  HardFault = 0x5b;
  uRam00000076 = 0;
  uRam00000009 = 0x5d;
  _DAT_00000070 = _DAT_00000070 & 0xff;
  DAT_00000074 = 0;
  *(int *)(iRam000000d1 + 0x44) = (int)sRam0000005d;
  iVar10 = _DAT_000000ad;
  uVar14 = uRam00000044;
  iVar8 = _BusFault;
  *(uint *)(uRam00000044 + 0x54) = uRam00000044;
  iVar8 = *(int *)(iVar8 + 0x14);
  *(char *)(iVar8 + 0x15) = (char)sVar3;
  uVar9 = *(uint *)(iVar8 + 0x14);
  *(uint *)(uVar14 + 0x14) = uVar14;
  *(undefined4 *)(uVar14 + 0x54) = 0;
  uRam00000011 = (undefined1)uVar5;
  cVar2 = (char)uRam00000054;
  *(char *)(*(int *)(uVar14 + 100) + 0x19) = (char)iVar10;
  *(char *)(uVar9 + 9) = (char)uVar14;
  *(uint *)(uVar14 + 0x14) = uVar9;
  *(char *)(uVar9 + 1) = cVar2 + 'm';
  func_0x2b658a18((int)*(short *)(uVar9 + (in_r12 & 4)),piVar16 + 0xef,
                  uVar5 >> (uVar9 & 0x1f) | uVar5 << 0x20 - (uVar9 & 0x1f));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

