/* FUN_2c63cd80 @ 0x2c63cd80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63cd80(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = _LAB_2c63cdd4;
  iVar3 = *_LAB_2c63cdd4;
  if (iVar3 == 0) {
    iVar3 = FUN_2c64419c(_LAB_2c63cde4);
    *piVar1 = iVar3;
  }
  FUN_2c644044(iVar3,0xffffffff);
  uVar2 = FUN_2c5e317c(0x3a,1,param_1,0,1);
  FUN_2c644080(*piVar1);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x57,_LAB_2c63cde0,_LAB_2c63cddc,_LAB_2c63cdd8,param_1,uVar2);
}

