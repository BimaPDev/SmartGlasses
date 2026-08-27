/* FUN_2c5dffd0 @ 0x2c5dffd0 */

void FUN_2c5dffd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5e0264,0x103,DAT_2c5e0260,DAT_2c5e027c);
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5e0264,0x10a,DAT_2c5e0260,DAT_2c5e0270,*(undefined4 *)(param_2 + 0xc));
  }
  *(int *)(param_1 + 0x44) = param_2;
  *(undefined1 *)(param_1 + 0x48) = 1;
  iVar1 = FUN_2c5def00(param_2);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5e0264,0x117,DAT_2c5e0260,DAT_2c5e0278,
                 *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc));
  }
  *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x21) = 1;
  iVar1 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar1 == iVar3) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(iVar3 + 0x24) = 1;
    *(char *)(param_1 + 0x4a) = (char)param_3;
  }
  else {
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x24) = 0;
      iVar3 = *(int *)(param_1 + 0x44);
    }
    *(undefined1 *)(iVar3 + 0x24) = 1;
    *(char *)(param_1 + 0x4a) = (char)param_3;
  }
  if (param_3 != 0) {
    FUN_2c5dfde4(param_1,*(undefined4 *)(param_1 + 0x44));
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) && (*(int *)(param_1 + 0x44) != 0)) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 0xc), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5e0264,0x132,DAT_2c5e0260,DAT_2c5e025c,*(int *)(iVar1 + 0xc),iVar3);
  }
  FUN_2c5df27c(param_1,iVar1);
  FUN_2c5df27c(param_1,*(undefined4 *)(param_1 + 0x44));
  if (*(char *)(param_1 + 0x4c) == '\v') {
    if ((*(int *)(param_1 + 0x40) != 0) && (*(char *)(*(int *)(param_1 + 0x40) + 0x21) == '\n')) {
      FUN_2c5dff30();
    }
    if ((*(int *)(param_1 + 0x44) != 0) && (*(char *)(*(int *)(param_1 + 0x44) + 0x21) == '\x03')) {
      FUN_2c5dff30();
    }
  }
  if (*(char *)(param_1 + 0x4a) == '\0') {
    uVar2 = FUN_2c5dd32c(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5e0264,0x15d,DAT_2c5e0260,DAT_2c5e0274,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5e0264,0x157,DAT_2c5e0260,DAT_2c5e026c,
               *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc));
}

