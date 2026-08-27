/* FUN_2c43af86 @ 0x2c43af86 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c43b1cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c43af86(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  code *pcVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  int *unaff_r4;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  int *piVar14;
  int *piVar15;
  int unaff_r7;
  int unaff_r8;
  bool bVar16;
  int *piVar17;
  undefined4 in_cr6;
  undefined4 in_cr15;
  int in_stack_00000210;
  int in_stack_0000026c;
  undefined1 in_stack_000003b0;
  
  *param_4 = param_1;
  param_4[1] = param_3;
  param_4[2] = (int)param_4;
  param_4[3] = (int)unaff_r4;
  iVar4 = *param_4;
  iVar5 = param_4[1];
  iVar10 = param_4[2];
  piVar15 = param_4 + -0x21;
  *(char *)(iVar4 + param_4[3]) = (char)piVar15;
  cVar3 = (char)unaff_r4;
  *(char *)(unaff_r4 + 3) = cVar3;
  if (!SBORROW4((int)piVar15,4)) {
    iVar4 = unaff_r4[1];
    iVar5 = unaff_r4[2];
    iVar10 = unaff_r4[3];
    iVar9 = unaff_r4[4];
    piVar15 = (int *)unaff_r4[6];
    *piVar15 = iVar5;
    *(int *)(iVar5 + 0x4c) = iVar10 + -0xc1;
    *(char *)((int)piVar15 + 0x3d) = (char)iVar9;
    *(char *)(*(ushort *)((int)unaff_r4 + 0x3e) + 0x1d) = cVar3 + '\x1c';
    *(short *)(in_stack_00000210 + 0x18) = (short)iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_4 != (int *)0x88) {
    if (iVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(*(ushort *)(unaff_r7 * 2) + 0x19) = cVar3;
    puVar13 = (ushort *)((uint)unaff_r4 >> 0x15);
    bVar16 = unaff_r4 != (int *)0x5;
    while( true ) {
      if (unaff_r4 != (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_r4 = (int *)(uint)*puVar13;
      if (bVar16) break;
      *(undefined1 *)(iVar4 + 0xb) = in_stack_000003b0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = iVar4 >> 4;
  bVar16 = SBORROW4(_LAB_2c43b020,0x28);
  iVar9 = *(int *)(_LAB_2c43b020 + -0x28);
  piVar7 = *(int **)(iVar4 + -0x8e);
  iVar12 = *(int *)(iVar4 + -0x8a);
  piVar14 = *(int **)(iVar4 + -0x86);
  iVar4 = iVar4 + -0x82;
  _MasterStackPointer = piVar15;
  _Reset = unaff_r4;
  *unaff_r4 = iVar9;
  unaff_r4[1] = iVar4;
  unaff_r4[2] = iVar5;
  unaff_r4[3] = iVar12;
  unaff_r4[4] = (int)piVar14;
  puVar8 = (undefined1 *)(iVar9 >> 0x19);
  if (puVar8 == (undefined1 *)0x0 || (int)puVar8 < 0 != bVar16) {
    coprocessor_movefromRt(4,0,7,in_cr6,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *piVar14 = (int)piVar7;
  piVar14[1] = (int)puVar8;
  piVar14[2] = (int)piVar14;
  *puVar8 = (char)iVar9;
  piVar15 = (int *)(iVar4 >> 0x20);
  *piVar14 = iVar9;
  piVar14[1] = iVar4;
  piVar14[2] = iVar5;
  piVar14[3] = in_stack_0000026c;
  piVar14[4] = (int)piVar15;
  piVar17 = piVar14 + 5;
  uVar2 = *(ushort *)(iVar9 + 4);
  *(undefined1 **)(uVar2 + 0x2c) = &stack0x00000294 + unaff_r8;
  iVar5 = (int)piVar7 + (uint)uVar2;
  iVar9 = iVar9 * 0x800;
  *piVar15 = iVar9;
  piVar15[1] = in_stack_0000026c;
  piVar15[2] = iVar10;
  piVar15[3] = (int)piVar17;
  *piVar17 = iVar9;
  piVar14[6] = (int)(&stack0x00000294 + unaff_r8);
  piVar14[7] = iVar5;
  piVar14[8] = (int)piVar7;
  piVar14[9] = in_stack_0000026c;
  piVar14[10] = (int)piVar17;
  uVar11 = ((uint)piVar17 >> 0x10) << 0x18 | ((uint)piVar17 >> 0x18) << 0x10 |
           ((uint)piVar17 & 0xff) << 8 | (uint)piVar17 >> 8 & 0xff;
  *(short *)(uVar11 + 0x3e) = (short)(iVar4 >> 0x1f) + 0x10;
  if (iVar9 != 0) {
    iVar10 = *piVar7;
    iVar4 = FUN_2c5ee748(iVar9,*(undefined4 *)(uVar11 + 0x54),iVar5,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c52154c,0x1c8);
    }
    iVar5 = FUN_2c5ef9d8();
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c52154c,0x1d3);
    }
    if (*(char *)(iVar9 + 0x15) != '\x06') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c52154c,0x1de);
    }
    uVar11 = FUN_2c5ef8f4(iVar4);
    if (uVar11 < 0x10) {
      uVar6 = 0x1e9;
    }
    else {
      uVar11 = FUN_2c48a2c4();
      if (0xf < uVar11) {
        if (*_LAB_2c521540 != iVar10) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        return iVar5;
      }
      uVar6 = 0x1f5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c52154c,uVar6);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xdd,0x2c43b9a4);
  (*pcVar1)();
}

