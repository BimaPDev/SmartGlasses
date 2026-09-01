/* FUN_100a98c4 @ 0x100a98c4 */

undefined4 FUN_100a98c4(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 auStack_28 [24];
  
  FUN_1011ea48(auStack_3c,0,0x14);
  FUN_1012e0e0(auStack_28);
  local_3a = 0x81;
  local_34 = *(undefined4 *)(param_1 + 4);
  local_30 = DAT_100a998c;
  puStack_2c = auStack_28;
  FUN_1011dbf4(DAT_100a9990,0xffffffff);
  iVar2 = FUN_1009ece8(DAT_100a9994,auStack_3c);
  uVar3 = (DAT_100a9998 - DAT_100a999c) * 0x20 & 0xff00;
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_100a99a0 | uVar3,DAT_100a99a8,DAT_100a99a4);
  }
  else {
    iVar2 = FUN_1011dbde(auStack_28,0xffffffff);
    pcVar1 = DAT_100a99b8;
    if (iVar2 == 0) {
      if (*DAT_100a99b4 == param_1) {
        *DAT_100a99b4 = 0;
      }
      if (*DAT_100a99bc == param_1) {
        *DAT_100a99bc = 0;
      }
      if (*pcVar1 != '\0') {
        FUN_100574c8(0,1);
        *pcVar1 = '\0';
      }
      *DAT_100a99c0 = *DAT_100a99c0 + -1;
    }
  }
  FUN_100a5b78(DAT_100a99ac | uVar3,DAT_100a99a8,DAT_100a99b0,*(undefined1 *)(param_1 + 3));
  FUN_100840a8(*(undefined1 *)(param_1 + 3),DAT_100a9994);
  FUN_100a9314();
  FUN_100a92f4(param_1,0x1e,0);
  FUN_100a92e4(param_1);
  return 0;
}

