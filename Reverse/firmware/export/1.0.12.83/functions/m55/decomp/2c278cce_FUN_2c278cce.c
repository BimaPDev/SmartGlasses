/* FUN_2c278cce @ 0x2c278cce */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c278cce(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r6;
  undefined1 unaff_r7;
  bool in_ZR;
  bool in_CY;
  undefined1 auStack_c [8];
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY != false) {
    *(undefined1 *)(unaff_r6 + 0x1d) = unaff_r7;
    *(undefined1 *)(unaff_r6 + 0x1d) = unaff_r7;
    *(undefined1 *)(unaff_r6 + 0x1d) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  SignedSaturate(auStack_c,0);
  SignedDoesSaturate(auStack_c,0);
  iVar2 = SignedSaturate(unaff_r4,0);
  SignedDoesSaturate(unaff_r4,0);
  cVar1 = (char)auStack_c + '\b';
  iVar2 = *(int *)((iVar2 + 0x4f) * 0x10000 + 0x10);
  *(int *)(iVar2 * 2) = param_2;
  if (iVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_r4 + 0x1d) = cVar1;
  *(char *)(unaff_r6 + 0x1d) = cVar1;
  *(char *)(param_2 * 8 + 0x1f) = (char)(unaff_r6 << 3);
  *(char *)(unaff_r6 + 0x1d) = cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

