/* FUN_2c55dac8 @ 0x2c55dac8 */

void FUN_2c55dac8(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar6 = *param_1;
  lv_obj_add_flag_invalidate(*(undefined4 *)(iVar6 + 0x14),1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(iVar6 + 4),1);
  piVar1 = DAT_2c621070;
  iStack_1c = *DAT_2c62106c;
  FUN_2c628c58();
  FUN_2c62c3b0(&iStack_2c,0x10);
  uVar2 = DAT_2c621074;
  iStack_2c = 0x138d;
  uStack_20 = 0;
  *piVar1 = *piVar1 + 1;
  piVar3 = (int *)FUN_2c62ca10(uVar2);
  uVar2 = DAT_2c621074;
  while (piVar3 != (int *)0x0) {
    while (((piVar4 = (int *)FUN_2c62ca20(uVar2,piVar3), (char)piVar3[4] != '\0' ||
            (*piVar3 != iStack_2c)) || (piVar3[1] == 0))) {
      piVar3 = piVar4;
      if (piVar4 == (int *)0x0) goto LAB_2c620ff6;
    }
    iStack_28 = piVar3[2];
    iStack_24 = piVar3[3];
    (*(code *)piVar3[1])(piVar3,&iStack_2c);
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
  if (*DAT_2c62106c != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

