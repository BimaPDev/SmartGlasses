/* FUN_2c140c00 @ 0x2c140c00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c140c00(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = _DAT_2c140cbc;
  iVar4 = *(int *)(_DAT_2c140cbc + 0x14);
  if (iVar4 == 0) {
    FUN_2c13ee38(0,0xfffffff8,param_3,param_4,param_4);
    iVar3 = -1;
  }
  else {
    if (param_1 < 0) {
      FUN_2c13ee38(iVar4,0xfffffffc,param_3,param_4,param_4);
      return -4;
    }
    iVar2 = func_0x2c1407f4(iVar4,param_1,param_2);
    if (iVar2 != 0) {
      func_0x2c13ee58(param_1,param_2,iVar2,iVar4);
      return iVar2;
    }
    if (param_3 == 0) {
      func_0x2c13ee5c(param_1,param_2);
      return -3;
    }
    func_0x2c13ee50(param_1,param_2,param_3);
    cVar1 = *(char *)(iVar3 + 8);
    *(int *)(iVar4 + 0x24) = param_1;
    *(char *)(iVar4 + 0x23) = (char)param_2;
    if (((cVar1 == '\x02') && (*(int *)(iVar3 + 0x24) != 0)) &&
       (iVar3 = func_0x2c140b24(0x33,param_3), iVar3 != 0)) {
      return -2;
    }
    func_0x2c13ee54(iVar4);
    iVar3 = -2;
  }
  return iVar3;
}

