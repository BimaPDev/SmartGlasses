/* FUN_2c5bd000 @ 0x2c5bd000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c5bd000(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int extraout_r2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  int *piVar4;
  
  piVar4 = _LAB_2c5bd1b0;
  uVar3 = 0;
  param_1[9] = 0x3f800000;
  iVar2 = *piVar4;
  param_1[6] = 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (int)(param_1 + 0xb);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (iVar2 == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
    iVar2 = extraout_r2;
    uVar3 = extraout_r3;
  }
  iVar2 = FUN_2c47245c(0,1,iVar2,uVar3,param_4);
  iVar1 = *param_1;
  *param_1 = iVar2;
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*piVar4 == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
  }
  iVar2 = FUN_2c47245c(0,0x30);
  FUN_2c674268(iVar2,0,0x30);
  *(undefined1 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 4) = iVar2 + 0xc;
  *(int *)(iVar2 + 0x24) = iVar2 + 0x24;
  *(int *)(iVar2 + 0x28) = iVar2 + 0x24;
  iVar1 = param_1[1];
  param_1[1] = iVar2;
  if (iVar1 != 0) {
    piVar4 = *(int **)(iVar1 + 0x24);
    if (piVar4 == (int *)(iVar1 + 0x24)) {
      if (*(int *)(iVar1 + 4) != iVar1 + 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,iVar1);
    }
    if ((int *)piVar4[9] != piVar4 + 0xb) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((int *)piVar4[3] != piVar4 + 5) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar4);
  }
  if (*piVar4 == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
  }
  iVar2 = FUN_2c47245c(0,1);
  iVar1 = param_1[2];
  param_1[2] = iVar2;
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*piVar4 == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
  }
  iVar2 = FUN_2c47245c(0,1);
  FUN_2c5bc96c();
  iVar1 = param_1[3];
  param_1[3] = iVar2;
  if (iVar1 != 0) {
    FUN_2c5bc9ac(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar1);
  }
  if (*piVar4 == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
  }
  iVar2 = FUN_2c47245c(0,0xc0);
  func_0x2c5bb008();
  piVar4 = (int *)param_1[4];
  param_1[4] = iVar2;
  if (piVar4 != (int *)0x0) {
    if ((int *)piVar4[0x14] != piVar4 + 0x16) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((int *)piVar4[0xe] != piVar4 + 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((int *)piVar4[6] != piVar4 + 8) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((int *)*piVar4 != piVar4 + 2) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar4);
  }
  return param_1;
}

