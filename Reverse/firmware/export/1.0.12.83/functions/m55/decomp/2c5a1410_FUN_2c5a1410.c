/* FUN_2c5a1410 @ 0x2c5a1410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a1410(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  
  FUN_2c59c284();
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(char *)(param_1 + 4) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5a1690,0x317,_DAT_2c5a1698,_DAT_2c5a16a4);
  }
  iVar1 = FUN_2c48de10(param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5a1690,0x321,_DAT_2c5a1698,_DAT_2c5a16b0);
  }
  iVar1 = FUN_2c48e3b8();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5a1690,0x327,_DAT_2c5a1698,_FUN_2c5a16a8);
  }
  FUN_2c48e424(iVar1,_LAB_2c5a168c);
  uVar2 = FUN_2c48de20();
  iVar1 = VectorFloatToSigned(CONCAT44(extraout_s1,uVar2),3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5a1690,0x332,_DAT_2c5a1698,_DAT_2c5a1694,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5a1690,0x32d,_DAT_2c5a1698,_DAT_2c5a16ac,iVar1);
}

