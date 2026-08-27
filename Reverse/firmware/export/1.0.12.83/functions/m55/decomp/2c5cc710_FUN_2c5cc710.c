/* FUN_2c5cc710 @ 0x2c5cc710 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cc710(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_2c48e424(param_1,_LAB_2c5cca3c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5cca48,0x66,_LAB_2c5cca4c,uRam2c5ccac8);
  }
  FUN_2c48e424(iVar1,_LAB_2c5cca40);
  pcVar2 = (char *)FUN_2c48de10();
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5cca48,0x74,_LAB_2c5cca4c,_LAB_2c5cca44,pcVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5cca48,0x71,_LAB_2c5cca4c,uRam2c5ccacc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5cca48,0x6c,_LAB_2c5cca4c,uRam2c5ccac4);
}

