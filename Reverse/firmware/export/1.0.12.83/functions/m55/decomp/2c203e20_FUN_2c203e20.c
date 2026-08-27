/* FUN_2c203e20 @ 0x2c203e20 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c203e20(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  code *unaff_r8;
  undefined4 in_cr7;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 in_d0;
  undefined8 uVar3;
  undefined8 unaff_d15;
  uint in_stack_00000180;
  
  iVar1 = (int)*(short *)(in_stack_00000180 * 8 + (in_stack_00000180 >> 7));
  *(short *)(in_stack_00000180 + 6) = (short)in_stack_00000180;
  uVar3 = VectorHalvingAdd(unaff_d15,in_d0,1,1);
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(int *)(iVar1 + 0xc) = param_4;
  *(uint *)(iVar1 + 0x10) = in_stack_00000180 >> 7;
  *(undefined4 *)(iVar1 + 0x14) = unaff_r6;
  *(uint **)(iVar1 + 0x18) = &stack0x00000180;
  *(char *)(param_4 + 2) = (char)&stack0x00000180;
  puVar2 = (undefined4 *)(*unaff_r8)((int)uVar3,(int)*(short *)((int)&stack0x00000180 * 0x800008));
  *puVar2 = unaff_r5;
  coprocessor_moveto(8,5,5,unaff_r8,in_cr13,in_cr7);
  coprocessor_loadlong(0xf,in_cr15,unaff_r8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

