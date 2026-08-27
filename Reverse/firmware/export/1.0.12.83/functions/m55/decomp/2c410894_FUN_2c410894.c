/* FUN_2c410894 @ 0x2c410894 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c410894(int param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r4;
  int iVar7;
  int unaff_r5;
  int iVar8;
  int unaff_r6;
  int iVar9;
  undefined1 unaff_r7;
  undefined4 uVar10;
  int in_stack_0000023c;
  
  *(char *)(param_1 + 5) = (char)unaff_r5;
  *(int *)(unaff_r6 + 0x14) = unaff_r5;
  *(char *)(unaff_r5 + param_2) = (char)unaff_r4;
  uVar4 = *(undefined4 *)(unaff_r5 + 0x44);
  unaff_r4[0x15] = (int)unaff_r4;
  *(char *)(unaff_r6 + 0x15) = (char)uVar4;
  iVar5 = *(int *)(unaff_r5 + 0x44);
  *(int *)(unaff_r5 + 0x24) = iVar5;
  iVar8 = *(int *)(unaff_r6 + 0x54);
  *(short *)((int)unaff_r4 + 0x3e) = (short)*(undefined4 *)(unaff_r6 + 0x14);
  *(int *)(unaff_r6 + 0x34) = param_4;
  iVar9 = *(int *)(iVar5 + 0x74);
  *(short *)(iVar9 + iVar8) = (short)unaff_r4;
  uVar2 = (undefined1)iVar5;
  *(undefined1 *)(iVar9 + 0x15) = uVar2;
  *(undefined1 *)((int)unaff_r4 + 9) = uVar2;
  *(short *)((int)unaff_r4 + iVar8) = (short)iVar8;
  *(int *)(iVar9 + 0x24) = iVar8;
  *(int *)(iVar9 + 0x54) = param_4;
  *(undefined1 *)(iVar9 + 0x15) = uVar2;
  iVar5 = _DAT_2c411530;
  iVar9 = unaff_r4[0x11];
  uVar1 = *(ushort *)((int)unaff_r4 + 0x1e);
  uVar6 = (uint)uVar1;
  *(undefined1 *)(iVar8 + 0x11) = unaff_r7;
  uVar2 = (undefined1)param_4;
  *(undefined1 *)(uVar6 + 5) = uVar2;
  *(int *)(iVar5 + 0x14) = iVar8;
  *(uint *)(iVar5 + 0x54) = uVar6;
  *(undefined1 *)(uVar6 + 0x15) = uVar2;
  *(int *)(iVar5 + 0x54) = param_1;
  *(char *)(iVar5 + 0xd) = (char)uVar1;
  uVar3 = (undefined1)iVar8;
  *(undefined1 *)((int)unaff_r4 + 0x11) = uVar3;
  iVar5 = _DAT_2c41159c;
  uVar1 = *(ushort *)((int)unaff_r4 + 0x16);
  uVar6 = (uint)uVar1;
  iVar7 = *unaff_r4;
  *(char *)(iVar8 + 0x11) = (char)unaff_r4[1];
  *(undefined1 *)(uVar6 + 5) = uVar2;
  *(int *)(iVar5 + 0x14) = iVar8;
  *(uint *)(iVar5 + 0x54) = uVar6;
  *(undefined1 *)(uVar6 + 0x15) = uVar2;
  *(int *)(iVar5 + 0x54) = param_1;
  *(char *)(iVar5 + 0xd) = (char)uVar1;
  *(undefined1 *)(iVar7 + 0x11) = uVar3;
  *(undefined1 *)(param_1 + 5) = uVar3;
  *(int *)(iVar5 + 0x14) = iVar8;
  uVar4 = *(undefined4 *)(iVar5 + 0x44);
  *(undefined4 *)(iVar8 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
  *(char *)(iVar7 + 9) = (char)iVar5;
  uVar10 = *(undefined4 *)(in_stack_0000023c + 0x74);
  *(undefined4 *)(iVar5 + 100) = uVar4;
  *(char *)(in_stack_0000023c + 0xd) = (char)uVar10;
  *(undefined1 *)(iVar7 + 9) = uVar2;
  *(undefined4 *)(param_4 + 100) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

