/* FUN_2c209402 @ 0x2c209402 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c209402(void)

{
  int iVar1;
  char unaff_r4;
  int unaff_r6;
  int unaff_r7;
  undefined4 in_cr5;
  undefined4 in_cr13;
  undefined8 in_d0;
  undefined1 auVar2 [16];
  undefined8 in_d16;
  undefined8 in_d25;
  undefined8 in_d27;
  
  iVar1 = unaff_r7 << 3;
  if (iVar1 == 0) {
    auVar2 = VectorAdd(in_d27,in_d16,4,1);
    in_d0 = auVar2._0_8_;
    iVar1 = 0;
  }
  coprocessor_moveto(0,5,5,iVar1 << 0xc,in_cr13,in_cr5);
  VectorHalvingAdd(in_d25,in_d0,1,0);
  *(char *)(unaff_r6 * 2 + 3) = unaff_r4 << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

