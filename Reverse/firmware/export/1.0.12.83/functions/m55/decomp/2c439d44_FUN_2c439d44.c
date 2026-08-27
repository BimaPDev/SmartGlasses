/* FUN_2c439d44 @ 0x2c439d44 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c43aa76) overlaps instruction at (ram,0x2c43aa74)
    */
/* WARNING: Removing unreachable block (ram,0x2c439e0e) */
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
/* WARNING: Removing unreachable block (ram,0x2c43a7da) */
/* WARNING: Removing unreachable block (ram,0x2c43aa24) */
/* WARNING: Removing unreachable block (ram,0x2c43aa2a) */
/* WARNING: Removing unreachable block (ram,0x2c43aa60) */
/* WARNING: Removing unreachable block (ram,0x2c43aa64) */
/* WARNING: Removing unreachable block (ram,0x2c43ab0e) */
/* WARNING: Removing unreachable block (ram,0x2c43ab14) */
/* WARNING: Removing unreachable block (ram,0x2c43a4cc) */
/* WARNING: Removing unreachable block (ram,0x2c43a4b4) */
/* WARNING: Removing unreachable block (ram,0x2c43a4d8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_2c439d44(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int unaff_r4;
  int iVar7;
  uint uVar8;
  int unaff_r5;
  int iVar9;
  undefined4 *puVar10;
  uint unaff_r6;
  int iVar11;
  uint unaff_r7;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 auStack_20 [2];
  undefined1 auStack_18 [12];
  
  puVar10 = (undefined4 *)auStack_18;
  if (in_CY && !in_ZR) {
    do {
      bVar1 = *(byte *)(unaff_r6 + param_2);
      unaff_r6 = (uint)bVar1;
      puVar10[-1] = unaff_lr;
      puVar10 = puVar10 + -2;
      *puVar10 = param_3;
      *(short *)(param_2 + 0x2a) = (short)unaff_r5;
      *(byte *)(unaff_r6 + param_4) = bVar1;
    } while (in_NG == in_OV);
    *(short *)(param_2 + 10) = (short)param_1;
    *(undefined4 *)(unaff_r4 + 100) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(unaff_r5 + 0x20) = unaff_r6;
  if ((int *)0xb5 < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar6 = *(int **)(unaff_r5 + 0x58);
  iVar3 = *param_3;
  iVar4 = param_3[1];
  iVar7 = param_3[2];
  iVar9 = param_3[3];
  iVar11 = param_3[4];
  *(int *)iVar9 = iVar9;
  *(char *)((int)piVar6 + iVar9) = (char)iVar4;
  if (iVar3 == 0) {
    if (iVar9 + 0x18 < 0) {
      *(ushort *)((unaff_r7 >> 0x14) + 0x14) = (ushort)(unaff_r7 >> 0x14);
      *(char *)(iVar7 + 0x17) = (char)iVar11;
      return CONCAT44(param_3,param_1);
    }
    *(char *)(iVar11 + 1) = (char)iVar11;
    iVar3 = *(int *)(iVar4 + 4);
    uVar8 = iVar3 + 0xae;
    if (iVar4 != -0x10) {
      *(int **)(iVar9 + 0x80) = piVar6;
      iVar4 = *(int *)(iVar3 + 0xb2);
      iVar3 = *(int *)(iVar3 + 0xb6);
      *(int *)(iVar4 + 0x58) = *(int *)(iVar3 + 0x29c);
      *(undefined2 *)(iVar4 + 0x32) = 0;
      iVar4 = *(int *)(iVar3 + 0x2a0);
      uVar5 = *(undefined4 *)(iVar3 + 0x2ac);
      *(undefined4 *)(*(int *)(iVar3 + 0x29c) + 0x54) = uVar5;
      *(undefined4 *)(*(int *)(iVar4 + 4) + 0xc) = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0xc) + 4);
  }
  else {
    iVar4 = param_3[5];
    piVar6 = (int *)param_3[6];
    uVar8 = param_3[7] ^ param_3[8];
    *(short *)(iVar11 + 0x28) = (short)piVar6;
    *(short *)(iVar3 + iVar11) = (short)iVar11;
    *piVar6 = iVar4;
    piVar6[1] = uVar8;
    piVar6[2] = iVar11;
    piVar6 = piVar6 + 3;
  }
  puVar10 = (undefined4 *)piVar6[2];
  iVar3 = piVar6[3];
  *(int *)(iVar4 * 0x10 + 0x60) = iVar3;
  uVar5 = *(undefined4 *)(*(char *)(iVar3 + 0x2c43ab90) + 4);
  software_bkpt(0xe);
  uVar2 = *(ushort *)(*(char *)(iVar3 + 0x2c43ab90) + 0x28);
  uRam2c43a6c9 = (undefined1)uVar8;
  *puVar10 = uVar5;
  puVar10[1] = *(ushort *)((int)puVar10 + 0x16) + 0xd3bc58c0;
  puVar10[2] = (uint)uVar2 << 6;
  puVar10[3] = puVar10;
  puVar10[4] = iVar3;
  *(undefined4 *)(uVar8 + 0x58) = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

