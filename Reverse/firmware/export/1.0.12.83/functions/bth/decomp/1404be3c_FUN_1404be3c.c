/* FUN_1404be3c @ 0x1404be3c */

void FUN_1404be3c(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = DAT_1404be90;
  if (param_1 != 0) {
    FUN_1402a6e8(4,0x5b1,DAT_1404bea0,DAT_1404be9c,DAT_1404bea8,DAT_1404bea4,param_1);
    iVar2 = 0;
  }
  if (*(char *)(iVar2 + 6) == '\0') {
    FUN_1402a6e8(4,0x136c,DAT_1404bea0,DAT_1404be9c,DAT_1404be98,DAT_1404be94,param_1);
    return;
  }
  sVar1 = *(short *)(iVar2 + 8);
  if (sVar1 == -1) {
    return;
  }
  iVar2 = FUN_14095028();
  if (iVar2 == 0) {
    FUN_1402a6e8(4,0x135d,DAT_1404b610,DAT_1404b60c,DAT_1404b608,DAT_1404b604,sVar1);
    return;
  }
  FUN_14094e74();
  FUN_14094ea8(iVar2);
  FUN_1404866c(sVar1,1);
  return;
}

