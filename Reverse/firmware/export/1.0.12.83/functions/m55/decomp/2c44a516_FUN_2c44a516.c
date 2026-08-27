/* FUN_2c44a516 @ 0x2c44a516 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44a516(undefined4 param_1,undefined2 *param_2)

{
  int unaff_r11;
  undefined4 in_cr14;
  undefined2 in_stack_00000010;
  
  coprocessor_loadlong(7,in_cr14,unaff_r11 + -0x340);
  *param_2 = in_stack_00000010;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

