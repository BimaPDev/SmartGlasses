/* FUN_2c41c53c @ 0x2c41c53c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c41c53c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int unaff_r5;
  char in_CY;
  undefined8 in_d20;
  
  if (in_CY != '\0') {
    *(short *)(param_3 + 0x1e) = (short)param_4;
    *(undefined4 *)(unaff_r5 + 0x44) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  VectorShiftLeft(in_d20,0x3f,0x40,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

