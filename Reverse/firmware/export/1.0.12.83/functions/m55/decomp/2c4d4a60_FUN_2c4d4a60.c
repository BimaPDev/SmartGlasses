/* FUN_2c4d4a60 @ 0x2c4d4a60 */

uint FUN_2c4d4a60(uint *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r3;
  uint uVar6;
  
  uVar3 = param_1[1];
  uVar5 = 4 - uVar3;
  if ((int)uVar5 < 1) {
    uVar2 = *param_1;
    uVar6 = 0;
  }
  else {
    if (uVar5 == 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = *param_1 << (uVar5 & 0xff);
    }
    uVar2 = FUN_2c4d74d4(param_1 + 2);
    *param_1 = uVar2;
    uVar3 = param_1[1] + 0x20;
    uVar5 = extraout_r3;
  }
  iVar1 = DAT_2c4d4b30;
  uVar3 = uVar3 - 4;
  uVar4 = *(uint *)(DAT_2c4d4b30 + 0x10);
  param_1[1] = uVar3;
  uVar4 = (uVar2 >> (uVar3 & 0xff) | uVar6) & uVar4;
  if (uVar4 == 0xf) {
    if (param_1[9] == 0) {
      FUN_2c4d766c(param_1 + 2);
    }
    else if (uVar3 != 0) {
      FUN_2c4d7598(param_1 + 2,uVar2,uVar3,uVar5,param_4);
    }
    uVar3 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    uVar5 = FUN_2c4d76a8(param_1 + 2);
    if (uVar5 < 0x18) {
      return 0;
    }
    uVar2 = param_1[1];
    uVar5 = 0x18 - uVar2;
    if ((int)uVar5 < 1) {
      uVar5 = *param_1;
    }
    else {
      if (uVar5 != 0x20) {
        uVar3 = *param_1 << (uVar5 & 0xff);
      }
      uVar5 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar5;
      uVar2 = param_1[1] + 0x20;
    }
    param_1[1] = uVar2 - 0x18;
    uVar5 = (uVar3 | uVar5 >> (uVar2 - 0x18 & 0xff)) & *(uint *)(iVar1 + 0x60);
  }
  else {
    uVar5 = *(uint *)(DAT_2c4d4b2c + uVar4 * 4);
  }
  *param_2 = (char)uVar4;
  return uVar5;
}

