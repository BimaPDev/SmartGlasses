/* FUN_10134544 @ 0x10134544 */

byte * FUN_10134544(byte *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = param_1 + 0x32;
  while ((*param_1 != param_3 || (iVar1 = FUN_10134500(param_1 + 1,param_2), iVar1 != 0))) {
    param_1 = param_1 + 10;
    if (param_1 == pbVar2) {
      return (byte *)0x0;
    }
  }
  return param_1;
}

