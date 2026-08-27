/* FUN_2c5caf10 @ 0x2c5caf10 */

void FUN_2c5caf10(void)

{
  code *pcVar1;
  
  disableDataAbortInterrupts();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xa0,0x2c5caf2c);
  (*pcVar1)();
}

