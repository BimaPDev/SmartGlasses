/* FUN_2c5d6a94 @ 0x2c5d6a94 */

undefined4 FUN_2c5d6a94(char *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_2c5d78f0();
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d7cec,0x7e,DAT_2c5d7ce8,DAT_2c5d7ce4,param_1);
  }
  piVar2 = *(int **)(iVar1 + 0xc);
  iVar4 = *(int *)(iVar1 + 0x10);
  iVar1 = iVar4 - (int)piVar2;
  if (0 < iVar1 >> 4) {
    piVar3 = piVar2 + (iVar1 >> 4) * 4;
    do {
      iVar1 = *piVar2;
      if ((iVar1 != 0) &&
         (iVar1 = FUN_2c5d780c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),param_1),
         iVar1 == 0)) goto LAB_2c5d7ae4;
      iVar1 = piVar2[1];
      if ((iVar1 != 0) &&
         (iVar1 = FUN_2c5d780c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),param_1),
         iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,param_1);
      }
      iVar1 = piVar2[2];
      if ((iVar1 != 0) &&
         (iVar1 = FUN_2c5d780c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),param_1),
         iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,param_1);
      }
      iVar1 = piVar2[3];
      if ((iVar1 != 0) &&
         (iVar1 = FUN_2c5d780c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),param_1),
         iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,param_1);
      }
      piVar2 = piVar2 + 4;
    } while (piVar2 != piVar3);
    iVar1 = iVar4 - (int)piVar2;
  }
  iVar1 = iVar1 >> 2;
  if (iVar1 == 2) {
LAB_2c5d7c90:
    iVar1 = *piVar2;
    if ((iVar1 != 0) &&
       (iVar1 = FUN_2c5d780c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),param_1),
       iVar1 == 0)) goto LAB_2c5d7ae4;
    piVar2 = piVar2 + 1;
  }
  else {
    if (iVar1 == 3) {
      iVar1 = *piVar2;
      if ((iVar1 != 0) &&
         (iVar1 = FUN_2c5d780c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),param_1),
         iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,param_1);
      }
      piVar2 = piVar2 + 1;
      goto LAB_2c5d7c90;
    }
    if (iVar1 != 1) {
      return 0;
    }
  }
  iVar1 = *piVar2;
  if ((iVar1 == 0) ||
     (iVar1 = FUN_2c5d780c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),param_1),
     iVar1 != 0)) {
    return 0;
  }
LAB_2c5d7ae4:
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,param_1);
}

