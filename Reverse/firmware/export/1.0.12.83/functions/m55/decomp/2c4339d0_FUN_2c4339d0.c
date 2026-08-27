/* FUN_2c4339d0 @ 0x2c4339d0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4339d0(void)

{
  undefined8 *unaff_r5;
  undefined4 unaff_r6;
  undefined8 uVar1;
  
  uVar1 = func_0x2bf20942();
  *(short *)((int)uVar1 + 0x36) = (short)unaff_r6;
  *unaff_r5 = uVar1;
  *(undefined4 *)(unaff_r5 + 1) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

