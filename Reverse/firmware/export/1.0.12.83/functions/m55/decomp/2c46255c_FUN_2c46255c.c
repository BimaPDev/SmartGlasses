/* FUN_2c46255c @ 0x2c46255c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c2094f8) */

void FUN_2c46255c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  undefined8 in_d0;
  
  if (!CARRY4(param_3,param_3)) {
    *(char *)(param_3 + 0x13) = (char)param_3;
    *(undefined1 *)(unaff_r5 + 10) = *(undefined1 *)(*(ushort *)(unaff_r6 + param_4) + 6);
    software_interrupt(0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_r5 + 0x1c) = unaff_r5;
  if (unaff_r7 >> 0x18 != 0) {
    iVar1 = (unaff_r7 >> 0x18) + 0x90;
    if (iVar1 != -7 && !SCARRY4(iVar1,7)) {
      FloatVectorPairwiseMax(in_d0,in_d0,2);
      FloatVectorPairwiseMax(in_d0,in_d0,2);
      VectorHalvingAdd(in_d0,in_d0,1,1);
      FloatVectorPairwiseMax(in_d0,in_d0,2);
      VectorHalvingAdd(in_d0,in_d0,1,1);
      FloatVectorPairwiseMax(in_d0,in_d0,2);
      VectorHalvingSubtract(in_d0,in_d0,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

