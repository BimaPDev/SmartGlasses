/* FUN_2c50eec8 @ 0x2c50eec8 */

/* WARNING: Removing unreachable block (ram,0x2c512b6a) */

undefined4 FUN_2c50eec8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_2c602618();
  iVar2 = FUN_2c602414(param_1);
  if (iVar1 == 0xd3) {
    FUN_2c512714();
    iVar1 = FUN_2c512c34(0);
    if (iVar1 == 0) {
      FUN_2c620fa4(0x400,0);
      iVar1 = *(int *)(iVar2 + 8);
      goto LAB_2c5e028c;
    }
  }
  else if ((iVar1 == 0xd4) || (iVar1 == 0xe3)) {
    iVar1 = *(int *)(iVar2 + 8);
LAB_2c5e028c:
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
    uVar4 = FUN_2c5dd304(iVar1);
    FUN_2c5dffd0(iVar1,uVar4,0);
    return 1;
  }
  piVar3 = (int *)FUN_2c512714();
  if (*piVar3 != 0) {
    uVar4 = FUN_2c5143e8(*piVar3 + 0x30,param_1);
    return uVar4;
  }
  return 0;
}

