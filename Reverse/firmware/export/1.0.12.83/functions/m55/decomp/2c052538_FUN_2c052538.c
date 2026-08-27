/* FUN_2c052538 @ 0x2c052538 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c052538(undefined4 param_1,undefined2 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 unaff_r5;
  uint uVar9;
  undefined4 unaff_r6;
  undefined4 *puVar10;
  int unaff_r7;
  uint unaff_pc;
  undefined4 in_cr3;
  undefined4 in_cr9;
  undefined4 in_cr14;
  undefined1 in_q8 [16];
  uint *puStack000001c8;
  
  *(undefined2 *)(unaff_r7 + 0xc) = param_2;
  VectorComplexMultiplyAccumulateByElement(in_q8,in_q8,in_q8,0xb4,2);
  software_bkpt(0);
  *(char *)((param_4 >> 9) + 0x1e) = (char)param_2;
  puVar10 = *(undefined4 **)(unaff_r7 + 0x40);
  uRam2c052390 = unaff_r5;
  *puVar10 = 0x2c052390;
  puVar10[1] = unaff_r6;
  puVar10[2] = puVar10;
  iVar3 = *(int *)(_DAT_2c052214 + 0x40);
  iVar4 = (unaff_pc & 0xff8fff8f) * 0x40000;
  if ((unaff_pc & 0x4000) == 0 || iVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(iRam2c051df4 + 6) = (short)iVar3;
  software_bkpt(0xb6);
  iVar3 = iVar3 * -0x80000000;
  uVar6 = *(uint *)(iVar3 + 8);
  iVar7 = *(int *)(iVar3 + 0xc);
  uVar9 = *(uint *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x18);
  uVar2 = uVar6 & 0x20;
  *(int *)(iVar4 + 0x25) = iVar4 + 0x25;
  *(uint *)(iVar4 + 0x29) = uVar6;
  *(uint *)(iVar4 + 0x2d) = uVar9;
  bVar1 = *(byte *)(iVar7 + 0x1f);
  *(ushort *)(bVar1 + 0x26) = (ushort)bVar1;
  *(char *)(iVar3 + 0x1b) = (char)*(undefined2 *)(iVar7 + 0x3e);
  uVar5 = *(uint *)(uVar2 - 0xa6);
  puVar10 = (undefined4 *)(*(uint *)(uVar2 - 0xaa) >> 5);
  uVar6 = uVar9 >> 4;
  puStack000001c8 = *(uint **)(uVar2 - 0x9e);
  uVar8 = *(uint *)(uVar2 - 0x9a);
  *puStack000001c8 = uVar6;
  puStack000001c8[1] = uVar5;
  puStack000001c8[2] = (uint)puStack000001c8;
  iVar3 = _DAT_2c052018;
  if (uVar2 - 0x96 == 0) {
    *(short *)(uVar6 + puStack000001c8[0x1b]) = (short)uVar6;
    puStack000001c8[8] = uVar6;
    DAT_00000051 = (byte)puStack000001c8 | *(byte *)((int)puStack000001c8 + 0x1b);
                    /* WARNING: Could not recover jumptable at 0x2c051e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(int)*(short *)(*(int *)(uVar6 + 0x6c) * 4))();
    return;
  }
  *(uint *)(0x1c - (_DAT_2c052018 >> 0x1f)) = uVar9;
  coprocessor_function2(0xd,7,1,in_cr9,in_cr3,in_cr14);
  *(ushort *)(uVar8 + 0x12) = (ushort)iVar3 & (ushort)(uVar2 - 0x96);
  *(char *)((uVar8 >> 0x15) + 0x16) = (char)puVar10;
  *puVar10 = 0x2c0517a4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

