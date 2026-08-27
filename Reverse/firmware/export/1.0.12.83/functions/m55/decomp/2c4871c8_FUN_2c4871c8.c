/* FUN_2c4871c8 @ 0x2c4871c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4871c8(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = _LAB_2c487224;
  piVar2 = _LAB_2c487220;
  if (*_LAB_2c487220 == 0) {
    iVar3 = FUN_2c64418c(_LAB_2c487234,1,0);
    *piVar2 = iVar3;
    piVar1 = _LAB_2c487224;
    FUN_2c6448f0();
    iVar3 = *piVar1;
  }
  else {
    FUN_2c6448f0();
    iVar3 = *piVar1;
  }
  if (iVar3 == 0) {
    iVar3 = FUN_2c6442a4(_LAB_2c487238);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c48723c);
    }
  }
  piVar1 = _LAB_2c487228;
  if (*_LAB_2c487228 == 0) {
    iVar3 = FUN_2c6440f0(_LAB_2c48722c);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c487230);
    }
  }
  return;
}

