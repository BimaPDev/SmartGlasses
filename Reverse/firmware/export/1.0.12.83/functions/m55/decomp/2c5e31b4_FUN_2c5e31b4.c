/* FUN_2c5e31b4 @ 0x2c5e31b4 */

undefined4 FUN_2c5e31b4(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(int *)(DAT_2c5e31f0 + 0x7c8) != 0) {
    iVar1 = 0;
    iVar2 = DAT_2c5e31f0;
    do {
      iVar1 = iVar1 + 1;
      if (*(char *)(iVar2 + 8) == param_1) {
        uVar3 = *(undefined4 *)(iVar2 + 0x14);
        *param_2 = *(undefined4 *)(iVar2 + 0x10);
        param_2[1] = uVar3;
        return 1;
      }
      iVar2 = iVar2 + 0x10;
    } while (iVar1 != *(int *)(DAT_2c5e31f0 + 0x7c8));
    return 0;
  }
  return 0;
}

