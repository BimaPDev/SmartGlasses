/* FUN_100bae78 @ 0x100bae78 */

undefined4 FUN_100bae78(undefined4 param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char local_11;
  
  pbVar1 = DAT_100baf70;
  local_11 = '\0';
  iVar4 = (uint)DAT_100baf70[1] << 0x1e;
  if (iVar4 < 0) {
    iVar4 = thunk_FUN_1009efa0(DAT_100baf78,&local_11,1,iVar4,param_1);
    if (iVar4 == 1) {
      if (local_11 != -1) {
        local_11 = local_11 + '\x01';
      }
    }
    else {
      local_11 = '\x01';
    }
    FUN_10119dc2(DAT_100baf7c,local_11);
    thunk_FUN_1009efe8(DAT_100baf78,&local_11,1);
    uVar2 = DAT_100baf80;
    pbVar1[1] = pbVar1[1] & 0xfd;
    FUN_1013cb84(uVar2);
    iVar4 = FUN_10061fd0(DAT_100baf84);
    if (iVar4 != 0) {
      FUN_10061f54(DAT_100baf84);
    }
    thunk_FUN_10136844(0);
    thunk_FUN_1013684e(0);
    FUN_10136892();
    iVar4 = FUN_100d92fc();
    if (iVar4 != 0) {
      FUN_101368aa(0);
      iVar4 = 0x65;
      while ((iVar3 = FUN_100d92fc(), iVar3 != 0 && (iVar4 = iVar4 + -1, iVar4 != 0))) {
        FUN_1011dbc8(10);
      }
    }
    FUN_100cb3d8();
    iVar4 = 0x1f5;
    thunk_FUN_10136bda();
    thunk_FUN_1013698c();
    thunk_FUN_101369b4();
    thunk_FUN_10136a24();
    thunk_FUN_10136a38();
    FUN_100d92a8();
    uVar2 = DAT_100baf88;
    while ((iVar3 = FUN_1009e9f8(uVar2), iVar3 != 0 && (iVar4 = iVar4 + -1, iVar4 != 0))) {
      FUN_1011dbc8(10);
    }
    FUN_100bf360();
    FUN_10071fdc();
    *pbVar1 = *pbVar1 & 0x3f | 0x80;
    FUN_100bab48();
  }
  else {
    FUN_10119dc2(DAT_100baf74,(DAT_100baf70[1] & 3) >> 1);
  }
  return 0;
}

