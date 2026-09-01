/* FUN_10065ad0 @ 0x10065ad0 */

int FUN_10065ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 == 0) {
    iVar3 = 3;
  }
  else {
    iVar3 = 2;
  }
  iVar2 = FUN_1011dbf4(DAT_10065b88,0xffffffff);
  pcVar1 = DAT_10065ba4;
  if (iVar2 == 0) {
    if (*DAT_10065ba4 == '\0') {
      iVar2 = FUN_10065aa4(DAT_10065b8c);
      if (iVar2 != 0) {
        return iVar2;
      }
      *pcVar1 = '\x01';
    }
    iVar2 = FUN_1011def6(DAT_10065b8c);
    if (iVar2 == 0) {
      iVar2 = FUN_10065844(DAT_10065b8c,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,param_9);
      FUN_1011defe(DAT_10065b8c,0x32);
      FUN_1011df04(DAT_10065b8c);
      thunk_FUN_10113e2c(DAT_10065b88);
      if (iVar2 == 0) {
        iVar2 = iVar3 * param_9 * param_8;
      }
    }
    else {
      FUN_100a5b78(DAT_10065b98 | (DAT_10065b94 - DAT_10065b90) * 0x20 & 0xff00U,DAT_10065ba0,
                   DAT_10065b9c);
      thunk_FUN_10113e2c(DAT_10065b88);
    }
  }
  return iVar2;
}

