/* FUN_2c612838 @ 0x2c612838 */

int FUN_2c612838(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_2c62c3b0(param_2,4);
  if ((param_1 != 0) &&
     (((iVar2 = FUN_2c614f58(param_1), iVar2 != 0 || (*(int *)(param_1 + 8) != 0)) &&
      (puVar3 = (undefined4 *)FUN_2c62ca10(DAT_2c612894), uVar1 = DAT_2c612894,
      puVar3 != (undefined4 *)0x0)))) {
    iVar2 = 0;
    while (((code *)*puVar3 == (code *)0x0 ||
           (iVar2 = (*(code *)*puVar3)(puVar3,param_1,param_2), iVar2 != 1))) {
      puVar3 = (undefined4 *)FUN_2c62ca20(uVar1,puVar3);
      if (puVar3 == (undefined4 *)0x0) {
        return iVar2;
      }
    }
    return 1;
  }
  return 0;
}

