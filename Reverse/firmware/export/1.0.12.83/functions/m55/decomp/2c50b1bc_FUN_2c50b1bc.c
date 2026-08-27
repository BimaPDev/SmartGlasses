/* FUN_2c50b1bc @ 0x2c50b1bc */

/* WARNING: Removing unreachable block (ram,0x2c50abf6) */
/* WARNING: Removing unreachable block (ram,0x2c50ac08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50b1bc(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_2c5eb89c(_LAB_2c50b260,*(undefined4 *)(param_1 + 0x2c),0,_LAB_2c50b25c,param_1);
  FUN_2c5eb89c(_LAB_2c50b264,*(undefined4 *)(param_1 + 0x50),0,_LAB_2c50b25c,param_1);
  bVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x34))();
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(byte *)(param_1 + 0x24) = bVar2;
  *(byte *)(param_1 + 0x25) = bVar2 ^ 1;
  FUN_2c50b10c(param_1);
  uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x25));
  FUN_2c605208(uVar3,0);
  uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x25));
  FUN_2c606d90(uVar3,0xff,0);
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x10),1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x20),1);
  }
  iVar4 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x25) * 0x24 + 0x3c);
  if (iVar4 != 0) {
    FUN_2c606abc(iVar4,1);
  }
  iVar4 = 0;
  while( true ) {
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),iVar4);
    cVar1 = FUN_2c6033b4(uVar3,0,0x31);
    if (cVar1 == '\0') {
      uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c),iVar4);
      FUN_2c606d90(uVar3,0x4c,0);
    }
    if (iVar4 != 0) break;
    iVar4 = 1;
  }
  if (-1 < **(char **)(param_1 + 0x70)) {
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c));
    FUN_2c606d90(uVar3,0);
  }
  if (*(char *)(*(int *)(param_1 + 0x74) + -1) < '\x02') {
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x1c));
    FUN_2c606d90(uVar3,0);
  }
  iVar5 = param_1 + 0x7c;
  iVar4 = param_1 + 0x118;
  FUN_2c50ed7c(iVar5);
  FUN_2c50ed7c(iVar4);
  if (**(char **)(param_1 + 0x70) == -1) {
    cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x14),0,0x21);
    if (cVar1 != '\0') {
      FUN_2c50ece8(iVar5,*(undefined4 *)(param_1 + 0x14));
    }
  }
  else {
    cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x14),0,0x21);
    if (cVar1 != '\x19') {
      FUN_2c50ec60(iVar5,*(undefined4 *)(param_1 + 0x14));
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x74) + -1) == '\x02') {
    cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x18),0,0x21);
    if (cVar1 != '\0') {
      FUN_2c50ece8(iVar4,*(undefined4 *)(param_1 + 0x18));
      return;
    }
  }
  else {
    cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x18),0,0x21);
    if (cVar1 != '\x19') {
      FUN_2c50ec60(iVar4,*(undefined4 *)(param_1 + 0x18));
      return;
    }
  }
  return;
}

