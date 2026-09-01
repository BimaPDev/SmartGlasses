/* FUN_1008953c @ 0x1008953c */

bool FUN_1008953c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = FUN_10124cc6(param_1,DAT_1008956c,param_3,param_4,param_4);
  if ((iVar2 == 0) && (iVar2 = FUN_10126fae(param_1), iVar2 != 0)) {
    sVar1 = FUN_1012691c(iVar2,0,10);
    bVar3 = sVar1 != 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

