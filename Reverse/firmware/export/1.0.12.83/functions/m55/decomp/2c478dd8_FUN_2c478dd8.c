/* FUN_2c478dd8 @ 0x2c478dd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c478dd8(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _LAB_2c478e10;
  iVar2 = FUN_2c478b68();
  *piVar1 = iVar2;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x91,_LAB_2c478e20,_LAB_2c478e1c,_LAB_2c478e18,_LAB_2c478e14,param_1);
  }
  return;
}

