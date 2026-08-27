/* FUN_2c1df70c @ 0x2c1df70c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1df70c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  Reserved1 = 0;
  _MasterStackPointer = 0;
  _Reset = param_3;
  *(short *)(param_5 * 0x10 + 0x10) = (short)(param_5 * 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

