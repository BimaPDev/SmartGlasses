/* FUN_2c53dfe0 @ 0x2c53dfe0 */

void FUN_2c53dfe0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_24;
  int iStack_20;
  uint local_1c;
  
  local_1c = *DAT_2c53e0c8;
  iVar1 = FUN_2c64ca5c(0x2c,param_2,param_3,0);
  piVar6 = (int *)*param_3;
  *(int *)(iVar1 + 0x10) = iVar1 + 0x18;
  if ((int *)*piVar6 == piVar6 + 2) {
    iVar9 = piVar6[3];
    iVar4 = piVar6[4];
    iVar5 = piVar6[5];
    *(int *)(iVar1 + 0x18) = piVar6[2];
    *(int *)(iVar1 + 0x1c) = iVar9;
    *(int *)(iVar1 + 0x20) = iVar4;
    *(int *)(iVar1 + 0x24) = iVar5;
  }
  else {
    *(int **)(iVar1 + 0x10) = (int *)*piVar6;
    *(int *)(iVar1 + 0x18) = piVar6[2];
  }
  *piVar6 = (int)(piVar6 + 2);
  *(int *)(iVar1 + 0x14) = piVar6[1];
  piVar6[1] = 0;
  *(undefined1 *)(piVar6 + 2) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_2c53de90(&local_24,param_1,param_2,iVar1 + 0x10);
  if (iStack_20 == 0) {
    if (iVar1 + 0x18 != *(int *)(iVar1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
    uVar3 = extraout_r1_00;
    goto LAB_2c53e050;
  }
  if ((local_24 == 0) && (iStack_20 != param_1 + 4)) {
    uVar8 = *(uint *)(iVar1 + 0x14);
    uVar7 = *(uint *)(iStack_20 + 0x14);
    uVar2 = uVar8;
    if (uVar7 <= uVar8) {
      uVar2 = uVar7;
    }
    if (uVar2 == 0) {
LAB_2c53e086:
      uVar2 = uVar8 - uVar7;
    }
    else {
      uVar2 = FUN_2c66960c(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iStack_20 + 0x10));
      if (uVar2 == 0) goto LAB_2c53e086;
    }
    uVar2 = uVar2 >> 0x1f;
  }
  else {
    uVar2 = 1;
  }
  FUN_2c64e496(uVar2,iVar1,iStack_20,param_1 + 4);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_24 = iVar1;
  uVar3 = extraout_r1;
LAB_2c53e050:
  if ((*DAT_2c53e0c8 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(local_24,uVar3,*DAT_2c53e0c8 ^ local_1c,0);
}

