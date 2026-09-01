/* FUN_10138082 @ 0x10138082 */

int FUN_10138082(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  uint local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  iVar1 = FUN_100d271c();
  if (param_1 == 0) {
    FUN_10138032();
    iVar1 = 0;
  }
  else {
    local_18 = 0;
    local_14 = local_14 & 0xffff0000;
    iVar2 = FUN_1011ea30(iVar1,&local_18,6);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar2 = FUN_1011ea30(iVar1,param_1,6);
      if (iVar2 == 0) {
        iVar1 = iVar1 + 9;
      }
      else {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

