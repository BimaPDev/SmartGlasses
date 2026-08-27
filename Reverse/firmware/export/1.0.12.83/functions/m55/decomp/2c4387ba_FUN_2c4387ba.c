/* FUN_2c4387ba @ 0x2c4387ba */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c42a35a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4387ba(uint param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int extraout_r2;
  undefined4 extraout_r3;
  int unaff_r5;
  int iVar3;
  uint unaff_r6;
  int unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_lr;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr9;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  uVar5 = 0x9e < param_1;
  uVar4 = param_1 == 0x9f;
  software_interrupt(0x61);
  while ((bool)uVar5 && !(bool)uVar4) {
    uVar5 = 0x43 < unaff_r6;
    uVar4 = unaff_r6 == 0x44;
    coprocessor_store(0xf,in_cr2,unaff_r7 + 0x11c);
    coprocessor_moveto(7,6,4,unaff_r9,in_cr13,in_cr3);
    unaff_lr = 0x2c43884b;
    func_0x2cfb8604();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  *(short *)(unaff_r7 + 0x38) = (short)unaff_r7;
  *(short *)((unaff_r5 >> 0x19) + 0x14) = (short)unaff_r6;
  iVar3 = (param_3 + -0x32) * 0x20000000;
  *(undefined4 *)(iVar3 + 0x4c) = param_4;
  iVar2 = _LAB_2c438bd0;
  if (iVar3 == 0) {
    uVar1 = *(ushort *)(unaff_r7 + 0x1e);
    software_bkpt(0x9d);
    *(ushort *)(((unaff_r5 >> 0x19) + 0xbdU >> 0x1e) + 4) = uVar1;
    coprocessor_moveto(0xd,3,7,unaff_lr,in_cr9,in_cr15);
    *(int *)(iVar2 + 0x3c) = unaff_r7;
    *(uint *)(iVar2 + 0x60) = (uint)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xe2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

