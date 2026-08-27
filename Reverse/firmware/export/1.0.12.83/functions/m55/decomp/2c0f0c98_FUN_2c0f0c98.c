/* FUN_2c0f0c98 @ 0x2c0f0c98 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0f0c98(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int unaff_r5;
  undefined1 auStack_10 [4];
  
  *param_3 = param_1;
  param_3[1] = param_2;
  param_3[2] = param_3;
  param_3[3] = unaff_r5 + -0xa5;
  *(short *)(*(byte *)(_DAT_2c0f0ce8 + 0x1d) + 0x16) =
       (short)*(undefined4 *)(((uint)auStack_10 & 0x4e4e4e4e) + 0x1bc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

