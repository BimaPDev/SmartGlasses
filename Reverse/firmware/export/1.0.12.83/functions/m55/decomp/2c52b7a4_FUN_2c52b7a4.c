/* FUN_2c52b7a4 @ 0x2c52b7a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c52b7a4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_r4;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)param_1[3];
  iVar2 = _LAB_2c52b810 + 0x60;
  param_1[-9] = _LAB_2c52b810;
  *param_1 = iVar2;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar3;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(puVar4);
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puVar4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar3);
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))
              (piVar1,&LAB_2c52b874,iVar2,*(code **)(*piVar1 + 0xc),param_4,unaff_r4 + -0x3c);
  }
  iVar2 = _LAB_2c52b818;
  *param_1 = _LAB_2c52b814;
  param_1[-9] = iVar2;
  if ((int *)param_1[-6] != param_1 + -4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1 + -9;
}

