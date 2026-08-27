/* FUN_2c216778 @ 0x2c216778 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c216778(void)

{
  undefined8 in_d1;
  undefined8 in_d16;
  
  VectorReciprocalStep(in_d1,in_d16);
  software_interrupt(0xf2);
  software_interrupt(0xf5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

