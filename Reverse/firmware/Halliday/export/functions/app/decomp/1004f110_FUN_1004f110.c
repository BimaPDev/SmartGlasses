/* FUN_1004f110 @ 0x1004f110 */

void FUN_1004f110(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1004f160;
  if (param_1 == 0) {
    if (*DAT_1004f160 == iVar1) {
      return;
    }
  }
  else {
    FUN_10126e82(param_1,0,0,0,param_1);
    FUN_10126ea2(param_1,0xff,0);
    FUN_10125af4(param_1);
    if (*DAT_1004f160 == iVar1) goto LAB_1004f146;
  }
  FUN_1013cdc0();
LAB_1004f146:
  FUN_10089bf8(param_1);
  return;
}

