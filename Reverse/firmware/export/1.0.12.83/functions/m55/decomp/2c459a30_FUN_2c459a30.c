/* FUN_2c459a30 @ 0x2c459a30 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c459a30(undefined4 param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int extraout_r3;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 *unaff_r7;
  undefined4 in_stack_00000068;
  
  *unaff_r7 = param_3;
  unaff_r7[1] = unaff_r4;
  unaff_r7[2] = unaff_r5;
  bVar1 = *(byte *)(unaff_r5 + 0x15);
  *(undefined4 *)(param_2 + 0x38) = param_3;
  *(undefined4 *)(bVar1 + 0x50) = param_3;
  func_0x2b47e1b2(in_stack_00000068);
  bVar1 = *(byte *)(extraout_r3 + 0x2c459d48);
  *(undefined1 *)(unaff_r6 + _DAT_2c459cc0) = 0x48;
  *(char *)(unaff_r6 + (uint)bVar1) = (char)extraout_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

