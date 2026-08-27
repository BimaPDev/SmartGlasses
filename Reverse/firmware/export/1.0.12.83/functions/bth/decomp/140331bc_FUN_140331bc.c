/* FUN_140331bc @ 0x140331bc */

void FUN_140331bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_140332dc;
  FUN_1402d7bc(2,2,param_3,0);
  FUN_1402d7bc(3,2);
  FUN_1402ce98(4,10);
  FUN_1403918c();
  FUN_14038a78(0x9b);
  FUN_140bd0d8(0);
  FUN_1403337c();
  FUN_140003b4();
  FUN_1402e4f8();
  FUN_1402e52c();
  FUN_1402e554();
  FUN_140e5398(0xa0);
  FUN_140360e4();
  FUN_140387e0();
  FUN_140362f0();
  FUN_14032d80();
  FUN_14031c50();
  FUN_14031f48();
  FUN_1403164c();
  FUN_1402e690(&local_14,&uStack_10);
  iVar1 = FUN_1403214c();
  if (iVar1 != 0) {
    FUN_140293d0();
    FUN_140321c0();
    FUN_140293e4();
  }
  FUN_1402e6fc(local_14,uStack_10);
  FUN_1402e518();
  FUN_140e5398(0x20);
  FUN_1402e52c();
  FUN_140e5398(0x20);
  FUN_1402e544();
  FUN_140e5398(0x1e0);
  FUN_14037dd8();
  FUN_14038820();
  if (*DAT_140332e0 != '\0') {
    FUN_14031418();
  }
  FUN_14037760();
  FUN_140377bc();
  if (*DAT_140332e4 != '\0') {
    FUN_14037ac4();
  }
  FUN_140315d4();
  FUN_14038788();
  if (*DAT_140332e8 != '\0') {
    *DAT_140332e8 = '\0';
    FUN_14026974(0);
  }
  FUN_1403875c();
  FUN_140357e8();
  FUN_1402b274(3,DAT_140332ec);
  if (*DAT_140332dc == local_c) {
    FUN_1402ce98(4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

