/* FUN_100c71c4 @ 0x100c71c4 */

int FUN_100c71c4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r3;
  undefined1 local_18;
  undefined2 local_17;
  undefined1 local_15;
  undefined1 uStack_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 uStack_11;
  
  iVar3 = FUN_10132e28(DAT_100c723c);
  if (-1 < iVar3 << 0x19) {
    iVar3 = FUN_10132e28(DAT_100c723c);
    if ((iVar3 << 0x1a < 0) && (iVar3 = FUN_100c60f8(extraout_r3), iVar3 != 0)) {
      return iVar3;
    }
    iVar3 = FUN_100ca3d4(0,0,6);
    if (iVar3 == 0) {
      iVar3 = FUN_100ca3d4(0,0,2);
      if (iVar3 != 0) {
        FUN_10132e3c(DAT_100c723c,0x100);
        FUN_100ca13c(iVar3);
        puVar1 = DAT_100c6a14;
        if (param_1 == 0) {
          local_15 = 0x12;
          local_17 = 0x800;
        }
        else {
          local_15 = 0x30;
          local_17 = 0x60;
        }
        uStack_11 = 0;
        local_18 = 0;
        local_12 = 0;
        local_13 = *DAT_100c6a14;
        uStack_14 = 0;
        iVar3 = FUN_10132e28(DAT_100c6a14 + 0x30);
        if (-1 < iVar3 << 0x19) {
          iVar3 = FUN_10133040();
          if (iVar3 != 0) {
            iVar2 = FUN_10132e28(puVar1 + 0x30);
            if (-1 < iVar2 << 0x19) {
              return iVar3;
            }
            FUN_100a5b78(DAT_100c6a20 | (DAT_100c6a1c - DAT_100c6a18) * 0x20 & 0xff00U,DAT_100c6a28,
                         DAT_100c6a24,iVar3);
          }
          local_13 = 1;
        }
        iVar3 = FUN_100c5d4c(0x200b,7);
        if (iVar3 == 0) {
          iVar3 = -0x69;
        }
        else {
          FUN_101327a0(iVar3 + 8,&local_18,7);
          iVar3 = FUN_100c5e48(0x200b,iVar3,0);
          if ((iVar3 == 0) && (iVar3 = FUN_100c60f8(1), iVar3 == 0)) {
            FUN_10132e84(DAT_100c6a2c,7,0);
          }
        }
        return iVar3;
      }
    }
    else {
      FUN_100ca13c();
    }
  }
  return 0;
}

