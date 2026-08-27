/* FUN_2c45d31e @ 0x2c45d31e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c45d81e) */
/* WARNING: Removing unreachable block (ram,0x2c45d596) */
/* WARNING: Removing unreachable block (ram,0x2c45d750) */
/* WARNING: Removing unreachable block (ram,0x2c45d874) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c45d31e(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r7;
  undefined4 in_cr0;
  undefined4 in_cr9;
  undefined4 in_cr12;
  
  NMI = (undefined1)unaff_r4;
  uVar1 = *(undefined2 *)((param_3 >> 0x14) + 0x28);
  *(undefined4 *)(unaff_r4 + 8) = 4;
  iVar2 = _MasterStackPointer;
  _SysTick = 0xdb40;
  coprocessor_function2(7,5,5,in_cr12,in_cr0,in_cr9);
  uRam000000a4 = (undefined1)uVar1;
  iRam2c45dbb8 = unaff_r4;
  if (param_4 == 0) {
    *(char *)(_MasterStackPointer + 0x1d) = (char)_Reset;
    *(char *)(((int)(unaff_r7 + param_3) >> 0x1a) + 0xd) = (char)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

