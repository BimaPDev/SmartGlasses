/* FUN_2c43f3ea @ 0x2c43f3ea */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43f3ea(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 in_cr1;
  undefined4 in_s4;
  undefined4 in_s5;
  undefined4 in_s6;
  undefined4 in_s7;
  undefined4 in_s8;
  undefined4 in_s9;
  undefined4 in_s10;
  undefined4 in_s11;
  undefined4 in_s12;
  undefined4 in_s13;
  undefined4 in_s14;
  undefined1 auStack_14 [12];
  
  *(undefined4 *)(param_2 + 0x38) = unaff_r7;
  if (SCARRY4(param_4,0xd)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r8 = in_s4;
  unaff_r8[1] = in_s5;
  unaff_r8[2] = in_s6;
  unaff_r8[3] = in_s7;
  unaff_r8[4] = in_s8;
  unaff_r8[5] = in_s9;
  unaff_r8[6] = in_s10;
  unaff_r8[7] = in_s11;
  unaff_r8[8] = in_s12;
  unaff_r8[9] = in_s13;
  unaff_r8[10] = in_s14;
  coprocessor_load(0xc,in_cr1,auStack_14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

