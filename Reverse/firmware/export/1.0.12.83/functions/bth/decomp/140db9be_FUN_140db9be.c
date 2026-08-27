/* FUN_140db9be @ 0x140db9be */

int FUN_140db9be(undefined4 param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = param_3 + param_4;
  iVar3 = param_4;
  do {
    if (param_3 == puVar2) {
      return 0;
    }
    iVar1 = FUN_140db990(param_1,*param_3,param_2,param_4,iVar3);
    param_4 = iVar1 + 1;
    param_3 = param_3 + 1;
  } while (param_4 != 0);
  return iVar1;
}

