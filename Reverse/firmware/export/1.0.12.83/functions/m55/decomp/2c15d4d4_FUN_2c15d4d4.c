/* FUN_2c15d4d4 @ 0x2c15d4d4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c15ce9e) overlaps instruction at (ram,0x2c15ce9c)
    */
/* WARNING: Removing unreachable block (ram,0x2c15d322) */
/* WARNING: Removing unreachable block (ram,0x2c15d2e2) */
/* WARNING: Removing unreachable block (ram,0x2c15d326) */
/* WARNING: Removing unreachable block (ram,0x2c15d25e) */
/* WARNING: Removing unreachable block (ram,0x2c15d262) */
/* WARNING: Removing unreachable block (ram,0x2c15d332) */
/* WARNING: Removing unreachable block (ram,0x2c15d4c6) */
/* WARNING: Removing unreachable block (ram,0x2c15ce9e) */
/* WARNING: Removing unreachable block (ram,0x2c15cee6) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x000000bc : 0x2c15ce32 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_2c15d4d4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int unaff_r4;
  undefined1 *unaff_r5;
  int unaff_r6;
  undefined1 unaff_r7;
  undefined4 in_cr0;
  undefined4 in_cr15;
  
  if (param_2 != 0) {
    if (unaff_r4 == 0x4e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xd5,0x2c15d4f4);
    (*pcVar1)();
  }
  *(undefined1 **)(unaff_r4 + 0x74) = unaff_r5;
  if (unaff_r5 == (undefined1 *)0x0) {
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  }
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  *(char *)(unaff_r4 + 0xd) = (char)unaff_r5;
  iVar6 = *(int *)(unaff_r6 + 0x14);
  *(undefined1 **)(unaff_r5 + 0x14) = unaff_r5;
  *(int *)(unaff_r6 + 0x54) = iVar6;
  *unaff_r5 = (char)unaff_r4;
  *(undefined1 *)(iVar6 + 9) = 0;
  *(undefined1 *)(param_4 + 0x15) = unaff_r7;
  iVar5 = *(int *)(unaff_r6 + 0x44);
  uVar4 = (uint)*(ushort *)(unaff_r4 + iVar6);
  *(char *)(iVar6 + 0xc) = (char)unaff_r5;
  *(undefined1 *)(iVar6 + 0xc) = 0x2c;
  *(undefined1 *)(iVar6 + 0xc) = 0x5b;
  *(undefined1 *)(iVar6 + 0xc) = 0x5b;
  *(undefined4 *)(iVar6 + 0x40) = 0x2c;
  *(undefined4 *)(iVar6 + 0x40) = 0x2c;
  *(undefined4 *)(iVar6 + 0x40) = 0x2c;
  *(undefined4 *)(iVar6 + 0x40) = 0x2c;
  *(undefined4 *)(iVar6 + 0x40) = 0x2c;
  *(undefined4 *)(iVar6 + 0x40) = 0x2c;
  *(undefined1 *)(iVar6 + 0xc) = 0x5b;
  *(undefined4 *)(iVar6 + 0x40) = 0x5d;
  iVar6 = CONCAT13(DAT_00000070,DAT_0000006c_1);
  *(undefined4 *)(iVar6 + 0x40) = 0x5d;
  *(undefined4 *)(iVar6 + 0x40) = 0x5d;
  *(undefined1 *)(uVar4 + 0x15) = 0;
  puVar7 = *(undefined1 **)(iVar6 + 0x14);
  uRam00000058 = iRam000000b8._2_2_;
  uRam00000035 = (undefined1)iRam000000b8._2_2_;
  uRam00000041 = uRam00000035;
  *(int *)(unaff_r6 + 0x34) = iVar5;
  iVar5 = iVar5 + -0x65;
  *(int *)(iRam000000b8._2_2_ + 0x20) = iVar5;
  *(undefined4 *)(puVar7 + 100) = 0x2c;
  *(uint *)(unaff_r6 + 0x54) = uVar4;
  *(uint *)(unaff_r6 + 0x14) = uVar4;
  *(int *)(unaff_r6 + 0x14) = iVar5;
  *puVar7 = 0x2c;
  puVar7[9] = 0x2c;
  uVar2 = (undefined1)iRam000000a0;
  *puVar7 = uVar2;
  puVar7[9] = uVar2;
  uVar3 = uRam2c15cf08;
  iVar6 = _DAT_0000006c;
  uRamfffffffc = 0x2c;
  uRam00000080 = 0x58;
  uRam0000002e = 0x26;
  *(undefined4 *)(_DAT_0000006c + 0x54) = 0x26;
  iVar5 = iRam000000a0;
  iRam000000b8 = iVar6;
  *(char *)(iRam000000a0 + 0xd) = (char)iRam000000a0;
  uRam00000001 = (undefined1)uVar3;
  *(undefined1 *)(iVar5 + 1) = uRam00000001;
  iVar5 = iRam000000bc;
  *(undefined4 *)(iVar6 + 0x27) = 0xb0;
  iVar6 = iRam000000bc;
  DAT_00000061 = (undefined1)iVar5;
  _DAT_0000009c = 0;
  *(undefined1 *)(iRam000000bc + 1) = uRam00000001;
  if (iVar6 == 0) {
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  }
  else if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xe9,0x2c15ce6c);
    (*pcVar1)();
  }
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

