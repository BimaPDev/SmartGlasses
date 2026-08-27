/* FUN_2c28cea0 @ 0x2c28cea0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c28cea0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 in_cr4;
  undefined4 in_cr14;
  
  *(short *)(*(ushort *)(param_2 + param_3) + 0x16) = (short)unaff_r6;
  _NMI = _DAT_2c28d284;
  software_interrupt(0x28);
  _Reset = (undefined4 *)(unaff_r5 >> 3);
  *(int *)(unaff_r6 + 0x30) = unaff_r5;
  coprocessor_function(4,0xe,7,in_cr4,in_cr14,in_cr14);
  *_NMI = 0;
  _NMI[1] = _Reset;
  _NMI[2] = unaff_r4;
  _NMI = _NMI + 3;
  _MasterStackPointer = param_2;
  *_Reset = _NMI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

