/* FUN_2c0e6f24 @ 0x2c0e6f24 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0e6f24(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int extraout_r2;
  uint unaff_r6;
  
  func_0x2cba74b4(_DAT_2c0e71ec,param_2,param_3 + -0x2f,*(undefined1 *)(unaff_r6 + 0xb),param_4);
  if ((((int *)(unaff_r6 >> 0x13))[3] >> 0x17 & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (extraout_r2 + 4 < 0) {
    func_0x2b428980((*(int *)(unaff_r6 >> 0x13) >> 0x20) << 0x15);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (extraout_r2 != -4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  NMI = 0x94;
  software_bkpt(0x8c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

