/* FUN_1012817e @ 0x1012817e */

undefined4
FUN_1012817e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*param_1 + 8);
  if (pcVar2 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*pcVar2)(*param_1,param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

