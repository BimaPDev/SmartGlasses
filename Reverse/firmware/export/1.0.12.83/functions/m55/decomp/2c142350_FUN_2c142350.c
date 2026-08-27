/* FUN_2c142350 @ 0x2c142350 */

uint * FUN_2c142350(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r2;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  uVar8 = *param_1;
  uVar9 = param_1[1];
  iVar4 = FUN_2c1442d8(uVar8,uVar9,DAT_2c142498,0);
  FUN_2c1442d8(uVar8,uVar9,DAT_2c142498,0);
  iVar2 = DAT_2c14249c;
  if ((int)extraout_r2 < 0) {
    iVar4 = iVar4 + 0xafa6b;
    uVar6 = extraout_r2 + 0x15180;
  }
  else {
    iVar4 = iVar4 + 0xafa6c;
    uVar6 = extraout_r2;
  }
  param_2[2] = uVar6 / 0xe10;
  iVar3 = DAT_2c1424a0;
  param_2[1] = (uVar6 % 0xe10) / 0x3c;
  *param_2 = (uVar6 % 0xe10) % 0x3c;
  uVar6 = (iVar4 + 3) % 7;
  if ((int)uVar6 < 0) {
    uVar6 = uVar6 + 7;
  }
  param_2[6] = uVar6;
  iVar1 = iVar4;
  if (iVar4 < 0) {
    iVar1 = iVar4 + -0x23ab0;
  }
  uVar6 = iVar3 * (iVar1 / iVar2) + iVar4;
  uVar7 = ((uVar6 / 0x8eac + uVar6) - uVar6 / 0x5b4) - uVar6 / DAT_2c1424a4;
  uVar5 = uVar7 / 0x16d;
  uVar7 = (uVar5 / 100 - uVar7 / 0x5b4) + uVar6 + uVar5 * -0x16d;
  uVar10 = uVar7 * 5 + 2;
  uVar6 = uVar10 / 0x99;
  if (uVar10 < 0x5fa) {
    iVar4 = 2;
  }
  else {
    iVar4 = -10;
  }
  uVar10 = uVar6 + iVar4;
  iVar4 = (iVar1 / iVar2) * 400 + uVar5;
  if (uVar10 < 2) {
    iVar4 = iVar4 + 1;
  }
  if (uVar7 < 0x132) {
    if (((uVar5 & 3) == 0) && (uVar5 != (uVar5 / 100) * 100)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (uint)(uVar5 % 400 == 0);
    }
    uVar5 = uVar7 + 0x3b + uVar5;
  }
  else {
    uVar5 = uVar7 - 0x132;
  }
  param_2[7] = uVar5;
  param_2[3] = (uVar7 + 1) - (uVar6 * 0x99 + 2) / 5;
  param_2[4] = uVar10;
  param_2[5] = iVar4 - 0x76c;
  param_2[8] = 0;
  return param_2;
}

