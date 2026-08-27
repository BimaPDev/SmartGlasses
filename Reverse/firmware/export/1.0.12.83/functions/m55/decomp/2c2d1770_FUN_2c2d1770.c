/* FUN_2c2d1770 @ 0x2c2d1770 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2d1770(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_r5;
  int unaff_r11;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr13;
  undefined8 in_d0;
  
  do {
  } while (in_CY && !in_ZR);
  *(undefined4 *)(param_2 + 0x10) = unaff_r5;
  software_interrupt(0x19);
  coprocessor_function2(0,8,0,in_cr0,in_cr13,in_cr0);
  iVar1 = (uint)*(ushort *)(*(int *)(param_2 + 0x1c) + 0x26) * 8;
  *(int *)(iVar1 + 0x30) = iVar1;
  VectorShiftRight(in_d0,1);
  coprocessor_loadlong(0,in_cr4,unaff_r11 + -0x360);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

