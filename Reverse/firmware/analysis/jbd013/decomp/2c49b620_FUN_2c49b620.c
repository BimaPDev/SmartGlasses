/* FUN_2c49b620 @ 0x2c49b620 */

undefined4 FUN_2c49b620(uint param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  byte local_15;
  int local_14;
  
  puVar2 = DAT_2c49b748;
  local_14 = *DAT_2c49b744;
  piVar7 = (int *)0x0;
  uVar8 = *DAT_2c49b748;
  if (param_1 == 0x400) {
    FUN_2c648600(DAT_2c49b774,*DAT_2c49b770,uVar8);
LAB_2c49b6ca:
    if (*DAT_2c49b744 == local_14) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  if (param_2 == 0) {
    param_1 = param_1 | uVar8;
    *DAT_2c49b748 = param_1;
    piVar7 = DAT_2c49b758;
    if (uVar8 != param_1) goto LAB_2c49b646;
    if (*DAT_2c49b758 != 0) goto LAB_2c49b6ca;
    piVar6 = (int *)0x1;
    *DAT_2c49b758 = 1;
  }
  else {
    param_1 = uVar8 & ~param_1;
    *DAT_2c49b748 = param_1;
    piVar6 = DAT_2c49b758;
    if (uVar8 != param_1) {
LAB_2c49b646:
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1af,DAT_2c49b754,DAT_2c49b750,DAT_2c49b74c,param_1);
    }
    if (((param_1 == 0) != (uVar8 != 0)) && (*DAT_2c49b758 != 0)) goto LAB_2c49b6ca;
    *DAT_2c49b758 = 1;
    if (param_1 == 0) {
      iVar4 = FUN_2c49b318(0x1d,&local_15,piVar6,0);
      if ((iVar4 == 0) && ((char)local_15 < '\0')) {
        local_15 = local_15 & 0x7f;
        iVar4 = FUN_2c49b2c0(0x1d);
      }
      goto LAB_2c49b692;
    }
  }
  iVar4 = FUN_2c49b318(0x1d,&local_15,piVar6,piVar7);
  if ((iVar4 == 0) && (-1 < (char)local_15)) {
    local_15 = local_15 | 0x80;
    iVar4 = FUN_2c49b2c0(0x1d);
  }
LAB_2c49b692:
  uVar3 = DAT_2c49b76c;
  uVar8 = *puVar2;
  uVar1 = DAT_2c49b75c;
  if (uVar8 != 0) {
    uVar1 = DAT_2c49b760;
  }
  uVar5 = DAT_2c49b764;
  if (iVar4 != 0) {
    uVar5 = DAT_2c49b768;
  }
  *DAT_2c49b770 = uVar8 == 0;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x1bb,DAT_2c49b754,DAT_2c49b750,uVar3,uVar1,uVar5,uVar8);
}

