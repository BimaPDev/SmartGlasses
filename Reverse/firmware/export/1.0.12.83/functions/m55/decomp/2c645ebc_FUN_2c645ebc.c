/* FUN_2c645ebc @ 0x2c645ebc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c645ebc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = _LAB_2c645f74;
  iVar4 = *(int *)(_LAB_2c645f74 + 0x14);
  if (iVar4 == 0) {
    iVar3 = -1;
    FUN_2c643a9c(0,0xfffffff8,param_3,param_4,param_4);
  }
  else {
    if (param_1 < 0) {
      FUN_2c643a9c(iVar4);
      return -4;
    }
    iVar2 = func_0x2c645aac(iVar4,param_1,param_2);
    if (iVar2 != 0) {
      func_0x2c643ac0(param_1,param_2,iVar2,iVar4);
      return iVar2;
    }
    if (param_3 == 0) {
      func_0x2c643ac4(param_1,param_2);
      return -3;
    }
    func_0x2c643ab8(param_1,param_2,param_3);
    cVar1 = *(char *)(iVar3 + 8);
    *(int *)(iVar4 + 0x24) = param_1;
    *(char *)(iVar4 + 0x23) = (char)param_2;
    if (((cVar1 == '\x02') && (*(int *)(iVar3 + 0x24) != 0)) &&
       (iVar3 = func_0x2c645de0(0x33,param_3), iVar3 != 0)) {
      return -2;
    }
    iVar3 = -2;
    func_0x2c643abc(iVar4);
  }
  return iVar3;
}

