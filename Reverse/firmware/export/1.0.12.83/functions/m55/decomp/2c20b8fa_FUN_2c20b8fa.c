/* FUN_2c20b8fa @ 0x2c20b8fa */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c20b8fa(void)

{
  int iVar1;
  int unaff_r7;
  undefined4 in_cr5;
  undefined4 in_cr13;
  undefined8 in_d16;
  undefined8 in_d27;
  
  iVar1 = unaff_r7 << 3;
  if (iVar1 == 0) {
    VectorAdd(in_d27,in_d16,4,1);
    iVar1 = 0;
  }
  coprocessor_moveto(0,5,5,iVar1 << 0xc,in_cr13,in_cr5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

