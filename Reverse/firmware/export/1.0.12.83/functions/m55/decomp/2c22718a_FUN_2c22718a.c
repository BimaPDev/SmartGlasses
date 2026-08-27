/* FUN_2c22718a @ 0x2c22718a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c22718a(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int unaff_r4;
  int unaff_r5;
  undefined4 *puVar2;
  undefined4 unaff_r6;
  
  sVar1 = *(short *)(param_3 + unaff_r5);
  puVar2 = (undefined4 *)(int)sVar1;
  *(undefined4 **)(unaff_r4 + param_3) = puVar2;
  *(char *)(param_3 + (int)puVar2) = (char)sVar1;
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  puVar2[3] = unaff_r4;
  puVar2[4] = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

