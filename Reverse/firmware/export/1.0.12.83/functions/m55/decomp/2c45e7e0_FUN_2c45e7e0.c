/* FUN_2c45e7e0 @ 0x2c45e7e0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45e7e0(void)

{
  int unaff_r4;
  undefined8 in_d2;
  undefined8 in_d21;
  undefined2 in_stack_00000080;
  
  software_bkpt(0x89);
  VectorRoundShiftRightAccumulate(in_d21,in_d2,0x18);
  *(undefined2 *)(unaff_r4 * 0x800000 + 0x18) = in_stack_00000080;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

