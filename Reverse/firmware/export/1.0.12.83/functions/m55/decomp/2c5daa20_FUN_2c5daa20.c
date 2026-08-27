/* FUN_2c5daa20 @ 0x2c5daa20 */

void FUN_2c5daa20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  iVar1 = (int)puVar5 - (int)puVar2;
  if (0 < iVar1 >> 4) {
    puVar4 = puVar2 + (iVar1 >> 4) * 4;
    do {
      iVar1 = FUN_2c5d8bdc(*puVar2);
      puVar3 = puVar2;
      if (param_2 == iVar1) goto LAB_2c5daa6c;
      iVar1 = FUN_2c5d8bdc(puVar2[1]);
      if (param_2 == iVar1) {
        puVar3 = puVar2 + 1;
        goto LAB_2c5daa6c;
      }
      iVar1 = FUN_2c5d8bdc(puVar2[2]);
      if (param_2 == iVar1) {
        puVar3 = puVar2 + 2;
        goto LAB_2c5daa6c;
      }
      iVar1 = FUN_2c5d8bdc(puVar2[3]);
      if (param_2 == iVar1) {
        puVar3 = puVar2 + 3;
        goto LAB_2c5daa6c;
      }
      puVar2 = puVar2 + 4;
    } while (puVar4 != puVar2);
    iVar1 = (int)puVar5 - (int)puVar2;
  }
  iVar1 = iVar1 >> 2;
  if (iVar1 == 2) {
LAB_2c5daab2:
    iVar1 = FUN_2c5d8bdc(*puVar2);
    puVar3 = puVar2;
    if (param_2 == iVar1) goto LAB_2c5daa6c;
    puVar2 = puVar2 + 1;
  }
  else {
    if (iVar1 == 3) {
      iVar1 = FUN_2c5d8bdc(*puVar2);
      puVar3 = puVar2;
      if (param_2 == iVar1) goto LAB_2c5daa6c;
      puVar2 = puVar2 + 1;
      goto LAB_2c5daab2;
    }
    puVar3 = puVar5;
    if (iVar1 != 1) goto LAB_2c5daa6c;
  }
  iVar1 = FUN_2c5d8bdc(*puVar2);
  puVar3 = puVar2;
  if (param_2 != iVar1) {
    puVar3 = puVar5;
  }
LAB_2c5daa6c:
  if (*(undefined4 **)(param_1 + 0x14) == puVar3) {
    return;
  }
  FUN_2c5d8850(*puVar3,1,param_3,param_4);
  return;
}

