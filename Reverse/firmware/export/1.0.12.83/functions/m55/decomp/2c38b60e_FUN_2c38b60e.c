/* FUN_2c38b60e @ 0x2c38b60e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c38b60e(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int unaff_r4;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  iVar9 = *(int *)(unaff_r4 + 0x3c) >> 0x20;
  pbVar3 = (byte *)(iVar2 + 0x1c);
  piVar4 = *(int **)(*(int *)(unaff_r4 + 8) + 0x44);
  uVar1 = (undefined1)*(undefined4 *)(iVar9 + 0x3c);
  **(undefined1 **)(iVar9 + 0x38) = uVar1;
  *(undefined1 *)(iVar2 + 0x24) = uVar1;
  iVar5 = *(int *)(iVar9 + 0x74);
  *(byte **)pbVar3 = pbVar3;
  *(int **)(iVar2 + 0x20) = piVar4;
  *piVar4 = iVar5 << 1;
  puVar6 = *(uint **)(iVar9 + 0xf4);
  uVar11 = *(uint *)(iVar9 + 0xf8);
  uVar13 = *(uint *)(iVar9 + 0xfc);
  *puVar6 = (uint)*pbVar3;
  puVar6[1] = (uint)piVar4;
  puVar6[2] = uVar11;
  puVar6[3] = uVar13;
  uRam2c38b6ac = (undefined2)uVar13;
  iVar9 = *(int *)(iVar9 + 0x178);
  iVar5 = iVar9 * 4;
  *(undefined2 *)piVar4 = 0;
  *(short *)((int)piVar4 + 0x16) = (short)iVar5 + 0x40;
  piVar4 = *(int **)(iVar5 + 0x78);
  piVar7 = *(int **)(iVar5 + 0x7c);
  iVar2 = *(int *)(iVar5 + 0x80);
  *(int **)((uint)*(byte *)(iVar9 + 8) * 2) = piVar7;
  *(int **)(iVar9 * 0x9000) = piVar7;
  *piVar4 = iVar9 * 0x1000;
  iVar2 = iVar2 * 2;
  *piVar7 = iVar2;
  iVar9 = *(int *)(iVar5 + 0x90);
  puVar10 = *(undefined4 **)(iVar5 + 0x94);
  *(char *)(*(int *)(iVar2 + 0xc) + 8) = (char)*(undefined4 *)(iVar2 + 4);
  iVar2 = (uint)*(ushort *)(*(int *)(*(int *)(iVar9 + 0x74) + 0x38) * 2) * 4;
  uVar8 = *(undefined4 *)(iVar2 + 0x34);
  uVar12 = *(undefined4 *)(iVar2 + 0x38);
  uVar14 = *(undefined4 *)(iVar2 + 0x3c);
  *puVar10 = *(undefined4 *)(iVar2 + 0x30);
  puVar10[1] = uVar8;
  puVar10[2] = uVar12;
  puVar10[3] = uVar14;
  *(int *)(*(int *)(iVar2 + 0x44) + 0x2c) = *(int *)(iVar2 + 0x4c) + 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

