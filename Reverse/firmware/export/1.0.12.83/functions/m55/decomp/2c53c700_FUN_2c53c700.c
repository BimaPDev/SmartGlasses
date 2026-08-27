/* FUN_2c53c700 @ 0x2c53c700 */

void FUN_2c53c700(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  uint uVar4;
  uint uVar5;
  
  FUN_2c607df0(*(undefined4 *)(param_1 + 8));
  uVar3 = extraout_r1;
  uVar4 = 0;
  while( true ) {
    uVar1 = FUN_2c6041fc(*(undefined4 *)(param_1 + 8),uVar3);
    uVar5 = uVar4 + 1;
    if (uVar1 <= uVar4) break;
    iVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8),uVar4);
    uVar3 = 1;
    uVar4 = uVar5;
    if (iVar2 != 0) {
      FUN_2c606abc();
      uVar3 = extraout_r1_00;
    }
  }
  FUN_2c606abc(*(undefined4 *)(param_1 + 8),1,extraout_r2,param_4);
  return;
}

