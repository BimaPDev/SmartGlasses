/* FUN_100baf8c @ 0x100baf8c */

void FUN_100baf8c(void)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  
  puVar1 = DAT_100bb020;
  if ((*DAT_100bb020 & 0x140) == 0x40) {
    FUN_1013cb84(DAT_100bb020 + 0xcc);
    iVar2 = FUN_10061fd0(puVar1 + 0xe4);
    if (iVar2 != 0) {
      FUN_10061f54(puVar1 + 0xe4);
    }
    thunk_FUN_10136844(0);
    thunk_FUN_1013684e(0);
    FUN_10136892();
    FUN_101368aa(0);
    iVar2 = 0x12d;
    while ((iVar3 = FUN_100d92fc(), iVar3 != 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
      FUN_1011dbc8(10);
    }
    thunk_FUN_10136bda();
    thunk_FUN_1013698c();
    thunk_FUN_101369b4();
    thunk_FUN_10136a24();
    thunk_FUN_10136a38();
    FUN_100bf360();
    iVar2 = DAT_100bb024;
    *(byte *)puVar1 = (byte)*puVar1 & 0xbf;
    FUN_100a5b78(DAT_100bb02c | (DAT_100bb028 - iVar2) * 0x20 & 0xff00U,DAT_100bb034,DAT_100bb030,
                 in_r3);
    return;
  }
  return;
}

