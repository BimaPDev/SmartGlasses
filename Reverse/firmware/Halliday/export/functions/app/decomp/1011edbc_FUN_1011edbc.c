/* FUN_1011edbc @ 0x1011edbc */

int FUN_1011edbc(uint param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if ((param_1 < 2) && (param_2 != (int *)0x0)) {
    if (param_1 == 0) {
      uVar2 = 0x100;
    }
    else {
      uVar2 = 0x108;
    }
    local_c = (int)param_2;
    iVar1 = FUN_1011ec80(&local_c,uVar2,8,param_4,param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
      *param_2 = local_c;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

