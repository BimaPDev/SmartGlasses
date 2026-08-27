/* FUN_140ad9b8 @ 0x140ad9b8 */

void FUN_140ad9b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_40;
  undefined1 auStack_3c [6];
  undefined2 local_36;
  int local_2c;
  
  local_2c = *DAT_140adb1c;
  local_40 = 0;
  uVar2 = FUN_1403cd80(2,param_2,param_3,0);
  FUN_1403cdd0(auStack_3c,uVar2);
  piVar1 = DAT_140adb28;
  if (param_1 == 0) {
    *DAT_140adb30 = 0;
    *piVar1 = 0;
    thunk_FUN_14034fac(0);
    thunk_FUN_140349a0(0);
    thunk_FUN_14034df0(0);
    FUN_140ad978(0);
    FUN_1402a6e8(4,0x6c,DAT_140adb24,DAT_140adb20,DAT_140adb34);
    FUN_140b4344(0x19,0);
  }
  else {
    iVar3 = FUN_14032b20(local_36);
    FUN_140b4344(0x19,10);
    FUN_140987fc(0,0,&local_40,0);
    if (local_40 == 0) {
      FUN_1402a6e8(4,0x48,DAT_140adb24,DAT_140adb20,DAT_140adb3c,DAT_140adb38);
    }
    else {
      thunk_FUN_14034fac(0);
      thunk_FUN_140349a0(0);
      thunk_FUN_14034fcc(1);
      uVar4 = FUN_1409b5d8();
      uVar4 = uVar4 >> 1;
      uVar6 = param_1 - uVar4;
      FUN_1402a6e8(4,0x53,DAT_140adb24,DAT_140adb20,DAT_140adb40,*(undefined4 *)(local_40 + 4),
                   *(undefined1 *)(local_40 + 0xc),*(undefined1 *)(local_40 + 0xd),
                   *(undefined4 *)(local_40 + 0x20),uVar4);
      iVar5 = FUN_140e414c(uVar6 * 2,CARRY4(uVar6,uVar6),0x271,0);
      piVar1 = DAT_140adb30;
      *DAT_140adb28 = iVar3;
      *piVar1 = iVar5 + iVar3;
      FUN_14032b74(iVar5 + iVar3,local_36,2,0,0);
      FUN_1402a6e8(4,0x5f,DAT_140adb24,DAT_140adb20,DAT_140adb2c,iVar3,*piVar1,uVar6,param_1 + uVar4
                  );
      thunk_FUN_14034fac(1);
      FUN_140ad978(2);
    }
  }
  if (*DAT_140adb1c == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

