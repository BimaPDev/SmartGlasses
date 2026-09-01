/* FUN_1002e994 @ 0x1002e994 */

void FUN_1002e994(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *DAT_1002e9e0;
  if (param_1 == 0) {
    if (*DAT_1002e9e0 == iVar1) {
      return;
    }
  }
  else if (param_2 == 0) {
    if (*DAT_1002e9e0 == iVar1) {
      FUN_10124c20(param_1,1);
      return;
    }
  }
  else if (*DAT_1002e9e0 == iVar1) goto LAB_1002e9b2;
  param_1 = FUN_1013cdc0();
LAB_1002e9b2:
  FUN_10124cea(param_1,1);
  return;
}

