/* FUN_2c11f8a2 @ 0x2c11f8a2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c11f8a2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  code *unaff_r8;
  undefined4 in_cr6;
  
  coprocessor_store(7,in_cr6,unaff_r4);
  (*unaff_r8)(*(undefined4 *)(param_1 + _DAT_2c11f8f8),_DAT_2c11f8f8,param_3,0x700,param_2,param_3,
              param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

