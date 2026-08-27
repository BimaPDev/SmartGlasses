/* FUN_2c5059f0 @ 0x2c5059f0 */

void FUN_2c5059f0(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x74);
  if (uVar4 == 0) {
    uVar4 = 0;
    bVar1 = false;
  }
  else {
    pcVar6 = *(char **)(param_1 + 0x68);
    iVar5 = (int)*pcVar6;
    if (uVar4 == iVar5 + 1U) {
      if (pcVar6 == *(char **)(param_1 + 0x6c)) {
        bVar1 = true;
      }
      else {
        while( true ) {
          pcVar7 = pcVar6 + 1;
          *pcVar6 = (char)iVar5 + -1;
          if (*(char **)(param_1 + 0x6c) == pcVar7) break;
          iVar5 = (int)*pcVar7;
          pcVar6 = pcVar7;
        }
        uVar4 = (uint)*(byte *)(param_1 + 0x74);
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),uVar4);
    FUN_2c50ece8(param_1 + 0x1b8,uVar3);
    *(char *)(param_1 + 0x74) = *(char *)(param_1 + 0x74) + -1;
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c));
    FUN_2c605208(uVar3,1);
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x74));
    FUN_2c50ec60(param_1 + 0x1b8,uVar3);
    uVar4 = (uint)*(byte *)(param_1 + 0x74);
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + uVar4 * 0x1c + 0x38);
  iVar5 = 0;
  while( true ) {
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar5);
    cVar2 = FUN_2c6033b4(uVar3,0,0x21);
    if (cVar2 == '\x19') {
      uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar5);
      FUN_2c606d6c(uVar3,0);
    }
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar5);
    cVar2 = FUN_2c6033b4(uVar3,0,0x31);
    if (cVar2 == '\0') {
      uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar5);
      FUN_2c606d90(uVar3,0x4c,0);
    }
    if (iVar5 != 0) break;
    iVar5 = 1;
  }
  uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x74));
  FUN_2c606d6c(uVar3,0x19,0);
  if (-1 < **(char **)(param_1 + 0x68)) {
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c));
    FUN_2c606d6c(uVar3,0);
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),(int)**(char **)(param_1 + 0x68));
    FUN_2c606d90(uVar3,0);
  }
  if (*(char *)(*(int *)(param_1 + 0x6c) + -1) < '\x02') {
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c));
    FUN_2c606d6c(uVar3,0);
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),
                         (int)*(char *)(*(int *)(param_1 + 0x6c) + -1));
    FUN_2c606d90(uVar3,0);
  }
  iVar8 = param_1 + 0x80;
  iVar5 = param_1 + 0x11c;
  FUN_2c50ed7c(iVar8);
  FUN_2c50ed7c(iVar5);
  if (**(char **)(param_1 + 0x68) == -1) {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x78),0,0x21);
    if (cVar2 != '\0') {
      FUN_2c50ece8(iVar8,*(undefined4 *)(param_1 + 0x78));
    }
  }
  else {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x78),0,0x21);
    if (cVar2 == '\x19') {
      if (!bVar1) goto LAB_2c505934;
      FUN_2c50ece8(iVar8,*(undefined4 *)(param_1 + 0x78));
    }
    FUN_2c50ec60(iVar8,*(undefined4 *)(param_1 + 0x78));
  }
LAB_2c505934:
  if (*(char *)(*(int *)(param_1 + 0x6c) + -1) != '\x02') {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x7c),0,0x21);
    if (cVar2 == '\x19') {
      if (!bVar1) {
        return;
      }
      FUN_2c50ece8(iVar5,*(undefined4 *)(param_1 + 0x7c));
    }
    FUN_2c50ec60(iVar5,*(undefined4 *)(param_1 + 0x7c));
    return;
  }
  cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x7c),0,0x21);
  if (cVar2 == '\0') {
    return;
  }
  FUN_2c50ece8(iVar5,*(undefined4 *)(param_1 + 0x7c));
  return;
}

