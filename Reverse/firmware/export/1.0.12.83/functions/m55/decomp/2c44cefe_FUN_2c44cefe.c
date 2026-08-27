/* FUN_2c44cefe @ 0x2c44cefe */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44cefe(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r4;
  undefined4 *unaff_r5;
  
  UNRECOVERED_JUMPTABLE = pcRam2c44d2a4;
  if (unaff_r4 >> 9 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcRam2c44d2a4[0x16] = SUB41(pcRam2c44d2a4,0);
  *(short *)(param_3 + 0x34) = (short)param_3;
                    /* WARNING: Could not recover jumptable at 0x2c44cf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*unaff_r5,param_3,UNRECOVERED_JUMPTABLE,param_1,param_4);
  return;
}

