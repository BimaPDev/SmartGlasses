/* FUN_2c505d60 @ 0x2c505d60 */

/* WARNING: Removing unreachable block (ram,0x2c50596a) */
/* WARNING: Removing unreachable block (ram,0x2c50597c) */

void FUN_2c505d60(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_18;
  int local_14;
  
  local_14 = *DAT_2c505e50;
  uVar3 = FUN_2c5e33e4();
  *(char *)(param_1 + 0xd) = (char)uVar3;
  if (*(byte *)(param_1 + 0x38) == uVar3) {
    iVar7 = 0;
  }
  else {
    if (*(byte *)(param_1 + 0x54) != uVar3) goto LAB_2c505d86;
    iVar7 = 1;
  }
  *(char *)(param_1 + 0x74) = (char)iVar7;
  iVar7 = *(int *)(param_1 + iVar7 * 0x1c + 0x3c);
  if (iVar7 != 0) {
    FUN_2c606abc(iVar7,1);
  }
LAB_2c505d86:
  iVar7 = -1;
  puVar5 = *(undefined1 **)(param_1 + 0x68);
  uVar6 = 0xff;
  if (puVar5 != *(undefined1 **)(param_1 + 0x6c)) {
    *(undefined1 **)(param_1 + 0x6c) = puVar5;
  }
  uStack_18 = CONCAT13(0xff,(undefined3)uStack_18);
  if (puVar5 == *(undefined1 **)(param_1 + 0x70)) goto LAB_2c505dc2;
  do {
    *puVar5 = uVar6;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    while( true ) {
      iVar7 = iVar7 + 1;
      if (iVar7 == 3) {
        uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x74));
        FUN_2c605208(uVar4,0);
        uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x74));
        FUN_2c606d90(uVar4,0xff,0);
        if (*(int *)(param_1 + 0x20) != 0) {
          FUN_2c606abc(*(int *)(param_1 + 0x20),1);
        }
        if (*(int *)(param_1 + 0x24) != 0) {
          FUN_2c606abc(*(int *)(param_1 + 0x24),1);
        }
        piVar1 = DAT_2c505e50;
        *(undefined1 *)(param_1 + 0x28) = 0;
        if (*piVar1 != local_14) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        uStack_18 = 0;
        iVar7 = 0;
        while( true ) {
          uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar7);
          cVar2 = FUN_2c6033b4(uVar4,0,0x21);
          if (cVar2 == '\x19') {
            uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar7);
            FUN_2c606d6c(uVar4,0);
          }
          uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar7);
          cVar2 = FUN_2c6033b4(uVar4,0,0x31);
          if (cVar2 == '\0') {
            uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),iVar7);
            FUN_2c606d90(uVar4,0x4c,0);
          }
          if (iVar7 != 0) break;
          iVar7 = 1;
        }
        uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x74));
        FUN_2c606d6c(uVar4,0x19,0);
        if (-1 < **(char **)(param_1 + 0x68)) {
          uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c));
          FUN_2c606d6c(uVar4,0);
          uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),(int)**(char **)(param_1 + 0x68));
          FUN_2c606d90(uVar4,0);
        }
        if (*(char *)(*(int *)(param_1 + 0x6c) + -1) < '\x02') {
          uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c));
          FUN_2c606d6c(uVar4,0);
          uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x2c),
                               (int)*(char *)(*(int *)(param_1 + 0x6c) + -1));
          FUN_2c606d90(uVar4,0);
        }
        iVar8 = param_1 + 0x80;
        iVar7 = param_1 + 0x11c;
        FUN_2c50ed7c(iVar8);
        FUN_2c50ed7c(iVar7);
        if (**(char **)(param_1 + 0x68) == -1) {
          cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x78),0,0x21);
          if (cVar2 != '\0') {
            FUN_2c50ece8(iVar8,*(undefined4 *)(param_1 + 0x78));
          }
        }
        else {
          cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x78),0,0x21);
          if (cVar2 != '\x19') {
            FUN_2c50ec60(iVar8,*(undefined4 *)(param_1 + 0x78));
          }
        }
        if (*(char *)(*(int *)(param_1 + 0x6c) + -1) == '\x02') {
          cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x7c),0,0x21);
          if (cVar2 != '\0') {
            FUN_2c50ece8(iVar7,*(undefined4 *)(param_1 + 0x7c));
            return;
          }
        }
        else {
          cVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x7c),0,0x21);
          if (cVar2 != '\x19') {
            FUN_2c50ec60(iVar7,*(undefined4 *)(param_1 + 0x7c));
            return;
          }
        }
        return;
      }
      puVar5 = *(undefined1 **)(param_1 + 0x6c);
      uVar6 = (undefined1)iVar7;
      uStack_18 = CONCAT13(uVar6,(undefined3)uStack_18);
      if (puVar5 != *(undefined1 **)(param_1 + 0x70)) break;
LAB_2c505dc2:
      FUN_2c505c90(param_1 + 0x68,puVar5,(int)&uStack_18 + 3);
    }
  } while( true );
}

