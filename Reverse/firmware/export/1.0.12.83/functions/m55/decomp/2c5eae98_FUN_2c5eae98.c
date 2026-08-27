/* FUN_2c5eae98 @ 0x2c5eae98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5eae98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = _LAB_2c5eaed4;
  do {
    puVar4 = puVar5;
    puVar5 = (undefined4 *)*puVar4;
    if (puVar5 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = FUN_2c66b624(*(undefined4 *)(puVar5[2] + 4),param_2);
    iVar1 = _LAB_2c5eaed8;
  } while (iVar2 != 0);
  uVar3 = *puVar5;
  *puVar4 = uVar3;
  (**(code **)(iVar1 + 0x38))(param_1,puVar5[2],uVar3,*(code **)(iVar1 + 0x38),param_4);
  FUN_2c62bea8(puVar5);
  return 1;
}

