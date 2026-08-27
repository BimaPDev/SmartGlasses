/* FUN_2c5ce8fc @ 0x2c5ce8fc */

void FUN_2c5ce8fc(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_3c;
  int iStack_38;
  undefined1 *local_34 [2];
  undefined1 auStack_2c [16];
  int local_1c;
  
  iVar4 = *param_2;
  uVar3 = param_2[1];
  local_1c = *DAT_2c5ce9c4;
  if ((uVar3 < 6) &&
     ((uVar3 == 0 ||
      ((iVar1 = FUN_2c66960c(iVar4,DAT_2c5ce9c8,uVar3,0), iVar1 == 0 && (uVar3 == 5)))))) {
LAB_2c5ce916:
    iVar4 = -1;
  }
  else {
    if (uVar3 < 3) {
      iVar1 = iVar4 + uVar3;
    }
    else {
      iVar1 = iVar4 + 2;
    }
    local_3c = 0;
    iStack_38 = 0;
    local_34[0] = auStack_2c;
    FUN_2c5ce264(local_34,iVar4,iVar1);
    iVar4 = FUN_2c5d6924(local_34[0],&local_3c);
    if (local_34[0] != auStack_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((uint)param_2[1] < 3) {
      iVar4 = FUN_2c65868c(DAT_2c5ce9d0,DAT_2c5ce9cc,3);
      goto LAB_2c5ce9be;
    }
    uVar3 = param_2[1] - 3;
    iVar1 = *param_2 + 3;
    if (uVar3 < 3) {
      iVar2 = iVar1 + uVar3;
    }
    else {
      iVar2 = *param_2 + 5;
    }
    local_34[0] = auStack_2c;
    FUN_2c5ce264(local_34,iVar1,iVar2);
    iVar1 = FUN_2c5d6924(local_34[0],&iStack_38);
    if (local_34[0] != auStack_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((iVar4 == 0) || (iVar1 == 0)) goto LAB_2c5ce916;
    iVar4 = iStack_38 + local_3c * 0x3c;
  }
  if (*DAT_2c5ce9c4 == local_1c) {
    return;
  }
LAB_2c5ce9be:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar4);
}

