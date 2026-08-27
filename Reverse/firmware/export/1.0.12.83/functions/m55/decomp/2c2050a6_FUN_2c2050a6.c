/* FUN_2c2050a6 @ 0x2c2050a6 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c2050e4) overlaps instruction at (ram,0x2c2050e2)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c2050a6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint extraout_r1;
  int iVar4;
  undefined1 *puVar5;
  int unaff_r4;
  int unaff_r7;
  int unaff_pc;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr15;
  undefined1 in_q0 [16];
  undefined1 in_q13 [16];
  undefined4 in_stack_0000027c;
  undefined1 auStack_112 [234];
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = param_1[1];
  iVar4 = param_1[2];
  puVar5 = (undefined1 *)param_1[3];
  puVar5[*param_1] = (char)*param_1;
  coprocessor_store(0xf,in_cr3,unaff_r7);
  iVar1 = (int)&stack0x00000204 * 0x40000;
  if (iVar1 == 0) {
    *puVar5 = 0;
  }
  else {
    *(undefined2 *)((int)&stack0x00000204 * 0x8000) = 0;
    puVar5[iVar1] = 0;
    if ((int)auStack_112 * 8 == 0) {
      *(undefined2 *)(iVar2 + 8) = 0x9f;
      iVar1 = (unaff_r7 >> 3) * 4;
      if ((unaff_r7 >> 3 & 0x40000000U) != 0 && iVar1 != 0) {
        *(int *)(unaff_r4 + 0x18) = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = *puRam2c20f194;
      iVar2 = puRam2c20f194[2];
      software_bkpt(4);
      coprocessor_loadlong(0,in_cr1,unaff_pc + 0x2dc);
      *(uint *)((uint)*(byte *)(iVar1 + 0xc) * 2) = (uint)*(byte *)(iVar1 + 0xc);
      uStack_20 = param_2;
      uStack_1c = param_3;
      uStack_18 = param_4;
      func_0x2bf123b6(iVar4 << 0xc,uVar3,iVar4,iVar2 << 3);
      uStack_28 = extraout_r1 & 0x800000;
      uStack_24 = 0x2c20f1af;
      if (_Reserved5 * 0x100000 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x2c4bbfd6(_Reserved5 * 0x100000,in_stack_0000027c,_Reserved5 << 0x16);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    coprocessor_store(8,in_cr15,(int)auStack_112 * 8 + -0xc);
  }
  uVar3 = VectorGetElement(in_q0._8_8_,0,2,0);
  VectorMultiplyAccumulate(in_q13,uVar3,2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

