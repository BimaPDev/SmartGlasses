/* FUN_2c432e3a @ 0x2c432e3a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c432c66) */
/* WARNING: Removing unreachable block (ram,0x2c433046) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c432e3a(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r4;
  int *unaff_r7;
  int *piVar2;
  int unaff_r9;
  int in_stack_000001cc;
  
  software_interrupt(0xa9);
  iVar1 = param_4;
  piVar2 = unaff_r7;
  if (unaff_r4 == 0) {
    *(char *)((int)unaff_r7 + 0xe) = (char)unaff_r7;
    *param_2 = unaff_r7;
    if (param_2 == (undefined4 *)0xfffffffc) {
      if (!SBORROW4(param_1,param_1)) {
        if (param_3 == 0) {
          _HardFault = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _PendSV = 0x37b0;
        if (unaff_r9 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined2 *)((uint)*(byte *)(in_stack_000001cc + 10) + (uint)bRam0000001a) = 2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _HardFault = in_stack_000001cc;
    iVar1 = param_4 << 0x19;
    unaff_r4 = param_2[2];
    piVar2 = (int *)param_2[5];
    param_2 = param_2 + 6;
    _NMI = 0;
    _MasterStackPointer = param_1;
    _Reset = param_4;
    _MemManage = unaff_r7;
  }
  *piVar2 = (int)param_2;
  piVar2[1] = iVar1;
  piVar2[2] = unaff_r4;
  *(undefined4 *)(param_2[2] + 0x68) = param_2[3];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

