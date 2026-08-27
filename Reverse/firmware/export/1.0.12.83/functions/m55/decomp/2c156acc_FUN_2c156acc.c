/* FUN_2c156acc @ 0x2c156acc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c156ada) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c156acc(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_r4;
  int iVar7;
  int unaff_r6;
  uint in_r12;
  undefined4 in_cr0;
  undefined4 in_cr15;
  
  iVar7 = unaff_r6 >> 1;
  *(int *)(unaff_r4 + 0x74) = iVar7;
  *(int *)(unaff_r4 + 0x74) = iVar7;
  *(int *)(unaff_r4 + 0x74) = iVar7;
  *(int *)(unaff_r4 + 0x74) = iVar7;
  sVar4 = sRam0000005d;
  uVar3 = uRam00000044;
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
  iVar7 = _BusFault;
  *(uint *)(uRam00000044 + 0x54) = uRam00000044;
  iVar7 = *(int *)(iVar7 + 0x14);
  *(char *)(iVar7 + 0x15) = (char)sVar4;
  uVar6 = *(uint *)(iVar7 + 0x14);
  *(uint *)(uVar2 + 0x14) = uVar2;
  *(undefined4 *)(uVar2 + 0x54) = 0;
  uRam00000011 = (undefined1)uVar3;
  cVar1 = (char)uRam00000054;
  *(char *)(*(int *)(uVar2 + 100) + 0x19) = (char)uVar5;
  *(char *)(uVar6 + 9) = (char)uVar2;
  *(uint *)(uVar2 + 0x14) = uVar6;
  *(char *)(uVar6 + 1) = cVar1 + 'm';
  func_0x2b658a18((int)*(short *)(uVar6 + (in_r12 & 4)),&stack0x000003a4,
                  uVar3 >> (uVar6 & 0x1f) | uVar3 << 0x20 - (uVar6 & 0x1f));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

