/* FUN_100a5f38 @ 0x100a5f38 */

void FUN_100a5f38(byte *param_1,int param_2,int param_3,int param_4,byte *param_5)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte local_6c [72];
  
  if (0x40 < param_2 * param_4) {
    param_4 = 0x40 / param_2;
  }
  if (param_4 < 1) {
    param_4 = 0x10 / param_2;
  }
  if (param_5 == (byte *)0xffffffff) {
    param_5 = param_1;
  }
  for (; param_3 != 0; param_3 = param_3 - iVar3) {
    FUN_10119dc2(DAT_100a6038,param_5);
    iVar3 = param_3;
    if (param_4 <= param_3) {
      iVar3 = param_4;
    }
    pbVar2 = param_1;
    for (iVar4 = 0; iVar5 = param_4, iVar4 < iVar3; iVar4 = iVar4 + 1) {
      if (param_2 == 4) {
        *(undefined4 *)(local_6c + iVar4 * 4) = *(undefined4 *)pbVar2;
        uVar1 = DAT_100a6040;
      }
      else if (param_2 == 2) {
        *(undefined2 *)(local_6c + iVar4 * 2) = *(undefined2 *)pbVar2;
        uVar1 = DAT_100a6044;
      }
      else {
        local_6c[iVar4] = *pbVar2;
        uVar1 = DAT_100a6048;
      }
      FUN_10119dc2(uVar1);
      pbVar2 = pbVar2 + param_2;
    }
    for (; iVar3 < iVar5; iVar5 = iVar5 + -1) {
      for (iVar4 = 0; iVar4 < param_2 * 2 + 1; iVar4 = iVar4 + 1) {
        FUN_10119dc2(DAT_100a604c);
      }
    }
    if (iVar3 <= param_4) {
      param_4 = iVar3;
    }
    iVar4 = 0;
    uVar6 = iVar3 * param_2;
    pbVar2 = local_6c;
    while (uVar6 - iVar4 != 0 && iVar4 <= (int)uVar6) {
      iVar4 = iVar4 + 1;
      if (0x5e < *pbVar2 - 0x20) {
        *pbVar2 = 0x2e;
      }
      pbVar2 = pbVar2 + 1;
    }
    local_6c[uVar6 & ~((int)uVar6 >> 0x1f)] = 0;
    param_1 = param_1 + uVar6;
    FUN_10119dc2(DAT_100a603c,local_6c);
    param_5 = param_5 + uVar6;
  }
  return;
}

