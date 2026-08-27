/* FUN_2c2c170a @ 0x2c2c170a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2c170a(void)

{
  int unaff_r4;
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = unaff_r4 + (int)UNRECOVERED_JUMPTABLE * 4;
                    /* WARNING: Could not recover jumptable at 0x2c34359c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((int)((int)UNRECOVERED_JUMPTABLE * 0x8ce + uVar1 * 0xcc + 0x1210 +
                  (uint)((uVar1 & 0x80000000) != 0) * 0x44) >> 0x10);
  return;
}

