/* FUN_2c2d66cc @ 0x2c2d66cc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2d66cc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_r5;
  undefined1 *puVar4;
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
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  puVar4 = *(undefined1 **)(param_2 + 0x18);
  software_interrupt(0x19);
  uVar3 = (uint)*(ushort *)(*(int *)(param_2 + 0x1c) + 0x26);
  coprocessor_function2(0,8,0,in_cr0,in_cr13,in_cr0);
  *(uint *)(uVar3 * 8 + 0x30) = uVar3 * 8;
  *(uint *)(iVar1 + 0x34) = uVar3;
  software_bkpt(0);
  if (uVar3 != 0) {
    *puVar4 = (char)(iVar2 << 2);
    VectorShiftRight(in_d0,1);
    coprocessor_loadlong(0,in_cr4,unaff_r11 + -0x360);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

