/* FUN_2c062c90 @ 0x2c062c90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c062c90(int *param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  code *pcVar1;
  int unaff_r4;
  int unaff_r7;
  int in_stack_000003cc;
  
  *(short *)(param_4 * 0x100 + 0x22) = (short)unaff_r7;
  *(undefined1 *)(unaff_r7 + 0x1d) = param_3;
  *(undefined4 *)(param_4 * 0x100) = _DAT_2c062e10;
  *param_1 = unaff_r7;
  param_1[1] = 0xbe;
  param_1[2] = 0x2c062f6c;
  param_1[3] = unaff_r4;
  param_1[4] = 0;
  param_1[5] = in_stack_000003cc;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xe0,0x2c062cb2);
  (*pcVar1)();
}

