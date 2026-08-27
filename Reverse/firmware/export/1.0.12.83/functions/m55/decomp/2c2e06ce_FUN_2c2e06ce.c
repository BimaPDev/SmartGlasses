/* FUN_2c2e06ce @ 0x2c2e06ce */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2e06ce(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 unaff_r7;
  undefined8 in_d17;
  undefined8 in_d27;
  
  *(undefined4 *)((param_1 >> 4) * 2) = unaff_r7;
  iVar1 = iRam2c2e06f8;
  VectorMin(in_d17,in_d27,1,0);
  software_bkpt(2);
  *(undefined2 *)(iRam2c2e06f8 + 2) = param_3;
  *(short *)(iVar1 + 0x10) = (short)iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

