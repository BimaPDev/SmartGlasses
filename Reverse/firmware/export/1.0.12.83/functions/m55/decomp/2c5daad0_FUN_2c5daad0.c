/* FUN_2c5daad0 @ 0x2c5daad0 */

void FUN_2c5daad0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  while (puVar1 = puVar4, puVar1 != puVar5) {
    puVar4 = puVar1 + 1;
    iVar2 = FUN_2c5d8bdc(*puVar1);
    if ((iVar2 != 1) && (iVar2 = FUN_2c5d8bdc(*puVar1), iVar2 != 0x7fffffff)) {
      uVar3 = FUN_2c5d8bdc(*puVar1);
      FUN_2c5daa20(param_1,uVar3,0);
    }
  }
  return;
}

