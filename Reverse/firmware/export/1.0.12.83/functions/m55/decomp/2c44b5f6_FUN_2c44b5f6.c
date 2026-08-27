/* FUN_2c44b5f6 @ 0x2c44b5f6 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c44b5f6(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_r2;
  undefined1 *puVar7;
  undefined4 *extraout_r3;
  uint uVar8;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r4;
  int iVar9;
  int iVar10;
  uint uVar11;
  int unaff_r6;
  int *piVar12;
  int iVar13;
  undefined4 *unaff_r7;
  undefined4 *puVar14;
  uint *puVar15;
  char in_OV;
  char cVar16;
  bool bVar17;
  undefined4 *puVar18;
  undefined2 *puVar19;
  longlong lVar20;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined8 uVar21;
  int in_stack_00000248;
  undefined1 auStack_24 [4];
  undefined4 *puStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  puVar15 = &uStack_1c;
  *(short *)(unaff_r6 * 2) = (short)unaff_r4;
  if ((param_3 >> 0xd & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar16 = unaff_r4 << 0xc < 0;
  iVar9 = unaff_r7[2];
  iVar13 = unaff_r7[4];
  puVar18 = unaff_r7 + 5;
  uVar11 = (uint)*(ushort *)unaff_r7[3];
  uStack_1c = param_3;
  uStack_18 = param_4;
  uVar21 = func_0x2c226b12(param_1,*unaff_r7,unaff_r7[1],*(undefined2 *)((param_3 >> 0xe) + 0x2e));
  iVar10 = (int)((ulonglong)uVar21 >> 0x20);
  puVar19 = (undefined2 *)uVar21;
  if (cVar16 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cVar16 == in_OV) {
    *(short *)((int)extraout_r3 + iVar13) = (short)iVar9;
    puVar1 = (undefined2 *)0x3c8;
    puVar2 = (undefined2 *)0x3d0;
    lVar20 = 4;
    while( true ) {
      *puVar19 = *puVar1;
      puVar19[1] = *puVar2;
      puVar19 = puVar19 + 2;
      lVar20 = lVar20 + -1;
      puVar14 = puVar18;
      if (lVar20 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  else {
    *(short *)(iVar10 + 0x1e) = (short)extraout_r3;
    iVar5 = _LAB_2c44bbcc;
    iVar6 = *(int *)(iVar13 + (int)puVar18);
    puVar15 = (uint *)auStack_24;
    uVar11 = iVar13 >> 0x13;
    iRam2c44b766 = iVar13;
    if ((int)uVar11 < 0 == (bool)in_OV) {
      *(undefined4 *)(iVar9 + 0x48) = extraout_r2;
      *(short *)(iVar13 + *(char *)(uVar11 + iVar6)) = (short)((ulonglong)uVar21 >> 0x20);
      puVar7 = *(undefined1 **)(iVar6 + 0x10);
      uVar11 = iVar6 + 0x18;
      coprocessor_function(7,0,7,in_cr8,in_cr4,in_cr2);
      if (iVar9 + -0xf4 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar10 = *(int *)(iVar6 + 0xc) * 0x80000;
      bVar3 = *(byte *)(*(int *)(iVar6 + 0x14) + *(int *)(iVar6 + 0xc));
      do {
        uVar8 = uVar11 | 0x1fffffff;
        *(int *)(bVar3 + 4) = iVar13;
        *(char *)(iVar10 + 0x16) = (char)uVar8;
        bVar17 = puVar7 != (undefined1 *)0xffffffc6;
        puVar7 = &stack0x00000374;
        uVar11 = (uint)*(short *)(puVar7 + iVar13);
      } while (bVar17);
      iVar9 = (int)uVar8 >> 5;
      *(char *)(iVar10 + 0x19) = (char)iVar9;
      *(char *)(iVar9 + 7) = (char)iVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)(uVar11 + 8) = uVar11;
    *(short *)(iVar5 + 0x24) = (short)iVar5;
    puStack_20 = puVar18;
    if (uVar11 == 0 || (int)uVar11 < 0 != (bool)in_OV) {
      *(int *)iVar5 = iVar5;
      *(undefined4 **)(iVar5 + 4) = extraout_r3;
      *(uint *)(iVar5 + 8) = uVar11;
      *(undefined4 **)(iVar5 + 0xc) = puVar18;
      *(char *)(_LAB_2c44b9e0 + 699) = (char)extraout_r3;
      iVar9 = iRam2c44b198;
      bVar3 = *(byte *)((int)puVar18 >> 7);
      UNRECOVERED_JUMPTABLE = (code *)(bVar3 - 6);
      uVar4 = *(ushort *)(iRam2c44b198 + 2);
      iVar10 = iVar10 + -0x46;
      *(char *)(iVar5 + 8) = (char)iVar10;
      uRam0000008c = SUB41(UNRECOVERED_JUMPTABLE,0);
      *(code **)(iVar9 + 0x59) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x2c44b0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)((uint)bVar3,iVar10,iVar10 * 2,*(undefined2 *)(iVar10 + (uint)uVar4));
      return;
    }
    puVar14 = (undefined4 *)((int)puVar18 * 0x100000);
    in_stack_00000248 = iVar9;
    if (puVar14 <= extraout_r3 && extraout_r3 + (int)puVar18 * -0x40000 != (undefined4 *)0x0) {
      uVar8 = (uint)*(ushort *)(iVar9 + 0x24);
      if (extraout_r3 + (int)puVar18 * -0x40000 == (undefined4 *)0x0 ||
          (int)extraout_r3 < (int)puVar14) {
        piVar12 = (int *)(uint)(*(ushort *)(iVar9 + 0x24) >> 6);
        iVar10 = *(int *)(iRam2c44b804 + 8);
        *piVar12 = iRam2c44b804 + 0x10;
        piVar12[1] = iVar5;
        piVar12[2] = iVar10;
        piVar12[3] = (int)piVar12;
        piVar12[4] = uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x2bf8b6d8();
      *(uint *)(iVar13 + 0x18) = uVar8;
      *(uint *)uVar11 = uVar11;
      *(uint *)(uVar11 + 4) = uVar8;
      software_interrupt(0x73);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(short *)((int)puVar14 + 0x3e) = (short)uVar11;
  *(undefined4 **)(in_stack_00000248 + 0x3c) = extraout_r3;
  puVar15[0x49] = (uint)puVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

