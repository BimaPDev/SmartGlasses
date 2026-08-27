/* FUN_2c5e9e28 @ 0x2c5e9e28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e9e28(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_2c5e7270(6,1);
  if ((piVar1 == (int *)0x0) || (*(char *)((int)piVar1 + 0x32) == '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e9f38,0x107,_LAB_2c5e9f34,_LAB_2c5e9f44);
  }
  if ((char)piVar1[0x10] == '\0') {
    if (piVar1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5e9f38,0x109,_LAB_2c5e9f34,_LAB_2c5e9f50);
    }
    if (*piVar1 != 0) {
      if (*DAT_2c524904 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c524910,0x22c,DAT_2c524908,DAT_2c52490c,DAT_2c524908);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c524910,0x229,DAT_2c524908,DAT_2c52491c,DAT_2c524908);
    }
  }
  else if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e9f38,0x11b,_LAB_2c5e9f34,_LAB_2c5e9f30,*piVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5e9f38,0x10e,_LAB_2c5e9f34,_LAB_2c5e9f48);
}

