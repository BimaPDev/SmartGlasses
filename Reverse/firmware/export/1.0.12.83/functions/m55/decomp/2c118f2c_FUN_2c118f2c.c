/* FUN_2c118f2c @ 0x2c118f2c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c118f2c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  undefined2 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *unaff_r4;
  uint uVar9;
  uint uVar10;
  uint unaff_r6;
  undefined4 *puVar11;
  int iVar12;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr8;
  short asStack_1c [6];
  
  iVar6 = unaff_r6 * 0x8000;
  if ((unaff_r6 & 0x20000) == 0 || iVar6 == 0) {
    *(short *)(*param_1 + 0x16) = (short)unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = *(int *)(iVar6 + 0x6c);
  *(undefined1 *)(((int)param_1 >> 0x1c) + 7) = 0;
  iVar12 = _DAT_2c119070;
  iVar7 = (param_4 >> 8) + (int)unaff_r4;
  coprocessor_function2(0xc,0xd,7,in_cr4,in_cr8,in_cr1);
  if (!CARRY4(param_4 >> 8,(uint)unaff_r4) || iVar7 == 0) {
    *(short *)(iVar5 + 0x10) = (short)iVar7;
    iVar7 = *(int *)(param_4 + 8);
    iVar6 = unaff_r4[1];
    iVar5 = unaff_r4[2];
    *(short *)(iVar6 + 2) = (short)*unaff_r4;
    *(int *)(iVar6 * 0x100 + 0x10) = iVar5;
    puVar11 = (undefined4 *)(iVar12 * 0x200000);
    *(undefined4 **)((iVar7 + -0x117) * 0x80000 + 0x38) = puVar11;
    uVar1 = *(ushort *)(puVar11[2] + 0xc);
    *(undefined4 *)(uVar1 + 0xc) = *puVar11;
    *(uint *)(iVar12 + 0x24) = (uint)uVar1;
    coprocessor_loadlong(8,in_cr5,asStack_1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(((int)param_1 >> 0x1c) + 0xe) = (short)((uint)param_4 >> 8);
  iVar12 = *(int *)(*(byte *)(iVar6 + 0x1f) + 0xc);
  iVar6 = unaff_r4[1];
  uVar3 = (undefined2)iVar5;
  *(undefined2 *)(*unaff_r4 + 2) = uVar3;
  iVar12 = (iVar12 + -0x21) * 0x10;
  if ((iVar12 >> 0x16 & 1U) == 0 || iVar12 >> 0x17 == 0) {
    iVar12 = *(int *)(iVar6 + 0x5e);
    uVar9 = *(uint *)(iVar6 + 0x6a);
    iVar6 = *(int *)(iVar6 + 0x6e);
    *(undefined2 *)(uVar9 + iVar6) = uVar3;
    *(undefined2 *)(iVar5 + iVar12) = uVar3;
    *(undefined2 *)(iVar6 + 0xc) = uVar3;
    puVar4 = _DAT_2c11919c;
    cVar2 = *(char *)(iVar5 * 2);
    uVar10 = (uint)(int)cVar2 >> 4;
    uVar8 = (int)_DAT_2c11919c << 0x19;
    *_DAT_2c11919c = uVar9 >> 9;
    puVar4[1] = uVar8;
    puVar4[2] = uVar10;
    *(uint *)((int)cVar2 + 0xc) = uVar10;
    *(short *)((int)asStack_1c + (int)cRam421a55f0) = (short)cRam421a55f0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

