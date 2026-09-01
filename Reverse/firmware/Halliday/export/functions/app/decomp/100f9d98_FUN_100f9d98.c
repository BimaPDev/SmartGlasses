/* FUN_100f9d98 @ 0x100f9d98 */

undefined4 FUN_100f9d98(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r2;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    puVar2 = (undefined4 *)(param_1 + 0x14U);
    while (puVar1 = puVar2, puVar1 < (undefined4 *)(param_1 + 0x14U) + iVar4) {
      iVar3 = FUN_1011ea18(*(undefined4 *)(*(int *)*puVar1 + 8),param_2,param_3,*(int *)*puVar1,
                           param_4);
      puVar2 = puVar1 + 1;
      param_3 = extraout_r2;
      if (iVar3 == 0) {
        return *puVar1;
      }
    }
  }
  return 0;
}

