/* FUN_2c446e4a @ 0x2c446e4a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c446e4a(void)

{
  code *pcVar1;
  char in_ZR;
  
  software_interrupt(0x36);
  if ((in_ZR != '\0') && (in_ZR == '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfb,0x2c446eb4);
  (*pcVar1)();
}

