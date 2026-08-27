/* FUN_14023280 @ 0x14023280 */

void FUN_14023280(uint *param_1,int param_2,int param_3,byte *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  
  uVar5 = param_1[1];
  pbVar6 = param_4;
  if (param_8 == 0) {
    uVar1 = 0;
    uVar2 = 0;
    if (uVar5 != 0) goto LAB_1402329c;
LAB_14023310:
    uVar5 = FUN_1401c128(param_1 + 2);
    uVar3 = 0x1f;
    *param_1 = uVar5;
    param_1[1] = 0x1f;
    bVar4 = (byte)(uVar5 >> 0x1f);
  }
  else {
    if (uVar5 == 0) {
      uVar1 = FUN_1401c128(param_1 + 2);
      uVar5 = 0x1f;
      *param_1 = uVar1;
      uVar1 = uVar1 >> 0x1f;
    }
    else {
      uVar5 = uVar5 - 1;
      param_1[1] = uVar5;
      uVar1 = *param_1 >> (uVar5 & 0xff) & 1;
      uVar2 = uVar1;
      if (uVar5 == 0) goto LAB_14023310;
    }
LAB_1402329c:
    uVar3 = *param_1;
    param_1[1] = uVar5 - 1;
    bVar4 = (byte)(uVar3 >> (uVar5 - 1 & 0xff)) & 1;
    uVar2 = uVar1;
  }
  *param_4 = bVar4;
  if (uVar2 != 0) {
    *(undefined1 *)(param_2 + 0x260) = 1;
    FUN_14022ef4(param_1,param_2,param_5,uVar3,pbVar6);
    *(undefined1 *)(param_2 + 0x261) = 1;
    *(undefined1 *)(param_2 + 0x260) = 0;
    func_0x13f4a83c(param_3,param_2,0x263);
    return;
  }
  uVar5 = param_1[1];
  if (uVar5 == 0) {
    uVar1 = FUN_1401c128(param_1 + 2);
    *param_1 = uVar1;
    param_1[1] = 0x1f;
    if ((int)uVar1 < 0) goto LAB_140232f0;
    uVar5 = 0x1e;
  }
  else {
    uVar1 = *param_1;
    uVar2 = uVar5 - 1;
    param_1[1] = uVar2;
    if ((int)((uVar1 >> (uVar2 & 0xff)) << 0x1f) < 0) {
LAB_140232f0:
      *(undefined1 *)(param_2 + 0x260) = 1;
      *(undefined1 *)(param_3 + 0x260) = 1;
      return;
    }
    if (uVar2 == 0) {
      uVar5 = FUN_1401c128(param_1 + 2);
      *param_1 = uVar5;
      param_1[1] = 0x1f;
      bVar4 = (byte)(uVar5 >> 0x1f);
      goto LAB_14023346;
    }
    uVar5 = uVar5 - 2;
  }
  param_1[1] = uVar5;
  bVar4 = (byte)(uVar1 >> (uVar5 & 0xff)) & 1;
LAB_14023346:
  *(byte *)(param_3 + 0x260) = bVar4;
  *(byte *)(param_2 + 0x260) = bVar4 ^ 1;
  return;
}

