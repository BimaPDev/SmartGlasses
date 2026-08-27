/* FUN_2c5d44e4 @ 0x2c5d44e4 */

void FUN_2c5d44e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_2c5c55d8();
  iVar1 = FUN_2c5c6294();
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x90) != 0)) && (*(int *)(param_1 + 0x84) == 0)) {
    uVar2 = FUN_2c5cfd1c();
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    FUN_2c607048(uVar2,0x27d1,0x1c);
    uVar3 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x84));
    uVar2 = DAT_2c5d45ac;
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    uVar2 = FUN_2c5e2e8c(uVar2);
    FUN_2c63140c(uVar3,uVar2);
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x88),7,0,0);
    uVar2 = FUN_2c637344(*(undefined4 *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    FUN_2c608808(uVar2,*(undefined4 *)(param_1 + 0x88),0x14,6,0);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x8c),0x27d1);
    uVar3 = *(undefined4 *)(param_1 + 0x8c);
    uVar2 = registry_lookup(0x1073);
    FUN_2c638730(uVar3,uVar2);
    uVar3 = *(undefined4 *)(param_1 + 0x8c);
    uVar2 = FUN_2c5e2e80(DAT_2c5d45b0);
    FUN_2c606e38(uVar3,uVar2,0);
    FUN_2c606e20(*(undefined4 *)(param_1 + 0x8c),0xff00ff00,0);
    FUN_2c5d3f50(param_1);
    return;
  }
  return;
}

