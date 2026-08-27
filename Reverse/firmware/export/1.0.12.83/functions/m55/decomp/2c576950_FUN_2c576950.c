/* FUN_2c576950 @ 0x2c576950 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c576950(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  *param_1 = _LAB_2c5769fc;
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 0xc))();
  }
  iVar5 = param_1[10];
  iVar6 = param_1[0xb];
  param_1[9] = _LAB_2c576a00;
  uVar1 = _LAB_2c576a08;
  if (iVar5 != iVar6) {
    iVar4 = iVar5 + 0xc;
    do {
      *(undefined4 *)(iVar4 + -0xc) = uVar1;
      iVar3 = *(int *)(iVar4 + 0x10);
      iVar7 = *(int *)(iVar4 + 0x14);
      if (iVar3 != iVar7) {
        iVar2 = iVar3 + 8;
        do {
          iVar3 = iVar3 + 0x18;
          bVar8 = iVar2 != *(int *)(iVar2 + -8);
          iVar2 = iVar2 + 0x18;
          if (bVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
        } while (iVar7 != iVar3);
        iVar7 = *(int *)(iVar4 + 0x10);
      }
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,iVar7);
      }
      if (iVar4 != *(int *)(iVar4 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar5 = iVar5 + 0x28;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 != iVar5);
    iVar6 = param_1[10];
  }
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar6);
  }
  *param_1 = _LAB_2c576a04;
  if ((undefined4 *)param_1[3] != param_1 + 5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1;
}

