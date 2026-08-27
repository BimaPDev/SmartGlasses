/* FUN_2c29fa50 @ 0x2c29fa50 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c29fa50(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint unaff_r4;
  
  *(undefined1 *)(param_4 + 0x15) = *(undefined1 *)(param_3 + 1);
  if ((unaff_r4 & 0x1fffffff) != 0) {
    func_0x2bfa2276((param_3 >> 5) + 0x6e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

