/* FUN_2c2a9660 @ 0x2c2a9660 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2a9660(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r7;
  
  *(char *)(param_3 + unaff_r5) = (char)unaff_r5;
  *param_4 = unaff_r7;
  cVar1 = *(char *)((int)param_4 * param_3 + param_3 + unaff_r4);
  *(char *)(cVar1 + unaff_r4) = cVar1;
  *(char *)(param_2 + 0x16) = (char)unaff_r7;
  *(int *)(param_3 + 4) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

