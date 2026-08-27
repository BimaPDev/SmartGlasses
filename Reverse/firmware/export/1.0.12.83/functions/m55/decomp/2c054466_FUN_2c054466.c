/* FUN_2c054466 @ 0x2c054466 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c054e78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c054466(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int extraout_r2;
  int extraout_r3;
  int unaff_r4;
  int iVar1;
  uint uVar2;
  int unaff_r8;
  undefined4 unaff_pc;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 unaff_d9;
  undefined8 unaff_d11;
  undefined8 in_d18;
  undefined8 in_d28;
  undefined6 uVar3;
  int in_stack_00000208;
  
  iVar1 = param_4[1];
  uVar2 = param_4[3] << 4;
  uVar3 = func_0x2b4984b4(param_1,*param_4,param_3,param_4 + 4,param_1,param_3);
  if ((int)uVar3 == 0) {
    *(uint *)(extraout_r3 * 2) = uVar2;
    VectorDotProduct(unaff_d11,unaff_d11,0);
    VectorCompareGreaterThan(unaff_d9,in_d18,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar1 == 0xc6) {
    VectorDotProduct(unaff_d11,unaff_d11,0);
    *(short *)(_DAT_2c055188 + 0x37) = (short)_DAT_2c054f1c;
    coprocessor_load(9,in_cr13,in_stack_00000208 + -0xf8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = iVar1 + -0x18c;
  if (iVar1 < 0) {
    if (iVar1 != 0xc6) {
      software_bkpt(0);
      iVar1 = *(int *)((int)uVar2 >> (uVar2 & 0xff));
      *(short *)(unaff_r4 + 0xe) = (short)_DAT_2c054f7c;
      if (*(int *)(unaff_r8 + -0x380) != -0xe0) {
        *(short *)(iVar1 + 0x24) = (short)((uint6)uVar3 >> 0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    VectorDotProduct(unaff_d11,unaff_d11,0);
    iVar1 = 0;
    VectorRoundShiftLeft(in_d18,2,in_d28);
    software_bkpt(0x3a);
    unaff_r4 = ((int)uVar3 + 0xde) * 0x40000000 >> 0x18;
  }
  else {
    coprocessor_store(0,in_cr14,unaff_pc);
    VectorDotProduct(unaff_d11,unaff_d11,0);
    iVar1 = extraout_r2;
  }
  *(short *)(iVar1 + 0xe) = (short)unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

