/* FUN_2c0173cc @ 0x2c0173cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_2c0173cc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool in_ZR;
  bool in_CY;
  
  iVar3 = param_4;
  if (!in_CY || in_ZR) {
    iVar3 = param_1 * 0x2c + _DAT_2c0173fc;
    cVar1 = *(char *)(iVar3 + 4);
    if (cVar1 != '\0') {
      iVar3 = *(int *)(iVar3 + 0x24);
      if (iVar3 != 0) {
        iVar2 = 0;
        do {
          iVar3 = *(int *)(iVar3 + 0x1c);
          iVar2 = iVar2 + 1;
        } while (iVar3 != 0);
        cVar1 = iVar2 == 0;
      }
      return cVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c00dfac(_DAT_2c017404,_DAT_2c017400,param_3,iVar3,param_4);
}

