/* FUN_2c2a415a @ 0x2c2a415a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c2a415a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_pc;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr15;
  
  *(short *)(unaff_r5 + 2) = (short)param_3;
  *param_1 = param_3;
  if (unaff_r6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _MasterStackPointer = param_1 + 1;
  _Reset = param_4 << 3;
  _NMI = param_4;
  _HardFault = unaff_r5;
  _MemManage = 0;
  coprocessor_function2(0,0,0,in_cr0,in_cr8,in_cr0);
  _SVCall = (ushort)((((uint)(param_1 + 1) >> 0x18) << 0x1e) >> 0x14);
  coprocessor_moveto(0xf,0,7,unaff_pc,in_cr3,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

