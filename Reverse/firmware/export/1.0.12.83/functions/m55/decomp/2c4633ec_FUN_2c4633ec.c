/* FUN_2c4633ec @ 0x2c4633ec */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4633ec(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 unaff_r7;
  
  *(undefined2 *)(param_4 + param_3) = unaff_r7;
  software_bkpt(0xbe);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

