/* FUN_2c447656 @ 0x2c447656 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c4476d0) */
/* WARNING: Removing unreachable block (ram,0x2c4476d4) */
/* WARNING: Removing unreachable block (ram,0x2c44767a) */
/* WARNING: Removing unreachable block (ram,0x2c4477c6) */

void FUN_2c447656(void)

{
  undefined1 unaff_r4;
  int unaff_r7;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr13;
  undefined4 in_stack_000002bf;
  
  (&stack0x0000028b)[unaff_r7] = unaff_r4;
  uRam00000050 = in_stack_000002bf;
  coprocessor_function2(4,9,7,in_cr1,in_cr0,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

