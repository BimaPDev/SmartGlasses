/* FUN_2c10d5fc @ 0x2c10d5fc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c10d5fc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  
  *(int *)(param_3 + 0x18) = unaff_r5;
  *(undefined1 **)(unaff_r5 + 0x74) = &stack0x000000e0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

