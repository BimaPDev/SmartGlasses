/* FUN_2c5c919c @ 0x2c5c919c */

undefined4 FUN_2c5c919c(int *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (*(code **)(*param_1 + 0x14) != DAT_2c5c91b8) {
                    /* WARNING: Could not recover jumptable at 0x2c5c91b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x14))();
    return uVar3;
  }
  iVar2 = FUN_2c5d78f0();
  pcVar1 = DAT_2c5c91bc;
  if ((DAT_2c5c91bc == (char *)0x0) || (*DAT_2c5c91bc == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d7cec,0x7e,DAT_2c5d7ce8,DAT_2c5d7ce4,DAT_2c5c91bc);
  }
  piVar4 = *(int **)(iVar2 + 0xc);
  iVar6 = *(int *)(iVar2 + 0x10);
  iVar2 = iVar6 - (int)piVar4;
  if (0 < iVar2 >> 4) {
    piVar5 = piVar4 + (iVar2 >> 4) * 4;
    do {
      iVar2 = *piVar4;
      if ((iVar2 != 0) &&
         (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
         iVar2 == 0)) goto LAB_2c5d7ae4;
      iVar2 = piVar4[1];
      if ((iVar2 != 0) &&
         (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
         iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,pcVar1);
      }
      iVar2 = piVar4[2];
      if ((iVar2 != 0) &&
         (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
         iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,pcVar1);
      }
      iVar2 = piVar4[3];
      if ((iVar2 != 0) &&
         (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
         iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,pcVar1);
      }
      piVar4 = piVar4 + 4;
    } while (piVar4 != piVar5);
    iVar2 = iVar6 - (int)piVar4;
  }
  iVar2 = iVar2 >> 2;
  if (iVar2 == 2) {
LAB_2c5d7c90:
    iVar2 = *piVar4;
    if ((iVar2 != 0) &&
       (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
       iVar2 == 0)) goto LAB_2c5d7ae4;
    piVar4 = piVar4 + 1;
  }
  else {
    if (iVar2 == 3) {
      iVar2 = *piVar4;
      if ((iVar2 != 0) &&
         (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1),
         iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,pcVar1);
      }
      piVar4 = piVar4 + 1;
      goto LAB_2c5d7c90;
    }
    if (iVar2 != 1) {
      return 0;
    }
  }
  iVar2 = *piVar4;
  if ((iVar2 == 0) ||
     (iVar2 = FUN_2c5d780c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),pcVar1), iVar2 != 0
     )) {
    return 0;
  }
LAB_2c5d7ae4:
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5d7cec,0x74,DAT_2c5d7cf0,DAT_2c5d7cf4,pcVar1);
}

