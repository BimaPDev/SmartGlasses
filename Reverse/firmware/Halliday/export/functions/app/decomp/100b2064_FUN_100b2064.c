/* FUN_100b2064 @ 0x100b2064 */

undefined4 FUN_100b2064(undefined4 *param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  byte bVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffea;
  }
  FUN_1011dbf4(DAT_100b211c,0xffffffff,param_3,param_4,param_4);
  pbVar1 = DAT_100b2120;
  if ((*(byte *)((int)param_1 + 1) & 0x40) == 0) {
    if (-1 < (int)((uint)DAT_100b2120[5] << 0x1a)) {
      FUN_10113e2c(DAT_100b211c);
      return 0xffffffea;
    }
    *(undefined4 *)(DAT_100b2120 + 0x10) = *param_1;
    *(undefined4 *)(pbVar1 + 0x14) = param_1[1];
    *(undefined4 *)(pbVar1 + 0x18) = param_1[2];
    pbVar1[0x13] = pbVar1[7];
  }
  else {
    *(undefined4 *)(DAT_100b2120 + 4) = *param_1;
    *(undefined4 *)(pbVar1 + 8) = param_1[1];
    *(undefined4 *)(pbVar1 + 0xc) = param_1[2];
    *DAT_100b2124 = param_2;
    bVar5 = pbVar1[5] & 0x20;
    if ((pbVar1[5] & 0x20) == 0) {
      *pbVar1 = bVar5;
      goto LAB_100b20d0;
    }
  }
  bVar5 = pbVar1[0x11] & 0x20;
  if ((pbVar1[0x11] & 0x20) == 0) {
    bVar3 = 1;
  }
  else {
    bVar3 = 2;
    bVar5 = 0;
  }
  *pbVar1 = bVar3;
LAB_100b20d0:
  pbVar1[1] = bVar5;
  pbVar1[2] = bVar5;
  pbVar1[3] = bVar5;
  iVar2 = FUN_10064eb8(0);
  if (iVar2 == 0) {
    FUN_100a5b78((DAT_100b2128 - DAT_100b212c) * 0x20 & 0xff00U | 0x1c0011,DAT_100b2130);
  }
  else {
    if (*DAT_100b2124 == '\0') {
      uVar4 = 5;
    }
    else {
      uVar4 = 2;
    }
    FUN_100b2004(iVar2,uVar4);
    FUN_10064c60(iVar2);
  }
  FUN_10113e2c(DAT_100b211c);
  return 0;
}

