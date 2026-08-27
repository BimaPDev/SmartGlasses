/* FUN_2c434fde @ 0x2c434fde */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c434fde(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_r4;
  int *unaff_r5;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 in_d27;
  undefined8 in_d30;
  
  iVar2 = _LAB_2c4350d0;
  uVar1 = VectorGetElement(unaff_d10,1,4,0);
  VectorMultiplySubtract(in_d27,uVar1,4,0);
  *unaff_r4 = param_1;
  unaff_r4[1] = param_3;
  unaff_r4[2] = param_4;
  unaff_r4[3] = unaff_r4;
  *(char *)(param_4 + 0x10) = (char)param_3;
  if (!in_ZR && in_NG == in_OV) {
    VectorRoundShiftRightAccumulate(unaff_d11,in_d30,0x1d);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar3 = *(int **)(((int)unaff_r5 >> 0x13) + (int)unaff_r4);
  *(short *)(&stack0x0000007c + param_2) = (short)unaff_r5;
  *(undefined1 **)(iVar2 + 0x34) = &stack0x0000007c;
  *unaff_r5 = (int)piVar3;
  unaff_r5[1] = param_2;
  unaff_r5[2] = iVar2;
  *piVar3 = param_2;
  piVar3[1] = (int)piVar3 << 0x11;
  piVar3[2] = (int)&stack0x0000007c;
  _LAB_2c4352d0 = (short)unaff_r5 + 0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

