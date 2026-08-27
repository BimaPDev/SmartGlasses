/* FUN_140a6f04 @ 0x140a6f04 */

int FUN_140a6f04(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_a0;
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [12];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 auStack_70 [84];
  int local_1c;
  
  local_1c = *DAT_140a70e0;
  local_a0 = 0;
  FUN_1402a6e8(4,0x20e,DAT_140a70e8,DAT_140a70e4,DAT_140a70dc,param_1);
  uVar2 = FUN_140e5998();
  FUN_140e52a8(uVar2,0x30);
  FUN_140a6b78();
  FUN_140b46e8(0x3c);
  FUN_140b4344(0xe,10);
  FUN_140b4c68();
  FUN_140b4b6c();
  FUN_140e5658(auStack_70,0,0x54);
  FUN_140a7470();
  FUN_140a7478(0,auStack_70);
  FUN_140a7478(1,auStack_70);
  FUN_140a7650();
  iVar3 = FUN_140adeac(0);
  if (iVar3 != 0) {
    iVar3 = -1;
    goto LAB_140a7036;
  }
  FUN_140b4be0(0xf,DAT_140a70ec);
  uVar2 = FUN_140e52f8(DAT_140a70f0,1,0);
  puVar1 = DAT_140a70f4;
  *DAT_140a70f4 = uVar2;
  FUN_140e5378(uVar2,300);
  local_80 = 10;
  local_8c = 0xf;
  local_88 = 2;
  FUN_140b4a50(auStack_98);
  thunk_FUN_1404b580();
  FUN_14098898();
  FUN_140a7de0();
  FUN_140a1f1c();
  FUN_1409eb54();
  FUN_140a02ec();
  FUN_140a1804();
  FUN_1409ffb4(auStack_9c);
  FUN_140adf04(0);
  FUN_140a6a58(0);
  if (param_1 << 0x12 < 0) {
    FUN_140331bc();
    local_80 = 0x14;
    local_8c = 0xf;
    local_88 = 2;
    FUN_140b4a50(auStack_98);
    iVar3 = FUN_140a68c0();
    if (((iVar3 == 0) || (iVar3 = FUN_140a68c0(), iVar3 == 0)) ||
       (iVar3 = FUN_140a68c0(), iVar3 == 0)) {
      FUN_140e5818(200);
      local_8c = 0xf;
      local_88 = 2;
      local_80 = 0x1e;
      FUN_140b4a50(auStack_98);
      goto LAB_140a7070;
    }
  }
  else {
LAB_140a7070:
    FUN_140a1dfc(&local_a0);
    local_8c = 0xf;
    local_88 = 3;
    local_80 = local_a0;
    FUN_140b4a50(auStack_98);
    FUN_140331bc();
    FUN_14034598(0);
    local_88 = 2;
    local_80 = 0x28;
    local_8c = 0xf;
    FUN_140b4a50(auStack_98);
    thunk_FUN_14050368();
    FUN_140e5818(600);
    iVar3 = FUN_140a6e38();
    if (iVar3 == 0) {
      FUN_140a6d6c();
      FUN_140a6a58(1);
      FUN_140e53d8(auStack_98,1,0xffffffff);
      goto LAB_140a7036;
    }
  }
  FUN_140e5718(*puVar1);
  FUN_140a6a58(2);
  local_8c = 0xf;
  local_88 = 3;
  local_80 = 0xff;
  FUN_140b4a50(auStack_98);
  FUN_140e53d8(auStack_98,1,0xffffffff);
LAB_140a7036:
  FUN_140b4344(0xe,0);
  FUN_14030594();
  if (*DAT_140a70e0 == local_1c) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

