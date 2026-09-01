/* FUN_10042314 @ 0x10042314 */

uint FUN_10042314(uint param_1)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_r3;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (99 < param_1) {
    param_1 = 100;
  }
  iVar4 = *DAT_100423d4;
  *DAT_100423d8 = (char)param_1;
  uVar2 = FUN_100a735c();
  uVar5 = (uint)uVar2;
  uVar7 = uVar5;
  uVar9 = param_1;
  if (uVar5 != 0) goto LAB_100423ac;
  while( true ) {
    iVar1 = DAT_100423e4;
    uVar9 = uVar9 & 0xffff;
    uVar8 = (DAT_100423e0 - DAT_100423dc) * 0x20 & 0xff00;
    uVar7 = param_1;
    uVar10 = uVar9;
    FUN_100a5b78(uVar8 | 0x1e40034,DAT_100423ec,DAT_100423e8,
                 (*(byte *)(DAT_100423e4 + 0x1e) & 0xf) >> 1,param_1,uVar9,uVar5);
    uVar6 = (*(byte *)(iVar1 + 0x1e) & 0xf) >> 1;
    if (uVar6 == 1) {
      FUN_100a5b78(uVar8 | 0x1e80031,DAT_100423ec,DAT_100423f0,1,uVar7,uVar10,uVar5);
      uVar3 = 2;
    }
    else {
      FUN_100a5b78(DAT_100423f8 | uVar8,DAT_100423ec,DAT_100423fc,uVar6,uVar7,uVar10,uVar5);
      uVar3 = 3;
    }
    FUN_100a9130(uVar3,uVar9,0);
    FUN_1004229c(0);
    FUN_10048794();
    FUN_10041b10();
    (**(code **)(DAT_100423f4 + 8))();
    if (*DAT_100423d4 == iVar4) break;
    uVar5 = FUN_1013cdc0();
    uVar7 = extraout_r3;
LAB_100423ac:
    uVar9 = (param_1 * uVar7) / 100;
  }
  return param_1;
}

