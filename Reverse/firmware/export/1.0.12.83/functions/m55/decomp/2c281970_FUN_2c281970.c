/* FUN_2c281970 @ 0x2c281970 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c281970(uint param_1,int param_2)

{
  int extraout_r1;
  undefined2 extraout_r3;
  
  if ((param_1 & 0x100) != 0) {
    func_0x2c68035c(0,param_2 + 0xe);
    *(undefined2 *)(extraout_r1 + 0xe) = extraout_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

