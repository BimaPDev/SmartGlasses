/* FUN_2c48ac24 @ 0x2c48ac24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48ac24(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = _LAB_2c48acc4;
  iVar3 = *_LAB_2c48acc4;
  iVar2 = param_1;
  if (iVar3 == 0) {
    iVar3 = FUN_2c64419c(_LAB_2c48acd8);
    *piVar1 = iVar3;
    iVar2 = iVar3;
    if (param_1 == 0) goto LAB_2c48ac8a;
  }
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x13e,_LAB_2c48accc,_LAB_2c48acd0,_LAB_2c48acc8,iVar3);
  }
LAB_2c48ac8a:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x13b,_LAB_2c48accc,_LAB_2c48acd0,_LAB_2c48acdc,param_1,iVar3);
}

