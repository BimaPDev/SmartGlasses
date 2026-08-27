/* FUN_2c52b87e @ 0x2c52b87e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52b87e(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)param_1[0xc];
  *param_1 = param_4;
  param_1[9] = param_4 + 0x60;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(puVar3);
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puVar3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar2);
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0xc))();
  }
  iVar1 = _LAB_2c52b8e0;
  param_1[9] = _LAB_2c52b8dc;
  *param_1 = iVar1;
  if ((int *)param_1[3] != param_1 + 5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1);
}

