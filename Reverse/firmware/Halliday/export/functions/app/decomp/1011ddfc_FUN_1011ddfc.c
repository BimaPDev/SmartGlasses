/* FUN_1011ddfc @ 0x1011ddfc */

int FUN_1011ddfc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = *param_1;
  uVar3 = FUN_100652c4(iVar2);
  if (((int)uVar3 == 0) || (param_1[1] < 0)) {
    iVar2 = -0x13;
  }
  else if (uVar3 < 0x200000000) {
    pcVar1 = *(code **)(*(int *)(iVar2 + 8) + 0x28);
    if (pcVar1 == (code *)0x0) {
      iVar2 = -0x86;
    }
    else {
      iVar2 = (*pcVar1)(iVar2,param_1[1],(int)(uVar3 >> 0x20) + 1U & 0xffff,param_3,param_4,param_2)
      ;
      if (-1 < iVar2) {
        FUN_1011ddea(param_1 + 2);
        return iVar2;
      }
    }
    param_1[0x22] = param_1[0x22] | 2;
  }
  else {
    iVar2 = -0x16;
  }
  return iVar2;
}

