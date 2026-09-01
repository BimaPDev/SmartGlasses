/* FUN_10054dfc @ 0x10054dfc */

int FUN_10054dfc(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_1011ea10();
    iVar2 = (*(code *)*DAT_10054e28)(iVar1 + 1);
    if (iVar2 != 0) {
      FUN_1011ea40(iVar2,param_1,iVar1 + 1);
    }
  }
  return iVar2;
}

