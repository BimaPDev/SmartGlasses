/* FUN_2c450b62 @ 0x2c450b62 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c450b62(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  undefined4 *unaff_r4;
  int unaff_r6;
  int in_stack_0000034c;
  
  *(undefined4 *)(param_4 + (int)unaff_r4) = param_3;
  *unaff_r4 = param_1;
  unaff_r4[1] = param_4;
  unaff_r4[2] = unaff_r4;
  unaff_r4[3] = (int)unaff_r4 << 0x19;
  uVar1 = *(undefined2 *)(unaff_r6 * 0x4000 + -0xb4);
  *(undefined4 **)(param_4 + 0x20) = unaff_r4;
  *(undefined2 *)(in_stack_0000034c + 0xe) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

