/* FUN_1011deaa @ 0x1011deaa */

undefined4 FUN_1011deaa(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 == 0) || (param_1[1] < 0)) {
    uVar2 = 0xffffffed;
  }
  else {
    iVar1 = FUN_1011de62(param_1,param_2,param_2);
    if ((iVar1 == 2) &&
       (iVar1 = (**(code **)(*(int *)(*param_1 + 8) + 0x2c))(*param_1,param_1[1]), iVar1 != 0)) {
      uVar2 = 0xffffffc2;
      param_1[0x22] = param_1[0x22] | 0x20;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

