/* FUN_100f9dd4 @ 0x100f9dd4 */

undefined4 FUN_100f9dd4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_r2;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    piVar2 = (int *)(param_1 + 0x14U);
    do {
      piVar1 = piVar2;
      if ((int *)(param_1 + 0x14U) + iVar4 <= piVar1) {
        return 0;
      }
      iVar3 = FUN_1011ea18(*(undefined4 *)(*(int *)*piVar1 + 8),param_2,param_3,*(int *)*piVar1,
                           param_4);
      piVar2 = piVar1 + 1;
      param_3 = extraout_r2;
    } while (iVar3 != 0);
    if ((int *)*piVar1 != (int *)0x0) {
      return *(undefined4 *)(*(int *)*piVar1 + 0x14);
    }
  }
  return 0;
}

