/* FUN_2c252f0a @ 0x2c252f0a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c252f0a(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int unaff_r4;
  int unaff_r5;
  int iVar2;
  int unaff_pc;
  undefined4 in_cr0;
  
  _MemManage = unaff_r5 + 2;
  _BusFault = unaff_r4 << 0x1a;
  coprocessor_load(0,in_cr0,unaff_pc + -0xc0);
  coprocessor_store(0,in_cr0,param_2 + -0x80);
  puVar1 = (undefined1 *)(uint)*(byte *)(unaff_r4 * 0x20000000 + 0xf);
  _UsageFault = unaff_r4 * 0x20000000 + -0xf0;
  coprocessor_loadlong(3,in_cr0,unaff_pc + -0xc0);
  _MasterStackPointer = 0;
  _NMI = 0;
  iVar2 = _BusFault >> 2;
  _Reset = puVar1;
  _HardFault = param_4;
  *puVar1 = 0;
  *(undefined1 **)(unaff_r5 + 0x7e) = puVar1;
  *(undefined1 *)(iVar2 + 0x1d) = 0;
  *(undefined1 *)(iVar2 + 0x1d) = 0;
  func_0x2c55dd9a(0,puVar1,0,iVar2 << 1,param_1,param_2,param_3,param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

