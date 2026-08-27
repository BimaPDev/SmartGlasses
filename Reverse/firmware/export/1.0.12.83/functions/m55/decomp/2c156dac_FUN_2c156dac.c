/* FUN_2c156dac @ 0x2c156dac */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c156dac(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  uint in_r12;
  undefined4 in_cr0;
  undefined4 in_cr15;
  
  *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
  sVar4 = sRam0000005d;
  uVar3 = uRam00000044;
  if (unaff_r7 == 0) {
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  }
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  uRam00000054 = 0;
  HardFault = 0x5b;
  uRam00000076 = 0;
  uRam00000009 = 0x5d;
  _DAT_00000070 = (uint)DAT_00000070;
  DAT_00000074 = 0;
  *(int *)(iRam000000d1 + 0x44) = (int)sRam0000005d;
  uVar5 = _DAT_000000ad;
  uVar2 = uRam00000044;
  iVar6 = _BusFault;
  *(uint *)(uRam00000044 + 0x54) = uRam00000044;
  iVar6 = *(int *)(iVar6 + 0x14);
  *(char *)(iVar6 + 0x15) = (char)sVar4;
  uVar7 = *(uint *)(iVar6 + 0x14);
  *(uint *)(uVar2 + 0x14) = uVar2;
  *(undefined4 *)(uVar2 + 0x54) = 0;
  uRam00000011 = (undefined1)uVar3;
  cVar1 = (char)uRam00000054;
  *(char *)(*(int *)(uVar2 + 100) + 0x19) = (char)uVar5;
  *(char *)(uVar7 + 9) = (char)uVar2;
  *(uint *)(uVar2 + 0x14) = uVar7;
  *(char *)(uVar7 + 1) = cVar1 + 'm';
  func_0x2b658a18((int)*(short *)(uVar7 + (in_r12 & 4)),&stack0x000003a4,
                  uVar3 >> (uVar7 & 0x1f) | uVar3 << 0x20 - (uVar7 & 0x1f));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

