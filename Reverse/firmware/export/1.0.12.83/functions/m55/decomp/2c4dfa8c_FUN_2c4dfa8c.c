/* FUN_2c4dfa8c @ 0x2c4dfa8c */

/* WARNING: Control flow encountered bad instruction data */

int FUN_2c4dfa8c(void)

{
  if (*DAT_2c4dfacc == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *DAT_2c4dfacc;
}

