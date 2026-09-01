/* FUN_100d3f20 @ 0x100d3f20 */

int FUN_100d3f20(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_10131d2e();
  iVar2 = FUN_101367a2(param_1);
  piVar1 = DAT_100d3fa8;
  if (iVar2 == 0) {
    FUN_1013199c(param_1);
    iVar2 = FUN_10131c54(param_1,0x13);
    if (iVar2 != 0) {
      FUN_100a5b78(DAT_100d3fc4 | (DAT_100d3fb0 - DAT_100d3fac) * 0x20 & 0xff00U,DAT_100d3fc8,
                   DAT_100d3fc0,iVar2);
    }
    FUN_101319b8(param_1);
  }
  else {
    FUN_100d5fd8(param_1,1);
    iVar2 = FUN_101165e0(*piVar1 + 0x3c);
    if (iVar2 == 0) {
      FUN_100a5b78(DAT_100d3fb4 | (DAT_100d3fb0 - DAT_100d3fac) * 0x20 & 0xff00U,DAT_100d3fbc,
                   DAT_100d3fb8);
      FUN_10116500(*piVar1 + 0x3c,100);
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

