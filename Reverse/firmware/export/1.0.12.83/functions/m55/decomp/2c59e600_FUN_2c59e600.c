/* FUN_2c59e600 @ 0x2c59e600 */

uint * FUN_2c59e600(uint *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint local_34;
  int iStack_30;
  int local_2c;
  
  local_2c = *DAT_2c59e7a8;
  uVar1 = FUN_2c64ca5c(0x40,param_2,param_3,0);
  puVar8 = (undefined1 *)*param_3;
  iVar6 = uVar1 + 0x18;
  *(int *)(uVar1 + 0x10) = iVar6;
  if (puVar8 == (undefined1 *)0x0) goto LAB_2c59e796;
  uVar2 = FUN_2c66c4ec(puVar8);
  local_34 = uVar2;
  if (uVar2 < 0x10) {
    iVar4 = iVar6;
    if (uVar2 == 1) {
      *(undefined1 *)(uVar1 + 0x18) = *puVar8;
    }
    else if (uVar2 != 0) goto LAB_2c59e706;
  }
  else {
    iVar4 = FUN_2c65e908(uVar1 + 0x10,&local_34,0);
    *(int *)(uVar1 + 0x10) = iVar4;
    *(uint *)(uVar1 + 0x18) = local_34;
LAB_2c59e706:
    FUN_2c674668(iVar4,puVar8,uVar2);
    iVar4 = *(int *)(uVar1 + 0x10);
  }
  *(uint *)(uVar1 + 0x14) = local_34;
  *(undefined1 *)(iVar4 + local_34) = 0;
  puVar8 = (undefined1 *)param_3[1];
  iVar4 = uVar1 + 0x30;
  *(int *)(uVar1 + 0x28) = iVar4;
  if (puVar8 == (undefined1 *)0x0) {
LAB_2c59e796:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c59e7ac);
  }
  uVar2 = FUN_2c66c4ec(puVar8);
  local_34 = uVar2;
  if (uVar2 < 0x10) {
    iVar3 = iVar4;
    if (uVar2 == 1) {
      *(undefined1 *)(uVar1 + 0x30) = *puVar8;
      goto LAB_2c59e696;
    }
    if (uVar2 == 0) goto LAB_2c59e696;
  }
  else {
    iVar3 = FUN_2c65e908(uVar1 + 0x28,&local_34,0);
    *(int *)(uVar1 + 0x28) = iVar3;
    *(uint *)(uVar1 + 0x30) = local_34;
  }
  FUN_2c674668(iVar3,puVar8,uVar2);
  iVar3 = *(int *)(uVar1 + 0x28);
LAB_2c59e696:
  *(uint *)(uVar1 + 0x2c) = local_34;
  *(undefined1 *)(iVar3 + local_34) = 0;
  FUN_2c59e550(&local_34,param_2,uVar1 + 0x10);
  uVar2 = local_34;
  if (iStack_30 == 0) {
    if (iVar4 != *(int *)(uVar1 + 0x28)) {
      thunk_FUN_2c669588(*(int *)(uVar1 + 0x28),*(int *)(uVar1 + 0x30) + 1);
    }
    if (iVar6 != *(int *)(uVar1 + 0x10)) {
      thunk_FUN_2c669588(*(int *)(uVar1 + 0x10),*(int *)(uVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(uVar1,0x40);
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    if ((local_34 == 0) && (iStack_30 != param_2 + 4)) {
      uVar7 = *(uint *)(uVar1 + 0x14);
      uVar5 = *(uint *)(iStack_30 + 0x14);
      uVar2 = uVar7;
      if (uVar5 <= uVar7) {
        uVar2 = uVar5;
      }
      if ((uVar2 == 0) ||
         (uVar2 = FUN_2c66960c(*(undefined4 *)(uVar1 + 0x10),*(undefined4 *)(iStack_30 + 0x10)),
         uVar2 == 0)) {
        uVar2 = uVar7 - uVar5;
      }
      uVar2 = uVar2 >> 0x1f;
    }
    else {
      uVar2 = 1;
    }
    FUN_2c64e496(uVar2,uVar1,iStack_30,param_2 + 4);
    iVar6 = *(int *)(param_2 + 0x14);
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    *(int *)(param_2 + 0x14) = iVar6 + 1;
  }
  if (*DAT_2c59e7a8 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

