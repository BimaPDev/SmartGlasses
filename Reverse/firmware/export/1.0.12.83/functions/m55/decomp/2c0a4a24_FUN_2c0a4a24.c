/* FUN_2c0a4a24 @ 0x2c0a4a24 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0a4a24(int param_1)

{
  undefined8 unaff_d10;
  undefined8 in_d18;
  
  VectorSub(unaff_d10,in_d18,2,1);
  *(int *)(param_1 + 0x5d) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

