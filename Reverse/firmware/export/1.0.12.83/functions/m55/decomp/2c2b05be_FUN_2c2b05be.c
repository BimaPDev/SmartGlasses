/* FUN_2c2b05be @ 0x2c2b05be */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2b05be(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  
  *(undefined4 *)(param_4 + 0x33) = 0;
  *(undefined4 *)(param_4 + 0x37) = 0x2c2b0618;
  *(undefined4 *)(param_4 + 0x3b) = param_3;
  *(undefined4 **)(param_4 + 0x3f) = (undefined4 *)(param_4 + 0x33);
  *(undefined4 *)(param_4 + 0x43) = unaff_r4;
  *(undefined4 *)(param_4 + 0x47) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

