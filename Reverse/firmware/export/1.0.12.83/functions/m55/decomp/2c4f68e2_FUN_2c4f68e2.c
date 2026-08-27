/* FUN_2c4f68e2 @ 0x2c4f68e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f68e2(int param_1)

{
  int *piVar1;
  int iVar2;
  char in_ZR;
  
  if (in_ZR == '\0') {
    if (param_1 != 2) {
      return;
    }
    FUN_2c4f5ef0();
  }
  else {
    FUN_2c4f667c();
  }
  piVar1 = _LAB_2c4f6cc4;
  if (*_LAB_2c4f6cc4 == 0) {
    iVar2 = FUN_2c6442a4(_LAB_2c4f6cdc);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x4b,_LAB_2c4f6cd4,_LAB_2c4f6cd0,_LAB_2c4f6ce0);
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x75,_LAB_2c4f6cd4,_LAB_2c4f6cd0,_LAB_2c4f6ccc,_LAB_2c4f6cc8);
}

