/* FUN_2c629a76 @ 0x2c629a76 */

int FUN_2c629a76(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x10);
  iVar1 = FUN_2c62992c(piVar2);
  if (iVar1 != 0) {
    if ((*(byte *)((int)piVar2 + 0x13) & 0xc0) == 0) {
      return *piVar2 + *(int *)(piVar2[1] + iVar1 * 0x10);
    }
  }
  return 0;
}

