/* FUN_2c0b9e60 @ 0x2c0b9e60 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0b9e60(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint unaff_r4;
  uint unaff_r6;
  int unaff_r7;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr11;
  
  iVar1 = param_1;
  if (in_OV == '\0') {
    iVar1 = 0x2c0ba100;
  }
  *(int *)(iVar1 + 0x40) = unaff_r7;
  if ((unaff_r7 << (param_1 << (unaff_r6 & 0xff) & 0xffU) ^ unaff_r4) < 0x98) {
    coprocessor_function2(0xe,3,7,in_cr3,in_cr11,in_cr3);
    *(undefined4 *)(param_3 + 0x7c) = _DAT_2c0ba1fc;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

