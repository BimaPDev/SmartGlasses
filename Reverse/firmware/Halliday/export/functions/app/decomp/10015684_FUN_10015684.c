/* FUN_10015684 @ 0x10015684 */

void FUN_10015684(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *DAT_100156ec;
  if (param_1 == (undefined4 *)0x0) {
    if (*DAT_100156ec == iVar1) {
      return;
    }
  }
  else {
    FUN_100a9600(*param_1,0x1c,0x1e,0,param_1);
    FUN_1011dbc8(0x3c);
    FUN_1001946c();
    FUN_100151a8(param_1);
    if (*DAT_100156ec == iVar1) goto LAB_100156be;
  }
  FUN_1013cdc0();
LAB_100156be:
  FUN_100a5b78(DAT_100156f8 | (DAT_100156f4 - DAT_100156f0) * 0x20 & 0xff00U,DAT_10015700,
               DAT_100156fc);
  return;
}

