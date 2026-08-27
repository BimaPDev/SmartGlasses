/* FUN_1403aeac @ 0x1403aeac */

void FUN_1403aeac(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_1403afe8;
  FUN_140e5658(DAT_1403afe8,0,0x80);
  uVar3 = FUN_140e5138(DAT_1403afec);
  uVar2 = DAT_1403aff0;
  *(undefined4 *)(iVar1 + 0x78) = uVar3;
  thunk_FUN_14095520(uVar2,0x3f);
  if (*(int *)(iVar1 + 0x78) == 0) {
    FUN_1402a6e8(4,0x2c,DAT_1403b008,DAT_1403b004,DAT_1403b000);
  }
  else {
    FUN_140e5148(*(int *)(iVar1 + 0x78),0xffffffff);
  }
  *(undefined1 *)(iVar1 + 7) = 0;
  *(undefined1 *)(iVar1 + 0x19) = 0;
  *(undefined1 *)(iVar1 + 0x1a) = 0;
  *(undefined1 *)(iVar1 + 0x17) = 0;
  *(undefined2 *)(iVar1 + 10) = 0xffff;
  *(undefined2 *)(iVar1 + 0xe) = 0x100;
  *(undefined2 *)(iVar1 + 0x10) = 0xffff;
  *(undefined1 *)(iVar1 + 0x12) = 0;
  uVar2 = DAT_1403aff4;
  if (*(int *)(iVar1 + 0x78) == 0) {
    *(undefined1 *)(iVar1 + 6) = 0;
    *(undefined4 *)(iVar1 + 0x20) = uVar2;
    *(undefined4 *)(iVar1 + 0x24) = uVar2;
LAB_1403afd6:
    FUN_1402a6e8(4,0x2c,DAT_1403b008,DAT_1403b004,DAT_1403b000);
  }
  else {
    FUN_140e52d8();
    uVar2 = DAT_1403aff4;
    *(undefined4 *)(iVar1 + 0x20) = DAT_1403aff4;
    *(undefined4 *)(iVar1 + 0x24) = uVar2;
    *(undefined1 *)(iVar1 + 6) = 0;
    if (*(int *)(iVar1 + 0x78) == 0) goto LAB_1403afd6;
    FUN_140e5148(*(int *)(iVar1 + 0x78),0xffffffff);
  }
  *(undefined1 *)(iVar1 + 0x2f) = 0;
  *(undefined1 *)(iVar1 + 0x41) = 0;
  *(undefined1 *)(iVar1 + 0x42) = 0;
  *(undefined1 *)(iVar1 + 0x3f) = 0;
  *(undefined2 *)(iVar1 + 0x32) = 0xffff;
  *(undefined2 *)(iVar1 + 0x36) = 0x100;
  *(undefined2 *)(iVar1 + 0x38) = 0xffff;
  *(undefined1 *)(iVar1 + 0x3a) = 0;
  uVar2 = DAT_1403aff8;
  if (*(int *)(iVar1 + 0x78) == 0) {
    *(undefined1 *)(iVar1 + 0x2e) = 0x10;
    *(undefined4 *)(iVar1 + 0x48) = uVar2;
    *(undefined4 *)(iVar1 + 0x4c) = uVar2;
  }
  else {
    FUN_140e52d8();
    uVar2 = DAT_1403aff8;
    *(undefined4 *)(iVar1 + 0x48) = DAT_1403aff8;
    *(undefined4 *)(iVar1 + 0x4c) = uVar2;
    *(undefined1 *)(iVar1 + 0x2e) = 0x10;
    if (*(int *)(iVar1 + 0x78) != 0) {
      FUN_140e5148(*(int *)(iVar1 + 0x78),0xffffffff);
      goto LAB_1403af5c;
    }
  }
  FUN_1402a6e8(4,0x2c,DAT_1403b008,DAT_1403b004,DAT_1403b000);
LAB_1403af5c:
  *(undefined1 *)(iVar1 + 0x57) = 0;
  *(undefined1 *)(iVar1 + 0x69) = 0;
  *(undefined1 *)(iVar1 + 0x6a) = 0;
  *(undefined1 *)(iVar1 + 0x67) = 0;
  *(undefined2 *)(iVar1 + 0x5a) = 0xffff;
  *(undefined2 *)(iVar1 + 0x5e) = 0x100;
  *(undefined2 *)(iVar1 + 0x60) = 0xffff;
  *(undefined1 *)(iVar1 + 0x62) = 0;
  if (*(int *)(iVar1 + 0x78) != 0) {
    FUN_140e52d8();
  }
  uVar2 = DAT_1403affc;
  *(undefined1 *)(iVar1 + 0x56) = 0xf;
  *(undefined4 *)(iVar1 + 0x70) = uVar2;
  *(undefined4 *)(iVar1 + 0x74) = uVar2;
  return;
}

