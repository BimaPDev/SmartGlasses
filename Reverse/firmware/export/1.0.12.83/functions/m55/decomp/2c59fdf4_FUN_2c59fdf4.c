/* FUN_2c59fdf4 @ 0x2c59fdf4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c59fdf4(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = *_LAB_2c59feec;
  iVar1 = FUN_2c64ca5c(0x2c,param_2,param_3,0);
  piVar3 = (int *)*param_3;
  *(int *)(iVar1 + 0x10) = iVar1 + 0x18;
  if (piVar3 == param_3 + 2) {
    *(int *)(iVar1 + 0x18) = param_3[2];
    *(int *)(iVar1 + 0x1c) = param_3[3];
    *(int *)(iVar1 + 0x20) = param_3[4];
    *(int *)(iVar1 + 0x24) = param_3[5];
  }
  else {
    *(int **)(iVar1 + 0x10) = piVar3;
    *(int *)(iVar1 + 0x18) = param_3[2];
  }
  *param_3 = (int)(param_3 + 2);
  iVar4 = param_3[1];
  *(undefined1 *)(param_3 + 2) = 0;
  param_3[1] = 0;
  iVar5 = param_3[6];
  *(int *)(iVar1 + 0x14) = iVar4;
  *(char *)(iVar1 + 0x28) = (char)iVar5;
  FUN_2c59f038(&iStack_2c,param_2,iVar1 + 0x10);
  if (iStack_28 == 0) {
    if (iVar1 + 0x18 != *(int *)(iVar1 + 0x10)) {
      thunk_FUN_2c669588(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
    *param_1 = iStack_2c;
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_2c59fe6c;
  }
  if ((iStack_2c == 0) && (iStack_28 != param_2 + 4)) {
    uVar7 = *(uint *)(iVar1 + 0x14);
    uVar6 = *(uint *)(iStack_28 + 0x14);
    uVar2 = uVar7;
    if (uVar6 <= uVar7) {
      uVar2 = uVar6;
    }
    if (uVar2 == 0) {
LAB_2c59fea6:
      uVar2 = uVar7 - uVar6;
    }
    else {
      uVar2 = FUN_2c66960c(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iStack_28 + 0x10));
      if (uVar2 == 0) goto LAB_2c59fea6;
    }
    uVar2 = uVar2 >> 0x1f;
  }
  else {
    uVar2 = 1;
  }
  FUN_2c64e496(uVar2,iVar1,iStack_28,param_2 + 4);
  iVar5 = *(int *)(param_2 + 0x14);
  *param_1 = iVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  *(int *)(param_2 + 0x14) = iVar5 + 1;
LAB_2c59fe6c:
  if (*_LAB_2c59feec == iStack_24) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

