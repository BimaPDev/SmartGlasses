/* FUN_2c0da4a4 @ 0x2c0da4a4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0da4a4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 unaff_r4;
  int iVar8;
  int iVar9;
  int unaff_r5;
  uint uVar10;
  int iVar11;
  int unaff_r6;
  int unaff_r7;
  undefined4 *puVar12;
  uint unaff_r11;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined4 in_cr3;
  int in_stack_00000088;
  undefined1 auStack_24 [8];
  
  uVar10 = unaff_r5 - 0xe0;
  *param_4 = param_1;
  param_4[1] = param_4;
  param_4[2] = unaff_r7 + -0xe1;
  *(undefined4 *)(unaff_r7 + -0x1c4) = param_1;
  *(undefined4 *)(unaff_r7 + -0x1c0) = param_2;
  *(undefined4 *)(unaff_r7 + -0x1bc) = unaff_r4;
  *(int *)(unaff_r7 + -0x1b8) = unaff_r6;
  *(undefined4 **)(unaff_r7 + -0x1b4) = (undefined4 *)(unaff_r7 + -0x1c4);
  *param_3 = unaff_lr;
  param_3[1] = unaff_r4;
  param_3[2] = uVar10;
  param_3[3] = unaff_r7 + -0x2a9;
  puVar13 = auStack_24;
  puVar12 = (undefined4 *)(*(byte *)(in_stack_00000088 + 10) - 0x76);
  while( true ) {
    iVar4 = *(int *)(in_stack_00000088 + 0x50);
    bVar1 = *(byte *)(in_stack_00000088 + 1);
    *(char *)(puVar12 + 4) = (char)uVar10;
    *(char *)(iVar4 + 0xd) = (char)unaff_r6;
    uVar5 = *(undefined4 *)(in_stack_00000088 + -0x6c);
    *puVar12 = uVar5;
    puVar12[1] = in_stack_00000088 + -0x1a9;
    puVar12[2] = puVar12;
    puVar7 = (undefined4 *)(in_stack_00000088 + -0x2a4);
    uVar6 = uVar10 >> 0x1a;
    iVar4 = (int)*(short *)((uint)bVar1 + (int)puVar12);
    *(short *)(bVar1 + 0x2c) = (short)unaff_r6;
    *(undefined1 **)(in_stack_00000088 + -0x254) = puVar13 + 0x84;
    puVar13 = (undefined1 *)(unaff_r11 | 0x12c00);
    *(short *)(in_stack_00000088 + -0x294) = (short)uVar5 + -0x14;
    iVar9 = uVar10 - 0x86f;
    if (!SBORROW4(uVar10 - 0x774,0xfb)) break;
    *(undefined4 **)(unaff_r6 + 0x14) = puVar7;
    *(char *)(in_stack_00000088 + -0x29b) = (char)iVar9;
    *(short *)(iVar9 + (int)puVar7) = (short)(puVar13 + 0x110);
    *(int *)(uVar10 - 0x80b) = iVar9;
    iVar9 = *(int *)(in_stack_00000088 + -0x230);
    *(int *)(uVar10 - 0x83f) = iVar9;
    *(char *)(iVar9 + 1) = (char)(puVar13 + 0xa4);
    in_stack_00000088 = *(int *)(*(int *)(uVar10 - 0x85b) + 0x14);
    bVar1 = *(byte *)(uVar10 - 0x866);
    iVar8 = in_stack_00000088 * 2;
    *(uint *)(in_stack_00000088 + 0x60) = (uint)bVar1;
    *(uint *)(iVar8 + 100) = (uint)bVar1;
    sVar3 = *(short *)(in_stack_00000088 * 2);
    iVar11 = *(int *)(in_stack_00000088 + 0x74);
    *(int *)(iVar8 + 0x14) = iVar8;
    iVar9 = in_stack_00000088 * 8;
    *(char *)(uVar6 + 9) = (char)(in_stack_00000088 << 2);
    *(char *)(iVar8 + 0x11) = (char)sVar3;
    *(int *)(in_stack_00000088 + sVar3) = iVar8;
    *(uint *)(iVar11 + 0x27) = uVar6;
    *(int *)(iVar11 + -0x19) = iVar9;
    *(uint *)(iVar11 + 0x27) = uVar6;
    *(int *)(iVar4 + 100) = in_stack_00000088 << 2;
    *(undefined4 *)(iVar8 + 100) = 0;
    iVar11 = *(int *)(in_stack_00000088 + 0x74);
    unaff_r6 = iVar11 + -0x2d;
    *(int *)(in_stack_00000088 + 0x14) = in_stack_00000088;
    *(int *)(iVar11 + -0x19) = in_stack_00000088;
    *(char *)(iVar9 + 0xc) = (char)iVar9;
    iVar9 = *(int *)(in_stack_00000088 + 0x50);
    bVar1 = *(byte *)(in_stack_00000088 + 1);
    *(int *)(in_stack_00000088 + 0x40) = iVar8 + -0x3e;
    *(undefined4 *)(in_stack_00000088 + 0x40) = 0x3e;
    uVar10 = 0x2f;
    *(int *)(iVar9 * 2) = iVar9;
    *(undefined4 *)(in_stack_00000088 + 0x14) = 0x2f;
    *(int *)(bVar1 + 0x2f) = iVar4;
    *(undefined4 *)(iVar11 + 0x27) = 100;
    *(int *)(iVar11 + -0x19) = iVar9;
    *(undefined4 *)(iVar11 + 0x27) = 100;
    *(char *)(iVar9 + 8) = (char)iVar9;
    puVar12 = *(undefined4 **)(iVar11 + -0x19);
  }
  *(undefined4 **)(in_stack_00000088 + -0x230) = puVar7;
  uVar2 = *(ushort *)(puVar13 + 0x128);
  *puVar7 = 0x74;
  *(uint *)(in_stack_00000088 + -0x2a0) = (uint)uVar2;
  *(undefined1 **)(in_stack_00000088 + -0x29c) = puVar13 + 0x110;
  coprocessor_store(0xe,in_cr3,uVar6);
  *(undefined1 **)(puVar13 + 0x184) = puVar13 + 0xa4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

