/* FUN_1001a7fc @ 0x1001a7fc */

int FUN_1001a7fc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_20;
  int local_1c;
  
  local_1c = *DAT_1001a880;
  if (param_3 == -1) {
    param_3 = 0x7fffffff;
  }
  iVar1 = param_3;
  uStack_20 = param_1;
  if (param_2 < 0) {
    param_2 = 0x7fffffff;
  }
LAB_1001a822:
  do {
    iVar3 = iVar1;
    if (param_2 != 0) goto LAB_1001a832;
    while( true ) {
      while( true ) {
        if (*DAT_1001a880 == local_1c) {
          return param_2;
        }
        FUN_1013cdc0();
LAB_1001a832:
        iVar1 = FUN_100a05a8(param_1);
        if (iVar1 < 1) break;
        iVar3 = (param_2 + 1) - iVar1;
        iVar2 = param_2;
        while (param_2 = FUN_1001a6e4(param_1,(int)&uStack_20 + 3,1), param_2 == 0) {
          param_2 = iVar2;
          iVar1 = param_3;
          if ((iVar2 == iVar3) || (param_2 = iVar2 + -1, iVar2 = param_2, param_2 == 0))
          goto LAB_1001a822;
        }
      }
      if (0 < iVar3) break;
      param_2 = -0x3e;
    }
    FUN_1011dbc8(10);
    iVar1 = iVar3 + -10;
  } while( true );
}

