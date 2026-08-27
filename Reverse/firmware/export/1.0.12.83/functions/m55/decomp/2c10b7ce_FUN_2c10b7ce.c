/* FUN_2c10b7ce @ 0x2c10b7ce */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c10b86e) */
/* WARNING: Removing unreachable block (ram,0x2c10b876) */
/* WARNING: Removing unreachable block (ram,0x2c10b7c2) */
/* WARNING: Removing unreachable block (ram,0x2c10b884) */
/* WARNING: Removing unreachable block (ram,0x2c10b886) */

void FUN_2c10b7ce(int param_1,uint param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 unaff_r5;
  int iVar8;
  int unaff_r6;
  int iVar9;
  int unaff_r7;
  uint uVar10;
  int iVar11;
  int unaff_r9;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  uint in_stack_00000354;
  
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_1 + 0x1e) = (char)param_1;
  puVar2 = &stack0x00000374;
  uVar10 = (param_2 & 0x3fffffff) >> 0x16;
  *(undefined2 *)(param_1 + unaff_r7 + unaff_r6) = unaff_r5;
  *(short *)(*(ushort *)(*(int *)(param_2 * 4 + 100) + 0x36) + 10) = (short)puVar2;
  iVar4 = *(int *)(uVar10 + 8);
  uVar6 = *(uint *)(uVar10 + 0xc);
  iVar8 = *(int *)(uVar10 + 0x10);
  iVar9 = *(int *)(uVar10 + 0x14);
  iVar11 = *(int *)(uVar10 + 0x18);
  puVar3 = *(undefined1 **)(iVar8 + 0x38);
  if ((uint)puVar2 >> 8 == 0) {
    *(int *)(puVar3 + 0x34) = iVar4;
  }
  else {
    uVar7 = (int)puVar2 * 4;
    *(undefined2 *)(iVar4 + iVar8) = 0x79;
    iVar9 = iVar11 * 0x8000000;
    uVar10 = (uint)puVar2 >> 0xc;
    uVar5 = (uint)puVar2 >> 0xd;
    in_stack_00000354 = (uint)puVar2 >> 8;
    puVar2 = (undefined1 *)(iVar4 >> 0x19);
    uVar6 = uVar7;
    if ((uVar10 & 1) == 0 || uVar5 == 0) {
      iVar8 = iVar8 + 0x7e;
      *(undefined2 *)(iVar9 + 0x85) = 0;
      puVar2 = &DAT_50000000;
      coprocessor_load(9,in_cr7,unaff_r9 + -0x38);
      register0x00000054 = (BADSPACEBASE *)puVar3;
      goto LAB_2c10b8b0;
    }
  }
  *(short *)(uVar6 + 0x36) = (short)iVar9;
  *(short *)(uVar6 + 6) = (short)puVar2;
  uVar7 = (uint)puVar3 >> 5;
  iVar8 = -((int)(in_stack_00000354 + uVar6) >> 0x1f);
  *(undefined1 **)(iVar8 + 0x68) = puVar2;
  uVar6 = (int)puVar2 << 2;
  *(uint *)((in_stack_00000354 >> 8) + 100) = in_stack_00000354;
  puVar2 = &stack0x0000004c;
LAB_2c10b8b0:
  *(uint *)((int)register0x00000054 + 0x34) = uVar7;
  coprocessor_function2(3,0xd,0,in_cr4,in_cr8,in_cr6);
  uVar1 = *(ushort *)(uVar7 + 0x36);
  *(short *)(uVar1 + 0x2a) = (short)iVar8;
  *(short *)(uVar1 + 6) = (short)puVar2;
  *(undefined4 *)((int)register0x00000054 + ((int)puVar2 >> 0x18) + uVar6) = 199;
  coprocessor_function2(0xb,0xd,5,in_cr8,in_cr8,in_cr8);
  coprocessor_moveto(0xe,3,5,unaff_r9,in_cr8,in_cr6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

