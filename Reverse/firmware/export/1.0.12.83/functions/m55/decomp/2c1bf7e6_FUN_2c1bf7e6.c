/* FUN_2c1bf7e6 @ 0x2c1bf7e6 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1bf7e6(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int unaff_r5;
  uint unaff_r7;
  undefined8 uVar2;
  undefined8 unaff_d8;
  undefined8 unaff_d15;
  
  *(int *)(param_3 + 4) = param_1;
  iVar1 = (param_1 + unaff_r5 + (uint)(param_4 <= unaff_r7)) * 2;
  *(short *)(iVar1 + 0x20) = (short)iVar1;
  uVar2 = VectorHalvingAdd(unaff_d15,unaff_d8,2,1);
  _MasterStackPointer = 0;
  VectorShiftRight(uVar2,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

