/* FUN_2c6473bc @ 0x2c6473bc */

undefined4 * FUN_2c6473bc(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    FUN_2c6439e4(0,0);
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(param_1 + 0x14);
    do {
      ExclusiveAccess(puVar3);
      puVar2 = (undefined4 *)*puVar3;
      if (puVar2 == (undefined4 *)0x0) {
        ClearExclusiveLocal();
        goto LAB_2c6473dc;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *puVar2;
LAB_2c6473dc:
    if (puVar2 != (undefined4 *)0x0) {
      piVar4 = (int *)(param_1 + 4);
      do {
        ExclusiveAccess(piVar4);
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + 1;
    }
    FUN_2c6439e4(param_1);
  }
  return puVar2;
}

