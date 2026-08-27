/* FUN_2c0f6c5a @ 0x2c0f6c5a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0f6c5a(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int unaff_r4;
  int iVar8;
  int unaff_r6;
  int iVar9;
  int unaff_r9;
  int in_r12;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr6;
  undefined4 in_cr15;
  
  puVar3 = (undefined4 *)(unaff_r4 * 0x4000);
  *(undefined4 **)(unaff_r6 + -0x30) = puVar3;
  *(undefined4 *)(unaff_r6 + -0x2c) = param_2;
  *(undefined4 **)(unaff_r4 * 0x8000000 + 8) = puVar3;
  iVar2 = _DAT_2c0f6fec;
  uVar4 = *(uint *)(unaff_r4 * 0x8000000 + 0x60);
  iVar8 = *(int *)(unaff_r4 + 0x6c);
  iVar9 = unaff_r4 * 0x8004000 + -0x8e;
  uVar6 = uVar4 >> 8;
  if (uVar6 == 0) {
    iVar7 = iVar8 << 9;
  }
  else {
    uVar1 = *(ushort *)(uVar4 + 0x10);
    iVar8 = unaff_r4 << 0x10;
    iVar9 = unaff_r4 * 0x100000 + 0xf0;
    *(uint *)uVar4 = uVar4;
    *(undefined4 **)(uVar4 + 4) = puVar3;
    *(int *)(uVar4 + 8) = unaff_r4;
    *(int *)(uVar4 + 0xc) = iVar8;
    iVar7 = unaff_r4 + 0x8e;
    if (uVar1 <= uVar4) {
      *(char *)(iVar2 + 4) = (char)iVar9;
      *puVar3 = 0;
      puVar3[1] = iVar7;
      puVar3[2] = iVar8;
      *(int *)(uVar1 + 0x14) = iVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  coprocessor_moveto2(0,0xf,in_r12,iVar9,in_cr15);
  puVar5 = (undefined4 *)(iVar8 * 4);
  *(uint *)(iVar9 + 0x50) = uVar6 + 1;
  *puVar5 = puVar3;
  puVar5[1] = uVar6 + 1;
  puVar5[2] = iVar7;
  *(uint *)(iVar8 + 0x50) = uVar6 + 0x100;
  coprocessor_loadlong(4,in_cr6,in_r12 + 0x280);
  *(int *)(iVar8 + 0x28) = iVar9;
  coprocessor_load(0,in_cr0,0x2c0f6cc4);
  coprocessor_load(6,in_cr2,unaff_r9 + -0x2b8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

