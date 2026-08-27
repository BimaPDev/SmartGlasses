/* FUN_2c4628dc @ 0x2c4628dc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c43bfb6) */
/* WARNING: Removing unreachable block (ram,0x2c43bfb8) */
/* WARNING: Removing unreachable block (ram,0x2c43bf12) */
/* WARNING: Removing unreachable block (ram,0x2c43bf16) */
/* WARNING: Removing unreachable block (ram,0x2c43bf24) */
/* WARNING: Removing unreachable block (ram,0x2c44e32e) */
/* WARNING: Removing unreachable block (ram,0x2c43bfc2) */
/* WARNING: Removing unreachable block (ram,0x2c43c632) */
/* WARNING: Removing unreachable block (ram,0x2c43c538) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4628dc(int param_1,undefined4 param_2,ushort *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int unaff_r4;
  uint unaff_r5;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  ushort *puVar12;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined1 *puVar14;
  longlong lVar16;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined1 in_q3 [16];
  undefined1 in_q4 [16];
  uint uStack0000015c;
  ushort *puStack00000180;
  int iStack000001e4;
  int in_stack_0000035c;
  undefined1 *in_stack_00000370;
  undefined1 auStack_10 [4];
  undefined2 *puVar15;
  
  iStack000001e4 = _LAB_2c462340;
  puVar13 = auStack_10;
  puStack00000180 = param_3;
  iVar5 = param_1 + 0x148;
  coprocessor_load(9,in_cr8,iVar5);
  if (iVar5 < 0xcc) {
    if (-1 < param_1 + 0x7d) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar10 = (uint *)(uint)*(byte *)(_LAB_2c462340 + 0x1f);
  if (unaff_r4 == 0) {
    uVar6 = (uint)*param_3;
    uVar7 = (uint)*(ushort *)((int)puVar10 + 0x3e);
    *(char *)(uVar7 + 0xd) = (char)*(ushort *)((int)puVar10 + 0x3e);
    puVar15 = _LAB_2c43c270;
    if (!SBORROW4(iVar5,0xcb)) {
      uRam00000050 = (uint)*(byte *)(in_stack_0000035c + 0xc);
      iVar5 = (int)&stack0x00000114 * 0x2000;
      *puVar10 = uVar7;
      puVar10[1] = (uint)puVar10;
      puVar10[0x19] = unaff_r5;
      uVar3 = *(ushort *)(param_1 + 0x160);
      *(int *)iVar5 = iVar5;
      *(uint *)(iVar5 + 4) = uVar6;
      *(uint *)(iVar5 + 8) = (uint)uVar3;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(uint *)(iVar5 + 0x10) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar11 = puVar10[0x1a];
    *(char *)(in_stack_0000035c + uVar11) = (char)uVar11;
    *(uint *)(in_stack_0000035c + 0x68) = uVar7;
    in_stack_00000370 = &stack0x000000bc;
    *puVar15 = (short)uVar11;
    iVar5 = _DAT_2c43c064;
    if ((int)(uVar6 - 0xec) < 0) {
      uVar4 = *(undefined4 *)(in_stack_00000370 + uVar6);
      *(short *)(in_stack_0000035c + 0x18) = (short)uVar4;
      uRam00000007 = (undefined1)uVar4;
      puVar12 = (ushort *)0x16;
      iVar8 = *(int *)(iVar5 + 0x50);
      iVar5 = (int)(_LAB_2c43bf70 >> 6) >> 0xe;
      puVar1 = (undefined1 *)0x370;
      puVar2 = (undefined1 *)0x380;
      lVar16 = 8;
      while( true ) {
        *puVar1 = *(undefined1 *)puVar15;
        puVar14 = (undefined1 *)((int)puVar15 + 1);
        *puVar2 = *puVar14;
        puVar15 = (undefined2 *)(puVar14 + 1);
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      *(int *)(*puVar12 + 0x78) = iVar5;
      *(char *)(iVar8 + 0x2c43bffc) = (char)*(undefined4 *)(puVar13 + 0x564);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    puVar9 = (undefined4 *)(int)(short)((ushort)*(byte *)(_LAB_2c462340 + 0x1f) << 8);
    *(int *)(param_1 + 0x17c) = unaff_r4;
    uStack0000015c = (uint)(byte)puVar10[7];
    uVar3 = *(ushort *)(iStack000001e4 + 0x2c);
    iVar5 = *(int *)(unaff_r5 + 0x60);
    *(char *)(uStack0000015c + (int)puVar9) = (char)param_3;
    coprocessor_movefromRt(0xf,3,0,in_cr5,in_cr14);
    *(char *)((int)puVar9 + unaff_r5) = (char)iStack000001e4;
    VectorRoundHalvingAdd(in_q4,in_q3,1,0);
    if (unaff_r5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar9 = 0;
    puVar9[1] = uStack0000015c;
    puVar9[2] = 0;
    puVar9[3] = (uint)uVar3;
    *(undefined2 *)(uStack0000015c + 0x1c) = 0xffff;
    uRam0000003f = 0;
    *(undefined4 *)(*(short *)(&stack0x0000029c + iVar5) + 0x18) = unaff_lr;
    puVar15 = (undefined2 *)0x0;
  }
  coprocessor_loadlong(0xc,in_cr12,(uint)*(ushort *)(in_stack_00000370 + ((int)puVar15 >> 7)));
  *(short *)(in_stack_00000370 + 0x24) = (short)puVar15 + 0x27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

