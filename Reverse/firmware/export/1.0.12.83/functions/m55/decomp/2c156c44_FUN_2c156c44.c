/* FUN_2c156c44 @ 0x2c156c44 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c156c44(undefined4 param_1,int param_2,undefined1 param_3)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int unaff_r4;
  int iVar11;
  undefined1 *puVar12;
  undefined4 unaff_r5;
  uint uVar13;
  int iVar14;
  int unaff_r6;
  int unaff_r7;
  uint in_r12;
  undefined4 in_cr0;
  undefined4 in_cr15;
  
  *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
  iVar6 = unaff_r6 >> 1;
  if (unaff_r7 == 0) {
    param_2 = iVar6;
  }
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
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  iVar7 = *(int *)(unaff_r6 + 0x54);
  uVar13 = (uint)*(byte *)(unaff_r4 + iVar6);
  *(char *)(iVar7 + 0x11) = (char)iVar7;
  *(char *)(unaff_r4 + 0xd) = (char)iVar6;
  iVar7 = *(int *)(iVar7 + 0x54);
  *(undefined4 *)(*(byte *)(uVar13 + iVar6) + 0x40) = 0x5d;
  iVar6 = _DAT_000000ad;
  iVar11 = *(int *)(uVar13 + 0x44);
  iVar10 = *(int *)(uVar13 + 0x14);
  *(int *)(iVar11 + 0x54) = iVar11;
  iVar10 = *(int *)(iVar10 + 0x14);
  *(char *)(iVar10 + 0x15) = (char)param_2;
  iVar10 = *(int *)(iVar10 + 0x14);
  *(int *)(iVar11 + 0x14) = iVar11;
  *(int *)(iVar11 + 0x54) = iVar7 + 0x33;
  uVar4 = *(uint *)(uVar13 + 0x74);
  *(undefined1 *)(uVar13 + 0x11) = param_3;
  uVar8 = *(undefined4 *)(uVar13 + 0x54);
  iVar14 = (int)*(short *)(iVar10 + iVar11);
  uVar5 = *(undefined4 *)(iVar11 + 100);
  *(char *)(iVar11 + 0x11) = (char)uVar5;
  *(int *)(iVar11 + 0x30) = iVar14;
  *(char *)(iVar14 + 1) = (char)uVar4;
  *(uint *)(uVar4 + 0x40) = uVar4;
  puVar12 = *(undefined1 **)(iVar10 + 0x54);
  *(uint *)(uVar4 + 0x10) = uVar4;
  *(undefined4 *)(iVar10 + 0x34) = uVar5;
  iVar7 = (int)uVar4 >> (uVar4 & 0xff);
  *(undefined4 *)(iVar10 + 0x34) = uVar5;
  *(int *)(iVar7 + 0x54) = iVar10;
  puVar12[0x15] = (char)puVar12;
  *(int *)(iVar6 + 0x54) = iVar7;
  puVar12[0x15] = (char)puVar12;
  puVar12[0x11] = (char)iVar10;
  uVar5 = *(undefined4 *)(puVar12 + 0x54);
  *(undefined1 **)(iVar10 + 0x44) = puVar12;
  *(undefined4 *)(puVar12 + 0x14) = uVar5;
  *(int *)(puVar12 + 0x10) = iVar6;
  *(undefined1 **)(iVar14 + 0x44) = puVar12;
  iVar6 = *(int *)(iVar10 + 0x34);
  puVar12[0xc] = (char)*(undefined4 *)(puVar12 + 0x50);
  *(undefined1 **)(puVar12 + 100) = puVar12;
  *puVar12 = (char)*(undefined4 *)(puVar12 + 0x50);
  puVar12[0x15] = (char)iVar10;
  *(int *)(iVar10 + 0x14) = iVar6;
  *(char *)(iVar7 + 0x15) = (char)iVar6;
  iVar10 = *(int *)(iVar10 + 0x14);
  cVar2 = *(char *)(iVar14 + 1);
  *(char *)(iVar10 + 9) = cVar2;
  *(int *)(iVar7 + 0x14) = iVar6;
  *(char *)(iVar10 + 1) = (char)uVar8;
  sVar3 = sRam0000005d;
  uVar4 = uRam00000044;
  if (cVar2 == '\0') {
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  }
  else if (iVar6 != 0) {
    if (0x4f < iVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xe9,0x2c156958);
      (*pcVar1)();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
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
  iVar7 = _DAT_000000ad;
  uVar13 = uRam00000044;
  iVar6 = _BusFault;
  *(uint *)(uRam00000044 + 0x54) = uRam00000044;
  iVar6 = *(int *)(iVar6 + 0x14);
  *(char *)(iVar6 + 0x15) = (char)sVar3;
  uVar9 = *(uint *)(iVar6 + 0x14);
  *(uint *)(uVar13 + 0x14) = uVar13;
  *(undefined4 *)(uVar13 + 0x54) = 0;
  uRam00000011 = (undefined1)uVar4;
  cVar2 = (char)uRam00000054;
  *(char *)(*(int *)(uVar13 + 100) + 0x19) = (char)iVar7;
  *(char *)(uVar9 + 9) = (char)uVar13;
  *(uint *)(uVar13 + 0x14) = uVar9;
  *(char *)(uVar9 + 1) = cVar2 + 'm';
  func_0x2b658a18((int)*(short *)(uVar9 + (in_r12 & 4)),&stack0x000003a4,
                  uVar4 >> (uVar9 & 0x1f) | uVar4 << 0x20 - (uVar9 & 0x1f));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

