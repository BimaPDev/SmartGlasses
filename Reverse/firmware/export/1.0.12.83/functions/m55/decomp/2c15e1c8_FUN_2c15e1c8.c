/* FUN_2c15e1c8 @ 0x2c15e1c8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c15e1c8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int unaff_r4;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 unaff_r5;
  int iVar13;
  int unaff_r6;
  int iVar14;
  undefined4 uVar15;
  undefined4 in_cr0;
  undefined4 in_cr15;
  
  if (param_2 == 0) {
    *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    iVar13 = unaff_r6 + -0x2d;
    *(undefined4 *)(param_3 + 0x54) = param_4;
    iVar10 = *(int *)(unaff_r4 + 0x34);
    *(int *)(iVar10 + 0x54) = unaff_r4;
    *(int *)(iVar10 + 0x74) = iVar13;
    iVar7 = *(int *)(param_3 + 0x74);
    iVar9 = *(int *)(unaff_r6 + -0x19);
    iVar14 = *(int *)(iVar10 + 100);
    cVar4 = (char)param_3 + -0x3a;
    *(char *)(iVar9 + 0x15) = (char)*(undefined4 *)(unaff_r6 + -0x19);
    *(char *)(unaff_r6 + -0x24) = cVar4;
    iVar10 = *(int *)(iVar9 + 100);
    *(char *)(iVar7 + 0xc) = (char)iVar7;
    *(undefined1 *)(iVar9 + 0xc) = 0x65;
    bVar2 = *(byte *)(iVar10 + -0x18);
    iVar7 = *(int *)(iVar9 + 0x74);
    *(char *)(iVar9 + 0x15) = cVar4;
    *(int *)(iVar9 + 100) = iVar13;
    *(undefined4 *)(unaff_r6 + 0x27) = 0x23;
    *(uint *)(iVar9 + 0x44) = (uint)bVar2;
    *(undefined4 *)(iVar9 + 0x50) = 0x65;
    *(undefined1 *)(unaff_r6 + -0x24) = 0x23;
    uRam00000001 = (undefined1)iVar14;
    *(undefined1 *)(iVar7 + 9) = uRam00000001;
    *(int *)(iVar9 + 0x40) = iVar7;
    *(int *)(iVar9 + 0x40) = iVar7 + -0x21;
    *(undefined1 *)(*(int *)(unaff_r6 + 0x37) + 0x1d) = uRam00000001;
    *(undefined4 *)(iVar9 + 0x40) = 0x2c;
    bVar2 = *(byte *)(unaff_r6 + -0x2c);
    *(byte *)(iVar9 + 9) = bVar2;
    uVar5 = (undefined1)iVar9;
    *(undefined1 *)(bVar2 + 0x10) = uVar5;
    bVar3 = *(byte *)(unaff_r6 + -0x28);
    *(undefined1 *)(iVar9 + 0x10) = 0x2c;
    *(byte *)(unaff_r6 + -0x20) = bVar2;
    iVar7 = bVar3 - 0x74;
    *(undefined1 *)(iVar9 + 0xc) = *(undefined1 *)(iVar9 + 1);
    uVar11 = (uint)*(byte *)(iVar9 + 1);
    *(char *)(iVar9 + 0x14) = (char)iVar7;
    *(char *)(uVar11 + 9) = (char)iVar13;
    *(uint *)(iVar9 + 0x34) = uVar11;
    *(int *)(uVar11 + 0x74) = iVar14;
    iVar10 = *(int *)(uVar11 + 0x14);
    *(int *)(iVar14 + 0x54) = iVar7;
    *(undefined4 *)(iVar9 + 0x40) = 0x65;
    bVar2 = *(byte *)(iVar10 + 1);
    *(byte *)(iVar9 + 9) = bVar2;
    *(byte *)(iVar9 + 0xc) = bVar2;
    *(byte *)(iVar10 + 0xd) = bVar2;
    uRam00000054 = 0x65;
    *(undefined4 *)(iVar9 + 0x44) = 0;
    uRam00000079 = 0x65;
    iVar10 = *(int *)(bVar2 + 0x74);
    *(int *)(iVar9 + 0x54) = iVar9;
    *(byte *)(bVar2 + 0x15) = bVar2;
    *(undefined4 *)(iVar14 + 0x54) = 0x77;
    *(undefined1 *)(iVar10 + 9) = uVar5;
    iVar7 = *(int *)(iVar10 + 0x74);
    *(undefined1 *)(iVar7 + 0x14) = 0x79;
    *(undefined4 *)(iVar10 + 0x54) = 0x74;
    *(undefined4 *)(iVar7 + 0x50) = 0x79;
    *(undefined1 *)(iVar14 + 0x11) = 0x79;
    *(undefined1 *)(iVar7 + 0x15) = uVar5;
    *(undefined1 *)(iVar7 + 0xc) = 0x3a;
    uRam00000099 = 0x79;
    *(undefined4 *)(iVar10 + 100) = 0x3a;
    *(undefined4 *)(iVar7 + 0x40) = 0x79;
    *(undefined1 *)(iVar7 + 0x11) = 0;
    uRam00000047 = 0;
    *(undefined1 *)(iVar7 + 0xc) = 0x78;
    *(undefined1 *)(iVar14 * 2 + 1) = 0;
    *(int *)(iVar10 + 0x54) = iVar14 * 2;
    uVar15 = uRam00000090;
    puVar12 = *(undefined1 **)(iVar10 + 0x44);
    iVar7 = *(int *)(iVar10 + 0x14);
    iRam00000084 = iVar10;
    *(undefined1 **)(puVar12 + 0x54) = puVar12;
    iVar7 = *(int *)(iVar7 + 0x14);
    *(undefined1 *)(iVar7 + 0x15) = 0;
    iVar7 = *(int *)(iVar7 + 0x14);
    *(undefined1 **)(puVar12 + 0x14) = puVar12;
    *(int *)(puVar12 + 0x54) = iVar10 << 1;
    uVar8 = *(undefined4 *)(iVar7 + 0x74);
    *(int *)(iVar10 + 0x54) = iVar9 + -0x66;
    *puVar12 = (char)uVar15;
    puVar12[0x15] = (char)iVar7;
    puVar6 = _DAT_00000074;
    uVar15 = *(undefined4 *)(iVar7 + 0x14);
    *_DAT_00000074 = (short)uVar15;
    *(undefined1 **)(puVar6 + 0x1a) = puVar12;
    puVar12[9] = (char)uVar15;
    *(char *)((int)puVar6 + 1) = (char)uVar8;
    *(char *)((int)puVar6 + 0x15) = (char)(iVar9 + -0x66);
    *(int *)(puVar6 + 0x32) = iVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_r4 != 0x4e) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xd5,0x2c15e1e8);
    (*pcVar1)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

