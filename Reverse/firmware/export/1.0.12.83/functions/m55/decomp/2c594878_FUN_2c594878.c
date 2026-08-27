/* FUN_2c594878 @ 0x2c594878 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c594878(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = _LAB_2c594950;
  func_0x2c52a9c0(*(undefined1 *)(param_1 + 0x13));
  param_1[0xb] = 0;
  uVar1 = extraout_r2;
  if (param_1[0x16] != 0) {
    FUN_2c620f94();
    param_1[0x16] = 0;
    uVar1 = extraout_r2_00;
  }
  iVar2 = param_1[0xf];
  if (iVar2 != 0) {
    FUN_2c54794c(iVar2);
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar2);
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 4))();
    param_1[0x10] = 0;
    uVar1 = extraout_r2_01;
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 4))();
    param_1[0x11] = 0;
    uVar1 = extraout_r2_02;
  }
  iVar2 = param_1[0x12];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x14) != iVar2 + 0x1c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar2,uVar1,iVar2 + 0x1c,param_4);
  }
  if (param_1[0xe] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (param_1[0xd] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar3 = (int *)param_1[7];
  if ((piVar3 != (int *)0x0) && (iVar2 = piVar3[1], piVar3[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*piVar3 + 8))(piVar3);
    iVar2 = piVar3[2];
    piVar3[2] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
    }
  }
  if (param_1[5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (param_1[4] != 0) {
    FUN_2c58d410(param_1 + 4);
  }
  if (param_1[2] != 0) {
    FUN_2c58d410(param_1 + 2);
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
  }
  return param_1;
}

