/* FUN_2c0b4fb8 @ 0x2c0b4fb8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0b4fb8(undefined4 param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 in_cr3;
  uint in_stack_00000148;
  
  uVar2 = unaff_r7 - 7;
  uVar1 = *(ushort *)(unaff_r5 + 0x32);
  coprocessor_load(0xf,in_cr3,unaff_r6 + -0x1cb);
  SignedSaturate((int)uVar2 >> 0xf,0x10);
  SignedDoesSaturate((int)uVar2 >> 0xf,0x10);
  *param_2 = 0x2c0b50cc;
  param_2[1] = param_3;
  param_2[2] = uVar2;
  param_2[3] = unaff_r4 & (uint)param_2;
  param_2[4] = (uint)uVar1;
  param_2[5] = in_stack_00000148;
  param_2[6] = unaff_r7 + -0x172;
  puVar3 = (undefined4 *)(unaff_r4 & (uint)param_2 & uVar2);
  *puVar3 = param_2 + 7;
  puVar3[1] = param_3;
  puVar3[2] = puVar3;
  puVar3[3] = in_stack_00000148 & uVar2;
  puVar3[4] = unaff_r7 + -0x172;
  *(short *)(param_3 + 6) = (short)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

