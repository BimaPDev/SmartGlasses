/* FUN_2c123ad4 @ 0x2c123ad4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c123ad4(void)

{
  int extraout_r2;
  int *extraout_r3;
  undefined4 uVar1;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  undefined4 extraout_s3;
  
  uVar1 = func_0x2bb929e8();
  VectorMultiplyAccumulate(CONCAT44(extraout_s1,uVar1),CONCAT44(extraout_s3,extraout_s2),2,1);
  *(short *)(*extraout_r3 + (*extraout_r3 >> 0x1e) + 6) = -(short)extraout_r2;
  *(int *)(extraout_r2 << 8) = extraout_r2 << 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

