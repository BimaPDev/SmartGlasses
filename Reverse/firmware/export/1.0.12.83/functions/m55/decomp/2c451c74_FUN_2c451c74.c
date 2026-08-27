/* FUN_2c451c74 @ 0x2c451c74 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c451c74(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int unaff_r4;
  int unaff_r6;
  uint unaff_r7;
  
  *param_4 = unaff_r4;
  param_4[1] = (unaff_r7 >> 0x10) << 0x18 | (unaff_r7 >> 0x18) << 0x10 | (unaff_r7 & 0xff) << 8 |
               unaff_r7 >> 8 & 0xff;
  param_4[2] = unaff_r7;
  if (0x5d < unaff_r6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_r4 + 0x36) = (short)unaff_r4;
  *(int *)(param_2 + 0x14) = unaff_r4;
  *(int *)(unaff_r6 + 0x34) = unaff_r6;
  *(char *)(param_4[5] + 0xd) = (char)(unaff_r7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

