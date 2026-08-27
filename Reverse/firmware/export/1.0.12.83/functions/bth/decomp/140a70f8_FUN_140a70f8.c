/* FUN_140a70f8 @ 0x140a70f8 */

int FUN_140a70f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_a4;
  undefined1 auStack_a0 [12];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 auStack_78 [84];
  int local_24;
  
  puVar1 = DAT_140a728c;
  uVar3 = DAT_140a7280;
  local_24 = *DAT_140a727c;
  local_a4 = 0;
  *DAT_140a728c = 1;
  FUN_14039078(uVar3,param_2,param_3,0);
  FUN_140a6b78();
  FUN_140b4844(0x3c);
  FUN_140b4344(0xe,10);
  FUN_140b4c68();
  FUN_140b4b6c();
  FUN_1409eb54();
  FUN_140a02ec();
  FUN_140a1804();
  FUN_140e5658(auStack_78,0,0x54);
  FUN_140a7470();
  FUN_140a7478(0,auStack_78);
  FUN_140a7478(1,auStack_78);
  FUN_140b4be0(0xf,DAT_140a7284);
  uVar3 = FUN_140e52f8(DAT_140a7288,1,0);
  puVar2 = DAT_140a7290;
  *DAT_140a7290 = uVar3;
  FUN_140e5378(uVar3,300);
  FUN_140a6a58(0);
  local_88 = 10;
  local_94 = 0xf;
  local_90 = 2;
  FUN_140b4a50(auStack_a0);
  FUN_140331bc();
  FUN_140e5818(0x14);
  local_88 = 0x14;
  local_94 = 0xf;
  local_90 = 2;
  FUN_140b4a50(auStack_a0);
  iVar4 = FUN_140a68c0();
  if ((iVar4 == 0) || (iVar4 = FUN_140a68c0(), iVar4 == 0)) {
    FUN_140a1dfc(&local_a4);
    local_88 = local_a4;
    local_94 = 0xf;
    local_90 = 3;
    FUN_140b4a50(auStack_a0);
    local_88 = 0x32;
    local_94 = 0xf;
    local_90 = 2;
    FUN_140b4a50(auStack_a0);
    FUN_140e5818(200);
    local_88 = 0x50;
    local_94 = 0xf;
    local_90 = 2;
    FUN_140b4a50(auStack_a0);
    FUN_140e5818(100);
    local_88 = 100;
    local_94 = 0xf;
    local_90 = 2;
    FUN_140b4a50(auStack_a0);
    FUN_140a6a58(1);
    iVar4 = 0;
    FUN_140e53d8(auStack_a0,1,0xffffffff);
  }
  else {
    FUN_140e5718(*puVar2);
    FUN_140a6a58(2);
    local_88 = 0xff;
    local_94 = 0xf;
    local_90 = 3;
    FUN_140b4a50(auStack_a0);
    FUN_140e53d8(auStack_a0,1,0xffffffff);
  }
  *puVar1 = 0;
  FUN_140b4344(0xe);
  FUN_14030594();
  if (*DAT_140a727c == local_24) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

