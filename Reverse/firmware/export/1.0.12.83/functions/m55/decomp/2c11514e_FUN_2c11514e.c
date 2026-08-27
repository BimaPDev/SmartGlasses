/* FUN_2c11514e @ 0x2c11514e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c115590) overlaps instruction at (ram,0x2c11558e)
    */
/* WARNING: Removing unreachable block (ram,0x2c11516a) */
/* WARNING: Removing unreachable block (ram,0x2c1151ba) */
/* WARNING: Removing unreachable block (ram,0x2c1151c4) */
/* WARNING: Removing unreachable block (ram,0x2c1151cc) */
/* WARNING: Removing unreachable block (ram,0x2c1151da) */
/* WARNING: Removing unreachable block (ram,0x2c115178) */
/* WARNING: Removing unreachable block (ram,0x2c11519c) */
/* WARNING: Removing unreachable block (ram,0x2c1151f8) */
/* WARNING: Removing unreachable block (ram,0x2c115206) */
/* WARNING: Removing unreachable block (ram,0x2c11521c) */

void FUN_2c11514e(undefined4 param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int *unaff_r4;
  int iVar2;
  uint unaff_r6;
  char unaff_r7;
  undefined2 *unaff_r8;
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar3;
  undefined4 in_cr3;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr15;
  undefined8 in_d2;
  undefined8 in_d18;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_moveto(0,7,3,param_1,in_cr10,in_cr7);
    if ((int)(uint)*(ushort *)((int)unaff_r4 + 0x3e) >> 8 == 0) {
      coprocessor_store(9,in_cr12,0xfffffdc8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = unaff_r6 * 0x10000000;
  if ((unaff_r6 & 0x10) == 0 || iVar2 == 0) {
    coprocessor_loadlong(4,in_cr3,unaff_r9 + -0x1e4);
    uRam00000132 = (uint)&uStack_18 & 0xb6000000;
    uRam00000136 = unaff_r6;
    *(char *)(param_2 * 0x200000 + 0xd) = (char)param_3;
    uStack_18 = param_1;
    uStack_14 = param_3;
    func_0x2b11853e();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r4 = param_2;
  unaff_r4[1] = unaff_r6;
  *unaff_r8 = (short)unaff_r8;
  unaff_r8[4] = (short)(unaff_r4 + 2);
  *(char *)(iVar2 + 0x1a) = unaff_r7 + '<';
  unaff_r4[0x1e] = (int)(unaff_r4 + 2);
  *(uint *)(iVar2 + 0x34) = unaff_r6;
  bVar1 = ((uint)unaff_r8 >> 0x18 & 1) != 0;
  bVar3 = (uint)unaff_r8 >> 0x19 != 0;
  if ((!bVar1 || !bVar3) && (coprocessor_function(6,1,0,in_cr15,in_cr3,in_cr3), bVar1 && bVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FloatVectorPairwiseAdd(in_d2,in_d18,2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

