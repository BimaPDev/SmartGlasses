/* FUN_2c118a9a @ 0x2c118a9a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c118a9a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint unaff_r5;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr8;
  int aiStack_c [2];
  
  piVar7 = aiStack_c;
  uVar10 = param_4[2];
  puVar12 = (uint *)param_4[3];
  piVar8 = param_4 + 4;
  *(short *)(param_4[1] + 0x18) = (short)*param_4;
  iVar6 = 0x69;
  uVar9 = unaff_r5 * 2;
  uVar4 = unaff_r5 << 0x1f;
  if ((uVar9 & 4) == 0 || uVar4 == 0) {
    *(short *)((int)param_4 + 0x32) = (short)uVar10;
    *(uint *)(uVar9 + 0x78) = uVar4;
    piVar7 = piVar8;
  }
  else {
    *(short *)(param_1 + 0x18) = (short)piVar8;
    iVar5 = *piVar8;
    puVar11 = param_4 + 8;
    *(undefined4 *)(uVar9 + 0x24) = param_4[5];
    *(short *)(iVar5 + 2) = (short)param_1;
    uVar4 = uRam00000080;
    uVar9 = (uint)*(short *)(iVar5 + (int)puVar11);
    param_1 = param_1 >> 0x18;
    uVar10 = (int)puVar11 >> 8;
    sVar3 = *(short *)(iVar5 + (int)puVar11);
    *(char *)(uRam00000080 + 7) = (char)iVar5;
    coprocessor_function2(0xc,0xd,7,in_cr4,in_cr8,in_cr1);
    if (!CARRY4(uVar10,uVar9) || uVar10 + uVar9 == 0) {
      iVar6 = uVar4 + 0xa1;
      if (uVar4 < 0xffffff5f || iVar6 == 0) {
        *(uint *)(((int)(uVar10 << 3) >> 7) * 0x100 + 0x10) = uVar10 + uVar9 + -0xcc;
        param_1 = 0xab;
        iVar6 = (int)&stack0x000002a3 * 0x10000;
      }
      puVar11 = (undefined4 *)(param_1 * 0x200000);
      *(undefined4 **)(iVar6 * 8 + 0x38) = puVar11;
      uVar1 = *(ushort *)(puVar11[2] + 0xc);
      *(undefined4 *)(uVar1 + 0xc) = *puVar11;
      *(uint *)(param_1 + 0x24) = (uint)uVar1;
      coprocessor_loadlong(8,in_cr5,piVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(uVar4 + 0xe) = (short)uVar4;
    piVar8 = (int *)(uint)*(byte *)(iVar5 + 0x1f);
    *(char *)(uVar4 + 7) = (char)iVar5;
    iVar6 = iVar5 + 1U + iVar5 + uVar9;
    coprocessor_function2(0xc,0xd,7,in_cr4,in_cr8,in_cr1);
    if (!CARRY4(iVar5 + 1U,iVar5 + uVar9) || iVar6 == 0) goto LAB_2c118eb8;
    *(short *)(uVar4 + 0xc) = (short)uVar4;
    iVar6 = (iVar5 + -0x20) * 0x10;
    if ((iVar6 >> 0x16 & 1U) != 0 && iVar6 >> 0x17 != 0) {
      halt_baddata();
    }
    iVar6 = *(int *)(iVar5 + 0x5e);
    uVar4 = *(uint *)(iVar5 + 0x6a);
    iVar5 = *(int *)(iVar5 + 0x6e);
    *(short *)(uVar4 + iVar5) = sVar3;
    *(short *)(sVar3 + iVar6) = sVar3;
    iVar6 = 0x2c118ea0;
    uVar4 = uVar4 >> 9;
    *(short *)(iVar5 + 0xc) = sVar3;
    unaff_r5 = (uint)*(char *)(sVar3 * 2);
    uVar10 = unaff_r5 >> 4;
    puVar12 = _DAT_2c11919c;
  }
  *puVar12 = uVar4;
  puVar12[1] = (int)puVar12 << 0x19;
  puVar12[2] = uVar10;
  *(uint *)(unaff_r5 + 0xc) = uVar10;
  piVar8 = piVar7;
LAB_2c118eb8:
  cVar2 = *(char *)(iVar6 + (iVar6 >> 1));
  *(short *)((int)cVar2 + (int)piVar8) = (short)cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

