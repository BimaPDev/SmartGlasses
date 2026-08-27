/* FUN_2c5da7cc @ 0x2c5da7cc */

undefined4 FUN_2c5da7cc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  puVar6 = *(undefined4 **)(param_1 + 0x14);
  iVar2 = (int)puVar6 - (int)puVar3;
  if (0 < iVar2 >> 4) {
    puVar5 = puVar3 + (iVar2 >> 4) * 4;
    do {
      iVar2 = FUN_2c5d8bdc(*puVar3);
      puVar4 = puVar3;
      if (param_2 == iVar2) goto LAB_2c5da816;
      iVar2 = FUN_2c5d8bdc(puVar3[1]);
      if (param_2 == iVar2) {
        puVar4 = puVar3 + 1;
        goto LAB_2c5da816;
      }
      iVar2 = FUN_2c5d8bdc(puVar3[2]);
      if (param_2 == iVar2) {
        puVar4 = puVar3 + 2;
        goto LAB_2c5da816;
      }
      iVar2 = FUN_2c5d8bdc(puVar3[3]);
      if (param_2 == iVar2) {
        puVar4 = puVar3 + 3;
        goto LAB_2c5da816;
      }
      puVar3 = puVar3 + 4;
    } while (puVar5 != puVar3);
    iVar2 = (int)puVar6 - (int)puVar3;
  }
  iVar2 = iVar2 >> 2;
  if (iVar2 == 2) {
LAB_2c5da852:
    iVar2 = FUN_2c5d8bdc(*puVar3);
    puVar4 = puVar3;
    if (param_2 == iVar2) goto LAB_2c5da816;
    puVar3 = puVar3 + 1;
  }
  else {
    if (iVar2 == 3) {
      iVar2 = FUN_2c5d8bdc(*puVar3);
      puVar4 = puVar3;
      if (param_2 == iVar2) goto LAB_2c5da816;
      puVar3 = puVar3 + 1;
      goto LAB_2c5da852;
    }
    puVar4 = puVar6;
    if (iVar2 != 1) goto LAB_2c5da816;
  }
  iVar2 = FUN_2c5d8bdc(*puVar3);
  puVar4 = puVar3;
  if (param_2 != iVar2) {
    puVar4 = puVar6;
  }
LAB_2c5da816:
  if (*(undefined4 **)(param_1 + 0x14) == puVar4) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar4;
  }
  return uVar1;
}

