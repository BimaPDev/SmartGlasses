/* FUN_2c462fd4 @ 0x2c462fd4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c462fd4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  uVar1 = *(undefined4 *)(_DAT_0000004e + 100);
  *param_1 = param_2;
  param_1[1] = unaff_r4;
  param_1[2] = unaff_r5;
  param_1[3] = 0x4c;
  *(short *)(param_1 + 4) = (short)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

