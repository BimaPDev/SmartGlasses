/* FUN_2c4c47ea @ 0x2c4c47ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4c47ea(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4c4870,_LAB_2c4c486c,param_1);
  }
  if (1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4c4874,_LAB_2c4c486c,param_2);
  }
  iVar2 = param_2 * 0x9c + param_1 * 0x138 + _LAB_2c4c4868;
  if ((*(char *)(iVar2 + 2) != '\a') || (*(char *)(iVar2 + 0x7c) == -1)) {
    return 0;
  }
  iVar3 = _LAB_2c4c4868 + param_1 * 0x138;
  iVar4 = 2;
  iVar5 = iVar4;
  if (param_2 != 0) goto LAB_2c4c4840;
  do {
    if (param_3 == 0) {
      iVar1 = func_0x2c4bf0a0(*(undefined1 *)(iVar3 + 0x7c));
    }
    else {
      iVar1 = FUN_2c4c3630(iVar2);
    }
    while( true ) {
      if (iVar1 != 0) {
        return iVar1;
      }
      if (iVar4 == 1) {
        return 0;
      }
      iVar4 = 1;
      iVar5 = 1;
      if (param_2 == 0) break;
LAB_2c4c4840:
      iVar1 = func_0x2c4bf0d8(*(undefined1 *)(iVar3 + 0x118));
      iVar4 = iVar5;
    }
  } while( true );
}

