/* FUN_2c5cada0 @ 0x2c5cada0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cada0(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = FUN_2c48e424(&stack0x00000310,_LAB_2c5caf04,0);
  iVar2 = FUN_2c48e424(uVar1,_LAB_2c5caf08);
  if (iVar2 == 0) {
    FUN_2c48de10(uVar1);
    uVar1 = FUN_2c48e3b8();
    FUN_2c48e424(uVar1,_LAB_2c5caf08);
    pcVar3 = (char *)FUN_2c48de10();
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,uRam2c5caf14,0x1b3,_FUN_2c5caf10);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,uRam2c5caf14,0x1ae,_FUN_2c5caf10);
  }
  pcVar3 = (char *)FUN_2c48de10();
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,uRam2c5caf14,0x1b3,_FUN_2c5caf10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,uRam2c5caf14,0x1a7,_FUN_2c5caf10);
}

