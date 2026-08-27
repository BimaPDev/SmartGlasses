/* FUN_2c63c064 @ 0x2c63c064 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63c064(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  piVar1 = _LAB_2c63c104;
  iVar5 = *_LAB_2c63c108;
  if (*_LAB_2c63c104 == 0) {
    iVar4 = FUN_2c62bdd8(_LAB_2c63c10c,30000,0,0);
    *piVar1 = iVar4;
  }
  else {
    FUN_2c62be4c();
    iVar4 = *piVar1;
  }
  if (iVar4 != 0) {
    iVar4 = FUN_2c63b6c8(&iStack_18);
    if ((iVar4 != 0) &&
       ((iStack_14 == 0 && (iStack_18 == 0x3c || (iStack_18 == 0x1e || iStack_18 == 0xf)) ||
        (iStack_18 == 0x78 && iStack_14 == 0)))) {
      FUN_2c62be58(*piVar1,iStack_18 * 1000);
    }
    FUN_2c62be74(*piVar1);
  }
  piVar1 = DAT_2c621070;
  if (*_LAB_2c63c108 != iVar5) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  iStack_1c = *DAT_2c62106c;
  FUN_2c628c58();
  FUN_2c62c3b0(&iStack_2c,0x10);
  uVar2 = DAT_2c621074;
  iStack_2c = 0x177f;
  uStack_20 = 0;
  *piVar1 = *piVar1 + 1;
  piVar3 = (int *)FUN_2c62ca10(uVar2);
  uVar2 = DAT_2c621074;
  while (piVar6 = piVar3, piVar3 != (int *)0x0) {
    while (((piVar3 = (int *)FUN_2c62ca20(uVar2,piVar6), (char)piVar6[4] == '\0' &&
            (*piVar6 == iStack_2c)) && (piVar6[1] != 0))) {
      iStack_28 = piVar6[2];
      iStack_24 = piVar6[3];
      (*(code *)piVar6[1])(piVar6,&iStack_2c);
      piVar6 = piVar3;
      if (piVar3 == (int *)0x0) goto LAB_2c620ff6;
    }
  }
LAB_2c620ff6:
  iVar5 = *piVar1;
  *piVar1 = iVar5 + -1;
  if (iVar5 + -1 < 1) {
    iVar5 = FUN_2c62ca10(DAT_2c621074);
    uVar2 = DAT_2c621074;
    while (iVar5 != 0) {
      while (iVar4 = FUN_2c62ca20(uVar2,iVar5), *(char *)(iVar5 + 0x10) == '\0') {
        iVar5 = iVar4;
        if (iVar4 == 0) goto LAB_2c621000;
      }
      FUN_2c62c998(uVar2,iVar5);
      FUN_2c62bea8(iVar5);
      iVar5 = iVar4;
    }
  }
LAB_2c621000:
  if (*DAT_2c62106c != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

