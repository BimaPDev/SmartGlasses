/* FUN_2c55cf24 @ 0x2c55cf24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c55cf24(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = _LAB_2c55cf8c;
  uVar1 = _LAB_2c55cf88;
  iVar4 = param_1[9];
  iVar5 = param_1[10];
  *param_1 = _LAB_2c55cf88;
  param_1[8] = uVar2;
  if (iVar4 != iVar5) {
    iVar3 = iVar4 + 8;
    do {
      iVar4 = iVar4 + 0x18;
      bVar6 = iVar3 != *(int *)(iVar3 + -8);
      iVar3 = iVar3 + 0x18;
      if (bVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
    } while (iVar5 != iVar4);
    iVar5 = param_1[9];
  }
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar5,uVar1,uVar2,param_4);
  }
  if (param_1[7] != 0) {
    FUN_2c58d410(param_1 + 7);
  }
  if (param_1[6] != 0) {
    FUN_2c58d410(param_1 + 6);
  }
  if (param_1[5] != 0) {
    FUN_2c58d410(param_1 + 5);
  }
  return param_1;
}

