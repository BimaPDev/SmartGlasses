/* FUN_2c5cbc30 @ 0x2c5cbc30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cbc30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  
  iVar1 = FUN_2c48e3b8(param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5cbce0,0x458,_LAB_2c5cbce4,_LAB_2c5cbce8);
  }
  FUN_2c48e424(iVar1,_LAB_2c5cbcd8);
  uVar2 = FUN_2c48de20();
  if (!NAN((double)CONCAT44(extraout_s1,uVar2))) {
    uVar2 = VectorFloatToSigned(CONCAT44(extraout_s1,uVar2),3);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cbce0,0x461,_LAB_2c5cbce4,_LAB_2c5cbcdc,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5cbce0,0x45d,_LAB_2c5cbce4,_LAB_2c5cbcec);
}

