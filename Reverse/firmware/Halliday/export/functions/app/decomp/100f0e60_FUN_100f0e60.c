/* FUN_100f0e60 @ 0x100f0e60 */

void FUN_100f0e60(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  
  iVar1 = DAT_100f102c;
  if (*(char *)(DAT_100f102c + 0x81) == -1) {
    iVar4 = FUN_100f0898();
    if (iVar4 == 0) {
      if (*(char *)(iVar1 + 0x85) == '\x01') {
        return;
      }
LAB_100f0f98:
      if (*(char *)(iVar1 + 0x84) == '\x01') {
        return;
      }
    }
    else {
      uVar5 = (uint)*(byte *)(iVar4 + 2);
      if (1 < uVar5) {
        uVar5 = 2;
      }
      if (uVar5 != 0) {
        if (*(char *)(uVar5 + iVar1 + 0x83) == '\x01') {
          return;
        }
        if (uVar5 != 1) goto LAB_100f0f98;
      }
    }
  }
  if (*(char *)(iVar1 + 0x80) != '\0') {
    return;
  }
  if (*(char *)(iVar1 + 0x81) == '\x01') {
    uVar2 = *(undefined4 *)(param_1 + param_2 * 0x20);
    *(undefined1 *)(iVar1 + 0x80) = 1;
    *(undefined4 *)(iVar1 + 0x9c) = uVar2;
    FUN_1006742c();
    FUN_100f0900(0,0x23,0);
    return;
  }
  if (*(char *)(iVar1 + 0x81) == -1) {
    *(undefined1 *)(iVar1 + 0x81) = 0;
    if (*(char *)(iVar1 + 0xd4) == '\0') {
      return;
    }
    *(undefined1 *)(iVar1 + 0xd4) = 0;
    *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(iVar1 + 0xd8);
    *(undefined4 *)(iVar1 + 0xd8) = 0;
    return;
  }
  if (-1 < (int)((uint)*(byte *)(iVar1 + 0x62) << 0x1d)) {
    return;
  }
  iVar4 = *(int *)(param_1 + param_2 * 0x20);
  if ((*(byte *)(iVar1 + 0x62) & 0x10) == 0) {
    iVar3 = param_1 + param_2 * 0x20;
  }
  else {
    iVar8 = param_1 + param_2 * 0x20;
    iVar3 = iVar8;
    if (iVar4 == *(int *)(iVar1 + 0xd0)) {
      iVar3 = (int)(char)((char)param_2 + -1);
      iVar6 = *(int *)(param_1 + iVar3 * 0x20);
      iVar3 = param_1 + iVar3 * 0x20;
      iVar7 = iVar4;
      goto LAB_100f0ebc;
    }
  }
  iVar7 = (int)(char)((char)param_2 + -1);
  iVar8 = param_1 + iVar7 * 0x20;
  iVar7 = *(int *)(param_1 + iVar7 * 0x20);
  iVar6 = iVar4;
LAB_100f0ebc:
  *(int *)(iVar1 + 0x98) = iVar7;
  *(int *)(iVar1 + 0x9c) = iVar6;
  if (iVar7 == 0) {
    FUN_1011e638(&local_38,DAT_100f1030,iVar3 + 0xc);
    *(undefined4 *)(iVar1 + 0xa0) = local_38;
    *(undefined4 *)(iVar1 + 0xa4) = uStack_34;
  }
  else {
    FUN_1006742c();
    *(undefined2 *)(iVar1 + 0xa0) = *(undefined2 *)(iVar8 + 0xc);
    *(undefined2 *)(iVar1 + 0xa2) = *(undefined2 *)(iVar8 + 0xe);
    *(undefined2 *)(iVar1 + 0xa4) = *(undefined2 *)(iVar8 + 0x10);
    *(undefined2 *)(iVar1 + 0xa6) = *(undefined2 *)(iVar8 + 0x12);
  }
  if (*(int *)(iVar1 + 0x9c) == 0) {
    FUN_1011e638(&local_38,DAT_100f1030,iVar8 + 0xc);
    *(undefined4 *)(iVar1 + 0xa8) = local_38;
    *(undefined4 *)(iVar1 + 0xac) = uStack_34;
  }
  else {
    FUN_1006742c();
    *(undefined2 *)(iVar1 + 0xa8) = *(undefined2 *)(iVar3 + 0xc);
    *(undefined2 *)(iVar1 + 0xaa) = *(undefined2 *)(iVar3 + 0xe);
    *(undefined2 *)(iVar1 + 0xac) = *(undefined2 *)(iVar3 + 0x10);
    *(undefined2 *)(iVar1 + 0xae) = *(undefined2 *)(iVar3 + 0x12);
  }
  *(undefined2 *)(iVar1 + 0xb0) = *(undefined2 *)(iVar8 + 4);
  *(undefined2 *)(iVar1 + 0xb2) = *(undefined2 *)(iVar8 + 6);
  *(undefined2 *)(iVar1 + 0xb4) = *(undefined2 *)(iVar8 + 8);
  *(undefined2 *)(iVar1 + 0xb6) = *(undefined2 *)(iVar8 + 10);
  *(undefined2 *)(iVar1 + 0xb8) = *(undefined2 *)(iVar3 + 4);
  *(undefined2 *)(iVar1 + 0xba) = *(undefined2 *)(iVar3 + 6);
  *(undefined2 *)(iVar1 + 0xbc) = *(undefined2 *)(iVar3 + 8);
  *(undefined2 *)(iVar1 + 0xbe) = *(undefined2 *)(iVar3 + 10);
  *(undefined1 *)(iVar1 + 0x80) = 1;
  *(undefined1 *)(iVar1 + 0x83) = 1;
  FUN_100f0900(0,0x23);
  return;
}

