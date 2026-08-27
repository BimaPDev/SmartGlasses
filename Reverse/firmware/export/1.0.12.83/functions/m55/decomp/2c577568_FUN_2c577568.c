/* FUN_2c577568 @ 0x2c577568 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c577568(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  uVar2 = _LAB_2c577600;
  uVar1 = _LAB_2c5775fc;
  iVar7 = param_1[4];
  iVar8 = param_1[5];
  *param_1 = _LAB_2c5775fc;
  param_1[3] = uVar2;
  uVar3 = _LAB_2c577604;
  if (iVar7 != iVar8) {
    iVar6 = iVar7 + 0xc;
    do {
      *(undefined4 *)(iVar6 + -0xc) = uVar3;
      iVar5 = *(int *)(iVar6 + 0x10);
      iVar9 = *(int *)(iVar6 + 0x14);
      if (iVar5 != iVar9) {
        iVar4 = iVar5 + 8;
        do {
          iVar5 = iVar5 + 0x18;
          bVar10 = *(int *)(iVar4 + -8) != iVar4;
          iVar4 = iVar4 + 0x18;
          if (bVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
        } while (iVar9 != iVar5);
        iVar9 = *(int *)(iVar6 + 0x10);
      }
      if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,iVar9,uVar1,uVar2,param_4);
      }
      if (iVar6 != *(int *)(iVar6 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar7 = iVar7 + 0x28;
      iVar6 = iVar6 + 0x28;
    } while (iVar8 != iVar7);
    iVar8 = param_1[4];
  }
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar8,uVar1,uVar2,param_4);
  }
  if (param_1[2] != 0) {
    FUN_2c58d410(param_1 + 2);
  }
  return param_1;
}

