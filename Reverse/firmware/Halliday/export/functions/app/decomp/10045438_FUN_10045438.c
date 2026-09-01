/* FUN_10045438 @ 0x10045438 */

void FUN_10045438(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_10045488;
  iVar1 = FUN_1012d144(DAT_1004548c,0,param_3,0,param_1,iVar2,param_3);
  if (iVar1 == 1) {
    FUN_10048844();
    FUN_1009eeac(DAT_1004548c,0);
    if (*DAT_10045488 == iVar2) goto LAB_1004546a;
  }
  else if (*DAT_10045488 == iVar2) {
    return;
  }
  FUN_1013cdc0();
LAB_1004546a:
  FUN_1012d1ae(DAT_1004548c);
  return;
}

