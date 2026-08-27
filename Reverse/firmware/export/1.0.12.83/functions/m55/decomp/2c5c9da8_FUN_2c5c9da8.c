/* FUN_2c5c9da8 @ 0x2c5c9da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c9da8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_s1;
  
  iVar1 = FUN_2c48e424(param_1,_LAB_2c5c9f08,param_3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5c9f1c,0x23e,_LAB_2c5c9f18,_LAB_2c5c9f2c);
  }
  FUN_2c48e424(iVar1,_LAB_2c5c9f0c);
  pcVar2 = (char *)FUN_2c48de10();
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5c9f1c,0x245,_LAB_2c5c9f18,_LAB_2c5c9f20);
  }
  iVar3 = FUN_2c66b624(pcVar2,_LAB_2c5c9f10);
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar3 = FUN_2c66b624(pcVar2,_LAB_2c5c9f24);
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar3 = FUN_2c66b624(pcVar2,_LAB_2c5c9f28);
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar3 = FUN_2c66b624(pcVar2,_LAB_2c5c9f30);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5c9f1c,0x265,_LAB_2c5c9f18,_LAB_2c5c9f38);
        }
        uVar4 = FUN_2c48e424(iVar1,_LAB_2c5c9f34);
        iVar1 = FUN_2c48e83c();
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5c9f1c,0x261,_LAB_2c5c9f18,_LAB_2c5c9f3c);
        }
        uVar4 = FUN_2c48de20(uVar4);
        iVar1 = VectorFloatToSigned(CONCAT44(extraout_s1,uVar4),3);
        if ((((iVar1 != 0x15) && (iVar1 != 0x16)) && (iVar1 != 0x13)) && (iVar1 != 0x14)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5c9f1c,0x25d,_LAB_2c5c9f18,_LAB_2c5c9f40);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5c9f1c,0x268,_LAB_2c5c9f18,_LAB_2c5c9f14,pcVar2,iVar1);
}

