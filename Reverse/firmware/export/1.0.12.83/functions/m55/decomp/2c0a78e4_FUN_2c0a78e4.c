/* FUN_2c0a78e4 @ 0x2c0a78e4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0a78e4(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short unaff_r4;
  uint uVar8;
  int iVar9;
  uint unaff_r6;
  int unaff_r7;
  undefined4 unaff_r9;
  int unaff_pc;
  undefined4 in_cr9;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 uVar10;
  
  if ((param_1 >> 0xd & 1U) == 0 || param_1 >> 0xe == 0) {
    *(char *)((int)param_2 + (param_1 >> 0xe)) = (char)unaff_r6;
    coprocessor_load(1,in_cr9,unaff_r6 - 0x138);
    bVar2 = (bool)hasExclusiveAccess((int *)(unaff_pc + 0x2b8));
    if (bVar2) {
      *(int *)(unaff_pc + 0x2b8) = (int)param_2 >> 0x14;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = param_4;
  param_2[1] = unaff_r6;
  param_2[2] = unaff_r7;
  uVar3 = unaff_r6 * 8;
  iVar9 = *(int *)(uVar3 + 0x4c);
  *(short *)(unaff_r7 + param_4) = unaff_r4 + (short)param_2 + -0xc9;
  *(short *)(unaff_r7 + 0x21) = (short)(unaff_r7 << 0xb);
  iVar4 = *(int *)(unaff_r7 + 7);
  *(int *)(uVar3 + 0x24) = iVar9 >> 0x20;
  uVar8 = iVar4 + 1;
  *(short *)(unaff_r7 + 0xe) = (short)*(undefined4 *)(unaff_r7 + 0x6c);
  puVar5 = (undefined4 *)(uint)*(ushort *)(iVar4 + 0x3a);
  *(undefined4 **)((uVar8 >> 3) + 0x58) = puVar5;
  uVar3 = (uVar3 & 0x3ffff) >> 0xe;
  if (((unaff_r6 & 0x7fff) >> 10 & 1) == 0) {
    uVar6 = *puVar5;
    uVar7 = puVar5[1];
    *(undefined4 *)(uVar8 + uVar3) = uVar6;
    uVar10 = func_0x2c0c4740(1,iVar4,uVar6,uVar7,param_2,param_3,param_4);
    *(int *)((int)((ulonglong)uVar10 >> 0x20) + 0x60) = (int)uVar10;
    coprocessor_moveto(10,3,5,unaff_r9,in_cr9,in_cr14);
  }
  else {
    *(uint *)(iVar4 * 0x80000 + 0x58) = uVar3;
    bVar1 = *(byte *)(iVar4 * 2);
    *(short *)(unaff_r6 * 0x20000 + 6) = (short)uVar3;
    *(short *)(puVar5 + 1) = (short)uVar8;
    if (bVar1 != 0) {
      coprocessor_store(1,in_cr13,bVar1 - 0x2f8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

