/* FUN_1012fc94 @ 0x1012fc94 */

undefined4 FUN_1012fc94(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  if (param_1 == 0) {
    return 0xffffffea;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    local_2c = 0;
    uStack_28 = 0;
    local_30 = 0x4000;
    uVar1 = FUN_1013009e(*(undefined1 *)(param_1 + 0xcb));
    FUN_100b2064(&local_30,uVar1);
    uVar1 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1013ca1a(&local_30,0,1);
      local_34 = 0;
      local_3c = 0x22;
      local_38 = &local_30;
      FUN_10064d1c(*(undefined4 *)(param_1 + 0x48),&local_3c);
      iVar2 = FUN_1011dbde(&local_30,1000);
      uVar1 = 0;
      if (iVar2 != 0) {
        FUN_100a5b78(DAT_100b1b48 | (DAT_100b1b44 - DAT_100b1b40) * 0x20 & 0xff00U,DAT_100b1b4c);
        uVar1 = 0xffffffc2;
      }
      FUN_10064c60(*(undefined4 *)(param_1 + 0x48));
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if ((int)((uint)*(byte *)(param_1 + 0x128) << 0x1f) < 0) {
      if (*(code **)(param_1 + 0x138) != (code *)0x0) {
        (**(code **)(param_1 + 0x138))(*(undefined4 *)(param_1 + 300),1,0);
        *(undefined4 *)(param_1 + 0x138) = 0;
        FUN_100b1840(param_1);
      }
      *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) & 0xfe;
    }
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 != 0) {
      if ((iVar2 != *(int *)(param_1 + 0x4c)) && (iVar2 != *(int *)(param_1 + 0x58))) {
        FUN_1011dcae();
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0x58)) {
        FUN_1011dcae();
      }
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    if ((*(int *)(param_1 + 0x4c) != 0) && ((int)((uint)*(byte *)(param_1 + 0xd6) << 0x19) < 0)) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    if ((*(int *)(param_1 + 0x58) != 0) && (*(char *)(param_1 + 0xd6) < '\0')) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    if (*(int *)(param_1 + 100) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 100) = 0;
    }
    return uVar1;
  }
  FUN_1012f9c8();
  return 0;
}

