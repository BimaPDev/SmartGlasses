/* FUN_2c10529a @ 0x2c10529a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c105982) overlaps instruction at (ram,0x2c105980)
    */
/* WARNING: Removing unreachable block (ram,0x2c10531c) */
/* WARNING: Removing unreachable block (ram,0x2c105350) */
/* WARNING: Removing unreachable block (ram,0x2c105322) */
/* WARNING: Removing unreachable block (ram,0x2c105326) */
/* WARNING: Removing unreachable block (ram,0x2c104ebc) */
/* WARNING: Removing unreachable block (ram,0x2c10588a) */
/* WARNING: Removing unreachable block (ram,0x2c10589a) */
/* WARNING: Removing unreachable block (ram,0x2c1058da) */
/* WARNING: Removing unreachable block (ram,0x2c1058de) */
/* WARNING: Removing unreachable block (ram,0x2c10590e) */
/* WARNING: Removing unreachable block (ram,0x2c10595e) */
/* WARNING: Removing unreachable block (ram,0x2c105966) */
/* WARNING: Removing unreachable block (ram,0x2c105930) */
/* WARNING: Removing unreachable block (ram,0x2c105982) */
/* WARNING: Removing unreachable block (ram,0x2c105932) */
/* WARNING: Removing unreachable block (ram,0x2c10597e) */
/* WARNING: Removing unreachable block (ram,0x2c105988) */
/* WARNING: Removing unreachable block (ram,0x2c105934) */
/* WARNING: Removing unreachable block (ram,0x2c105996) */
/* WARNING: Removing unreachable block (ram,0x2c105968) */
/* WARNING: Removing unreachable block (ram,0x2c10599c) */
/* WARNING: Removing unreachable block (ram,0x2c1059a4) */
/* WARNING: Removing unreachable block (ram,0x2c1059b6) */
/* WARNING: Removing unreachable block (ram,0x2c105954) */
/* WARNING: Removing unreachable block (ram,0x2c105c0e) */
/* WARNING: Removing unreachable block (ram,0x2c10568c) */
/* WARNING: Removing unreachable block (ram,0x2c1056a4) */
/* WARNING: Removing unreachable block (ram,0x2c10460e) */
/* WARNING: Removing unreachable block (ram,0x2c105bcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c10529a(int param_1,int param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r5;
  int unaff_r7;
  undefined4 uVar2;
  int unaff_r9;
  undefined4 in_cr8;
  int aiStack_10 [2];
  
  *(int *)(unaff_r5 + 0x5c) = unaff_r5;
  *(short *)(unaff_r7 + 0x36) = (short)*(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(unaff_r9 + -0x10);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_r9 + -0x1c);
  coprocessor_load(6,in_cr8,unaff_r9 + -0x13c);
  uVar1 = (uint)*(ushort *)((int)UNRECOVERED_JUMPTABLE * 0x40 + 0x18);
  if (((uint)UNRECOVERED_JUMPTABLE & 0xffffff) == 0) {
    *(code **)(UNRECOVERED_JUMPTABLE + 0x50) = UNRECOVERED_JUMPTABLE;
    _MasterStackPointer = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  aiStack_10[0] = param_1;
  aiStack_10[1] = param_2;
  *(short *)((int)aiStack_10 + uVar1) = (short)((int)UNRECOVERED_JUMPTABLE * 0x40);
  *(uint *)(UNRECOVERED_JUMPTABLE + 0x2c) = uVar1;
  *(short *)(bRam000000c0 + 0x10) = (short)aiStack_10;
                    /* WARNING: Could not recover jumptable at 0x2c105220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

