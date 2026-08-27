/* FUN_2c43a5cc @ 0x2c43a5cc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c43aa76) overlaps instruction at (ram,0x2c43aa74)
    */
/* WARNING: Removing unreachable block (ram,0x2c439e0e) */
/* WARNING: Removing unreachable block (ram,0x2c439e7a) */
/* WARNING: Removing unreachable block (ram,0x2c439e10) */
/* WARNING: Removing unreachable block (ram,0x2c43aa24) */
/* WARNING: Removing unreachable block (ram,0x2c43aa2a) */
/* WARNING: Removing unreachable block (ram,0x2c43a312) */
/* WARNING: Removing unreachable block (ram,0x2c43ab2a) */
/* WARNING: Removing unreachable block (ram,0x2c43aa5e) */
/* WARNING: Removing unreachable block (ram,0x2c43aa60) */
/* WARNING: Removing unreachable block (ram,0x2c43ab30) */
/* WARNING: Removing unreachable block (ram,0x2c43ab3a) */
/* WARNING: Removing unreachable block (ram,0x2c43ab42) */
/* WARNING: Removing unreachable block (ram,0x2c43ab4e) */
/* WARNING: Removing unreachable block (ram,0x2c43ab50) */
/* WARNING: Removing unreachable block (ram,0x2c43ab52) */
/* WARNING: Removing unreachable block (ram,0x2c43ab54) */
/* WARNING: Removing unreachable block (ram,0x2c43abc2) */
/* WARNING: Removing unreachable block (ram,0x2c355e2c) */
/* WARNING: Removing unreachable block (ram,0x2c355efe) */
/* WARNING: Removing unreachable block (ram,0x2c355f80) */
/* WARNING: Removing unreachable block (ram,0x2c43abc8) */
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
/* WARNING: Removing unreachable block (ram,0x2c43aa64) */
/* WARNING: Removing unreachable block (ram,0x2c43ab0e) */
/* WARNING: Removing unreachable block (ram,0x2c43ab14) */
/* WARNING: Removing unreachable block (ram,0x2c43aad6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_2c43a5cc(undefined4 param_1,uint param_2,undefined1 *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int unaff_r4;
  uint *puVar8;
  int unaff_r5;
  int unaff_r6;
  uint uVar9;
  char in_OV;
  int in_stack_00000094;
  ushort in_stack_000001e8;
  int in_stack_000002bc;
  uint in_stack_00000388;
  int in_stack_0000039c;
  
  *(char *)(unaff_r6 + 1) = (char)param_3;
  uVar1 = *(ushort *)(unaff_r4 + 0x2c);
  puVar8 = (uint *)(uint)uVar1;
  uVar9 = unaff_r5 >> 0x1a;
  piVar6 = (int *)(in_stack_000002bc >> 0x12);
  if (piVar6 == (int *)0x0 || (int)piVar6 < 0 != (bool)in_OV) {
    *(short *)(uVar9 + unaff_r5) = (short)in_stack_000002bc;
    *(char *)((int)piVar6 + 3) = (char)uVar1;
    *piVar6 = in_stack_000002bc;
    piVar6[1] = unaff_r5;
    piVar6[2] = uVar9;
    piVar6[3] = 0;
    puVar8 = _LAB_2c43a910;
    uVar1 = *(ushort *)(param_2 + 0x30);
    uVar2 = *(ushort *)(param_2 + 6);
    *_LAB_2c43a910 = param_2;
    puVar8[1] = (uint)param_3;
    puVar8[2] = (uint)uVar1;
    puVar8[3] = (uint)uVar2;
    puVar8[4] = (uint)puVar8;
    *(char *)((int)&iRam2c43a76c + param_4) = (char)param_2;
    *(int *)(param_4 + 0x48) = unaff_r5;
    uVar9 = (uint)*(byte *)((uint)uVar1 + in_stack_00000094);
    if (_LAB_2c43a598 == 0) {
      if (-0x82 < (int)param_3) {
        param_3[0x96] = (char)param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_4 + 2) = (short)param_4;
      *(undefined4 *)(param_4 + 0x18) = 0;
      iVar7 = 0;
      *(short *)(param_2 + 0x30) = (short)in_stack_00000094;
      iVar5 = param_4;
      iRam2c43a805 = param_4;
    }
    else {
      uRam2c43a77c = _LAB_2c43a598 >> 0x14;
      uRam2c43a778 = _LAB_2c43a598;
      iVar5 = *(int *)(uVar9 + 0xc);
      iVar7 = *(int *)(uVar9 + 0x10);
      iRam2c43a76c = param_2;
      _LAB_2c43a770 = param_3 + 0x81;
      iRam2c43a774 = param_4;
      uRam2c43a780 = uVar9;
      if (uRam2c43a77c == 0) {
        *(short *)(uVar9 + 0x30) = (short)iVar5;
        *(undefined4 *)(iVar7 + 0x24) = 0x2c43a784;
        _MemManage = iVar5 + iVar7;
        iVar5 = (int)*(char *)(uVar9 + 0x14 + _MemManage);
        _MasterStackPointer = *(undefined4 *)(iVar5 + 4);
        software_bkpt(0xe);
        uRam2c43a6c9 = (undefined1)iVar7;
        _NMI = (uint)*(ushort *)(iVar5 + 0x28) << 6;
        _Reset = uRam00000016 + 0xd3bc58c0;
        _HardFault = 0;
        *(undefined4 *)(iVar7 + 0x58) = _MasterStackPointer;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(short *)(iVar5 + 0x12) = (short)iVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    bVar3 = (param_2 << 0x12 & 0x1000000) != 0;
    piVar4 = (int *)(param_2 * 0x4000000);
    *puVar8 = param_2 << 0x12;
    puVar8[1] = (uint)piVar4;
    puVar8[2] = (uint)puVar8;
    puVar8[3] = uVar9;
    puVar8[4] = (uint)&stack0x000001e4;
    if (bVar3 && piVar4 != (int *)0x0) {
      *(char *)(((int)piVar4 >> 0x20) + 0x11) = (char)((int)piVar4 >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)((int)piVar4 + (int)param_3) = 0;
    if (!bVar3 || piVar4 == (int *)0x0) break;
    *(undefined4 *)((int)piVar4 + *(int *)(param_3 + 0xc)) = 0x2c43abf4;
    param_2 = (uint)in_stack_000001e8;
    puVar8 = (uint *)(uint)*(byte *)(in_stack_00000388 + 0x2c43abf4);
    piVar6 = (int *)&stack0x00000014;
    param_3 = &stack0x000001b4;
    uVar9 = in_stack_00000388;
  }
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(piVar6 + 7) = (ushort)*(byte *)((int)piVar4 + 9);
  if (in_stack_0000039c >> 7 != 0) {
    *piVar4 = in_stack_0000039c;
    piVar4[1] = (int)piVar4;
    piVar4[2] = in_stack_0000039c >> 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

