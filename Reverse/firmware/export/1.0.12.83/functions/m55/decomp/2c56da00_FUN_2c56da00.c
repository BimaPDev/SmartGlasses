/* FUN_2c56da00 @ 0x2c56da00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56da00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = _LAB_2c56da9c;
  iVar4 = param_1[0x12];
  iVar6 = param_1[0x13];
  iVar2 = _LAB_2c56da9c + 0x24;
  *param_1 = _LAB_2c56da9c;
  param_1[2] = iVar2;
  if (iVar4 != iVar6) {
    iVar5 = iVar4 + 0x20;
    do {
      if (iVar5 != *(int *)(iVar4 + 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar1 = (int *)(iVar5 + -0x20);
      iVar3 = iVar4 + 8;
      iVar5 = iVar5 + 0x38;
      iVar4 = iVar4 + 0x38;
      if (*piVar1 != iVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
    } while (iVar6 != iVar4);
    iVar6 = param_1[0x12];
  }
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar6,iVar2,iVar3,param_4);
  }
  if ((int *)param_1[0xc] != param_1 + 0xe) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[6] != param_1 + 8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 0xc))();
  }
  if (param_1[4] != 0) {
    FUN_2c58d410(param_1 + 4);
  }
  if (param_1[3] != 0) {
    FUN_2c58d410(param_1 + 3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1);
}

