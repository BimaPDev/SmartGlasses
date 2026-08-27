/* FUN_2c4011e6 @ 0x2c4011e6 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c401112) */
/* WARNING: Removing unreachable block (ram,0x2c4006b0) */

void FUN_2c4011e6(undefined4 param_1,undefined2 param_2)

{
  int unaff_r5;
  
  *(undefined2 *)(unaff_r5 + 0x3e) = param_2;
  software_hlt(0x3a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

