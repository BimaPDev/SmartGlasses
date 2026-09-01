/* FUN_10138ace @ 0x10138ace */

void FUN_10138ace(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((param_1[5] != 0) && (pcVar1 = *(code **)(param_1[5] + 0xc), pcVar1 != (code *)0x0)) {
    local_14 = param_2;
    uStack_10 = param_3;
    uStack_c = param_4;
    (*pcVar1)(*param_1,*(undefined1 *)(param_1 + 3),&local_14,pcVar1,param_1);
  }
  return;
}

