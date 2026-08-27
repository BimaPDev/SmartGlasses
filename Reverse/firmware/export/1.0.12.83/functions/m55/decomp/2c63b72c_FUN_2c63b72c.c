/* FUN_2c63b72c @ 0x2c63b72c */

void FUN_2c63b72c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = DAT_2c63b7d8;
  piVar1 = DAT_2c63b7d4;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1b9,DAT_2c63b7e8,DAT_2c63b7ec,DAT_2c63b7f4);
  }
  if (*DAT_2c63b7d0 != '\0') {
    if (*DAT_2c63b7d4 != 0) {
      piVar3 = (int *)FUN_2c4728e8(4);
      *piVar3 = param_1;
      FUN_2c644044(*puVar2,0xffffffff);
      iVar4 = FUN_2c4858f0(*piVar1,DAT_2c63b7dc,piVar3);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x1c8,DAT_2c63b7e8,DAT_2c63b7ec,DAT_2c63b7e4,DAT_2c63b7e0,param_1);
      }
      FUN_2c4857c8(*piVar1,piVar3);
      FUN_2c644080(*puVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x1be,DAT_2c63b7e8,DAT_2c63b7ec,DAT_2c63b7f0);
}

