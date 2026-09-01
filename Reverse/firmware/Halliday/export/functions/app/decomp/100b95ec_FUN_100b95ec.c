/* FUN_100b95ec @ 0x100b95ec */

void FUN_100b95ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  
  pbVar1 = DAT_100b96c4;
  pbVar2 = DAT_100b96c4 + 0x36c0;
  pbVar1[0x14] = 2;
  pbVar1[0x15] = 0;
  pbVar1[0x16] = 0;
  pbVar1[0x17] = 0;
  iVar3 = FUN_100b99c0(pbVar2);
  if (iVar3 == 0) {
    uVar5 = 8;
    pbVar2 = pbVar1 + param_1 * 0x10 + 0x36c4;
  }
  else {
    iVar3 = FUN_100b99c0(DAT_100b96c8);
    pbVar2 = DAT_100b96cc;
    if (iVar3 == 0) {
      uVar5 = 8;
      pbVar2 = pbVar1 + param_1 * 0x10 + 0x3704;
      *(int *)(pbVar1 + 0x14) = *(int *)(pbVar1 + 0x14) + 8;
    }
    else {
      uVar5 = 0x100;
      *(int *)(pbVar1 + 0x14) = *(int *)(pbVar1 + 0x14) + 0x10;
    }
  }
  iVar3 = FUN_100b9a34(pbVar2,uVar5);
  uVar5 = *(undefined4 *)(pbVar1 + 0xc);
  uVar7 = *(undefined4 *)(pbVar1 + 4);
  uVar4 = iVar3 + *(int *)(pbVar1 + 0x14);
  *(undefined4 *)(pbVar1 + 0xc) = *(undefined4 *)(pbVar1 + 8);
  *(undefined4 *)(pbVar1 + 0x10) = uVar5;
  *(uint *)(pbVar1 + 0x14) = uVar4;
  *(undefined4 *)(pbVar1 + 8) = uVar7;
  if (uVar4 < 6) {
    uVar7 = 0x33bc;
    iVar3 = (uVar4 - 2 & 0xff) * 0x80 + 0x33bc;
  }
  else {
    iVar3 = 0x353c;
  }
  uVar4 = FUN_100b9a34(pbVar1 + iVar3,0x40,uVar5,uVar7,param_4);
  if (3 < uVar4) {
    bVar6 = (char)((uVar4 << 0x17) >> 0x18) - 1;
    iVar3 = (uVar4 & 1 | 2) << (uint)bVar6;
    *(int *)(pbVar1 + 4) = iVar3;
    if (uVar4 < 0xe) {
      pbVar2 = pbVar1 + ((0x1ade - uVar4) + iVar3) * 2;
    }
    else {
      iVar3 = FUN_100b9cc4(((int)(uVar4 << 0x17) >> 0x18) - 5U & 0xff);
      pbVar2 = DAT_100b96d0;
      bVar6 = 4;
      *(uint *)(pbVar1 + 4) = *(uint *)(pbVar1 + 4) | iVar3 << 4;
    }
    uVar4 = FUN_100b9ae4(pbVar2,bVar6);
    uVar4 = uVar4 | *(uint *)(pbVar1 + 4);
  }
  *(uint *)(pbVar1 + 4) = uVar4;
  if (*pbVar1 < 7) {
    bVar6 = 7;
  }
  else {
    bVar6 = 10;
  }
  *pbVar1 = bVar6;
  return;
}

