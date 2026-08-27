/* FUN_2c414dfe @ 0x2c414dfe */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c414dfe(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  short sVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_r4;
  int iVar8;
  undefined1 unaff_r5;
  int iVar9;
  int iVar10;
  int unaff_r6;
  int iVar11;
  int unaff_r7;
  int iVar12;
  
  *(undefined1 *)(unaff_r6 + 0x11) = unaff_r5;
  uVar6 = *(undefined4 *)(unaff_r6 + 0x14);
  *(undefined4 *)(unaff_r6 + 0x14) = param_1;
  uVar3 = (undefined1)uVar6;
  *(undefined1 *)(unaff_r6 + 0xd) = uVar3;
  *(undefined1 *)(unaff_r4 + 9) = unaff_r5;
  *(char *)(unaff_r4 + 0x15) = (char)param_4;
  *(undefined1 *)(unaff_r6 + -0x24) = uVar3;
  uVar6 = s_make_block_2c41536c._0_4_;
  iVar9 = *(int *)(unaff_r4 + 100);
  iVar10 = iVar9 + -0x21;
  *(int *)(param_2 * 2 + 0x44) = param_2;
  iVar8 = (int)*(short *)(param_2 * 2 + iVar10);
  *(int *)(uVar6 + 0x54) = iVar8;
  *(undefined1 *)(unaff_r7 + 0x11) = 0x74;
  *(char *)(param_4 + 0x11) = (char)unaff_r7;
  sVar1 = *(short *)(iVar10 * 2);
  iVar12 = (int)sVar1;
  *(char *)(iVar9 + -0x10) = (char)uVar6;
  uVar5 = *(undefined4 *)(iVar8 + 0x14);
  *(undefined4 *)(iVar9 + 0x33) = uVar6;
  iVar7 = uVar6 << 1;
  *(undefined4 *)(iVar8 + 0x44) = uVar5;
  sVar2 = *(short *)(iVar8 + iVar10);
  iVar8 = *(int *)(sVar2 + 4);
  uVar5 = *(undefined4 *)(iVar9 + 0x23);
  *(undefined4 *)(uVar6 + 0x14) = 0x74;
  *(char *)(uVar6 + 0xd) = (char)iVar7;
  iVar9 = (int)*(short *)(sVar2 * 2 + iVar10);
  *(undefined1 *)(iVar9 + 0x11) = 0x74;
  iVar10 = *(int *)(iVar9 + 0x44);
  *(int *)(iVar8 + 0x24) = iVar12;
  iVar8 = *(int *)(iVar10 + 0x74);
  *(char *)(*(int *)(iVar8 + 0x34) + 1) = (char)sVar1;
  *(int *)(uVar6 + 0x54) = iVar7;
  iVar11 = *(int *)(iVar8 + 0x14);
  *(int *)(iVar10 + 0x14) = iVar11;
  iVar8 = *(int *)(iVar10 + 0x14);
  *(int *)(iVar12 + 0x54) = iVar7;
  *(char *)(iVar11 + 9) = (char)(iVar12 << 1);
  *(int *)(iVar10 + 0x34) = iVar12;
  uVar3 = (undefined1)iVar10;
  *(undefined1 *)(iVar8 + 0xd) = uVar3;
  iVar9 = *(int *)(iVar10 + 0x14);
  *(int *)(iVar10 + 0x54) = iVar11;
  uVar4 = (undefined1)uVar5;
  *(undefined1 *)(iVar9 + 9) = uVar4;
  iVar8 = (int)*(short *)(iVar10 * 2);
  *(int *)(iVar11 + 0x14) = iVar12 << 1;
  *(char *)(iVar11 + 0xd) = (char)iVar7;
  *(undefined1 *)(iVar9 + 9) = uVar3;
  uVar6 = *(undefined4 *)(iVar8 + 100);
  *(undefined1 *)(iVar9 + 0x1d) = uVar3;
  uVar3 = (undefined1)uVar6;
  *(undefined1 *)(iVar8 + 0x1d) = uVar3;
  *(undefined1 *)(iVar10 + 0x11) = uVar4;
  *(int *)(iVar10 + 0x54) = iVar10;
  iVar9 = (int)*(short *)(iVar10 * 2);
  *(undefined1 *)(iVar8 + 9) = uVar3;
  uVar6 = *(undefined4 *)(iVar9 + 0x74);
  *(int *)(iVar9 + 0x14) = iVar9;
  *(int *)(iVar9 + 0x54) = iVar8;
  *(undefined4 *)(iVar8 + 0x24) = uVar6;
  iVar8 = *(int *)(iVar9 + 0x74);
  iVar7 = *(int *)(iVar8 + 0x34);
  *(int *)(iVar9 + 0x14) = iVar9;
  *(int *)(iVar9 + 0x54) = iVar7;
  *(undefined4 *)(iVar7 + 0x44) = uVar6;
  *(undefined4 *)(iVar9 + 0x34) = uVar6;
  iVar7 = *(int *)(iVar8 + 100);
  *(char *)(iVar7 + 0x19) = (char)*(undefined2 *)(iVar11 + iVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

