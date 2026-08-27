/* FUN_2c22df82 @ 0x2c22df82 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c22df82(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined1 unaff_r7;
  
  software_interrupt(4);
  uVar1 = (param_1 & 0x3fffff) >> 0xe;
  if (((param_1 & 0x3fffff) >> 0xd & 1) != 0 && uVar1 != 0) {
    *(char *)(param_1 * 2 + 0x1a) = (char)(param_3 << 2);
    *(undefined1 *)(param_2 + 3) = unaff_r7;
    uVar1 = 0;
  }
  *(uint *)(uVar1 + (param_3 >> 0x18)) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

