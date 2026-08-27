/* FUN_2c59ec3c @ 0x2c59ec3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59ec3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int aiStack_48 [7];
  int iStack_2c;
  
  iVar5 = *(int *)(param_1 + 0x40);
  iStack_2c = *_LAB_2c59edf0;
  while( true ) {
    if (iVar5 == param_1 + 0x38) {
      uVar2 = FUN_2c4fcdd4();
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c59edfc,0x1b2,_LAB_2c59edf8,_LAB_2c59edf4,uVar2);
    }
    if (*(char *)(iVar5 + 0x28) == '\0') break;
    iVar5 = thunk_FUN_2c64e43a(iVar5);
  }
  FUN_2c59d3c0(param_1,*(undefined4 *)(iVar5 + 0x10));
  iVar8 = param_1 + 0x50;
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar2 = *(undefined4 *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0x14);
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = iVar8;
    do {
      while( true ) {
        iVar6 = iVar1;
        uVar7 = *(uint *)(iVar6 + 0x14);
        uVar4 = uVar7;
        if (uVar9 <= uVar7) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) || (iVar1 = FUN_2c66960c(*(undefined4 *)(iVar6 + 0x10),uVar2), iVar1 == 0))
        {
          iVar1 = uVar7 - uVar9;
        }
        if (-1 < iVar1) break;
        iVar1 = *(int *)(iVar6 + 0xc);
        if (*(int *)(iVar6 + 0xc) == 0) goto LAB_2c59ecb2;
      }
      iVar1 = *(int *)(iVar6 + 8);
      iVar3 = iVar6;
    } while (*(int *)(iVar6 + 8) != 0);
LAB_2c59ecb2:
    bVar10 = iVar8 != iVar3;
    iVar8 = iVar3;
    if (bVar10) {
      uVar7 = *(uint *)(iVar3 + 0x14);
      uVar4 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) || (iVar1 = FUN_2c66960c(uVar2,*(undefined4 *)(iVar3 + 0x10)), iVar1 == 0)) {
        iVar1 = uVar9 - uVar7;
      }
      if (-1 < iVar1) goto LAB_2c59ecd8;
    }
  }
  aiStack_48[0] = iVar5 + 0x10;
  iVar3 = FUN_2c59ea60(param_1 + 0x4c,iVar8,aiStack_48);
LAB_2c59ecd8:
  *(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x28) + 1;
  if (*_LAB_2c59edf0 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

