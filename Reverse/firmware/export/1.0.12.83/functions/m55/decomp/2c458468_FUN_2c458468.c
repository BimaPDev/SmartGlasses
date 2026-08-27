/* FUN_2c458468 @ 0x2c458468 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c457c7e) */
/* WARNING: Removing unreachable block (ram,0x2c457c84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c458468(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int extraout_r2;
  uint uVar6;
  uint unaff_r4;
  int iVar7;
  int unaff_r5;
  uint uVar8;
  uint *unaff_r6;
  uint unaff_r7;
  undefined4 unaff_r9;
  bool bVar9;
  bool bVar10;
  uint *puVar11;
  undefined4 in_cr6;
  undefined4 in_cr15;
  undefined8 in_d2;
  undefined8 in_d26;
  int *in_stack_000000f0;
  uint uStack00000160;
  undefined4 uStack_c;
  
  uVar8 = unaff_r5 + 0xb1;
  *(short *)((int)unaff_r6 + 0x3a) = (short)unaff_r7;
  iVar3 = *(int *)(unaff_r4 + 0x20);
  bVar10 = SCARRY4(unaff_r4,param_4);
  uVar4 = unaff_r4 + param_4;
  *unaff_r6 = uVar4;
  unaff_r6[1] = param_4;
  unaff_r6[2] = unaff_r4;
  unaff_r6[3] = unaff_r7;
  *(char *)(unaff_r5 + 0xb2) = (char)iVar3;
  bVar9 = (int)unaff_r4 >> 0xe < 0;
  unaff_r6[4] = unaff_r4;
  puVar11 = unaff_r6 + 5;
  uVar6 = (uint)*(byte *)(param_4 + 0x12);
  *(char *)(unaff_r5 + 0xc9) = (char)puVar11;
  iVar2 = _LAB_2c457e14;
  uStack00000160 = param_4;
  uStack_c = param_2;
  if (bVar9 != bVar10) {
    *(uint *)(uVar4 + 0x50) = param_4;
    uVar4 = unaff_r5 + 0xb3;
    *(char *)(unaff_r5 + 0xc1) = (char)uVar8;
    coprocessor_moveto(0xb,1,7,unaff_r9,in_cr15,in_cr6);
    bVar10 = SCARRY4(uVar4,uVar8);
    param_4 = uVar4 + uVar8;
    bVar9 = (int)param_4 < 0;
    in_stack_000000f0 = (int *)((int)unaff_r4 >> 0xe);
    if (CARRY4(uVar4,uVar8)) goto LAB_2c457c16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint **)(iVar3 + param_4) = puVar11;
  *(int *)(iVar3 + 0x70) = iVar3;
  iVar2 = iVar3;
  if (((int)unaff_r4 >> 0xd & 1U) != 0) {
    *(short *)(*(short *)((int)in_stack_000000f0 + uVar6) + 0x1e) = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x2c457bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&uStack_c)();
    return;
  }
  while( true ) {
    *(short *)(unaff_r6 + 0x13) = (short)param_4;
    *(uint **)(uVar6 + 0x14) = puVar11;
LAB_2c457c16:
    uVar1 = VectorGetElement(in_d2,3,2,0);
    VectorMultiply(in_d26,uVar1,2);
    uVar6 = *(uint *)(uVar4 + 0x30);
    if (bVar9 != bVar10) break;
    *in_stack_000000f0 = iVar2;
    in_stack_000000f0[1] = uVar6;
    in_stack_000000f0[2] = unaff_r4;
    in_stack_000000f0[3] = (int)puVar11;
    in_stack_000000f0[4] = (int)in_stack_000000f0;
  }
  puVar5 = *(undefined4 **)(uVar6 + 0xde);
  iVar3 = *(int *)(uVar6 + 0xe2);
  *(short *)(uVar4 + 0x10) = (short)iVar2;
  *(uint *)(iVar2 * 2) = unaff_r4;
  iVar7 = puVar5[3];
  iVar2 = func_0x2bfd418c(*puVar5,puVar5[1],puVar5[2],iVar3 + 4);
  *(short *)(iVar2 + 0x12) = (short)unaff_r4;
  *(char *)(extraout_r2 + 0x17) = (char)iVar7;
  uRam2c458e55 = (char)*(undefined4 *)(iVar7 + 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

