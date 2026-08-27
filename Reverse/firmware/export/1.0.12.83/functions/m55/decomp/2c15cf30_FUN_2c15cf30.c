/* FUN_2c15cf30 @ 0x2c15cf30 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c15cee6) overlaps instruction at (ram,0x2c15cee4)
    */
/* WARNING: Removing unreachable block (ram,0x2c15cee6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c15cf30(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 in_cr0;
  undefined4 in_cr15;
  
  if (param_2 == 0) {
    *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
    *(char *)(unaff_r4 + 0xc) = (char)unaff_r5;
    *(char *)(unaff_r4 + 0xc) = (char)unaff_r5;
    *(undefined4 *)(unaff_r4 + 0x40) = 0x2c;
    *(undefined4 *)(unaff_r4 + 0x40) = 0x2c;
    *(undefined4 *)(unaff_r4 + 0x40) = 0x2c;
    *(undefined4 *)(unaff_r4 + 0x40) = 0x2c;
    *(undefined4 *)(unaff_r4 + 0x40) = 0x2c;
    *(undefined4 *)(unaff_r4 + 0x40) = 0x2c;
    *(undefined1 *)(unaff_r4 + 0xc) = 0x5b;
    *(undefined4 *)(unaff_r4 + 0x40) = 0x5d;
    iVar3 = CONCAT13(DAT_00000070,DAT_0000006c_1);
    *(undefined4 *)(iVar3 + 0x40) = 0x5d;
    *(undefined4 *)(iVar3 + 0x40) = 0x5d;
    *(undefined1 *)(param_1 + 0x15) = 0;
    puVar6 = *(undefined1 **)(iVar3 + 0x14);
    uRam00000058 = iRam000000b8._2_2_;
    uRam00000035 = (undefined1)iRam000000b8._2_2_;
    uRam00000041 = uRam00000035;
    *(int *)(unaff_r6 + 0x34) = param_3;
    *(int *)(iRam000000b8._2_2_ + 0x20) = param_3 + -0x65;
    *(undefined4 *)(puVar6 + 100) = 0x2c;
    *(int *)(unaff_r6 + 0x54) = param_1;
    *(int *)(unaff_r6 + 0x14) = param_1;
    *(int *)(unaff_r6 + 0x14) = param_3 + -0x65;
    *puVar6 = 0x2c;
    puVar6[9] = 0x2c;
    uVar2 = (undefined1)iRam000000a0;
    *puVar6 = uVar2;
    puVar6[9] = uVar2;
    uVar5 = uRam2c15cf08;
    iVar3 = _DAT_0000006c;
    uRamfffffffc = 0x2c;
    uRam00000080 = 0x58;
    uRam0000002e = 0x26;
    *(undefined4 *)(_DAT_0000006c + 0x54) = 0x26;
    iVar4 = iRam000000a0;
    iRam000000b8 = iVar3;
    *(char *)(iRam000000a0 + 0xd) = (char)iRam000000a0;
    uRam00000001 = (undefined1)uVar5;
    *(undefined1 *)(iVar4 + 1) = uRam00000001;
    iVar4 = iRam000000bc;
    *(undefined4 *)(iVar3 + 0x27) = 0xb0;
    iVar3 = iRam000000bc;
    _DAT_0000009c = 0;
    DAT_00000061 = (undefined1)iVar4;
    *(undefined1 *)(iRam000000bc + 1) = uRam00000001;
    if (iVar3 != 0) {
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xe9,0x2c15ce6c);
        (*pcVar1)();
      }
      goto LAB_2c15c8a2;
    }
  }
  else {
    if (unaff_r4 == 0x4e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (unaff_r4 != 0x4f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xd5,0x2c15cf50);
      (*pcVar1)();
    }
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
    iRam000000c3 = unaff_r4 - unaff_r7;
  }
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
LAB_2c15c8a2:
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

