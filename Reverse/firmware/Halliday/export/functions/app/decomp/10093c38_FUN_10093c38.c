/* FUN_10093c38 @ 0x10093c38 */

undefined4
FUN_10093c38(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    uVar2 = 0xb;
  }
  else {
    pcVar3 = *(code **)(iVar1 + 0xc);
    if (pcVar3 == (code *)0x0) {
      uVar2 = 9;
    }
    else {
      uVar2 = (*pcVar3)(iVar1,*param_1,param_3,pcVar3,param_4);
      if ((*(short *)(param_1[1] + 2) != 0) && (param_1[2] != 0)) {
        iVar1 = *(int *)(param_1[2] + 0xc);
        if (iVar1 != 0) {
          FUN_10094268(iVar1,DAT_10093c7c);
        }
        FUN_10094268(param_1[2],DAT_10093c7c);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return uVar2;
}

