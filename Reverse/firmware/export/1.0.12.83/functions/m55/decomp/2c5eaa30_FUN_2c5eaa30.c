/* FUN_2c5eaa30 @ 0x2c5eaa30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5eaa30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar1 = _LAB_2c5eaa84;
  uVar5 = 0;
  puVar4 = _LAB_2c5eaa80;
  do {
    puVar3 = puVar4;
    puVar4 = (undefined4 *)*puVar3;
    if (puVar4 == (undefined4 *)0x0) {
      return uVar5;
    }
    while (iVar2 = FUN_2c66b624(param_2,*(undefined4 *)(puVar4[2] + 0x18),param_3,puVar4[2],param_4)
          , param_3 = extraout_r2, iVar2 == 0) {
      uVar5 = 1;
      *puVar3 = *puVar4;
      (**(code **)(iVar1 + 0x38))(param_1,puVar4[2]);
      FUN_2c62bea8(puVar4);
      puVar4 = (undefined4 *)*puVar3;
      param_3 = extraout_r2_00;
      if (puVar4 == (undefined4 *)0x0) {
        return 1;
      }
    }
  } while( true );
}

