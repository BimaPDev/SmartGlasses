/* FUN_2c5259d6 @ 0x2c5259d6 */

void FUN_2c5259d6(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = DAT_2c525a24;
  if (*DAT_2c525a24 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  iVar2 = FUN_2c47245c(0,0x118);
  FUN_2c527320();
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c525a30,0xa9,DAT_2c525a2c,DAT_2c525a28);
  }
  *(undefined4 *)(iVar2 + 0x28) = param_2;
  FUN_2c5273c0();
  if ((*(int *)(iVar2 + 0x54) != 0) || (*(int *)(iVar2 + 0x70) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c528ab0,0x6d,DAT_2c528aac,DAT_2c528aa8);
  }
  FUN_2c527b00(iVar2,*(undefined4 *)(iVar2 + 0x28));
  FUN_2c5280e4(iVar2,*(undefined4 *)(iVar2 + 0x28));
  FUN_2c5281e8(iVar2,1);
  if ((*(int *)(iVar2 + 0x104) == 0) &&
     ((*(int *)(iVar2 + 0x108) == 0 && (*(int *)(iVar2 + 0x10c) == 0)))) {
    FUN_2c5271cc(iVar2,*(undefined4 *)(iVar2 + 0x28));
    FUN_2c5282a0(iVar2,1);
    uVar3 = FUN_2c5e33e4();
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c528ab0,0x2d9,DAT_2c528ac0,DAT_2c528abc,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c528ab0,0x157,DAT_2c528ab8,DAT_2c528ab4);
}

