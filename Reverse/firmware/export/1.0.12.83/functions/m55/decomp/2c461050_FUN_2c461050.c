/* FUN_2c461050 @ 0x2c461050 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c461050(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int unaff_r4;
  int *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  *(undefined1 *)(unaff_r6 + unaff_r7) = param_3;
  iVar1 = *param_1;
  *(int **)(iVar1 + unaff_r4) = param_1 + 2;
  *unaff_r5 = iVar1;
  unaff_r5[1] = (int)unaff_r5;
  unaff_r5[2] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

