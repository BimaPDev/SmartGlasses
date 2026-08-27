/* FUN_2c3ed406 @ 0x2c3ed406 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3ed406(undefined4 param_1,uint param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  uint *unaff_r4;
  uint unaff_r5;
  uint *unaff_r7;
  
  *param_4 = param_1;
  param_4[1] = param_3;
  param_4[2] = param_4;
  param_4[3] = unaff_r4;
  param_4[4] = unaff_r5;
  *(uint *)(param_2 + 0x34) = param_2;
  *(uint **)(param_2 + 0x38) = unaff_r7;
  uVar1 = *(ushort *)((int)unaff_r7 + 6);
  *(char *)(param_2 + 0xe) = (char)*(ushort *)(param_2 + 0xc);
  *unaff_r4 = (uint)*(ushort *)(param_2 + 0xc);
  unaff_r4[1] = param_3 + 0x33U;
  unaff_r4[2] = (uint)uVar1;
  unaff_r4[3] = (uint)unaff_r4;
  unaff_r4[4] = unaff_r5;
  *unaff_r7 = (uint)*(ushort *)(param_2 + 4);
  unaff_r7[1] = param_2;
  unaff_r7[2] = param_3 + 0x33U;
  unaff_r7[3] = (uint)uVar1;
  unaff_r7[4] = (uint)unaff_r7;
  *(uint **)(param_2 + 0x38) = unaff_r7;
  software_interrupt(0x33);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

