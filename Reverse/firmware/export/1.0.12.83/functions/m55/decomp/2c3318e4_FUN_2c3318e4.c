/* FUN_2c3318e4 @ 0x2c3318e4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3318e4(void)

{
  undefined8 unaff_d11;
  undefined8 in_d22;
  undefined8 in_d27;
  undefined8 uVar1;
  
  uVar1 = VectorShiftLeftInsert(in_d27,unaff_d11,0x1f);
  VectorShiftLeftInsert(uVar1,in_d22,0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

