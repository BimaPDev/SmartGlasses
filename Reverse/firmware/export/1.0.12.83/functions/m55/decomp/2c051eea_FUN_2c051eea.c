/* FUN_2c051eea @ 0x2c051eea */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c051eea(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 in_cr2;
  
  coprocessor_load(3,in_cr2,unaff_r5 + 0x148);
  *(uint *)(unaff_r6 + param_3) = (uint)*(byte *)(unaff_r7 + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

