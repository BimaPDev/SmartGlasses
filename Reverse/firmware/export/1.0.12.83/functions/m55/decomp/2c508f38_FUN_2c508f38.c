/* FUN_2c508f38 @ 0x2c508f38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c508f38(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  int iVar9;
  undefined4 uStack_18;
  int iStack_14;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x15);
  iStack_14 = *_LAB_2c50903c;
  if (uVar3 == 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x40);
    iVar5 = 0;
    if (puVar4 != *(undefined1 **)(param_1 + 0x44)) {
      *(undefined1 **)(param_1 + 0x44) = puVar4;
    }
    while( true ) {
      uStack_18 = CONCAT13((char)iVar5,(undefined3)uStack_18);
      if (*(undefined1 **)(param_1 + 0x48) == puVar4) {
        FUN_2c505c90(param_1 + 0x40,puVar4,(int)&uStack_18 + 3);
      }
      else {
        *puVar4 = (char)iVar5;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      }
      if (iVar5 == 5) break;
      iVar5 = iVar5 + 1;
      puVar4 = *(undefined1 **)(param_1 + 0x44);
    }
    bVar8 = false;
    *(undefined2 *)(param_1 + 0x14) = 0x401;
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),4);
    FUN_2c605208(uVar2,1);
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
    FUN_2c50ec60(param_1 + 0x50,uVar2);
  }
  else {
    pcVar6 = *(char **)(param_1 + 0x40);
    iVar5 = (int)*pcVar6;
    if (uVar3 == iVar5 + 1U) {
      if (*(char **)(param_1 + 0x44) != pcVar6) {
        while( true ) {
          pcVar7 = pcVar6 + 1;
          *pcVar6 = (char)iVar5 + -1;
          if (*(char **)(param_1 + 0x44) == pcVar7) break;
          iVar5 = (int)*pcVar7;
          pcVar6 = pcVar7;
        }
        uVar3 = (uint)*(byte *)(param_1 + 0x15);
      }
      bVar8 = true;
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    else {
      bVar8 = false;
    }
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),uVar3);
    FUN_2c50ece8(param_1 + 0x50,uVar2);
    *(char *)(param_1 + 0x15) = *(char *)(param_1 + 0x15) + -1;
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24));
    FUN_2c605208(uVar2,1);
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
    FUN_2c50ec60(param_1 + 0x50,uVar2);
  }
  if (*_LAB_2c50903c != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  uStack_18 = 0;
  iVar5 = 0;
  do {
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar5);
    cVar1 = FUN_2c6033b4(uVar2,0,0x21);
    if (cVar1 == '\x19') {
      uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar5);
      FUN_2c606d6c(uVar2,0);
    }
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar5);
    cVar1 = FUN_2c6033b4(uVar2,0,0x31);
    if (cVar1 == '\0') {
      uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar5);
      FUN_2c606d90(uVar2,0x4c,0);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 5);
  uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
  FUN_2c606d6c(uVar2,0x19,0);
  if (-1 < **(char **)(param_1 + 0x40)) {
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24));
    FUN_2c606d6c(uVar2,0);
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),(int)**(char **)(param_1 + 0x40));
    FUN_2c606d90(uVar2,0);
  }
  if (*(char *)(*(int *)(param_1 + 0x44) + -1) < '\x05') {
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24));
    FUN_2c606d6c(uVar2,0);
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),
                         (int)*(char *)(*(int *)(param_1 + 0x44) + -1));
    FUN_2c606d90(uVar2,0);
  }
  iVar9 = param_1 + 0xec;
  iVar5 = param_1 + 0x188;
  FUN_2c50ed7c(iVar9);
  FUN_2c50ed7c(iVar5);
  if (**(char **)(param_1 + 0x40) == -1) {
    cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x1c),0,0x21);
    if (cVar1 != '\0') {
      FUN_2c50ece8(iVar9,*(undefined4 *)(param_1 + 0x1c));
    }
  }
  else {
    cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x1c),0,0x21);
    if (cVar1 == '\x19') {
      if (!bVar8) goto LAB_2c508b58;
      FUN_2c50ece8(iVar9,*(undefined4 *)(param_1 + 0x1c));
    }
    FUN_2c50ec60(iVar9,*(undefined4 *)(param_1 + 0x1c));
  }
LAB_2c508b58:
  if (*(char *)(*(int *)(param_1 + 0x44) + -1) != '\x05') {
    cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x20),0,0x21);
    if (cVar1 == '\x19') {
      if (!bVar8) {
        return;
      }
      FUN_2c50ece8(iVar5,*(undefined4 *)(param_1 + 0x20));
    }
    FUN_2c50ec60(iVar5,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  cVar1 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x20),0,0x21);
  if (cVar1 == '\0') {
    return;
  }
  FUN_2c50ece8(iVar5,*(undefined4 *)(param_1 + 0x20));
  return;
}

