/* FUN_2c5ace8e @ 0x2c5ace8e */

undefined4 FUN_2c5ace8e(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_2c620fa4(0x400,0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x188) + 8);
  if ((*(char *)(iVar1 + 0x48) != '\0') || (*(char *)(iVar1 + 0x49) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5e031c,0x1d3,DAT_2c5e0324,DAT_2c5e0320,*(char *)(iVar1 + 0x48),
                 *(char *)(iVar1 + 0x49));
  }
  iVar2 = FUN_2c5dd304();
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5e031c,0x1b9,DAT_2c5e0318,DAT_2c5e0314,*(int *)(iVar2 + 0xc));
  }
  FUN_2c5de7b0(iVar1,1);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  uVar3 = FUN_2c5dd304(iVar1);
  FUN_2c5dffd0(iVar1,uVar3,0);
  return 1;
}

