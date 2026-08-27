/* FUN_2c456790 @ 0x2c456790 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c456790(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  int unaff_r4;
  int unaff_r5;
  int in_stack_000000b0;
  
  *(undefined2 *)(unaff_r4 + 4) = param_3;
  *(int *)(param_4 + 0x70) = param_4;
  *(uint *)(in_stack_000000b0 + unaff_r5) =
       ((uint)&stack0x000001b4 >> 0x10) << 0x18 | ((uint)&stack0x000001b4 >> 0x18) << 0x10 |
       ((uint)&stack0x000001b4 & 0xff) << 8 | (uint)&stack0x000001b4 >> 8 & 0xff;
  *(char *)(in_stack_000000b0 + 10) = (char)in_stack_000000b0;
  *(undefined1 **)(&stack0x000001b4 + in_stack_000000b0) = &stack0x000001b4;
  software_bkpt(0x84);
  *(char *)(in_stack_000000b0 + 10) = (char)in_stack_000000b0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

