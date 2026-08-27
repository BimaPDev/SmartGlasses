/* FUN_2c602754 @ 0x2c602754 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c602754(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != 0) {
    iVar1 = func_0x2c603118(iVar2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c60279c,0xc1,_LAB_2c602798,_LAB_2c602794);
    }
    param_1 = FUN_2c606bb4(iVar1,0x80);
    if (param_1 == 0) {
      if ((((iVar2 != 0) && (*(int **)(iVar2 + 0xc) != (int *)0x0)) &&
          (iVar2 = **(int **)(iVar2 + 0xc), iVar2 != 0)) &&
         (iVar1 = FUN_2c606bb4(iVar2,0x80), iVar1 == 0)) {
        iVar2 = FUN_2c602340(iVar2,0xd,&stack0xfffffff4);
        return iVar2;
      }
      return 1;
    }
  }
  return param_1;
}

