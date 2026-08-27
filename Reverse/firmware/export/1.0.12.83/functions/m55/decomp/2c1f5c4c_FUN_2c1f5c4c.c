/* FUN_2c1f5c4c @ 0x2c1f5c4c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c1f5c4c(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined4 uVar1;
  
  uVar1 = VectorTableLookup(unaff_r10,unaff_lr,2);
  uVar1 = VectorTableLookup(unaff_r4,uVar1,2);
  uVar1 = VectorTableLookup(unaff_r4,uVar1,2);
  VectorTableLookup(param_1 << 0x18,uVar1,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

