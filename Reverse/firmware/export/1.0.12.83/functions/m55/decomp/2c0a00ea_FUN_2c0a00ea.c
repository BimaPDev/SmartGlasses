/* FUN_2c0a00ea @ 0x2c0a00ea */

void FUN_2c0a00ea(void)

{
  code *pcVar1;
  
  func_0x2be0230c();
  software_bkpt(0xf5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xe0,0x2c0a00fa);
  (*pcVar1)();
}

