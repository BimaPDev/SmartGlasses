/* FUN_2c5e9c40 @ 0x2c5e9c40 */

/* WARNING: Removing unreachable block (ram,0x2c5e6bfe) */
/* WARNING: Removing unreachable block (ram,0x2c5e6c00) */
/* WARNING: Removing unreachable block (ram,0x2c5e6bd4) */
/* WARNING: Removing unreachable block (ram,0x2c5e6c5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e9c40(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  piVar10 = *(int **)(param_1 + 0x18);
  if (piVar10 == (int *)0x0) {
    puStack_20 = (undefined4 *)_LAB_2c5e9d3c;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e9d44,0xe0,_LAB_2c5e9d40);
  }
  if ((code *)piVar10[0xd] != (code *)0x0) {
    (*(code *)piVar10[0xd])(piVar10[0x11],piVar10);
  }
  iVar4 = FUN_2c6041dc(*_LAB_2c5e9d30,0xffffffff);
  iVar12 = *piVar10;
  cVar1 = *(char *)((int)piVar10 + 0x41);
  FUN_2c5e71bc(6,1);
  iVar5 = FUN_2c5e7254(6,1);
  iVar7 = _LAB_2c5e9d34;
  if (iVar5 == 0) {
    iVar5 = FUN_2c5e44b0();
    if (iVar5 == 0) {
      (**(code **)(iVar7 + 0x54))();
    }
    iVar5 = FUN_2c5e6eec();
    if ((iVar5 == 6) && (iVar4 != iVar12)) {
      iVar4 = func_0x2c5e6900(6);
      if (iVar4 == 0) {
        FUN_2c5e6ce4(1);
      }
    }
    else if (cVar1 == '\0') {
      (**(code **)(_LAB_2c5e9d38 + 0x2c))(1,4);
    }
    *(undefined1 *)(iVar7 + 0x10) = 4;
    return;
  }
  puVar6 = (undefined4 *)(**(code **)(_LAB_2c5e9d34 + 0x20))(0);
  iVar7 = FUN_2c606b94(*puVar6,1);
  piVar10 = DAT_2c5e6d68;
  if (iVar7 != 0) {
    FUN_2c60710c(*DAT_2c5e6d64,0x27d1);
    uVar11 = 0;
    iVar7 = DAT_2c5e6d6c;
    piVar9 = piVar10;
    while( true ) {
      iVar7 = (**(code **)(iVar7 + 0x44))(0);
      puVar2 = DAT_2c5e6d70;
      puVar6 = DAT_2c5e6c88;
      uVar11 = uVar11 + iVar7;
      if (piVar9 == piVar10 + 7) break;
      iVar7 = *piVar9;
      piVar9 = piVar9 + 1;
    }
    if (uVar11 < 2) {
      cVar1 = FUN_2c6033b4(*DAT_2c5e6d70,0,0x21);
      if ((cVar1 == '\0') && (iVar7 = FUN_2c6073f8(*puVar2), iVar7 != 0)) {
        puStack_20 = (undefined4 *)DAT_2c5e6d74;
        uStack_1c = uVar11;
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5e6d78,0x14d,DAT_2c5e6d7c);
      }
      return;
    }
    if (*(char *)(DAT_2c5e6c84 + 0x20) == '\0') {
      uStack_18 = DAT_2c5e6c94;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5e6c9c,0x11e,DAT_2c5e6c98);
    }
    puVar2 = (undefined4 *)FUN_2c5e697c(*(char *)(DAT_2c5e6c84 + 0x20));
    FUN_2c608c7c(*puVar2);
    FUN_2c606abc(*puVar6,1);
    FUN_2c62e838(*puVar6,0);
    FUN_2c606e74(*puVar6,0xff,0);
    puVar6 = DAT_2c5e6c8c;
    FUN_2c606d6c(*DAT_2c5e6c8c,0);
    uVar3 = *puVar6;
    uStack_1c = *DAT_2c5e4cd0;
    FUN_2c62e7b4(&uStack_60,0,0xe,0);
    uStack_44 = DAT_2c5e4cd4;
    uStack_5c = DAT_2c5e4cd8;
    uStack_38 = 0xe;
    uStack_34 = 300;
    uStack_54 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_60 = uVar3;
    FUN_2c62e8ec(&uStack_60);
    if (*DAT_2c5e4cd0 == uStack_1c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  puVar6 = (undefined4 *)FUN_2c5e7270(6);
  if (puVar6 == (undefined4 *)0x0) {
    puStack_20 = (undefined4 *)_LAB_2c5e9d48;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e9d44,0xd4,_LAB_2c5e9d4c);
  }
  FUN_2c5e9be4();
  FUN_2c606e74(*puVar6,0,0);
  FUN_2c5e98c0(puVar6);
  piVar9 = DAT_2c621070;
  uStack_1c = *DAT_2c62106c;
  FUN_2c628c58();
  FUN_2c62c3b0(&iStack_2c,0x10);
  uVar3 = DAT_2c621074;
  iStack_2c = 0x3e84;
  *piVar9 = *piVar9 + 1;
  puStack_20 = puVar6;
  piVar10 = (int *)FUN_2c62ca10(uVar3);
  uVar3 = DAT_2c621074;
  while (piVar10 != (int *)0x0) {
    while (((piVar8 = (int *)FUN_2c62ca20(uVar3,piVar10), (char)piVar10[4] != '\0' ||
            (*piVar10 != iStack_2c)) || (piVar10[1] == 0))) {
      piVar10 = piVar8;
      if (piVar8 == (int *)0x0) goto LAB_2c620ff6;
    }
    iStack_28 = piVar10[2];
    iStack_24 = piVar10[3];
    (*(code *)piVar10[1])(piVar10,&iStack_2c);
    piVar10 = piVar8;
  }
LAB_2c620ff6:
  iVar7 = *piVar9;
  *piVar9 = iVar7 + -1;
  if (iVar7 + -1 < 1) {
    iVar7 = FUN_2c62ca10(DAT_2c621074);
    uVar3 = DAT_2c621074;
    while (iVar4 = iVar7, iVar7 != 0) {
      while (iVar7 = FUN_2c62ca20(uVar3,iVar4), *(char *)(iVar4 + 0x10) != '\0') {
        FUN_2c62c998(uVar3,iVar4);
        FUN_2c62bea8(iVar4);
        iVar4 = iVar7;
        if (iVar7 == 0) goto LAB_2c621000;
      }
    }
  }
LAB_2c621000:
  if (*DAT_2c62106c == uStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

