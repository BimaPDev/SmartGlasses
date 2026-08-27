/* FUN_2c12b142 @ 0x2c12b142 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c12b1be) overlaps instruction at (ram,0x2c12b1bc)
    */
/* WARNING: Removing unreachable block (ram,0x2c12b2d6) */
/* WARNING: Removing unreachable block (ram,0x2c12b2da) */
/* WARNING: Removing unreachable block (ram,0x2c120812) */
/* WARNING: Removing unreachable block (ram,0x2c1207ee) */
/* WARNING: Removing unreachable block (ram,0x2c12086a) */
/* WARNING: Removing unreachable block (ram,0x2c12b1be) */
/* WARNING: Removing unreachable block (ram,0x2c12b260) */
/* WARNING: Removing unreachable block (ram,0x2c12b2d0) */
/* WARNING: Removing unreachable block (ram,0x2c12b272) */
/* WARNING: Removing unreachable block (ram,0x2c12b276) */
/* WARNING: Removing unreachable block (ram,0x2c12b27a) */
/* WARNING: Removing unreachable block (ram,0x2c12b372) */
/* WARNING: Removing unreachable block (ram,0x2c12b480) */
/* WARNING: Removing unreachable block (ram,0x2c12b386) */
/* WARNING: Removing unreachable block (ram,0x2c12b2dc) */
/* WARNING: Removing unreachable block (ram,0x2c12b2e2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c12b142(undefined2 param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr13;
  int in_stack_00000040;
  undefined4 in_stack_00000048;
  int in_stack_000000e8;
  undefined4 in_stack_00000198;
  int in_stack_0000019c;
  int in_stack_000001a8;
  int in_stack_000002c4;
  
  *(undefined2 *)(unaff_r4 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x6c) = unaff_r7;
  uVar1 = *(ushort *)(unaff_r4 + 8);
  *(undefined4 *)(in_stack_000000e8 + 0x4c) = 0xc;
  *(undefined4 *)(in_stack_000000e8 + 0x3c) = unaff_r7;
  *(int *)(uVar1 + 0x2c) = in_stack_000002c4;
  iVar4 = (param_4 >> 0x1d) + 0x6c;
  coprocessor_load(0xd,in_cr10,in_stack_000002c4 + 600);
  *(int *)(in_stack_000000e8 + 0xc) = in_stack_000000e8 << 6;
  if (in_stack_000000e8 != 0) {
    uRam00000037 = 0xb410;
    *(undefined4 *)(in_stack_000001a8 + 0x48) = 0xe0;
    coprocessor_function(4,10,3,in_cr10,in_cr12,in_cr2);
    software_interrupt(0x20);
    iVar4 = coprocessor_movefromRt(7,7,0,in_cr10,in_cr13);
    _DAT_00000108 = uRam2c12b3a5;
    uRam582568a0 = (undefined1)iVar4;
    uRam2c12b42a = 0xb410;
    uRam2c28bbc5 = 0xa4;
    uRam2c28bd69 = 0x959;
    uRam2c12b490 = _DAT_2c12b3a0;
    uRam2c12b494 = 0x2c12b410;
    uRam2c12b498 = 0x2c12b490;
    *(undefined2 *)(iVar4 + 0x2c12b26c) = 0xb26c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(in_stack_00000040 + in_stack_0000019c) = iVar4;
  coprocessor_function2(0xd,5,0,in_cr9,in_cr4,in_cr13);
  *(undefined4 *)(param_2 + 0x54) = 0;
  uVar3 = _DAT_2c12b5dc;
  puVar2 = _Reset;
  *_Reset = 0xffffffdc;
  puVar2[1] = param_2;
  puVar2[2] = in_stack_00000198;
  puVar2[3] = iVar4;
  puVar2[4] = in_stack_00000048;
  puVar2[5] = puVar2;
  puVar2[6] = uVar3;
  puVar2[7] = unaff_r9;
  puVar2[8] = unaff_r10;
  puVar2[9] = unaff_r11;
  puVar2[10] = unaff_lr;
  *(char *)((param_4 >> 0x1d) + 0x87) = (char)in_stack_00000198;
  _NMI = in_stack_00000048;
  software_interrupt(0xf4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

