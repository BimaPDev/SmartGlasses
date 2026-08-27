/* FUN_14078274 @ 0x14078274 */

void FUN_14078274(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  iVar2 = DAT_14078360;
  bVar4 = *(byte *)(param_1 + 4) & 7;
  FUN_140e5148(*(undefined4 *)(DAT_14078360 + 4),0xffffffff);
  if (bVar4 == 2) {
    if (*(short *)(iVar2 + 0x226) != 0) {
      *(short *)(iVar2 + 0x226) = *(short *)(iVar2 + 0x226) + -1;
    }
    FUN_140e5148(*(undefined4 *)(iVar2 + 4),0xffffffff);
    *(short *)(iVar2 + 0x224) = *(short *)(iVar2 + 0x224) + 1;
    FUN_140e52d8(*(undefined4 *)(iVar2 + 4));
    iVar3 = FUN_1407667c(1,*(undefined2 *)(param_1 + 0xe));
    if ((iVar3 == 0) && (iVar3 = FUN_1407667c(3,*(undefined2 *)(param_1 + 0xe)), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1407836c,DAT_14078368,*(undefined2 *)(param_1 + 0xe));
    }
    cVar1 = *(char *)(iVar2 + 9);
    bVar4 = *(char *)(iVar3 + 0xc) + 1;
    *(byte *)(iVar3 + 0xc) = bVar4;
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14078364,*(undefined2 *)(iVar3 + 8),bVar4 - 1,
                   *(undefined2 *)(iVar2 + 0x224));
    }
  }
  else if ((bVar4 == 4) && (*(short *)(iVar2 + 0x22a) != 0)) {
    *(short *)(iVar2 + 0x22a) = *(short *)(iVar2 + 0x22a) + -1;
    FUN_140e52d8(*(undefined4 *)(iVar2 + 4));
    return;
  }
  FUN_140e52d8(*(undefined4 *)(iVar2 + 4));
  return;
}

