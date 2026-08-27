/* FUN_2c07c13c @ 0x2c07c13c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c07c1b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c07c13c(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_r6;
  uint uVar7;
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr13;
  
  *(short *)(param_1 + 0x14) = (short)unaff_r6;
  if (!in_ZR && in_NG == in_OV) {
    *(short *)(unaff_r6 + 2) = (short)param_2;
    param_2 = (uint)*(byte *)(param_4 + *(short *)(param_4 * 2));
    unaff_r6 = _DAT_2c07c4b8;
  }
  piVar4 = (int *)unaff_r6[1];
  uVar7 = unaff_r6[5];
  puVar6 = (undefined4 *)coprocessor_movefromRt(0xc,6,0,in_cr5,in_cr13);
  *puVar6 = *unaff_r6;
  puVar6[1] = puVar6;
  puVar6[0x15] = puVar6;
  uVar2 = _DAT_2c07c1a0;
  uVar1 = *(ushort *)((int)puVar6 + 0x3e);
  uVar3 = (uint)uVar1;
  *(uint *)(uVar3 * 2) = uVar3;
  puVar5 = (uint *)(param_2 * 4);
  *puVar5 = uVar3;
  puVar5[1] = param_2;
  puVar5[2] = uVar2;
  puVar5[3] = (uint)piVar4;
  puVar5[4] = uVar7;
  coprocessor_load(0xb,in_cr8,uVar3 - 0xac);
  *(char *)(uVar3 + 0x18) = (char)uVar1;
  *(uint **)(uVar3 + 0x18) = puVar5 + 5;
  uVar3 = -(int)puVar6;
  if (((uVar2 & 0x3fffff) >> 2 & 1) == 0 || (uVar2 & 0x3fffff) >> 3 == 0) {
    if ((uVar3 & 0x1000) == 0 || (uVar3 & 0xfff) == 0) {
      *(uint *)(uVar7 + 0x24) = uVar3;
      if ((uVar3 & 0x8000) == 0 || (int)puVar6 * -0x20000 == 0) {
        *piVar4 = uVar2 << 9;
        piVar4[1] = (int)puVar6 * -0x20000;
        piVar4[2] = (int)piVar4;
        piVar4[3] = (int)puVar6;
        piVar4[4] = uVar3;
        coprocessor_load(6,in_cr10,&stack0x000000c8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_2c07c1c2;
    }
  }
  else {
    unaff_r9 = *(int *)(unaff_r9 + -0xc);
  }
  unaff_r9 = *(int *)(unaff_r9 + -4);
LAB_2c07c1c2:
  coprocessor_load(2,in_cr2,*(int *)(unaff_r9 + -8) + 0xf8);
  coprocessor_load(2,in_cr3,*(int *)(unaff_r9 + -8) + 0x1b8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

