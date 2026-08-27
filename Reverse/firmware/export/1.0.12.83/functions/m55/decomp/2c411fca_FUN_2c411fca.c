/* FUN_2c411fca @ 0x2c411fca */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c411fca(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  
  *(undefined4 *)(unaff_r4 + 0x54) = param_3;
  *(int *)(unaff_r4 + 0x14) = param_4;
  *(char *)(unaff_r6 + 0xd) = (char)unaff_r5;
  *(undefined4 *)(param_4 + 0x38) = param_3;
  *(undefined1 *)(unaff_r5 + 9) = param_2;
  *(int *)(unaff_r4 + 0x44) = unaff_r5;
  *(int *)(unaff_r4 + 0x14) = unaff_r4;
  iVar1 = *(int *)(unaff_r6 + 4);
  *(int *)(iVar1 + 0x38) = unaff_r5;
  *(undefined1 *)(unaff_r5 + 9) = param_2;
  *(char *)(unaff_r5 + 0x11) = (char)unaff_r6;
  *(char *)(unaff_r4 + 9) = (char)unaff_r5;
  *(char *)(iRam2c413200 + 0xd) = (char)iVar1;
  *(undefined4 *)(unaff_r6 + 0x14) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

