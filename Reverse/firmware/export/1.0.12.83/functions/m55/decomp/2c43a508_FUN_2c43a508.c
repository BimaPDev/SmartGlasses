/* FUN_2c43a508 @ 0x2c43a508 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c43a526) overlaps instruction at (ram,0x2c43a524)
    */
/* WARNING: Removing unreachable block (ram,0x2c43a56a) */
/* WARNING: Removing unreachable block (ram,0x2c43a568) */
/* WARNING: Removing unreachable block (ram,0x2c43a628) */
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
/* WARNING: Removing unreachable block (ram,0x2b7bd108) */
/* WARNING: Removing unreachable block (ram,0x2c43a7e6) */
/* WARNING: Removing unreachable block (ram,0x2c43aa24) */
/* WARNING: Removing unreachable block (ram,0x2c43aa2a) */
/* WARNING: Removing unreachable block (ram,0x2c43aa60) */
/* WARNING: Removing unreachable block (ram,0x2c43aa64) */
/* WARNING: Removing unreachable block (ram,0x2c43ab0e) */
/* WARNING: Removing unreachable block (ram,0x2c43ab14) */
/* WARNING: Removing unreachable block (ram,0x2c43a4a8) */
/* WARNING: Removing unreachable block (ram,0x2c43a4cc) */
/* WARNING: Removing unreachable block (ram,0x2c43a4b4) */
/* WARNING: Removing unreachable block (ram,0x2c43a4d8) */
/* WARNING: Removing unreachable block (ram,0x2c43a4e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43a508(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_r6;
  undefined1 *puVar7;
  int unaff_r7;
  int iVar8;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 *in_stack_000002d0;
  
  puVar6 = *(undefined4 **)(param_1 + 0xc);
  puVar4 = (undefined4 *)0x2c43a660;
  iVar8 = unaff_r7 * 4;
  puVar7 = &LAB_2c43a628;
  if (unaff_r6 != 0xfa) {
    do {
      iVar2 = *(int *)(iVar8 + 0x60);
      *(char *)((int)puVar6 + iVar2) = (char)puVar7;
      coprocessor_movefromRt(8,0,4,in_cr10,in_cr8);
      iRam2c43a800 = (int)puVar6 >> 0x13;
      if (iRam2c43a800 < 0) {
        puVar7 = (undefined1 *)(_LAB_2c43a700 + 3);
        *(int *)(iVar2 + 0xbf) = param_3;
        uRam000000d5 = (char)iVar8;
        *in_stack_000002d0 = 0xbf;
        in_stack_000002d0[1] = iVar2;
        in_stack_000002d0[2] = puVar6;
        puVar4 = in_stack_000002d0 + 3;
        *(int *)(param_3 + 0x60) = param_3;
        iRam2c43a800 = iRam2c43a800 + 0x22;
      }
      puVar7[0x12] = (char)iVar8;
      uVar3 = (uint)*(ushort *)((int)puVar4 + param_3);
      uVar5 = iRam2c43a800 >> 0x15;
      *(undefined2 *)(iVar8 + iRam2c43a800) = 0xbf;
      uRam2c43a80c = uVar5 >> 0x14;
      puVar4 = (undefined4 *)(uVar5 - 0xd2);
      iRam2c43a808 = *(int *)((int)puVar4 + uVar3);
      param_3 = 0x2c43a814;
      iVar2 = *(int *)(iRam2c43a800 + 0x1c);
      puVar6 = (undefined4 *)(int)*(char *)(uVar3 + iRam2c43a808);
      puVar7 = (undefined1 *)0xf8;
    } while (SBORROW4(uVar5,0xd2));
    puRam2c43a804 = puVar4;
    iRam2c43a810 = iVar8;
    *(char *)(puVar6 + 0xb10ea05) = *(char *)(uVar3 + iRam2c43a808);
    *(uint *)(uVar3 + *(int *)(iVar2 + 4)) = uVar3;
    software_bkpt(0xf5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + 4) + 0x1c);
  uRam2c43a6c9 = 0x60;
  *puVar6 = param_2;
  puVar6[1] = *(ushort *)((int)puVar6 + 0x16) + 0xd3bc58c0;
  puVar6[2] = (uint)uVar1 << 6;
  puVar6[3] = puVar6;
  puVar6[4] = iVar8;
  _LAB_2c43a6b8 = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

