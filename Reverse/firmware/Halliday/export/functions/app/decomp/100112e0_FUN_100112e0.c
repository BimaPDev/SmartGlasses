/* FUN_100112e0 @ 0x100112e0 */

void FUN_100112e0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  iVar1 = DAT_100113b4;
  iVar4 = *DAT_100113b0;
  uVar6 = *(undefined4 *)(DAT_100113b4 + 0x20);
  iVar3 = thunk_FUN_1009f30c(param_1,DAT_100113b8,param_3,0);
  *(int *)(iVar1 + 0xb0) = iVar3;
  if (iVar3 != 0) {
    uVar8 = thunk_FUN_1009f30c(200,DAT_100113b8);
    *(int *)(iVar1 + 0xb4) = (int)uVar8;
    if ((int)uVar8 != 0) {
      uVar7 = *(undefined4 *)(iVar1 + 0xb0);
      *(undefined1 *)(iVar1 + 0x8f) = 1;
      if ((int)param_1 < 0) {
        FUN_10119dc2(DAT_100113c4,DAT_100113c0,DAT_100113bc,0x9e,uVar8);
        FUN_10119dc2(DAT_100113c8);
        FUN_1011a1f0(DAT_100113bc,0x9e,extraout_r2,1);
      }
      FUN_1011ea48(DAT_100113cc,0,0x20);
      *(uint *)(iVar1 + 0xa0) = param_1;
      *(undefined4 *)(iVar1 + 0xa4) = uVar7;
      uVar2 = DAT_100113d4;
      uVar7 = DAT_100113d0;
      uVar5 = param_1;
      if ((param_1 != 0) && (uVar5 = param_1 - 1, (param_1 & uVar5) != 0)) {
        uVar5 = 0;
      }
      *(uint *)(iVar1 + 0xa8) = uVar5;
      FUN_10061c18(uVar2,uVar7,0);
      FUN_1006d018(uVar6,DAT_100113d8,0);
      FUN_1006ce2c(uVar6,0,1);
      FUN_100111b4(uVar6);
      FUN_1013ceac(DAT_100113e0,DAT_100113dc,0);
      FUN_10115a38(DAT_100113e0,extraout_r1,0x9c4,0,0,0);
    }
  }
  if (*DAT_100113b0 != iVar4) {
    FUN_1013cdc0();
  }
  return;
}

