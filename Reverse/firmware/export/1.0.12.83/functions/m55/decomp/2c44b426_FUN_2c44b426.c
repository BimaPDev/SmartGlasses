/* FUN_2c44b426 @ 0x2c44b426 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44b426(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int *unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 unaff_lr;
  char in_CY;
  
  do {
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x10) = unaff_r5;
    *(int **)((int)register0x00000054 + -0x14) = unaff_r4;
    *(int *)((int)register0x00000054 + -0x18) = param_4;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
    *(undefined4 *)register0x00000054 = param_2;
    unaff_r6 = 0x20;
  } while (unaff_r7 == 0);
  bVar1 = *(byte *)(param_1 + 0x1f);
  if (in_CY == '\0') {
    *unaff_r4 = param_1;
    unaff_r4[1] = (uint)bVar1;
    unaff_r4[2] = param_4;
    unaff_r4[3] = unaff_r5;
    unaff_r4[4] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

