/* FUN_2c5c9118 @ 0x2c5c9118 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5c9118(void)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = FUN_2c5d78f0();
  pcVar1 = _LAB_2c5c9128;
  if ((_LAB_2c5c9128 == (char *)0x0) || (*_LAB_2c5c9128 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d7cec,0x7e,DAT_2c5d7ce8,DAT_2c5d7ce4,_LAB_2c5c9128);
  }
  piVar3 = *(int **)(iVar2 + 0xc);
  iVar5 = *(int *)(iVar2 + 0x10);
  iVar2 = iVar5 - (int)piVar3;
  if (0 < iVar2 >> 4) {
    piVar4 = piVar3 + (iVar2 >> 4) * 4;
    do {
      iVar2 = *piVar3;
      if ((iVar2 != 0) &&
         (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
         iVar2 == 0)) goto LAB_2c5d7ae4;
      iVar2 = piVar3[1];
      if ((iVar2 != 0) &&
         (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
         iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,pcVar1);
      }
      iVar2 = piVar3[2];
      if ((iVar2 != 0) &&
         (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
         iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,pcVar1);
      }
      iVar2 = piVar3[3];
      if ((iVar2 != 0) &&
         (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
         iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,pcVar1);
      }
      piVar3 = piVar3 + 4;
    } while (piVar3 != piVar4);
    iVar2 = iVar5 - (int)piVar3;
  }
  iVar2 = iVar2 >> 2;
  if (iVar2 == 2) {
LAB_2c5d7c90:
    iVar2 = *piVar3;
    if ((iVar2 != 0) &&
       (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
       iVar2 == 0)) goto LAB_2c5d7ae4;
    piVar3 = piVar3 + 1;
  }
  else {
    if (iVar2 == 3) {
      iVar2 = *piVar3;
      if ((iVar2 != 0) &&
         (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
         iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,pcVar1);
      }
      piVar3 = piVar3 + 1;
      goto LAB_2c5d7c90;
    }
    if (iVar2 != 1) {
      return 0;
    }
  }
  iVar2 = *piVar3;
  if ((iVar2 == 0) ||
     (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1), iVar2 != 0
     )) {
    return 0;
  }
LAB_2c5d7ae4:
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,pcVar1);
}

