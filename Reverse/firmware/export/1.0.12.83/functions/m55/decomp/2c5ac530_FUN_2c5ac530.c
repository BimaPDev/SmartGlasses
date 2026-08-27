/* FUN_2c5ac530 @ 0x2c5ac530 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c5ac530(int param_1)

{
  undefined1 auStack_3c [40];
  undefined4 local_14;
  
  local_14 = *DAT_2c5ac5f4;
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    *(undefined1 *)(param_1 + 0x1a8) = 1;
    FUN_2c5b4b4c(param_1 + 0x1a0);
    FUN_2c565bac(auStack_3c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5ac60c,0x1bf,DAT_2c5ac608,DAT_2c5ac604);
}

