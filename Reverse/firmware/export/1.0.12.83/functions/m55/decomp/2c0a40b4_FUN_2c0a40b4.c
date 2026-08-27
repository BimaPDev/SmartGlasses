/* FUN_2c0a40b4 @ 0x2c0a40b4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0a40b4(int param_1)

{
  undefined8 unaff_d10;
  undefined8 in_d18;
  
  VectorSub(unaff_d10,in_d18,2,1);
  *(int *)(param_1 + 0x5d) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

