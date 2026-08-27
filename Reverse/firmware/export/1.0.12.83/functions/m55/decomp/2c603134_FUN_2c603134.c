/* FUN_2c603134 @ 0x2c603134 */

void FUN_2c603134(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_2c6041fc();
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      uVar2 = *(undefined4 *)(**(int **)(param_1 + 8) + iVar3 * 4);
      iVar3 = iVar3 + 1;
      FUN_2c607df0(uVar2);
      FUN_2c602340(uVar2,0x2a,0);
      FUN_2c607df0(uVar2);
      FUN_2c603134(uVar2);
    } while (iVar1 != iVar3);
  }
  return;
}

