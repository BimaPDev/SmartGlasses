/* FUN_2c57dd0c @ 0x2c57dd0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c57dd0c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  *param_1 = _LAB_2c57dd78;
  FUN_2c57dc74();
  uVar1 = _LAB_2c57dd7c;
  piVar6 = (int *)param_1[2];
  if (piVar6 != (int *)0x0) {
    iVar2 = *piVar6;
    iVar5 = piVar6[1];
    if (iVar2 != iVar5) {
      iVar4 = iVar2 + 0xc;
      do {
        *(undefined4 *)(iVar4 + -0xc) = uVar1;
        iVar3 = iVar2 + 0x1c;
        bVar7 = iVar4 != *(int *)(iVar2 + 4);
        iVar4 = iVar4 + 0x1c;
        if (bVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        iVar2 = iVar3;
      } while (iVar5 != iVar3);
      iVar5 = *piVar6;
    }
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,iVar5);
    }
    thunk_FUN_2c669588(piVar6,0xc);
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
  }
  return param_1;
}

