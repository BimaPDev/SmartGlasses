/* FUN_2c5ac4f4 @ 0x2c5ac4f4 */

void FUN_2c5ac4f4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  FUN_2c673cc8(2,1);
  if (*(int *)(param_1 + 0x194) == 0) {
    uVar4 = FUN_2c620f0c(0xbbf,DAT_2c5ac52c);
    *(undefined4 *)(param_1 + 0x194) = uVar4;
  }
  puVar3 = DAT_2c63b564;
  piVar2 = DAT_2c63b560;
  iVar1 = DAT_2c5ac528;
  if (DAT_2c5ac528 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x167,DAT_2c63b574,DAT_2c63b578,DAT_2c63b580);
  }
  if ((*DAT_2c63b55c != '\0') && (*DAT_2c63b560 != 0)) {
    piVar5 = (int *)FUN_2c4728e8(4);
    *piVar5 = iVar1;
    FUN_2c644044(*puVar3,0xffffffff);
    iVar6 = FUN_2c4858f0(*piVar2,DAT_2c63b568,piVar5);
    if (iVar6 == 0) {
      FUN_2c4857c8(*piVar2,piVar5);
      FUN_2c644080(*puVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x175,DAT_2c63b574,DAT_2c63b578,DAT_2c63b570,DAT_2c63b56c,iVar1);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x16c,DAT_2c63b574,DAT_2c63b578,DAT_2c63b57c);
}

