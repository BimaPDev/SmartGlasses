/* FUN_2c509040 @ 0x2c509040 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c509040(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  int iVar10;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c50914c;
  bVar1 = *(byte *)(param_1 + 0x15);
  iVar3 = FUN_2c6041fc(*(undefined4 *)(param_1 + 0x24),param_2,param_3,0);
  if ((uint)bVar1 < iVar3 - 1U) {
    uVar5 = (uint)*(byte *)(param_1 + 0x15);
    if (uVar5 == (int)(*(char **)(param_1 + 0x44))[-1] - 1U) {
      pcVar7 = *(char **)(param_1 + 0x40);
      if (*(char **)(param_1 + 0x44) != *(char **)(param_1 + 0x40)) {
        do {
          pcVar8 = pcVar7 + 1;
          *pcVar7 = *pcVar7 + '\x01';
          pcVar7 = pcVar8;
        } while (*(char **)(param_1 + 0x44) != pcVar8);
        uVar5 = (uint)*(byte *)(param_1 + 0x15);
      }
      bVar9 = true;
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    else {
      bVar9 = false;
    }
    uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),uVar5);
    FUN_2c50ece8(param_1 + 0x50,uVar4);
    *(char *)(param_1 + 0x15) = *(char *)(param_1 + 0x15) + '\x01';
    uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24));
    FUN_2c605208(uVar4,1);
    uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
    FUN_2c50ec60(param_1 + 0x50,uVar4);
  }
  else {
    puVar6 = *(undefined1 **)(param_1 + 0x40);
    iVar3 = -1;
    if (puVar6 != *(undefined1 **)(param_1 + 0x44)) {
      *(undefined1 **)(param_1 + 0x44) = puVar6;
    }
    while( true ) {
      uStack_18 = CONCAT13((char)iVar3,(undefined3)uStack_18);
      if (*(undefined1 **)(param_1 + 0x48) == puVar6) {
        FUN_2c505c90(param_1 + 0x40,puVar6,(int)&uStack_18 + 3);
      }
      else {
        *puVar6 = (char)iVar3;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      }
      if (iVar3 == 4) break;
      iVar3 = iVar3 + 1;
      puVar6 = *(undefined1 **)(param_1 + 0x44);
    }
    *(undefined2 *)(param_1 + 0x14) = 1;
    bVar9 = false;
    uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24));
    FUN_2c605208(uVar4,1);
    uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
    FUN_2c50ec60(param_1 + 0x50,uVar4);
  }
  if (*_LAB_2c50914c != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  uStack_18 = 0;
  iVar3 = 0;
  do {
    uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar3);
    cVar2 = FUN_2c6033b4(uVar4,0,0x21);
    if (cVar2 == '\x19') {
      uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar3);
      FUN_2c606d6c(uVar4,0);
    }
    uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar3);
    cVar2 = FUN_2c6033b4(uVar4,0,0x31);
    if (cVar2 == '\0') {
      uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),iVar3);
      FUN_2c606d90(uVar4,0x4c,0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 5);
  uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x15));
  FUN_2c606d6c(uVar4,0x19,0);
  if (-1 < **(char **)(param_1 + 0x40)) {
    uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24));
    FUN_2c606d6c(uVar4,0);
    uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),(int)**(char **)(param_1 + 0x40));
    FUN_2c606d90(uVar4,0);
  }
  if (*(char *)(*(int *)(param_1 + 0x44) + -1) < '\x05') {
    uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24));
    FUN_2c606d6c(uVar4,0);
    uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x24),
                         (int)*(char *)(*(int *)(param_1 + 0x44) + -1));
    FUN_2c606d90(uVar4,0);
  }
  iVar10 = param_1 + 0xec;
  iVar3 = param_1 + 0x188;
  FUN_2c50ed7c(iVar10);
  FUN_2c50ed7c(iVar3);
  if (**(char **)(param_1 + 0x40) == -1) {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x1c),0,0x21);
    if (cVar2 != '\0') {
      FUN_2c50ece8(iVar10,*(undefined4 *)(param_1 + 0x1c));
    }
  }
  else {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x1c),0,0x21);
    if (cVar2 == '\x19') {
      if (!bVar9) goto LAB_2c508b58;
      FUN_2c50ece8(iVar10,*(undefined4 *)(param_1 + 0x1c));
    }
    FUN_2c50ec60(iVar10,*(undefined4 *)(param_1 + 0x1c));
  }
LAB_2c508b58:
  if (*(char *)(*(int *)(param_1 + 0x44) + -1) != '\x05') {
    cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x20),0,0x21);
    if (cVar2 == '\x19') {
      if (!bVar9) {
        return;
      }
      FUN_2c50ece8(iVar3,*(undefined4 *)(param_1 + 0x20));
    }
    FUN_2c50ec60(iVar3,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x20),0,0x21);
  if (cVar2 == '\0') {
    return;
  }
  FUN_2c50ece8(iVar3,*(undefined4 *)(param_1 + 0x20));
  return;
}

