/* FUN_2c5de488 @ 0x2c5de488 */

int FUN_2c5de488(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_48;
  int local_44 [2];
  int *local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_2c5de624;
  local_44[0] = 0;
  local_44[1] = 0;
  local_3c = (int *)0x0;
  uStack_38 = 0;
  local_34 = 0;
  local_30 = (undefined4 *)0x0;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  local_24 = 0;
  local_20 = 0;
  FUN_2c5ddc98(local_44,0,0);
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != *(int *)(param_1 + 0x14)) {
    do {
      iVar5 = *(int *)(param_1 + 0x28);
      iVar1 = iVar3;
      if (iVar5 == iVar3) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x30) + -4) + 0x200;
      }
      iVar4 = *(int *)(iVar1 + -4);
      local_48 = iVar4;
      iVar1 = FUN_2c66b624(param_2,*(undefined4 *)(iVar4 + 0xc));
      if (iVar1 == 0) {
        if (iVar5 == iVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,iVar5);
        }
        *(int *)(param_1 + 0x24) = iVar3 + -4;
        goto LAB_2c5de538;
      }
      if (local_2c == (int *)(local_24 + -4)) {
        FUN_2c5de330(local_44,&local_48);
      }
      else {
        *local_2c = iVar4;
        local_2c = local_2c + 1;
      }
      if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar3 = *(int *)(param_1 + 0x24) + -4;
      *(int *)(param_1 + 0x24) = iVar3;
    } while (*(int *)(param_1 + 0x14) != iVar3);
  }
  iVar4 = 0;
LAB_2c5de538:
  if (local_2c != local_3c) {
    do {
      piVar2 = local_2c;
      if (local_28 == local_2c) {
        piVar2 = (int *)(*(int *)(local_20 + -4) + 0x200);
      }
      local_48 = piVar2[-1];
      if (*(int **)(param_1 + 0x24) == (int *)(*(int *)(param_1 + 0x2c) + -4)) {
        FUN_2c5de330(param_1 + 0xc,&local_48);
      }
      else {
        **(int **)(param_1 + 0x24) = local_48;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
      }
      if (local_2c == local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      local_2c = local_2c + -1;
    } while (local_3c != local_2c);
  }
  if (local_44[0] == 0) {
    if (*DAT_2c5de624 != local_1c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return iVar4;
  }
  if ((undefined4 *)(local_20 + 4) <= local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,*local_30);
}

