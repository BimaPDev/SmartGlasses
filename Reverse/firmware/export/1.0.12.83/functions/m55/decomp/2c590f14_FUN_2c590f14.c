/* FUN_2c590f14 @ 0x2c590f14 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c590f14(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x24) != param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5910b0,0xec,DAT_2c5910a8,DAT_2c5910ac,DAT_2c5910a8,
               *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc));
}

