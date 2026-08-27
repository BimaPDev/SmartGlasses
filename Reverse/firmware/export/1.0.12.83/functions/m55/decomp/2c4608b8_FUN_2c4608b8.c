/* FUN_2c4608b8 @ 0x2c4608b8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4608b8(undefined4 param_1,int param_2,uint param_3)

{
  int unaff_r4;
  undefined4 unaff_r10;
  undefined4 in_cr11;
  
  if (param_2 >> 0x18 != 0) {
    *(uint *)((uint)*(ushort *)((param_2 >> 0x18) + 0x1a) * 2) = param_3;
    coprocessor_load(6,in_cr11,unaff_r10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _NMI = param_3 >> 0x1c;
  _MasterStackPointer = param_1;
  _Reset = param_2;
  _HardFault = unaff_r4;
  if (unaff_r4 == 0) {
    _HardFault = ((uint)_LAB_2c4611e0 & 0xff) << 0x10;
    *_LAB_2c4611e0 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

