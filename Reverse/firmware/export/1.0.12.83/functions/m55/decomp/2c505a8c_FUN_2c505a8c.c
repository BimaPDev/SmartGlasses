/* FUN_2c505a8c @ 0x2c505a8c */

void FUN_2c505a8c(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  bVar1 = *(byte *)(param_1 + 0x74);
  iVar4 = FUN_2c6041fc(*(undefined4 *)(param_1 + 0x2c));
  if ((uint)bVar1 < iVar4 - 1U) {
    uVar6 = (uint)*(byte *)(param_1 + 0x74);
    if (uVar6 == (int)(*(char **)(param_1 + 0x6c))[-1] - 1U) {
      pcVar7 = *(char **)(param_1 + 0x68);
      if (*(char **)(param_1 + 0x6c) == *(char **)(param_1 + 0x68)) {
        bVar2 = true;
      }
      else {
        do {
          pcVar8 = pcVar7 + 1;
          *pcVar7 = *pcVar7 + '\x01';
          pcVar7 = pcVar8;
        } while (*(char **)(param_1 + 0x6c) != pcVar8);
        uVar6 = (uint)*(byte *)(param_1 + 0x74);
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
    }
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),uVar6);
    FUN_2c50ece8(param_1 + 0x1b8,uVar5);
    *(char *)(param_1 + 0x74) = *(char *)(param_1 + 0x74) + '\x01';
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c));
    FUN_2c605208(uVar5,1);
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x74));
    FUN_2c50ec60(param_1 + 0x1b8,uVar5);
  }
  else {
    bVar2 = false;
  }
  *(undefined1 *)(param_1 + 0xd) =
       *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x74) * 0x1c + 0x38);
  iVar4 = 0;
  while( true ) {
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar4);
    cVar3 = FUN_2c6033b4(uVar5,0,0x21);
    if (cVar3 == '\x19') {
      uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar4);
      FUN_2c606d6c(uVar5,0);
    }
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar4);
    cVar3 = FUN_2c6033b4(uVar5,0,0x31);
    if (cVar3 == '\0') {
      uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar4);
      FUN_2c606d90(uVar5,0x4c,0);
    }
    if (iVar4 != 0) break;
    iVar4 = 1;
  }
  uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x74));
  FUN_2c606d6c(uVar5,0x19,0);
  if (-1 < **(char **)(param_1 + 0x68)) {
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c));
    FUN_2c606d6c(uVar5,0);
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),(int)**(char **)(param_1 + 0x68));
    FUN_2c606d90(uVar5,0);
  }
  if (*(char *)(*(int *)(param_1 + 0x6c) + -1) < '\x02') {
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c));
    FUN_2c606d6c(uVar5,0);
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),
                         (int)*(char *)(*(int *)(param_1 + 0x6c) + -1));
    FUN_2c606d90(uVar5,0);
  }
  iVar9 = param_1 + 0x80;
  iVar4 = param_1 + 0x11c;
  FUN_2c50ed7c(iVar9);
  FUN_2c50ed7c(iVar4);
  if (**(char **)(param_1 + 0x68) == -1) {
    cVar3 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x78),0,0x21);
    if (cVar3 != '\0') {
      FUN_2c50ece8(iVar9,*(undefined4 *)(param_1 + 0x78));
    }
  }
  else {
    cVar3 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x78),0,0x21);
    if (cVar3 == '\x19') {
      if (!bVar2) goto LAB_2c505934;
      FUN_2c50ece8(iVar9,*(undefined4 *)(param_1 + 0x78));
    }
    FUN_2c50ec60(iVar9,*(undefined4 *)(param_1 + 0x78));
  }
LAB_2c505934:
  if (*(char *)(*(int *)(param_1 + 0x6c) + -1) != '\x02') {
    cVar3 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x7c),0,0x21);
    if (cVar3 == '\x19') {
      if (!bVar2) {
        return;
      }
      FUN_2c50ece8(iVar4,*(undefined4 *)(param_1 + 0x7c));
    }
    FUN_2c50ec60(iVar4,*(undefined4 *)(param_1 + 0x7c));
    return;
  }
  cVar3 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x7c),0,0x21);
  if (cVar3 == '\0') {
    return;
  }
  FUN_2c50ece8(iVar4,*(undefined4 *)(param_1 + 0x7c));
  return;
}

