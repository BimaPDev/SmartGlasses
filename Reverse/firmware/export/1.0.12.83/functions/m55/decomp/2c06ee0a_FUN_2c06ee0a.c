/* FUN_2c06ee0a @ 0x2c06ee0a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c06ee0a(void)

{
  int iVar1;
  uint uVar2;
  uint in_r3;
  undefined4 unaff_r5;
  uint uVar3;
  undefined4 unaff_r7;
  int unaff_r11;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr5;
  undefined4 in_cr14;
  undefined1 in_q0 [16];
  undefined1 in_q8 [16];
  
  uVar2 = in_r3 >> 0x12;
  _Reset = in_r3 - 0x20;
  uRam2c06ef1c = 0xbb;
  _MasterStackPointer = 0x29;
  _NMI = unaff_r5;
  uRam2c06ef58 = unaff_r5;
  *(undefined4 *)(uVar2 + _Reset) = 0xc;
  coprocessor_load(5,in_cr14,unaff_r11 + -0x204);
  *(ushort *)(uVar2 + 0x2c06ef1c) = (ushort)(in_r3 >> 0x12);
  *(char *)(uVar2 * 0x8000 + 0x2c06ef1c) = (char)uVar2;
  iVar1 = iRam0000002b;
  uRam00000031 = 0x5e;
  uRam00000032 = 0;
  uRam00000033 = 0;
  uRam00000035 = 0x31;
  uRam00000037 = 0;
  coprocessor_load(4,in_cr0,(iRam2c06ef28 >> 8) + -0x338);
  coprocessor_load(2,in_cr1,iRam00000027 + -0x3f8);
  coprocessor_movefromRt(4,10,in_cr5);
  coprocessor_movefromRt2(4,10,in_cr5);
  uRam00000039 = unaff_r7;
  *(int *)(_DAT_2c06ee38 + 0x310000) = iRam0000002b;
  uVar2 = _DAT_2c06eddc;
  iVar1 = *(int *)(iVar1 + 0x40);
  uVar3 = _DAT_2c06eddc >> 4;
  *(uint *)(iVar1 + uVar3) = uVar3;
  VectorShiftRightInsert(in_q8,in_q0,7);
  *(int *)(uVar3 + uVar2) = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

