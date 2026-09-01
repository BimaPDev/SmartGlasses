/* FUN_1005be9c @ 0x1005be9c */

byte FUN_1005be9c(int param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pbVar2 = DAT_1005bf78;
  FUN_100573b0(&local_30,param_1);
  *(undefined4 *)pbVar2 = local_30;
  *(uint *)(pbVar2 + 4) = uStack_2c;
  *(uint *)(pbVar2 + 8) = uStack_28;
  if (*pbVar2 == 0) {
    return 0;
  }
  *DAT_1005bf7c = 0;
  if (param_1 + 1 != 0) {
    if (uStack_2c < uStack_28) {
      FUN_10119dc2(DAT_1005bf88,DAT_1005bf84,DAT_1005bf80,0xb2,0,uStack_2c);
      FUN_10119dc2(DAT_1005bf8c);
      FUN_1011a1f0(DAT_1005bf80,0xb2,uStack_28,param_1 + 1);
    }
    uVar4 = *(uint *)(pbVar2 + 8);
    if (uVar4 < 0xfffffc19) {
      uVar4 = (uVar4 + 999) / 1000;
    }
    else {
      uVar4 = FUN_10004238(uVar4 + 999,1,1000,0);
    }
    FUN_1013ce18(param_1 - uVar4,1);
  }
  uVar4 = (uint)*pbVar2;
  if (uVar4 < 4) {
    if (1 < uVar4) {
      iVar3 = FUN_1011b6b8();
LAB_1005bf3c:
      if (iVar3 != 0) {
        FUN_1005bfdc();
        *pbVar2 = 0;
        return 0;
      }
      bVar1 = true;
      goto LAB_1005bf40;
    }
  }
  else if (uVar4 - 4 < 3) {
    iVar3 = FUN_1011b6b2();
    goto LAB_1005bf3c;
  }
  bVar1 = false;
LAB_1005bf40:
  FUN_10114a38();
  FUN_1005bd84(1);
  local_1c = *(undefined4 *)pbVar2;
  uStack_18 = *(undefined4 *)(pbVar2 + 4);
  uStack_14 = *(undefined4 *)(pbVar2 + 8);
  FUN_1011aa7c();
  if (bVar1) {
    FUN_1005bfdc();
  }
  FUN_1005bdc8();
  FUN_101150e0();
  return *pbVar2;
}

