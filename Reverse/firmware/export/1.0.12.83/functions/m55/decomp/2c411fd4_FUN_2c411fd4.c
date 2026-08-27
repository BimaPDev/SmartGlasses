/* FUN_2c411fd4 @ 0x2c411fd4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c411fd4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined1 in_stack_00000248;
  
  *(undefined4 *)(unaff_r4 + 0x54) = param_3;
  *(char *)(unaff_r5 + 1) = (char)unaff_r5;
  *(char *)(unaff_r6 + 0xd) = (char)param_3;
  uVar2 = *(undefined4 *)(*(byte *)(unaff_r6 + 5) + 0x14);
  *(char *)(unaff_r5 + 1) = (char)unaff_r5;
  bVar1 = *(byte *)(unaff_r6 + 5);
  *(undefined4 *)(unaff_r6 + 100) = *(undefined4 *)(unaff_r5 + 0x74);
  *(undefined1 **)(unaff_r6 + 0x24) = &stack0x0000020c;
  *(undefined1 *)(bVar1 + 9) = in_stack_00000248;
  *(short *)(bVar1 + 6) = (short)&stack0x0000020c;
  *(undefined4 *)(unaff_r6 + 0x34) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

