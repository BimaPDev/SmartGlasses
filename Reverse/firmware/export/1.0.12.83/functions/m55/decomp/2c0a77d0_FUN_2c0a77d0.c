/* FUN_2c0a77d0 @ 0x2c0a77d0 */

void FUN_2c0a77d0(void)

{
  code *pcVar1;
  undefined4 in_cr1;
  undefined4 in_cr8;
  
  coprocessor_movefromRt(3,6,4,in_cr8,in_cr1);
  software_bkpt(0xee);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xe0,0x2c0a7aea);
  (*pcVar1)();
}

