/* FUN_2c43c03a @ 0x2c43c03a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43c03a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r6;
  undefined4 *unaff_r7;
  
  software_interrupt(0x98);
  (*(code *)unaff_r7[3])
            (*unaff_r7,*(undefined1 *)(unaff_r6 + 0x14),unaff_r7[1],param_4,param_1,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

