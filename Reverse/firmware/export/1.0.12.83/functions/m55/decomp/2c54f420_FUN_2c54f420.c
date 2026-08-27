/* FUN_2c54f420 @ 0x2c54f420 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54f420(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = FUN_2c48e738();
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_2c48e5b4(uVar1,_LAB_2c54f484,*(undefined4 *)(param_1 + 0x1c),*(int *)(param_1 + 0x20),
                 param_4);
    FUN_2c48e5b4(uVar1,_LAB_2c54f488,*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x34)) {
      uVar2 = FUN_2c48e67c(uVar1,_LAB_2c54f48c);
      puVar5 = *(undefined4 **)(param_1 + 0x38);
      for (puVar4 = *(undefined4 **)(param_1 + 0x34); puVar5 != puVar4; puVar4 = puVar4 + 6) {
        uVar3 = FUN_2c48e6c0(*puVar4);
        FUN_2c48e444(uVar2,uVar3);
      }
    }
    return uVar1;
  }
  FUN_2c48dea0(uVar1);
  return 0;
}

