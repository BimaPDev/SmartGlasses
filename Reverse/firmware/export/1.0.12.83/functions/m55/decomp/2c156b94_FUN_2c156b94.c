/* FUN_2c156b94 @ 0x2c156b94 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c156b94(undefined4 param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  uint in_r12;
  undefined4 in_cr0;
  undefined4 in_cr15;
  
  sVar5 = sRam0000005d;
  uVar3 = uRam00000044;
  if (param_2 == 0) {
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
    uRam00000054 = 0;
    HardFault = 0x5b;
    uRam00000076 = 0;
    uRam00000009 = 0x5d;
    _DAT_00000070 = _DAT_00000070 & 0xff;
    DAT_00000074 = 0;
    *(int *)(iRam000000d1 + 0x44) = (int)sRam0000005d;
    uVar6 = _DAT_000000ad;
    uVar4 = uRam00000044;
    iVar7 = _BusFault;
    *(uint *)(uRam00000044 + 0x54) = uRam00000044;
    iVar7 = *(int *)(iVar7 + 0x14);
    *(char *)(iVar7 + 0x15) = (char)sVar5;
    uVar8 = *(uint *)(iVar7 + 0x14);
    *(uint *)(uVar4 + 0x14) = uVar4;
    *(undefined4 *)(uVar4 + 0x54) = 0;
    uRam00000011 = (undefined1)uVar3;
    cVar2 = (char)uRam00000054;
    *(char *)(*(int *)(uVar4 + 100) + 0x19) = (char)uVar6;
    *(char *)(uVar8 + 9) = (char)uVar4;
    *(uint *)(uVar4 + 0x14) = uVar8;
    *(char *)(uVar8 + 1) = cVar2 + 'm';
    func_0x2b658a18((int)*(short *)(uVar8 + (in_r12 & 4)),&stack0x000003a0,
                    uVar3 >> (uVar8 & 0x1f) | uVar3 << 0x20 - (uVar8 & 0x1f));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_r4 != 0x4e) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xd5,0x2c156bb4);
    (*pcVar1)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

