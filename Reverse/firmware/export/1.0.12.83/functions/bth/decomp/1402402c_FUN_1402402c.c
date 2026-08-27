/* FUN_1402402c @ 0x1402402c */

uint FUN_1402402c(uint *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r3;
  uint uVar5;
  
  uVar3 = param_1[1];
  uVar4 = 4 - uVar3;
  if ((int)uVar4 < 1) {
    uVar5 = 0;
    uVar2 = *param_1;
  }
  else {
    if (uVar4 == 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = *param_1 << (uVar4 & 0xff);
    }
    uVar2 = FUN_1401c128(param_1 + 2);
    *param_1 = uVar2;
    uVar3 = param_1[1] + 0x20;
    uVar4 = extraout_r3;
  }
  iVar1 = DAT_140240fc;
  uVar3 = uVar3 - 4;
  uVar5 = (uVar2 >> (uVar3 & 0xff) | uVar5) & *(uint *)(DAT_140240fc + 0x10);
  param_1[1] = uVar3;
  if (uVar5 == 0xf) {
    if (param_1[9] == 0) {
      FUN_1401c2b8(param_1 + 2);
    }
    else if (uVar3 != 0) {
      func_0x1401c1e4(param_1 + 2,uVar2,uVar3,uVar4,param_4);
    }
    uVar3 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    uVar4 = FUN_1401c2f4(param_1 + 2);
    if (uVar4 < 0x18) {
      return 0;
    }
    uVar2 = param_1[1];
    uVar4 = 0x18 - uVar2;
    if ((int)uVar4 < 1) {
      uVar4 = *param_1;
    }
    else {
      if (uVar4 != 0x20) {
        uVar3 = *param_1 << (uVar4 & 0xff);
      }
      uVar4 = FUN_1401c128(param_1 + 2);
      *param_1 = uVar4;
      uVar2 = param_1[1] + 0x20;
    }
    param_1[1] = uVar2 - 0x18;
    uVar4 = (uVar3 | uVar4 >> (uVar2 - 0x18 & 0xff)) & *(uint *)(iVar1 + 0x60);
  }
  else {
    uVar4 = *(uint *)(DAT_140240f8 + uVar5 * 4);
  }
  *param_2 = (char)uVar5;
  return uVar4;
}

