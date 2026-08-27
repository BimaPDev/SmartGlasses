/* FUN_2c5da298 @ 0x2c5da298 */

void FUN_2c5da298(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *extraout_r1;
  undefined4 *puVar3;
  undefined4 *extraout_r1_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  if (param_1 == param_2) {
    return;
  }
  puVar4 = param_1 + 1;
  puVar3 = param_2;
  do {
    puVar5 = puVar4;
    if (puVar4 == param_2) {
      return;
    }
    while( true ) {
      uVar6 = *param_1;
      puVar4 = puVar5 + 1;
      uVar1 = FUN_2c5d8bd8(*puVar5,puVar3);
      uVar2 = FUN_2c5d8bd8(uVar6);
      if (uVar1 < uVar2) break;
      FUN_2c5da1fc(puVar5,0);
      puVar3 = extraout_r1_00;
      puVar5 = puVar4;
      if (param_2 == puVar4) {
        return;
      }
    }
    uVar6 = *puVar5;
    puVar3 = param_1;
    if (param_1 != puVar5) {
      FUN_2c673eb8(param_1 + 1,param_1,(int)puVar5 - (int)param_1,uVar2,param_4);
      puVar3 = extraout_r1;
    }
    *param_1 = uVar6;
  } while( true );
}

