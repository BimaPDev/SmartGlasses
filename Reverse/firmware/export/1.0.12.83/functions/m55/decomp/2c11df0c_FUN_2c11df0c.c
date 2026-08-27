/* FUN_2c11df0c @ 0x2c11df0c */

void FUN_2c11df0c(void)

{
  code *pcVar1;
  int unaff_r6;
  
  *(int *)(unaff_r6 + 0x10) = unaff_r6;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x2c11df36);
  (*pcVar1)();
}

