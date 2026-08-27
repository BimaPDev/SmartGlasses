/* FUN_1402af2c @ 0x1402af2c */

void FUN_1402af2c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 auStack_8c [13];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = *DAT_1402b0d0;
  local_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  local_3c = 0;
  local_20 = 0;
  FUN_1402a174(&local_3c,0x20,param_3,0);
  iVar4 = FUN_140dd3a4(&local_3c);
  *(undefined1 *)((int)&local_3c + iVar4) = 10;
  uVar5 = FUN_140dd3a4(&local_3c);
  FUN_1402a13c(1,&local_3c,uVar5);
  FUN_1402a13c(0x10,0,0);
  FUN_1402a13c(0x11,0,0);
  iVar4 = FUN_140e5768();
  *(undefined1 *)(DAT_1402b0d4 + (uint)(iVar4 != 0)) = 1;
  puVar8 = DAT_1402b0d8;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = isIRQinterruptsEnabled();
  }
  if (-1 < iVar4 << 0x1f) {
    *DAT_1402b0d8 = 0x1402afae;
    puVar8[1] = unaff_lr;
    disableIRQinterrupts();
  }
  iVar4 = DAT_1402b0e0;
  puVar7 = auStack_8c;
  puVar8 = DAT_1402b0dc;
  do {
    puVar8 = puVar8 + 1;
    *puVar7 = *puVar8;
    puVar7 = puVar7 + 1;
  } while (puVar8 != DAT_1402b0dc + 0xf);
  local_9c = 0;
  uStack_98 = 0;
  local_50 = *(undefined4 *)(DAT_1402b0e0 + 0x3c);
  local_4c = *(undefined4 *)(DAT_1402b0e0 + 0x40);
  local_94 = 0;
  local_a4 = DAT_1402b0e4;
  uStack_a0 = 0;
  cVar2 = isThreadModePrivileged();
  cVar3 = isUsingMainStack();
  local_48 = (uint)(byte)((cVar3 != '\x01') << 1 | cVar2 != '\x01');
  local_44 = getMainStackPointerLimit();
  local_40 = getProcessStackPointerLimit();
  *DAT_1402b0e8 = (int)&local_a4;
  local_90 = param_1;
  FUN_1402d8ac();
  if (*(char *)(DAT_1402b0ec + 9) != '\0') {
    FUN_14029a48();
  }
  FUN_1402a27c();
  FUN_1402ce98(0,10);
  uVar5 = 0;
  if (*DAT_1402b0f0 == '\0') goto LAB_1402b0ae;
  do {
    uVar5 = FUN_1402a350(DAT_1402b0e0,100,DAT_1402b0f4,local_54);
    FUN_1402a128(DAT_1402b0e0,uVar5);
    FUN_1402a13c(2,DAT_1402b0e0,uVar5);
    iVar6 = FUN_140de9d8(DAT_1402b0e0,100,param_1);
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0x62 < iVar6) {
      iVar6 = 99;
    }
    param_1 = 10;
    *(undefined1 *)(iVar4 + iVar6) = 10;
    FUN_1402a128(DAT_1402b0e0,iVar6 + 1);
    FUN_1402a13c(2,DAT_1402b0e0,iVar6 + 1);
    FUN_1402a27c();
    FUN_1402ab8c(auStack_8c);
    FUN_1402ab1c(local_50,local_4c);
    FUN_1402acc8(local_58);
    FUN_1402ae14(local_58,0x400,0x14);
    FUN_14029f28();
    FUN_1402a27c();
    FUN_1402a314();
    FUN_1402a27c();
    FUN_140e5398(0x50);
    FUN_1402a294();
    uVar5 = extraout_r1;
LAB_1402b0ae:
    iVar6 = FUN_1402a3a8(uVar5,uVar5,DAT_1402b0e0,100);
    if (0 < iVar6) {
      FUN_14029f28();
      FUN_1402a128(DAT_1402b0e0,iVar6);
    }
  } while( true );
}

