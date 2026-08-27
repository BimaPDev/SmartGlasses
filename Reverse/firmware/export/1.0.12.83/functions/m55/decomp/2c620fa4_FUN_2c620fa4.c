/* FUN_2c620fa4 @ 0x2c620fa4 */

void FUN_2c620fa4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  piVar1 = DAT_2c621070;
  local_1c = *DAT_2c62106c;
  FUN_2c628c58();
  FUN_2c62c3b0(&local_2c,0x10);
  uVar2 = DAT_2c621074;
  *piVar1 = *piVar1 + 1;
  local_2c = param_1;
  local_20 = param_2;
  piVar3 = (int *)FUN_2c62ca10(uVar2);
  uVar2 = DAT_2c621074;
  while (piVar3 != (int *)0x0) {
    while (((piVar4 = (int *)FUN_2c62ca20(uVar2,piVar3), (char)piVar3[4] != '\0' ||
            (*piVar3 != local_2c)) || (piVar3[1] == 0))) {
      piVar3 = piVar4;
      if (piVar4 == (int *)0x0) goto LAB_2c620ff6;
    }
    local_28 = piVar3[2];
    local_24 = piVar3[3];
    (*(code *)piVar3[1])(piVar3,&local_2c);
    piVar3 = piVar4;
  }
LAB_2c620ff6:
  iVar6 = *piVar1;
  *piVar1 = iVar6 + -1;
  if (iVar6 + -1 < 1) {
    iVar6 = FUN_2c62ca10(DAT_2c621074);
    uVar2 = DAT_2c621074;
    while (iVar6 != 0) {
      while (iVar5 = FUN_2c62ca20(uVar2,iVar6), *(char *)(iVar6 + 0x10) == '\0') {
        iVar6 = iVar5;
        if (iVar5 == 0) goto LAB_2c621000;
      }
      FUN_2c62c998(uVar2,iVar6);
      FUN_2c62bea8(iVar6);
      iVar6 = iVar5;
    }
  }
LAB_2c621000:
  if (*DAT_2c62106c != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

