/* FUN_2c62c678 @ 0x2c62c678 */

void FUN_2c62c678(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[1] != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      iVar2 = *param_1 + iVar3;
      puVar1 = (undefined4 *)(*param_1 + iVar3);
      iVar3 = iVar3 + 0x48;
      FUN_2c62e838(*puVar1,*(undefined4 *)(iVar2 + 4));
    } while (uVar4 < (uint)param_1[1]);
    return;
  }
  return;
}

