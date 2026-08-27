/* FUN_2c28aca4 @ 0x2c28aca4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c28aca4(void)

{
  undefined4 *in_r3;
  undefined4 unaff_r5;
  undefined2 unaff_r7;
  
  *(undefined2 *)((int)in_r3 + 2) = unaff_r7;
  *in_r3 = unaff_r5;
  in_r3[1] = in_r3[0x14];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

