/* FUN_2c0c190a @ 0x2c0c190a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0c190a(ushort *param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  uint uVar17;
  int iVar18;
  uint unaff_r4;
  int unaff_r5;
  ushort *puVar19;
  int unaff_r6;
  int unaff_r7;
  undefined4 uVar20;
  undefined1 *puVar21;
  ushort *in_stack_000000cc;
  uint in_stack_000000e8;
  int in_stack_00000150;
  int in_stack_000001a0;
  int in_stack_00000200;
  undefined1 auStack_80 [92];
  undefined1 auStack_24 [4];
  
  puVar21 = auStack_24;
  if (unaff_r7 != 0) {
    puVar14 = (ushort *)0x0;
    if (param_3 != 0) {
      puVar21 = auStack_80;
      param_1 = in_stack_000000cc;
      puVar14 = in_stack_000000cc;
      param_4 = in_stack_000000e8;
      unaff_r5 = in_stack_00000150;
      unaff_r6 = in_stack_000001a0;
      unaff_r7 = in_stack_00000200;
    }
    *(ushort **)(puVar21 + 0xe0) = param_1;
    param_2 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(param_4 + 0x2e) + 0x28) + 0x22);
    unaff_r4 = (uint)*(ushort *)(unaff_r5 + 0x1c);
    param_4 = (uint)*(ushort *)(unaff_r7 + 0x16);
    param_1 = (ushort *)(uint)puVar14[9];
  }
  uVar6 = *(ushort *)(unaff_r5 + 0xc);
  puVar16 = (ushort *)(uint)uVar6;
  uVar7 = *(ushort *)(param_2 + 8);
  puVar14 = (ushort *)(uint)uVar7;
  uVar8 = *(ushort *)(unaff_r5 + 2);
  puVar19 = (ushort *)(uint)uVar8;
  uVar9 = (ushort)unaff_r7;
  puVar16[0x1f] = uVar9;
  uVar10 = (ushort)unaff_r6;
  param_1[0x1d] = uVar10;
  *(ushort *)(unaff_r7 + 0x34) = uVar6;
  uVar11 = (ushort)param_4;
  *(ushort *)(unaff_r6 + 0x30) = uVar11;
  *(ushort *)(unaff_r6 + 0x2c) = uVar6;
  *(ushort *)(unaff_r6 + 0x28) = uVar10;
  param_1[0x13] = (ushort)param_1;
  puVar14[0x11] = uVar9;
  *(ushort *)(unaff_r4 + 0x1e) = uVar11;
  *(ushort *)(unaff_r7 + 0x1a) = uVar8;
  *(short *)(param_4 + 0x18) = (short)unaff_r4;
  param_1[0xb] = uVar7;
  puVar19[9] = uVar11;
  *(ushort *)(param_4 + 0x10) = uVar11;
  puVar16[7] = (ushort)param_1;
  puVar14[6] = uVar11;
  puVar14[5] = uVar11;
  puVar16[4] = uVar7;
  *(ushort *)(param_4 + 6) = uVar8;
  puVar19[2] = uVar10;
  param_1[2] = uVar8;
  *(ushort *)(unaff_r4 + 2) = uVar7;
  param_1[1] = uVar11;
  *puVar19 = uVar6;
  *puVar16 = uVar9;
  *puVar14 = uVar6;
  *param_1 = uVar6;
  bVar1 = *(byte *)(*(byte *)(unaff_r6 + 0x1f) + 0x1e);
  uVar15 = (uint)*(byte *)(param_4 + 0x1b);
  bVar2 = *(byte *)(uVar15 + 0xe);
  uVar12 = (uint)bVar2;
  uVar3 = *(undefined1 *)(param_4 + 10);
  bVar4 = *(byte *)(param_4 + 6);
  uVar17 = (uint)bVar4;
  bVar5 = *(byte *)(uVar12 + 2);
  *(byte *)(uVar17 + 0x1d) = *(byte *)(param_4 + 0x1b);
  *(byte *)(uVar17 + 0x18) = bVar2;
  *(byte *)(uVar12 + 0x13) = bVar4;
  *(byte *)(uVar17 + 0xd) = bVar1;
  *(undefined1 *)(uVar17 + 7) = uVar3;
  *(byte *)(uVar15 + 1) = bVar1;
  iVar18 = *(int *)(bVar5 + 0x4c);
  uVar20 = *(undefined4 *)(iVar18 + 0x30);
  iVar13 = *(int *)(uVar12 + 0x14);
  *(undefined4 *)(uVar15 + 0x74) = uVar20;
  *(int *)(uVar15 + 0x54) = iVar18;
  *(int *)(unaff_r6 + 0x30) = unaff_r6;
  *(undefined4 *)(uVar15 + 0x10) = uVar20;
  uVar6 = *(ushort *)(unaff_r6 + iVar13);
  *(undefined1 *)((uint)bVar1 + (uint)bVar5) = *(undefined1 *)(uVar15 + uVar6);
  *(ushort *)(uVar15 + iVar18) = uVar6;
  *(uint *)((uint)uVar6 + iVar13) = (uint)bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

