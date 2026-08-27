/* FUN_2c206564 @ 0x2c206564 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c206564(void)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  int unaff_r7;
  undefined4 in_cr5;
  undefined4 in_cr13;
  undefined8 in_d16;
  undefined8 in_d27;
  
  iVar1 = 0;
  iVar2 = unaff_r7 << 3;
  if (iVar2 == 0) {
    VectorAdd(in_d27,in_d16,4,1);
  }
  else {
    unaff_r7 = 0x3a0;
    iVar1 = iVar2;
  }
  coprocessor_moveto(0,5,5,iVar1 << 0xc,in_cr13,in_cr5);
  *(char *)(unaff_r5 + 3) = (char)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

