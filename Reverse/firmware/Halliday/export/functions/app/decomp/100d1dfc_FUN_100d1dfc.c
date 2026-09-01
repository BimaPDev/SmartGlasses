/* FUN_100d1dfc @ 0x100d1dfc */

void FUN_100d1dfc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 local_28;
  undefined1 auStack_27 [7];
  undefined1 auStack_20 [16];
  
  iVar4 = *param_1;
  iVar5 = *(int *)(iVar4 + 0xac);
  if (iVar5 == 0) {
    return;
  }
  FUN_1013547c(auStack_27,iVar4 + 0x90);
  local_28 = 0;
  iVar4 = FUN_10137fc4(0x20,*(undefined1 *)(iVar4 + 8),&local_28);
  if (iVar4 == 0) {
    uVar1 = FUN_100d32ac(&local_28);
    FUN_100a5b78(DAT_100d1ebc | (DAT_100d1eb4 - DAT_100d1eb8) * 0x20 & 0xff00U,DAT_100d1ec4,
                 DAT_100d1ec0,uVar1);
    return;
  }
  iVar2 = FUN_1013577a(param_1 + 0x19,0x14);
  if (iVar2 == 0) {
    iVar2 = FUN_101356b6(iVar5 + 9,DAT_100d1ecc,auStack_20);
    if (iVar2 != 0) goto LAB_100d1e7c;
  }
  else {
    iVar2 = FUN_101356f2(DAT_100d1ec8,iVar5 + 9);
    if (iVar2 != 0) {
      thunk_FUN_10138032(iVar5);
      return;
    }
  }
  iVar2 = FUN_101356b6(auStack_20,DAT_100d1ed0,iVar4 + 0x1a);
  if (iVar2 == 0) {
    *(undefined2 *)(iVar4 + 0x18) = 0;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 0x14) = 0;
    *(undefined1 *)(iVar4 + 0xc) = *(undefined1 *)((int)param_1 + 0x6a);
    if ((int)((uint)*(byte *)(iVar5 + 8) << 0x1f) < 0) {
      bVar3 = *(byte *)(iVar4 + 0xd) | 1;
    }
    else {
      bVar3 = *(byte *)(iVar4 + 0xd) & 0xfe;
    }
    *(byte *)(iVar4 + 0xd) = bVar3;
    return;
  }
LAB_100d1e7c:
  FUN_100e0b60(iVar4);
  return;
}

