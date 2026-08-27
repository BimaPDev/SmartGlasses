/* FUN_2c116b50 @ 0x2c116b50 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c116b50(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int in_r12;
  undefined4 in_cr6;
  undefined4 in_cr14;
  undefined1 auStack_190 [388];
  
  coprocessor_load(0xd,in_cr14,auStack_190);
  coprocessor_load(0xd,in_cr6,in_r12 + -0x2c8);
  *param_3 = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

