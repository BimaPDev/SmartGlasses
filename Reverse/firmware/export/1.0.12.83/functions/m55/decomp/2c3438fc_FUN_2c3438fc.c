/* FUN_2c3438fc @ 0x2c3438fc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3438fc(void)

{
  undefined8 in_d0;
  
  VectorHalvingAdd(in_d0,in_d0,1,1);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorCompareGreaterThanOrEqual(in_d0,in_d0,2,0x20);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
  FloatVectorPairwiseMax(in_d0,in_d0,2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

