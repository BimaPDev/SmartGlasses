/* FUN_2c3ea49a @ 0x2c3ea49a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3ea49a(int param_1)

{
  int unaff_r8;
  undefined4 in_cr4;
  
  coprocessor_moveto2(4,4,(uint)*(ushort *)(param_1 + 0x3a) + unaff_r8 * 5,unaff_r8,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

