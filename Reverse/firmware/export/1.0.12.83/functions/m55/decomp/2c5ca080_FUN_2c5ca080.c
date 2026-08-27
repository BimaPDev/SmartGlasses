/* FUN_2c5ca080 @ 0x2c5ca080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ca080(undefined4 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  uVar2 = FUN_2c48e424(param_1,_LAB_2c5ca150);
  FUN_2c48e424(uVar2,_LAB_2c5ca154);
  iVar3 = FUN_2c48e80c();
  FUN_2c48e424(uVar2,_LAB_2c5ca158);
  pcVar4 = (char *)FUN_2c48de10();
  FUN_2c48e424(uVar2,_LAB_2c5ca15c);
  pcVar5 = (char *)FUN_2c48de10();
  FUN_2c48e424(uVar2,_LAB_2c5ca160);
  uVar1 = FUN_2c48de20();
  iVar6 = VectorFloatToSigned(uVar1,3);
  if (iVar6 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ca16c,0x472,_LAB_2c5ca168,_LAB_2c5ca170);
  }
  if ((((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) && (pcVar5 != (char *)0x0)) &&
     (*pcVar5 != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ca16c,0x479,_LAB_2c5ca168,_LAB_2c5ca174,iVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5ca16c,0x476,_LAB_2c5ca168,_LAB_2c5ca164);
}

