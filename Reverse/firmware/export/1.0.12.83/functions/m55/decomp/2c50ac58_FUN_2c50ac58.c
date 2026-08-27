/* FUN_2c50ac58 @ 0x2c50ac58 */

void FUN_2c50ac58(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x25);
  if (uVar4 == 0) {
    bVar1 = false;
  }
  else {
    pcVar6 = *(char **)(param_1 + 0x70);
    iVar5 = (int)*pcVar6;
    if (uVar4 == iVar5 + 1U) {
      if (pcVar6 == *(char **)(param_1 + 0x74)) {
        bVar1 = true;
      }
      else {
        while( true ) {
          pcVar7 = pcVar6 + 1;
          *pcVar6 = (char)iVar5 + -1;
          if (*(char **)(param_1 + 0x74) == pcVar7) break;
          iVar5 = (int)*pcVar7;
          pcVar6 = pcVar7;
        }
        uVar4 = (uint)*(byte *)(param_1 + 0x25);
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),uVar4);
    FUN_2c50ece8(param_1 + 0x1b4,uVar3);
    *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x25) + -1;
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c));
    FUN_2c605208(uVar3,1);
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x25));
    FUN_2c50ec60(param_1 + 0x1b4,uVar3);
  }
  iVar5 = 0;
  while( true ) {
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),iVar5);
    cVar2 = FUN_2c6033b4(uVar3,0,0x31);
    if (cVar2 == '\0') {
      uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),iVar5);
      FUN_2c606d90(uVar3,0x4c,0);
    }
    if (iVar5 != 0) break;
    iVar5 = 1;
  }
  if (-1 < **(char **)(param_1 + 0x70)) {
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c));
    FUN_2c606d90(uVar3,0);
  }
  if (*(char *)(*(int *)(param_1 + 0x74) + -1) < '\x02') {
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c));
    FUN_2c606d90(uVar3,0);
  }
  iVar8 = param_1 + 0x7c;
  iVar5 = param_1 + 0x118;
  FUN_2c50ed7c(iVar8);
  FUN_2c50ed7c(iVar5);
  if (**(char **)(param_1 + 0x70) == -1) {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x14),0,0x21);
    if (cVar2 != '\0') {
      FUN_2c50ece8(iVar8,*(undefined4 *)(param_1 + 0x14));
    }
  }
  else {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x14),0,0x21);
    if (cVar2 == '\x19') {
      if (!bVar1) goto LAB_2c50abc0;
      FUN_2c50ece8(iVar8,*(undefined4 *)(param_1 + 0x14));
    }
    FUN_2c50ec60(iVar8,*(undefined4 *)(param_1 + 0x14));
  }
LAB_2c50abc0:
  if (*(char *)(*(int *)(param_1 + 0x74) + -1) != '\x02') {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x18),0,0x21);
    if (cVar2 == '\x19') {
      if (!bVar1) {
        return;
      }
      FUN_2c50ece8(iVar5,*(undefined4 *)(param_1 + 0x18));
    }
    FUN_2c50ec60(iVar5,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x18),0,0x21);
  if (cVar2 == '\0') {
    return;
  }
  FUN_2c50ece8(iVar5,*(undefined4 *)(param_1 + 0x18));
  return;
}

