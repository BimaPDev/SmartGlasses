/* FUN_2c50acec @ 0x2c50acec */

void FUN_2c50acec(int param_1)

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
  
  bVar1 = *(byte *)(param_1 + 0x25);
  iVar4 = FUN_2c6041fc(*(undefined4 *)(param_1 + 0x1c));
  if ((uint)bVar1 < iVar4 - 1U) {
    uVar6 = (uint)*(byte *)(param_1 + 0x25);
    if (uVar6 == (int)(*(char **)(param_1 + 0x74))[-1] - 1U) {
      pcVar7 = *(char **)(param_1 + 0x70);
      if (*(char **)(param_1 + 0x74) == *(char **)(param_1 + 0x70)) {
        bVar2 = true;
      }
      else {
        do {
          pcVar8 = pcVar7 + 1;
          *pcVar7 = *pcVar7 + '\x01';
          pcVar7 = pcVar8;
        } while (*(char **)(param_1 + 0x74) != pcVar8);
        uVar6 = (uint)*(byte *)(param_1 + 0x25);
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
    }
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),uVar6);
    FUN_2c50ece8(param_1 + 0x1b4,uVar5);
    *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x25) + '\x01';
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c));
    FUN_2c605208(uVar5,1);
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x25));
    FUN_2c50ec60(param_1 + 0x1b4,uVar5);
  }
  else {
    bVar2 = false;
  }
  iVar4 = 0;
  while( true ) {
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),iVar4);
    cVar3 = FUN_2c6033b4(uVar5,0,0x31);
    if (cVar3 == '\0') {
      uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),iVar4);
      FUN_2c606d90(uVar5,0x4c,0);
    }
    if (iVar4 != 0) break;
    iVar4 = 1;
  }
  if (-1 < **(char **)(param_1 + 0x70)) {
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c));
    FUN_2c606d90(uVar5,0);
  }
  if (*(char *)(*(int *)(param_1 + 0x74) + -1) < '\x02') {
    uVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c));
    FUN_2c606d90(uVar5,0);
  }
  iVar9 = param_1 + 0x7c;
  iVar4 = param_1 + 0x118;
  FUN_2c50ed7c(iVar9);
  FUN_2c50ed7c(iVar4);
  if (**(char **)(param_1 + 0x70) == -1) {
    cVar3 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x14),0,0x21);
    if (cVar3 != '\0') {
      FUN_2c50ece8(iVar9,*(undefined4 *)(param_1 + 0x14));
    }
  }
  else {
    cVar3 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x14),0,0x21);
    if (cVar3 == '\x19') {
      if (!bVar2) goto LAB_2c50abc0;
      FUN_2c50ece8(iVar9,*(undefined4 *)(param_1 + 0x14));
    }
    FUN_2c50ec60(iVar9,*(undefined4 *)(param_1 + 0x14));
  }
LAB_2c50abc0:
  if (*(char *)(*(int *)(param_1 + 0x74) + -1) != '\x02') {
    cVar3 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x18),0,0x21);
    if (cVar3 == '\x19') {
      if (!bVar2) {
        return;
      }
      FUN_2c50ece8(iVar4,*(undefined4 *)(param_1 + 0x18));
    }
    FUN_2c50ec60(iVar4,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  cVar3 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x18),0,0x21);
  if (cVar3 == '\0') {
    return;
  }
  FUN_2c50ece8(iVar4,*(undefined4 *)(param_1 + 0x18));
  return;
}

