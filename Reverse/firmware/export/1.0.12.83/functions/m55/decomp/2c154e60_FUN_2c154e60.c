/* FUN_2c154e60 @ 0x2c154e60 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c154e60(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_r2;
  undefined4 extraout_r3;
  undefined2 *unaff_r4;
  uint uVar6;
  undefined2 *puVar7;
  int unaff_r6;
  int iVar8;
  int unaff_r7;
  char in_NG;
  undefined4 in_cr14;
  
  *(short *)(param_2 + 0x2c) = (short)param_2;
  uVar4 = func_0x2bac3908();
  if (in_NG != '\0') {
    uRam2c155190 = uVar4;
    iRam2c155194 = extraout_r2;
    uRam2c155198 = extraout_r3;
    uRam000000d4 = (char)unaff_r6;
    iRam00000044 = unaff_r7;
    uRam000000c3 = 0xc3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(ushort *)(unaff_r7 + 0x1e);
  uVar5 = (uint)uVar1;
  uVar2 = SUB42(&stack0x000002d4,0);
  if (extraout_r2 == 0) {
    uVar6 = (uint)*(ushort *)(iRam2c1550a8 + uVar5);
    unaff_r7 = *(int *)(unaff_r6 + 0x20);
    uVar5 = 0;
    coprocessor_store(0xd,in_cr14,0x2c154e31);
    if (0x92 < iRam2c1550a8) {
      return CONCAT44(param_2,uRam2c155190);
    }
  }
  else {
    uRam2c155190._0_2_ = 0x5190;
    uVar3 = (undefined2)unaff_r7;
    *unaff_r4 = uVar3;
    unaff_r4[1] = uVar2;
    uRam2c155190 = CONCAT22(uVar1,(undefined2)uRam2c155190);
    *(undefined2 *)(unaff_r7 + 2) = 0x5190;
    *(undefined2 *)((int)unaff_r4 * 2 + 2) = uVar3;
    *(undefined2 *)((int)unaff_r4 * 4 + 2) = 0x5190;
    *(undefined2 *)(uVar5 + 2) = uVar2;
    *(ushort *)((int)unaff_r4 * 8 + 2) = uVar1;
    *(undefined2 *)((int)unaff_r4 * 8 + 6) = uVar2;
    *(ushort *)(uVar5 + 6) = uVar1;
    *(undefined2 *)((int)&stack0x000002d4 * 2 + 6) = uVar3;
    *(undefined2 *)((int)unaff_r4 * 0x40 + 6) = 0x5190;
    *(undefined2 *)(unaff_r7 + 6) = uVar3;
    iRam2c155194 = (int)&stack0x000002d4 * 0x10000;
    *(ushort *)(uVar5 * 0x40 + 6) = uVar1;
    *(undefined2 *)(uVar5 * 0x40 + 4) = 0x5190;
    iRam2c155194 = CONCAT22(iRam2c155194._2_2_,uVar3);
    *(undefined2 *)(unaff_r7 + 4) = uVar2;
    *(ushort *)(unaff_r7 * 4 + 4) = uVar1;
    uRamb0554644 = uVar2;
    *(undefined2 *)(uVar5 + 4) = 0x5190;
    *(undefined2 *)(uVar5 * 4 + 4) = uVar3;
    *(undefined2 *)(uVar5 * 4 + 0xc) = uVar2;
    *(ushort *)(uVar5 + 0xc) = uVar1;
    *(undefined2 *)(uVar5 * 0x10 + 0xc) = uVar3;
    *(undefined2 *)(uVar5 * 0x100 + 0xc) = 0x5190;
    *(undefined2 *)(unaff_r7 + 0xc) = uVar3;
    uVar6 = uVar5 * 0x1000;
    *(ushort *)(uVar6 + 0xc) = uVar1;
  }
  *(undefined2 *)(uVar6 + 0xe) = 0x5190;
  uRam00000026 = (undefined2)unaff_r7;
  *(undefined2 *)(unaff_r7 + 0xe) = uVar2;
  uVar3 = (undefined2)uVar5;
  *(undefined2 *)(unaff_r7 * 0x80 + 0xe) = uVar3;
  uRam0aa8c80e = uVar2;
  *(undefined2 *)(uVar5 + 0xe) = 0x5190;
  *(undefined2 *)(uVar5 * 0x80 + 0xe) = uRam00000026;
  *(undefined2 *)(uVar5 * 0x1000 + 10) = 0x5190;
  *(undefined2 *)(uVar5 + 10) = uRam00000026;
  *(undefined2 *)(uVar5 * 0x20 + 10) = uVar3;
  *(undefined2 *)((int)&stack0x000002d4 * 0x20 + 10) = uVar2;
  *(undefined2 *)(unaff_r7 + 10) = uVar3;
  *(undefined2 *)(unaff_r7 * 0x20 + 10) = uRam00000026;
  *(undefined2 *)(unaff_r7 * 0x20 + 8) = uVar2;
  *(undefined2 *)(unaff_r7 + 8) = 0x5190;
  *(undefined2 *)(unaff_r7 * 0x200 + 8) = uRam00000026;
  *(undefined2 *)(unaff_r7 * 0x2000 + 8) = 0x5190;
  *(undefined2 *)(uVar5 + 8) = uVar2;
  *(undefined2 *)(unaff_r7 * 0x20000 + 8) = uVar3;
  *(undefined2 *)(unaff_r7 * 0x20000 + 0x18) = uVar2;
  *(undefined2 *)(uVar5 + 0x18) = uVar3;
  *(undefined2 *)((int)&stack0x000002d4 * 0x10 + 0x18) = uRam00000026;
  *(undefined2 *)(unaff_r7 * 0x20000000 + 0x18) = 0x5190;
  *(undefined2 *)(unaff_r7 + 0x18) = uRam00000026;
  uRam2c1551a8 = uVar2;
  *(undefined2 *)(uVar5 * 0x1000000 + 0x18) = uVar3;
  *(undefined2 *)(uVar5 * 0x1000000 + 0x1a) = 0x5190;
  uRam2c1551aa = uRam00000026;
  *(undefined2 *)(unaff_r7 + 0x1a) = uVar2;
  *(undefined2 *)(unaff_r7 * 0x2000 + 0x1a) = uVar3;
  uRamaa32001a = uVar2;
  *(undefined2 *)(uVar5 + 0x1a) = 0x5190;
  *(undefined2 *)(uVar5 * 0x2000 + 0x1a) = uRam00000026;
  *(undefined2 *)(uVar5 * 0x10000000 + 0x1e) = 0x5190;
  *(undefined2 *)(uVar5 + 0x1e) = uRam00000026;
  *(undefined2 *)(uVar5 * 0x8000 + 0x1e) = uVar3;
  *(undefined2 *)((int)&stack0x000002d4 * 0x8000 + 0x1e) = uVar2;
  *(undefined2 *)(unaff_r7 + 0x1e) = uVar3;
  uRam2c1551ae = 0x5190;
  *(undefined2 *)(unaff_r7 * 0x8000 + 0x1e) = uRam00000026;
  *(undefined2 *)(unaff_r7 * 0x8000 + 0x1c) = uVar2;
  uRam2c1551ac = uVar3;
  *(undefined2 *)(unaff_r7 + 0x1c) = 0x5190;
  *(undefined2 *)(unaff_r7 * 0x20000000 + 0x1c) = uRam00000026;
  *(undefined2 *)(uVar5 + 0x1c) = uVar2;
  _Reserved1 = uVar3;
  *(undefined2 *)(uVar5 + 0x14) = uRam00000026;
  *(undefined2 *)(uVar5 * 0x400 + 0x14) = uVar3;
  *(undefined2 *)((int)&stack0x000002d4 * 0x400 + 0x14) = uVar2;
  *(undefined2 *)(unaff_r7 + 0x14) = uVar3;
  uRam2c1551a4 = 0x5190;
  *(undefined2 *)(unaff_r7 * 0x400 + 0x14) = uRam00000026;
  *(undefined2 *)(unaff_r7 * 0x400 + 0x16) = uVar2;
  uRam2c1551a6 = uVar3;
  *(undefined2 *)(unaff_r7 + 0x16) = 0x5190;
  *(undefined2 *)(unaff_r7 * 0x200000 + 0x16) = uRam00000026;
  *(undefined2 *)(uVar5 + 0x16) = uVar2;
  uRam00000016 = uVar3;
  *(undefined2 *)(uVar5 + 0x12) = uVar3;
  *(undefined2 *)((int)&stack0x000002d4 * 0x800 + 0x12) = uRam00000026;
  uRam00000012 = 0x5190;
  *(undefined2 *)(unaff_r7 + 0x12) = uRam00000026;
  uRam2c1551a2 = uVar2;
  *(undefined2 *)(uVar5 * 0x40000 + 0x12) = uVar3;
  *(undefined2 *)(uVar5 * 0x40000 + 0x10) = 0x5190;
  uRam2c1551a0 = uRam00000026;
  *(undefined2 *)(unaff_r7 + 0x10) = uVar2;
  *(undefined2 *)(unaff_r7 * 0x100 + 0x10) = uVar3;
  puVar7 = (undefined2 *)((int)&stack0x000002d4 * 0x100);
  uRam15519010 = uVar2;
  *(undefined2 *)(uVar5 + 0x10) = 0x5190;
  *(undefined2 *)(uVar5 * 0x100 + 0x10) = uRam00000026;
  *puVar7 = uVar3;
  puVar7[1] = uVar2;
  puVar7[3] = uRam00000026;
  *(undefined2 *)(uVar5 * 0x400 + 4) = 0x5190;
  uRam2c15519c = CONCAT22(uRam00000026,0x5190);
  uRam2c155198 = CONCAT22(uVar2,uVar3);
  *(undefined2 *)(unaff_r7 + 0x1e) = uRam00000026;
  iVar8 = (int)&stack0x000002d4 * 0x8000;
  *(undefined2 *)(unaff_r7 + 0x1c) = 0x5190;
  *(undefined2 *)(unaff_r7 + 0x18) = uVar3;
  *(undefined2 *)(unaff_r7 + 0x1a) = uVar2;
  *(undefined2 *)(iVar8 + 0x10) = uVar3;
  *(undefined2 *)(iVar8 + 0x12) = uVar2;
  *(undefined2 *)(iVar8 + 0x16) = uRam00000026;
  _BusFault = 0x5190;
  *(undefined2 *)(unaff_r7 * 0x20000000 + 0x30) = uVar3;
  *(undefined2 *)(unaff_r7 * 0x20000000 + 0x32) = uVar2;
  _Reserved6 = 0x5190;
  _Reserved3 = 0x5190;
  _Reserved2 = uVar3;
  uRam00000022 = uVar2;
  uRam00000036 = uRam00000026;
  *(undefined2 *)(uVar5 + 0x2e) = uRam00000026;
  *(undefined2 *)(uVar5 + 0x2c) = 0x5190;
  *(undefined2 *)(uVar5 + 0x28) = uVar3;
  *(undefined2 *)(uVar5 + 0x2a) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

