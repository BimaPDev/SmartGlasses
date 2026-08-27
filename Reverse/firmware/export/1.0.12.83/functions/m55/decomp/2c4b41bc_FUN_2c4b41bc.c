/* FUN_2c4b41bc @ 0x2c4b41bc */

void FUN_2c4b41bc(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  piVar1 = DAT_2c4b420c;
  puVar2 = (undefined4 *)*DAT_2c4b420c;
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  *puVar2 = 0;
  puVar3 = (undefined4 *)puVar2[8];
  puVar4 = (undefined4 *)*puVar3;
  if (puVar3 != puVar2 + 8) {
    do {
      puVar2 = puVar4;
      if ((undefined4 *)puVar3[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar3[1] = puVar4;
        puVar2 = (undefined4 *)*puVar3;
      }
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = puVar3[1];
      }
      FUN_2c4b4990(puVar3);
      bVar5 = puVar4 != (undefined4 *)(*piVar1 + 0x20);
      puVar3 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    } while (bVar5);
  }
  FUN_2c4b4990();
  return;
}

