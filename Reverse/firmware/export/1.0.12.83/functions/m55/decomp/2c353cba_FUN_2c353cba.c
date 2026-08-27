/* FUN_2c353cba @ 0x2c353cba */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c353cba(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int unaff_r5;
  
  uVar1 = (undefined1)unaff_r5;
  *(undefined1 *)(param_3 + unaff_r5) = uVar1;
  *(undefined1 *)(param_3 + unaff_r5) = uVar1;
  *(undefined1 *)(param_3 + unaff_r5) = uVar1;
  *(undefined1 *)(param_3 + unaff_r5) = uVar1;
  *(short *)(param_3 + param_2) = (short)unaff_r5;
  software_interrupt(3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

