/* FUN_2c2bba02 @ 0x2c2bba02 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2bba02(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 in_cr13;
  
  coprocessor_loadlong(0xd,in_cr13,param_1 + -0x37c);
  if ((param_3 >> 0xe & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

