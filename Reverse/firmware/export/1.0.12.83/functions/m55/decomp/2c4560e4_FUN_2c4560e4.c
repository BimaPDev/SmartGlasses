/* FUN_2c4560e4 @ 0x2c4560e4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4560e4(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  undefined4 *unaff_r4;
  undefined4 unaff_r7;
  undefined4 in_stack_000000d4;
  
  uVar1 = *(ushort *)(param_3 + 0x22);
  *unaff_r4 = param_1;
  unaff_r4[1] = in_stack_000000d4;
  unaff_r4[2] = (uint)uVar1;
  unaff_r4[3] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

