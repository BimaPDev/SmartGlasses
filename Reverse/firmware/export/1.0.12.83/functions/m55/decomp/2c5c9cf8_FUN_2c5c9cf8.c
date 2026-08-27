/* FUN_2c5c9cf8 @ 0x2c5c9cf8 */

/* WARNING: Possible PIC construction at 0x2c5c9d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c5c9d0a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c5c9d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c5c9d1e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c5c9d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c5c9d32: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c5c9d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c5c9d46: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c5c9d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c5c9d5a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c5c9d64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c5c9d5e) */
/* WARNING: Removing unreachable block (ram,0x2c5c9d54) */
/* WARNING: Removing unreachable block (ram,0x2c5c9d4a) */
/* WARNING: Removing unreachable block (ram,0x2c5c9d40) */
/* WARNING: Removing unreachable block (ram,0x2c5c9d36) */
/* WARNING: Removing unreachable block (ram,0x2c5c9d2c) */
/* WARNING: Removing unreachable block (ram,0x2c5c9d22) */
/* WARNING: Removing unreachable block (ram,0x2c5c9d18) */
/* WARNING: Removing unreachable block (ram,0x2c5c9d0e) */
/* WARNING: Removing unreachable block (ram,0x2c5c9d04) */
/* WARNING: Removing unreachable block (ram,0x2c5c9d68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5c9cf8(void)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = FUN_2c5d78f0();
  pcVar1 = _LAB_2c5c9d78;
  if ((_LAB_2c5c9d78 == (char *)0x0) || (*_LAB_2c5c9d78 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d7cec,0x7e,DAT_2c5d7ce8,DAT_2c5d7ce4,_LAB_2c5c9d78);
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

