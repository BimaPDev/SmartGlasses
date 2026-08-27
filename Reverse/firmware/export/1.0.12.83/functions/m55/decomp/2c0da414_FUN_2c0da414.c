/* FUN_2c0da414 @ 0x2c0da414 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0da414(ushort *param_1,int param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  uint unaff_r4;
  undefined4 *puVar3;
  uint unaff_r6;
  uint uVar4;
  int unaff_r7;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  undefined4 unaff_pc;
  undefined4 in_cr3;
  
  do {
    uVar4 = unaff_r6;
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(uint *)((int)register0x00000054 + -8) = uVar4;
    *(uint *)((int)register0x00000054 + -0xc) = unaff_r4;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
    *(int **)register0x00000054 = param_3;
    uVar2 = (uint)param_1[0x15];
    *(int *)(uVar2 + 0x30) = param_2;
    unaff_r6 = uVar4 + 0xd5;
    iVar5 = unaff_r7 + -0x162;
    unaff_r4 = unaff_r6 >> 1;
    unaff_r7 = unaff_r7 + -0x1bd;
  } while (!SBORROW4(iVar5,0x5b));
  *(char *)((int)param_3 + 2) = (char)param_3;
  puVar3 = (undefined4 *)(uVar2 * 4);
  *puVar3 = param_1;
  puVar3[1] = param_2 + -0xab;
  puVar3[2] = param_3;
  puVar3[3] = puVar3;
  puVar3[4] = unaff_r6;
  uVar6 = (uint)*param_1;
  *param_3 = param_2 + -0xab;
  param_3[1] = (int)param_3;
  param_3[2] = unaff_r4;
  param_3[3] = unaff_r6;
  param_3[4] = uVar6 - 0x123;
  bVar1 = *(byte *)(uVar6 - 0x173);
  *(uint *)(uVar4 + 0x265) = uVar2;
  *(undefined4 *)(uVar4 + 0x269) = unaff_pc;
  coprocessor_store(0xf,in_cr3,_DAT_2c0da538 + -0x198);
  *(ushort *)(_DAT_2c0da538 + (uVar6 - 0x37e)) = (ushort)bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

