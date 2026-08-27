/* FUN_2c104d4e @ 0x2c104d4e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c103fc6) */
/* WARNING: Removing unreachable block (ram,0x2c104094) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c104d4e(undefined4 param_1,int param_2)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 in_cr14;
  undefined8 unaff_d11;
  undefined8 unaff_d15;
  
  coprocessor_storelong(1,in_cr14,unaff_r5);
  FloatVectorAdd(unaff_d11,unaff_d15,2);
  *(undefined4 *)(unaff_r5 + 0x13c) = param_1;
  *(undefined4 **)(unaff_r5 + 0x140) = (undefined4 *)(unaff_r5 + 0x13c);
  *(int *)(unaff_r5 + 0x144) = unaff_r6;
  *(int *)(unaff_r5 + 0x148) = unaff_r7;
  *(int *)param_2 = param_2;
  *(int *)(param_2 + 4) = unaff_r4;
  *(int *)(unaff_r4 * 0x8000) = unaff_r4;
  ((int *)(unaff_r4 * 0x8000))[1] = unaff_r6;
  _Reset = 0;
  _MasterStackPointer = unaff_r4;
  _NMI = unaff_r6;
  *(undefined4 *)(unaff_r7 + 0x10) = 100;
  uRam00000037 = 100;
  _NMI = CONCAT22(100,_NMI);
  uRam2c104250 = 0;
  iRam2c104254 = unaff_r4;
  iRam2c104258 = unaff_r7;
  *(undefined2 *)(unaff_r4 + 100) = 100;
  *(int *)(unaff_r7 << 1) = unaff_r7 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

