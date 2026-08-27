/* FUN_2c2f99e8 @ 0x2c2f99e8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2f99e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r11;
  undefined8 in_d18;
  undefined1 in_q11 [16];
  undefined8 in_d26;
  undefined8 uVar1;
  
  FixedToFP(in_d18,0,1,0,0x20);
  VectorShiftLeft(in_d26,0x37,0x40,1);
  VectorTableLookup(param_3,unaff_r11,1);
  uVar1 = VectorRoundShiftRightNarrow(in_q11,5,8,1);
  SatQ(uVar1,8,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

