/* FUN_2c63ef22 @ 0x2c63ef22 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63ef22(int param_1,undefined4 param_2)

{
  int iVar1;
  char in_ZR;
  
  if (in_ZR == '\0') {
    if (param_1 == 2) {
      iVar1 = FUN_2c5e317c(0x17,1,param_2,0,1);
    }
    else {
      if (param_1 != 0) goto LAB_2c63ef32;
      iVar1 = FUN_2c5e317c(0x15,1,param_2,0,1);
    }
  }
  else {
    iVar1 = FUN_2c5e317c(0x16,param_2,param_2,0,param_1);
  }
  if (iVar1 != 0) {
    return;
  }
LAB_2c63ef32:
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,uRam2c63ef90,0x4f,_FUN_2c63ef8c,_LAB_2c63ef88,param_1,param_2);
}

