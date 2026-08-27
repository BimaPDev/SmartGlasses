/* FUN_2c543d78 @ 0x2c543d78 */

void FUN_2c543d78(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  
  piVar1 = DAT_2c543e94;
  iVar4 = *(int *)(param_2 + 4);
  local_1c = *DAT_2c543e90;
  local_20 = param_1;
  if (iVar4 == param_1[1]) {
    FUN_2c674268(*param_1,0,iVar4 << 2);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[5] = uVar3;
    local_24 = param_1[2];
    param_1[2] = 0;
    FUN_2c543af4(param_1,param_2,&local_24);
  }
  else {
    puVar5 = (undefined4 *)*param_1;
    if (iVar4 == 1) {
      puVar2 = param_1 + 6;
      *puVar2 = 0;
    }
    else {
      if (*DAT_2c543e94 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puVar2 = (undefined4 *)FUN_2c47245c(0,iVar4 << 2);
      FUN_2c674268(puVar2,0,iVar4 << 2);
    }
    *param_1 = puVar2;
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[5] = uVar3;
    local_24 = param_1[2];
    param_1[2] = 0;
    FUN_2c543af4(param_1,param_2,&local_24);
    if ((puVar5 != (undefined4 *)0x0) && (puVar5 != param_1 + 6)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puVar5);
    }
  }
  if (local_24 == 0) {
    if (*DAT_2c543e90 == local_1c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  if (*(int *)(local_24 + 0x1c) != local_24 + 0x24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(local_24 + 4) != local_24 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,local_24);
}

