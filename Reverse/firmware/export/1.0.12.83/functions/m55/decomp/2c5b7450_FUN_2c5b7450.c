/* FUN_2c5b7450 @ 0x2c5b7450 */

void FUN_2c5b7450(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_2c637344(param_2);
  uVar5 = DAT_2c5b7570;
  uVar4 = DAT_2c5b756c;
  FUN_2c638730(uVar1,DAT_2c5b7560);
  uVar2 = FUN_2c5e2e80(uVar4);
  FUN_2c606e38(uVar1,uVar2,0);
  FUN_2c606e20(uVar1,0xff00ff00,0);
  FUN_2c606e2c(uVar1,0xff,0);
  uVar2 = FUN_2c637344(param_2);
  FUN_2c638730(uVar2,DAT_2c5b7564);
  uVar3 = FUN_2c5e2e80(uVar5);
  FUN_2c606e38(uVar2,uVar3,0);
  FUN_2c606e20(uVar2,0xff00ff00,0);
  FUN_2c606e2c(uVar2,0xcc,0);
  uVar3 = FUN_2c606a10(param_2);
  FUN_2c5b725c(param_1,uVar3);
  FUN_2c607048(uVar3,2,0x22);
  uVar3 = FUN_2c637344(param_2);
  FUN_2c638730(uVar3,DAT_2c5b7560);
  uVar4 = FUN_2c5e2e80(uVar4);
  FUN_2c606e38(uVar3,uVar4,0);
  FUN_2c606e20(uVar3,0xff00ff00,0);
  FUN_2c606e2c(uVar3,0xff,0);
  uVar4 = FUN_2c637344(param_2);
  FUN_2c638730(uVar4,DAT_2c5b7568);
  uVar5 = FUN_2c5e2e80(uVar5);
  FUN_2c606e38(uVar4,uVar5,0);
  FUN_2c606e20(uVar4,0xff00ff00,0);
  FUN_2c606e2c(uVar4,0xcc,0);
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x14) = uVar4;
  return;
}

