/* FUN_100e130c @ 0x100e130c */

void FUN_100e130c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_100d3218(param_1,6);
  FUN_10119dc2(DAT_100e1350,uVar2);
  if (param_1 == 0) {
    bVar1 = *DAT_100e1354;
    iVar4 = DAT_100e1358;
    for (iVar3 = 0; iVar3 < (int)((bVar1 & 0x7f) >> 4); iVar3 = iVar3 + 1) {
      FUN_10138032(iVar4);
      iVar4 = iVar4 + 0x20;
    }
  }
  else {
    iVar3 = FUN_100e12cc(param_1);
    if (iVar3 != 0) {
      FUN_10138032();
      return;
    }
  }
  return;
}

