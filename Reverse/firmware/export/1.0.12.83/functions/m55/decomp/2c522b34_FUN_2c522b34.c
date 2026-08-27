/* FUN_2c522b34 @ 0x2c522b34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c522b34(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_2c5d78f0();
  func_0x2c5d7a44(uVar1,_LAB_2c522c34);
  uVar1 = FUN_2c5d78f0();
  func_0x2c5d7a44(uVar1,_LAB_2c522c38);
  uVar1 = FUN_2c5d78f0();
  func_0x2c5d7a44(uVar1,_LAB_2c522c3c);
  if (param_1[0x24] != 0) {
    FUN_2c5eda50();
  }
  if (param_1[0x25] != 0) {
    FUN_2c620f94();
    param_1[0x25] = 0;
  }
  if (param_1[0x26] != 0) {
    FUN_2c620f94();
    param_1[0x26] = 0;
  }
  uVar1 = _LAB_2c522c40;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[3] = 1;
  param_1[4] = 4;
  FUN_2c52270c(param_1 + 6,0,param_1[7],uVar1,0);
  FUN_2c52270c(param_1 + 0xc,0,param_1[0xd],_LAB_2c522c40,0);
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  if ((int *)param_1[0x2e] != param_1 + 0x30) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[0x28] != param_1 + 0x2a) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[0x1e] != param_1 + 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[0x18] != param_1 + 0x1a) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[0x12] != param_1 + 0x14) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[0xc] != param_1 + 0xe) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[6] != param_1 + 8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1;
}

