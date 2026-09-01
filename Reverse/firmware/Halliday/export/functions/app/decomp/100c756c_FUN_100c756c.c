/* FUN_100c756c @ 0x100c756c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100c756c(int param_1,int param_2)

{
  int iVar1;
  
  if (*_DAT_100c75dc == '\0') {
    if ((param_2 == 0) && (param_2 = FUN_100c5d4c(), param_2 == 0)) {
      iVar1 = -0x69;
    }
    else if (param_1 == 0xc35) {
      iVar1 = FUN_100c7518(param_2);
      if (iVar1 != 0) {
        FUN_100a5b78((_DAT_100c75e4 - _DAT_100c75e0) * 0x20 & 0xff00U | 0x18c0011,_DAT_100c75ec,
                     _DAT_100c75e8,iVar1);
        FUN_100c1c90(param_2);
      }
    }
    else {
      FUN_100c1c20(_DAT_100c75f0,param_2);
      iVar1 = 0;
    }
  }
  else {
    if (param_2 != 0) {
      FUN_100c1c90(param_2);
    }
    iVar1 = -5;
  }
  return iVar1;
}

