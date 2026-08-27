/* FUN_2c20f204 @ 0x2c20f204 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c20f204(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_pc;
  undefined4 in_cr1;
  undefined4 in_stack_00000294;
  
  iVar1 = *(int *)(param_1 * 0x10000000 + 0x30);
  iVar2 = iVar1 * 0x100000;
  if (iVar2 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar2 == 0) {
    uVar3 = *puRam2c20f194;
    iVar2 = puRam2c20f194[2];
    software_bkpt(4);
    coprocessor_loadlong(0,in_cr1,unaff_pc + 0x2dc);
    *(uint *)((uint)HardFault * 2) = (uint)HardFault;
    func_0x2bf123b6(0,uVar3,iVar1 << 0x16,iVar2 << 3,param_1);
    if (_Reserved5 * 0x100000 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x2c4bbfd6(_Reserved5 * 0x100000,in_stack_00000294,_Reserved5 << 0x16);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(*(byte *)(*(byte *)(param_1 * 0x10000000 + 0xc) + 0x10) + 0x18) = iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

