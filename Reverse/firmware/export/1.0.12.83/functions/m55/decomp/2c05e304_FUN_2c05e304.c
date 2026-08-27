/* FUN_2c05e304 @ 0x2c05e304 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c05e338) overlaps instruction at (ram,0x2c05e336)
    */

void FUN_2c05e304(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  int unaff_r4;
  int unaff_r9;
  code *extraout_r12;
  bool bVar7;
  longlong lVar8;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined2 unaff_s29;
  undefined2 in_register_00000384;
  
  coprocessor_load(5,in_cr15,unaff_r9 + -0x138);
  bVar7 = (param_3 >> 0xf & 1U) != 0;
  iVar5 = param_3 >> 0x10;
  if (!bVar7 || iVar5 == 0) {
    *(undefined1 **)(param_1 + 0x50) = &stack0x000003c4;
    coprocessor_load(0xb,in_cr14,unaff_r9 + -0x194);
    puVar6 = (undefined2 *)(param_3 + unaff_r4);
    software_bkpt(0xd8);
    iVar5 = 0x15;
    *puVar6 = unaff_s29;
    puVar6[1] = in_register_00000384;
    param_4 = (undefined4 *)((int)puVar6 + unaff_r9);
    software_bkpt(0xc3);
    bVar7 = ((uint)param_4 & 0x400) != 0;
    param_3 = (int)param_4 * 0x400000;
  }
  if (!bVar7) {
    coprocessor_function(0,3,6,in_cr0,in_cr5,in_cr5);
    puVar1 = (undefined4 *)0x310;
    puVar2 = (undefined4 *)0x320;
    puVar3 = (undefined4 *)0x330;
    lVar8 = 2;
    while( true ) {
      *param_4 = *puVar1;
      param_4[1] = *puVar2;
      param_4[2] = *puVar3;
      param_4 = param_4 + 3;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 **)(param_1 + 0x50) = param_4;
  uVar4 = func_0x2b261e5c(param_1,iVar5,param_3);
  (*extraout_r12)(0xa4,iRam2c05e030,0xa4000000,iRam2c05e030 + (uVar4 >> 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

