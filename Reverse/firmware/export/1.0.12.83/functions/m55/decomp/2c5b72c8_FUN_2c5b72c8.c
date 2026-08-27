/* FUN_2c5b72c8 @ 0x2c5b72c8 */

void FUN_2c5b72c8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_2c637344(param_2);
  FUN_2c638730(uVar1,DAT_2c5b7340);
  uVar2 = FUN_2c5e2e80(DAT_2c5b7344);
  FUN_2c606e38(uVar1,uVar2,0);
  FUN_2c606e20(uVar1,0xff00ff00,0);
  FUN_2c606e2c(uVar1,0xff,0);
  uVar2 = FUN_2c637344(param_2);
  FUN_2c638730(uVar2,DAT_2c5b7348);
  uVar3 = FUN_2c5e2e80(DAT_2c5b734c);
  FUN_2c606e38(uVar2,uVar3,0);
  FUN_2c606e20(uVar2,0xff00ff00,0);
  FUN_2c606e2c(uVar2,0xcc,0);
  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = uVar2;
  return;
}

