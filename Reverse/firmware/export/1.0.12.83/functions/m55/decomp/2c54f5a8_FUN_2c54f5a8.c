/* FUN_2c54f5a8 @ 0x2c54f5a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54f5a8(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = FUN_2c48e738();
    FUN_2c48e5b4(uVar2,_LAB_2c54f62c,*(undefined4 *)(param_1 + 4));
    uVar3 = FUN_2c48e67c(uVar2,_LAB_2c54f630);
    pcVar1 = _LAB_2c54f634;
    puVar5 = *(undefined4 **)(param_1 + 0x1c);
    puVar6 = *(undefined4 **)(param_1 + 0x20);
    while (puVar5 != puVar6) {
      if (*(code **)*puVar5 == pcVar1) {
        if ((((puVar5[0x20] == 0) || (puVar5[0x1a] == 0)) || (puVar5[0x26] == 0)) ||
           (puVar5[0x2b] == -1)) goto LAB_2c54f616;
        iVar4 = FUN_2c54f490(puVar5);
      }
      else {
        iVar4 = (**(code **)*puVar5)();
      }
      puVar5 = puVar5 + 0x2f;
      if (iVar4 == 0) {
LAB_2c54f616:
        FUN_2c48dea0(uVar2);
        FUN_2c48dea0(uVar3);
        return 0;
      }
      FUN_2c48e444(uVar3);
    }
  }
  return uVar2;
}

