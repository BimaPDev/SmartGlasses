/* FUN_2c458b80 @ 0x2c458b80 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c458b80(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 unaff_r4;
  undefined1 unaff_r5;
  
  *(undefined1 *)(param_4 + 0x16) = unaff_r4;
  *(undefined1 *)(_LAB_2c458c28 + param_2) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

