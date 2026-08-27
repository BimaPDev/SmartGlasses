/* FUN_2c5ea9d8 @ 0x2c5ea9d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ea9d8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = _LAB_2c5eaa2c;
  uVar6 = 0;
  puVar4 = _LAB_2c5eaa28;
  do {
    puVar3 = puVar4;
    puVar4 = (undefined4 *)*puVar3;
    if (puVar4 == (undefined4 *)0x0) {
      return uVar6;
    }
    while( true ) {
      iVar5 = puVar4[2];
      iVar2 = FUN_2c66b624(param_2,*(undefined4 *)(iVar5 + 0x1c));
      if (iVar2 != 0) break;
      uVar6 = 1;
      *puVar3 = *puVar4;
      (**(code **)(iVar1 + 0x38))(param_1,iVar5);
      FUN_2c62bea8(puVar4);
      puVar4 = (undefined4 *)*puVar3;
      if (puVar4 == (undefined4 *)0x0) {
        return 1;
      }
    }
  } while( true );
}

