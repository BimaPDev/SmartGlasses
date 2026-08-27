/* FUN_2c43726e @ 0x2c43726e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c43726e(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int extraout_r2;
  uint uVar9;
  int extraout_r2_00;
  uint *puVar10;
  int *piVar11;
  undefined1 *unaff_r4;
  int iVar12;
  int iVar13;
  int unaff_r6;
  int unaff_r7;
  int iVar14;
  code *unaff_r10;
  int unaff_r11;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  char in_NG;
  undefined4 in_cr3;
  undefined4 in_cr12;
  undefined4 in_cr15;
  undefined8 uVar16;
  uint in_stack_000002e0;
  
  iVar14 = unaff_r7 + 0x50;
  coprocessor_store(8,in_cr12,iVar14);
  if (in_NG == '\0') {
    *(short *)(unaff_r6 + param_3) = (short)iVar14;
    *(char *)(in_stack_000002e0 + 4) = (char)param_3;
    iVar6 = *(int *)(iVar14 + param_1);
    unaff_r4[param_4] = (char)iVar14;
    uVar8 = (uint)bRam0000001f;
    *(int *)(iVar6 + uVar8 + 0x54) = iVar6;
    *(short *)(iVar6 + uVar8) = (short)unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar14 = 0x2c437554;
  puVar5 = &LAB_2c43750c;
  puVar4 = &stack0xfffffff8;
  do {
    puVar15 = puVar4;
    *(char *)(iVar14 + 5) = (char)param_3;
    uVar8 = (uint)*(ushort *)(in_stack_000002e0 + 0x38);
    *(undefined4 *)(puVar15 + -4) = unaff_lr;
    *(uint *)(puVar15 + -8) = uVar8;
    *(int *)(puVar15 + -0xc) = iVar14;
    *(undefined1 **)(puVar15 + -0x10) = unaff_r4;
    *(undefined4 *)(puVar15 + -0x14) = param_2;
    *(undefined1 **)(puVar15 + -0x18) = puVar5;
    uVar3 = *(ushort *)(param_3 + 0x3c);
    *(undefined1 **)puVar5 = puVar5;
    *(int *)(puVar5 + 4) = param_4 + -0xe9;
    *(uint *)(puVar5 + 8) = in_stack_000002e0;
    iVar14 = 0x2c437648;
    unaff_lr = 0x2c43738b;
    uVar16 = (*unaff_r10)(*(undefined4 *)(uint)uVar3,((undefined4 *)(uint)uVar3)[1]);
    in_stack_000002e0 = _LAB_2c437440;
    param_2 = (undefined4)((ulonglong)uVar16 >> 0x20);
    puVar5 = (undefined1 *)uVar16;
    param_4 = *(int *)(unaff_r4 + 0x34);
    software_interrupt(0xca);
    unaff_r4 = puVar15 + 0x338;
    *(uint *)(_LAB_2c437440 + uVar8) = uVar8;
    param_3 = extraout_r2;
    puVar4 = puVar15 + 0x158;
  } while (0xe4 < extraout_r2);
  *(int *)(puVar15 + 0x410) = param_4;
  if (puVar15 == (undefined1 *)0xfffffb8c) {
    return CONCAT44(uRamfffffce4,0x2c4376d8);
  }
  iVar14 = func_0x2d165e10();
  puVar10 = (uint *)(uint)*(ushort *)(uVar8 + 0x28);
  uVar3 = *(ushort *)(iVar14 + 0x22);
  uVar9 = coprocessor_movefromRt(5,0,2,in_cr3,in_cr3);
  *(uint *)(puVar15 + 0x154) = uVar8;
  *(uint *)(puVar15 + 0x150) = uVar9;
  *(int *)(puVar15 + 0x14c) = iVar14;
  *puVar10 = (uint)uVar3;
  puVar10[1] = uVar9;
  puVar10[2] = (uint)puVar10;
  puVar10[3] = (uint)unaff_r4;
  puVar10[4] = in_stack_000002e0;
  puVar10[5] = uVar8;
  uVar7 = *(undefined4 *)(uVar9 + 0x2c437648);
  uVar2 = *(undefined1 *)(uVar8 * 2);
  coprocessor_loadlong(2,in_cr15,unaff_r10);
  *(short *)(uVar8 + unaff_r11 + 0xc) = (short)(puVar15 + 0x344);
  iVar6 = *(int *)(puVar15 + 0x394);
  uVar9 = (uint)(byte)(puVar15 + 0x344)[iVar6];
  uVar16 = func_0x2bfec690(uVar2,uVar7);
  iVar14 = _LAB_2c4376c4;
  uVar8 = (uint)((ulonglong)uVar16 >> 0x20);
  *(int *)extraout_r2_00 = extraout_r2_00;
  *(int *)(extraout_r2_00 + 4) = iVar14;
  *(int *)(extraout_r2_00 + 8) = iVar6;
  iVar12 = uVar9 - 0x47;
  *(short *)((int)uVar16 + uVar8) = (short)iVar6;
  uVar3 = *(ushort *)(uVar9 - 0x35);
  *(int *)(iVar6 + 0x3c) = iVar6;
  iVar6 = _LAB_2c437e54;
  if (extraout_r2_00 < 0xeb) {
    *(char *)(iVar12 + uVar8) = (char)uVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar11 = (int *)(uint)(uVar3 >> (uVar8 & 0xff));
  iVar13 = *(int *)((int)uVar16 + iVar12);
  bVar1 = *(byte *)(iVar14 + 0x1e);
  iVar12 = iVar13 >> 0x19;
  if (iVar12 < 0) {
    *(int *)iVar12 = iVar12;
    *(int *)(iVar12 + 4) = extraout_r2_00;
    *(int **)(iVar12 + 8) = piVar11;
    *(uint *)(iVar12 + 0xc) = (uint)bVar1;
    *(int *)(bVar1 + 0x34) = iVar14;
    iVar6 = *(int *)(puVar15 + 0x530);
    *piVar11 = iVar12 + -0xf;
    piVar11[1] = iVar12 + -0x11;
    piVar11[2] = iVar14 + iVar12 + -0xf;
    piVar11[3] = iVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(_LAB_2c437e54 + 0x20) = (short)(iVar13 >> 0x1f);
  *(undefined4 *)(iVar6 + 0x70) = 0x12;
  _SVCall = (short)(puVar15 + 0x150) + 0x3b4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

