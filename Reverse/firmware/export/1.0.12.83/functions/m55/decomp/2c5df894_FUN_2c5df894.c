/* FUN_2c5df894 @ 0x2c5df894 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5df894(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(char *)(param_1 + 0x48) != '\0') || (*(char *)(param_1 + 0x49) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5df93c,0x1d3,_LAB_2c5df944,_LAB_2c5df940,*(char *)(param_1 + 0x48),
                 *(char *)(param_1 + 0x49));
  }
  iVar1 = FUN_2c5dd304();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5df93c,0x9c,_LAB_2c5df938,_LAB_2c5df950);
  }
  if (*(char *)(iVar1 + 0x1e) != '\0') {
    iVar2 = FUN_2c5dd33c(param_1,*(undefined4 *)(iVar1 + 0xc),0);
    if (iVar2 == 0) {
      uVar4 = 0xa9;
      uVar3 = _LAB_2c5df948;
    }
    else {
      uVar4 = 0xad;
      uVar3 = _LAB_2c5df934;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5df93c,uVar4,_LAB_2c5df938,uVar3,*(undefined4 *)(iVar1 + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5df93c,0xa3,_LAB_2c5df938,_LAB_2c5df94c,*(undefined4 *)(iVar1 + 0xc));
}

