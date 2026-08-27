/* FUN_2c52b8e4 @ 0x2c52b8e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52b8e4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = _LAB_2c52b948;
  puVar3 = (undefined4 *)param_1[3];
  iVar2 = _LAB_2c52b948 + 0x60;
  param_1[-9] = _LAB_2c52b948;
  *param_1 = iVar2;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar3;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(puVar4);
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puVar4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar3,iVar2,iVar1,param_4);
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
  }
  iVar2 = _LAB_2c52b950;
  iVar1 = _LAB_2c52b94c;
  *param_1 = _LAB_2c52b94c;
  param_1[-9] = iVar2;
  if ((int *)param_1[-6] != param_1 + -4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1 + -9,iVar1,iVar2,param_4);
}

