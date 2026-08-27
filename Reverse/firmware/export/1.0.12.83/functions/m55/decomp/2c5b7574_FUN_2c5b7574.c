/* FUN_2c5b7574 @ 0x2c5b7574 */

void FUN_2c5b7574(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_2c606a10(param_2);
  FUN_2c5b725c(param_1,uVar1);
  FUN_2c607048(uVar1,0x27d1,0x52);
  uVar2 = FUN_2c606a10(uVar1);
  FUN_2c5b725c(param_1,uVar2);
  FUN_2c607048(uVar2,0x27d1,0x22);
  FUN_2c6072b4(uVar2,2);
  FUN_2c627e28(uVar2,0);
  FUN_2c627e50(uVar2,2,1);
  FUN_2c606d54(uVar2,2,0);
  FUN_2c5b7450(param_1,uVar2);
  uVar3 = FUN_2c637344(uVar1);
  uVar4 = registry_lookup(0x4042);
  FUN_2c638730(uVar3,uVar4);
  uVar4 = FUN_2c5e2e80(DAT_2c5b7644);
  FUN_2c606e38(uVar3,uVar4,0);
  FUN_2c606e20(uVar3,0xff00ff00,0);
  FUN_2c606e2c(uVar3,0x99,0);
  FUN_2c607048(uVar3,0x27d1,0x18);
  FUN_2c608808(uVar3,uVar2,0xe,0,0);
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = uVar3;
  return;
}

