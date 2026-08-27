/* FUN_2c43a7be @ 0x2c43a7be */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c43aa76) overlaps instruction at (ram,0x2c43aa74)
    */
/* WARNING: Removing unreachable block (ram,0x2c439e0e) */
/* WARNING: Removing unreachable block (ram,0x2c439e7a) */
/* WARNING: Removing unreachable block (ram,0x2c439e10) */
/* WARNING: Removing unreachable block (ram,0x2c43a5de) */
/* WARNING: Removing unreachable block (ram,0x2c43a8ae) */
/* WARNING: Removing unreachable block (ram,0x2c43a8b8) */
/* WARNING: Removing unreachable block (ram,0x2c43a944) */
/* WARNING: Removing unreachable block (ram,0x2c43a94a) */
/* WARNING: Removing unreachable block (ram,0x2c43a950) */
/* WARNING: Removing unreachable block (ram,0x2c43a99e) */
/* WARNING: Removing unreachable block (ram,0x2c43a9ac) */
/* WARNING: Removing unreachable block (ram,0x2c43a8f0) */
/* WARNING: Removing unreachable block (ram,0x2c43a88a) */
/* WARNING: Removing unreachable block (ram,0x2c43a494) */
/* WARNING: Removing unreachable block (ram,0x2c43a4a4) */
/* WARNING: Removing unreachable block (ram,0x2c43a4a8) */
/* WARNING: Removing unreachable block (ram,0x2c43a3e4) */
/* WARNING: Removing unreachable block (ram,0x2c43a3ec) */
/* WARNING: Removing unreachable block (ram,0x2c43a312) */
/* WARNING: Removing unreachable block (ram,0x2c43aad6) */
/* WARNING: Removing unreachable block (ram,0x2c43ab2a) */
/* WARNING: Removing unreachable block (ram,0x2c43aa5e) */
/* WARNING: Removing unreachable block (ram,0x2c43ab30) */
/* WARNING: Removing unreachable block (ram,0x2c43ab3a) */
/* WARNING: Removing unreachable block (ram,0x2c43ab42) */
/* WARNING: Removing unreachable block (ram,0x2c43ab4e) */
/* WARNING: Removing unreachable block (ram,0x2c43ab50) */
/* WARNING: Removing unreachable block (ram,0x2c43ab52) */
/* WARNING: Removing unreachable block (ram,0x2c43ab54) */
/* WARNING: Removing unreachable block (ram,0x2c43abc2) */
/* WARNING: Removing unreachable block (ram,0x2c43abc8) */
/* WARNING: Removing unreachable block (ram,0x2c355e2c) */
/* WARNING: Removing unreachable block (ram,0x2c355efe) */
/* WARNING: Removing unreachable block (ram,0x2c355f80) */
/* WARNING: Removing unreachable block (ram,0x2c43ab5e) */
/* WARNING: Removing unreachable block (ram,0x2c43ab64) */
/* WARNING: Removing unreachable block (ram,0x2c43ab98) */
/* WARNING: Removing unreachable block (ram,0x2c43ab9e) */
/* WARNING: Removing unreachable block (ram,0x2c43aba6) */
/* WARNING: Removing unreachable block (ram,0x2c43ab08) */
/* WARNING: Removing unreachable block (ram,0x2c43aa6a) */
/* WARNING: Removing unreachable block (ram,0x2c43aa76) */
/* WARNING: Removing unreachable block (ram,0x2c43aa6c) */
/* WARNING: Removing unreachable block (ram,0x2c43aa6e) */
/* WARNING: Removing unreachable block (ram,0x2c43aa70) */
/* WARNING: Removing unreachable block (ram,0x2c43aa30) */
/* WARNING: Removing unreachable block (ram,0x2c43a7a8) */
/* WARNING: Removing unreachable block (ram,0x2c43a732) */
/* WARNING: Removing unreachable block (ram,0x2c43aa24) */
/* WARNING: Removing unreachable block (ram,0x2c43aa2a) */
/* WARNING: Removing unreachable block (ram,0x2c43aa60) */
/* WARNING: Removing unreachable block (ram,0x2c43aa64) */
/* WARNING: Removing unreachable block (ram,0x2c43ab0e) */
/* WARNING: Removing unreachable block (ram,0x2c43ab14) */
/* WARNING: Removing unreachable block (ram,0x2c43a4cc) */
/* WARNING: Removing unreachable block (ram,0x2c43a4b4) */
/* WARNING: Removing unreachable block (ram,0x2c43a4d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43a7be(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_r4;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  *(int *)(unaff_r4 * 2) = unaff_r4;
  iVar3 = iRam2c43aaa8;
  iVar2 = iRam2c43aaa4;
  iVar5 = iRam2c43aa9c;
  iVar8 = iRam2c43aa94;
  *(undefined4 *)(iRam2c43aaa4 + iRam2c43aa9c) = uRam2c43aaa0;
  iVar6 = *param_1;
  if (iVar8 == 0) {
    puVar7 = *(undefined4 **)(iVar5 + 8);
    iVar8 = *(int *)(iVar5 + 0xc);
    *(int *)(*(int *)(iVar3 + 4) * 0x10 + 0x60) = iVar8;
    uVar4 = *(undefined4 *)(*(char *)(iVar8 + 0x2c43ab90) + 4);
    software_bkpt(0xe);
    uVar1 = *(ushort *)(*(char *)(iVar8 + 0x2c43ab90) + 0x28);
    cRam2c43a6c9 = (char)iVar6 + -0x52;
    *puVar7 = uVar4;
    puVar7[1] = *(ushort *)((int)puVar7 + 0x16) + 0xd3bc58c0;
    puVar7[2] = (uint)uVar1 << 6;
    puVar7[3] = puVar7;
    puVar7[4] = iVar8;
    *(undefined4 *)(iVar6 + 0x106) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(iVar2 + 0x68) = iVar5;
  iVar8 = *(int *)(iVar6 + 0xb2);
  iVar5 = *(int *)(iVar6 + 0xb6);
  *(int *)(iVar8 + 0x58) = *(int *)(iVar5 + 0x29c);
  *(short *)(iVar8 + 0x32) = (short)param_1;
  iVar8 = *(int *)(iVar5 + 0x2a0);
  uVar4 = *(undefined4 *)(iVar5 + 0x2ac);
  *(undefined4 *)(*(int *)(iVar5 + 0x29c) + 0x54) = uVar4;
  *(undefined4 *)(*(int *)(iVar8 + 4) + 0xc) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

