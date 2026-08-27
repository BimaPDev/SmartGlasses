/* FUN_2c06da3e @ 0x2c06da3e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c06da3e(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int unaff_r4;
  int *piVar3;
  uint *puVar4;
  uint unaff_r6;
  uint uVar5;
  uint unaff_r7;
  uint unaff_lr;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr9;
  undefined4 in_cr10;
  
  piVar3 = (int *)(param_1 * 0x1000);
  uVar5 = unaff_r6 - 0x1d8;
  coprocessor_store(6,in_cr9,uVar5);
  *piVar3 = param_1;
  piVar3[1] = unaff_r4 << 0xd;
  piVar3[2] = param_4;
  uVar1 = (uint)((ulonglong)unaff_r6 * (ulonglong)unaff_lr >> 0x34);
  puVar4 = (uint *)(param_1 << 0xb);
  if (-1 < (int)puVar4) {
    software_bkpt(0xfd);
    puVar4 = (uint *)((int)*(char *)(uVar1 + param_1) - 0xd8U >> 0xe);
    uVar5 = 2;
    unaff_r7 = _HardFault;
  }
  uVar2 = param_1 * 4;
  *(uint **)(param_1 + 0x50) = puVar4;
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  puVar4[2] = (uint)puVar4;
  puVar4[3] = unaff_r7 >> 0x1b;
  puVar4[4] = uVar5;
  puVar4[5] = unaff_r7;
  *(uint *)(param_1 + 0x60) = uVar2;
  coprocessor_function2(0xe,0xc,1,in_cr2,in_cr4,in_cr0);
  *(undefined4 *)(*(ushort *)((unaff_r7 >> 0x1b) + uVar2) + 0x2c) = 0x5f;
  coprocessor_function2(0xf,0xe,3,in_cr10,in_cr1,in_cr1);
  software_bkpt(0xcc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

