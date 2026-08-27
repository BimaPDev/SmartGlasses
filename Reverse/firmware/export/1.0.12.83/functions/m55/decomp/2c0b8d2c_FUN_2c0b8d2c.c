/* FUN_2c0b8d2c @ 0x2c0b8d2c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0b8d2c(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int extraout_r2;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int unaff_r5;
  uint uVar9;
  int iVar10;
  int iVar11;
  int unaff_r7;
  int iVar12;
  code *unaff_r8;
  int extraout_r12;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined8 unaff_d9;
  undefined8 in_d24;
  int in_stack_00000014;
  int in_stack_000000bc;
  undefined1 in_stack_00000210;
  
  *(char *)((unaff_r5 - param_3) + 0x19) = (char)(param_1 + 0xd3U);
  iVar10 = iRam2c0b8e78;
  puVar4 = (uint *)(iRam2c0b8e78 + -0x54);
  uVar6 = unaff_r5 - param_3 & (uint)puVar4;
  uVar3 = param_1 + 0xd3U & uVar6;
  if ((int)uVar3 < 0 == SBORROW4(iRam2c0b8e78,0x54)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar4 = uVar3 - 0x32;
  *(undefined4 *)(iVar10 + -0x50) = 0x96;
  *(uint **)(iVar10 + -0x4c) = puVar4;
  *(int *)(iVar10 + -0x48) = unaff_r5;
  if (0xf6 < unaff_r7 + -0x3ec) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar12 = *(int *)(uVar3 + 0x16);
  coprocessor_store(0xf,in_cr3,in_stack_00000014 * 0x10000 - (int)puVar4);
  if (iVar12 < 0xa2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xa9,0x2c0b8d68);
    (*pcVar1)();
  }
  *(short *)(iVar10 + -0x1e) = (short)iVar12 + -0x321;
  iVar10 = (in_stack_00000014 * 0x10000 - 0x122U & uVar3 - 0x32) - 0x158;
  if (iVar12 == 0x344) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < iVar12 + -0x5f0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = *(uint *)(0x96 - uVar6) & iVar12 - 0x4b6U;
  VectorAdd(unaff_d9,in_d24,1,0);
  iVar2 = iVar12 + -0x5f0;
  if (uVar3 != 0 && (int)uVar3 < 0 == SBORROW4(iVar12 + -0x500,0xf0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    iVar12 = iVar2;
    uVar3 = (*unaff_r8)(_DAT_2c0b91c0,_DAT_2c0b927c);
    if (iVar12 - 0x205U < 0xd7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    coprocessor_loadlong(0,in_cr4,uVar3 + 0x34);
    iVar11 = iVar10 + -0x69;
    *(char *)((extraout_r2 >> 0x1e) + 0x1e) = (char)(iVar12 + -0x3d7);
    puVar4 = puRam2c0b8fec;
    iVar10 = iVar10 + -0x112;
    iVar2 = iVar12 + -0x3d7;
  } while (iVar10 == 0 || iVar11 < 0xa9);
  coprocessor_storelong(0xf,in_cr3,in_stack_000000bc + 0x380U);
  uVar3 = uVar3 & in_stack_000000bc + 0x380U >> 4;
  iVar10 = (_DAT_2c0b9330 >> 0x18) + -0x1d9;
  uVar6 = iVar12 - 0xa13U & uVar3;
  if (iVar10 != 0) {
    uVar9 = iVar10 >> 3;
    piVar7 = (int *)(iVar10 * 0x20000000);
    *(undefined1 *)((uVar3 & uRam2c0b903c) + 0xc) = 0;
    iVar12 = piVar7[1];
    puVar5 = (uint *)piVar7[2];
    uVar8 = piVar7[3];
    iVar10 = piVar7[4];
    uVar3 = *piVar7 - 0x3f;
    *(char *)(iVar10 + -0xc3) = (char)iVar10 + ')';
    iVar10 = (iVar10 + -0x1b5) * 0x1000;
    SignedSaturate(iVar10,0x1f);
    SignedDoesSaturate(iVar10,0x1f);
    if (iVar12 == 0) {
      *puVar5 = uVar3;
      puVar5[1] = (uint)puVar4;
      puVar5[2] = uVar8;
      puVar5[3] = uVar9;
      puVar5[4] = uVar6 - 0x2b2;
      *(char *)((int)puVar4 + 6) = (char)uVar6 + -0x65;
      puVar5 = (uint *)0x0;
      *(undefined4 *)(uVar9 + (uVar6 - 0x45e)) = uRam2c0b91f8;
      uVar3 = uVar3 & uVar9;
    }
    *puVar4 = uVar3;
    puVar4[1] = (uint)puVar4;
    *(char *)((int)puVar5 + -0xc2) = (char)uVar9;
    *(undefined1 *)(extraout_r12 + 8) = in_stack_00000210;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

