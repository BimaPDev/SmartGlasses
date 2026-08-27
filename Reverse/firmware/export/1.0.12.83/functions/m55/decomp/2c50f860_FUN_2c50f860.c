/* FUN_2c50f860 @ 0x2c50f860 */

void FUN_2c50f860(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((uint)*(byte *)(param_1 + 0x144) == (uint)*(byte *)(param_1 + 0x145)) {
    return;
  }
  iVar5 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x145) * 4 + 0x40);
  if (*(char *)(iVar5 + 0x90) < '\x01') {
    if (*(char *)(iVar5 + 0x124) < '\x01') {
      return;
    }
    iVar6 = 1;
    iVar4 = iVar5 + 0x94;
  }
  else {
    iVar6 = 0;
    iVar4 = iVar5;
  }
  iVar3 = *(int *)(iVar5 + iVar6 * 0x94);
  if (iVar3 != 0) {
    bVar1 = *(byte *)(param_1 + 0x1d8);
    if (bVar1 == 0x24) {
      FUN_2c62bea8();
    }
    else {
      *(int *)(param_1 + (uint)bVar1 * 4 + 0x148) = iVar3;
      *(byte *)(param_1 + 0x1d8) = bVar1 + 1;
    }
    FUN_2c673eb8(iVar4,iVar4 + 4,0x54);
    iVar4 = iVar6 * 0x94 + iVar5;
    cVar2 = *(char *)(iVar4 + 0x90) + -1;
    *(char *)(iVar4 + 0x90) = cVar2;
    *(undefined4 *)(iVar5 + (iVar6 * 0x25 + (int)cVar2) * 4) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c50f914,0x3d2,DAT_2c50f91c,DAT_2c50f918,DAT_2c50f910);
}

