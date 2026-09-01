/* FUN_101918d6 @ 0x101918d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101918d6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  int iVar3;
  
  iVar2 = 3;
  do {
    (**(code **)(_DAT_000001a4 + 0x2c))
              (param_1,0x75,param_3,*(code **)(_DAT_000001a4 + 0x2c),param_4);
    FUN_10192454(0x1e);
    iVar3 = 100;
    do {
      FUN_10192454(5);
      iVar1 = (**(code **)(_DAT_000001a4 + 0xc))(param_1,5);
      if (-1 < iVar1 << 0x1f) {
        return;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = iVar2 + -1;
    param_3 = extraout_r2;
  } while (iVar2 != 0);
  return;
}

