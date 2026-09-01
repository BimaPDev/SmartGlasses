/* FUN_100d1200 @ 0x100d1200 */

undefined4 FUN_100d1200(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 0xd8);
  if (bVar1 < 3) {
    uVar5 = 0;
    if (bVar1 != 0) {
      uVar5 = *(uint *)(param_1 + 0x1a8) >> (uint)*(byte *)(param_1 + 0x1ac) & 1 | 0x80;
    }
  }
  else {
    if (bVar1 != 3) {
      FUN_100a5b78(DAT_100d12a4 | (DAT_100d12a0 - DAT_100d129c) * 0x20 & 0xff00U,DAT_100d12ac,
                   DAT_100d12a8,bVar1,param_1,param_2);
      return 8;
    }
    uVar5 = 0;
  }
  iVar2 = FUN_10135838(param_1,3);
  if (iVar2 != 0) {
    uVar3 = FUN_100c1fe4(iVar2 + 8,0x10);
    iVar4 = FUN_1013572c(*DAT_100d1298,param_1 + 0x127,param_1 + 0xf7,uVar5,uVar3);
    if (iVar4 == 0) {
      FUN_10135546(param_1,iVar2,0);
      FUN_10135464(param_1 + 0xd4,0);
      return 0;
    }
    FUN_100c1c90(iVar2);
  }
  return 8;
}

