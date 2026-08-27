/* FUN_2c440538 @ 0x2c440538 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c4c0d56) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c440538(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *extraout_r1;
  int iVar8;
  undefined2 extraout_r2;
  int extraout_r2_00;
  int *piVar9;
  uint extraout_r3;
  int extraout_r3_00;
  undefined4 extraout_r3_01;
  int iVar10;
  undefined4 unaff_r6;
  uint uVar11;
  uint *unaff_r7;
  bool bVar12;
  bool bVar13;
  undefined4 in_cr8;
  int iStack00000148;
  int iStack000001bc;
  int in_stack_00000378;
  
  uRam2c4406c8 = 0x2c4406c8;
  iRam2c4406cc = param_3;
  uRam2c4406d0 = unaff_r6;
  puRam2c4406d4 = unaff_r7;
  *(short *)(param_1 + 0x34) = (short)param_3;
  uVar4 = uRam2c440765;
  uVar3 = uRam2c440761;
  uVar2 = uRam2c440759;
  uVar11 = (uint)uRam2c44078b - param_3;
  uVar1 = *(undefined1 *)((int)unaff_r7 + 0x2c44076d);
  bVar12 = (uRam2c440759 & 0x200) != 0;
  iVar10 = uRam2c440759 * 0x800000;
  bVar13 = iVar10 == 0;
  *(char *)(uVar11 + 0x14) = (char)uRam2c440759;
  iStack00000148 = param_1;
  iStack000001bc = param_3;
  func_0x2be83dec(uVar3,uVar1,param_3,uVar4);
  uVar3 = _LAB_2c44099c;
  if (!bVar12 || bVar13) {
    *(uint *)(extraout_r2_00 + -7) = extraout_r3 + 5;
    *(uint *)(extraout_r2_00 + -3) = extraout_r3 >> 0x16;
    *(uint *)(extraout_r2_00 + 1) = extraout_r3;
    *(undefined4 *)(extraout_r2_00 + 5) = uVar3;
    *(char *)(_LAB_2c440840 + 3) = (char)*(undefined4 *)((param_5 + 0xb5) * 0x80000 + 0x33);
    *(int *)(&stack0x00000284 + in_stack_00000378) = in_stack_00000378;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x2d3cb896();
  *(undefined2 *)(extraout_r3_00 + 2) = extraout_r2;
  coprocessor_storelong(0xf,in_cr8,0x2c4405f0);
  iVar5 = *(int *)(extraout_r3_00 * 2);
  piVar9 = (int *)((int)extraout_r1 >> 0x1e);
  if (-1 < (int)piVar9) {
    iVar8 = *(int *)((int)extraout_r1 + iVar5);
    *(uint *)(iVar8 + 0x20) = uVar11;
    *piVar9 = iVar5;
    piVar9[1] = iVar8;
    piVar9[2] = (int)piVar9;
    piVar9[3] = iVar10;
    piVar9[4] = uVar2;
    piVar9[5] = uVar11;
    puVar6 = (undefined4 *)func_0x2c92b622();
    *puVar6 = extraout_r3_01;
    puVar6[1] = iVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(uVar2 + 0x2c) = (short)iVar5 + -0x16;
  uVar7 = (uint)unaff_r7 >> 0x1b;
  *extraout_r1 = uVar7;
  extraout_r1[1] = (uint)extraout_r1;
  extraout_r1[2] = (uint)piVar9;
  extraout_r1[3] = uVar11;
  *(uint *)(iVar10 + -0x6f) = uVar7;
  *(uint **)(iVar10 + -0x6b) = extraout_r1;
  *(uint *)(iVar10 + -0x67) = uVar11;
  *(short *)((iVar10 + -99) * 2) = (short)extraout_r3_00;
  *(uint *)(iVar10 + -99) = uVar7;
  *(uint *)(iVar10 + -0x5f) = uVar2 - 0x3e;
  *unaff_r7 = uVar7;
  unaff_r7[1] = uVar2 - 0x3e;
  unaff_r7[2] = uVar11;
  unaff_r7[3] = (uint)unaff_r7;
  piRam2c440cdc = piVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

