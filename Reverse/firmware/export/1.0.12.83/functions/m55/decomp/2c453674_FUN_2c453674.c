/* FUN_2c453674 @ 0x2c453674 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c453c2a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c453674(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r2;
  undefined4 extraout_r3;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_r7;
  uint unaff_pc;
  undefined4 in_cr4;
  
  *(undefined2 *)((int)unaff_r7 + 6) = param_4;
  software_interrupt(0x7f);
  software_interrupt(0xfe);
  iVar3 = unaff_r7[1];
  iVar2 = func_0x2bb97abe(*unaff_r7 << 0x1e);
  uVar4 = (uint)*(byte *)(extraout_r2 + 0x11);
  puVar5 = (undefined4 *)(uVar4 - 7);
  *(short *)(iVar2 + 0x20) = (short)extraout_r3;
  *(char *)(iVar3 + 4) = (char)iVar2;
  uVar1 = _LAB_2c453e50;
  if (SBORROW4(uVar4,7)) {
    *(short *)(uVar4 + 7) = (short)puVar5;
    if ((unaff_pc & 0x80) == 0 || SBORROW4(iVar2,0xb3)) {
      coprocessor_storelong(2,in_cr4,param_1 + 0xd4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uRam2c453f40 = 0x10;
    uRam2c453f44 = 0;
    _LAB_2c453f4c = uVar1;
    puRam2c453f48 = puVar5;
  }
  *puVar5 = 0;
  *(undefined4 *)(uVar4 - 3) = extraout_r3;
  *(undefined4 **)(uVar4 + 1) = puVar5;
  *(undefined4 *)(uVar4 + 5) = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

