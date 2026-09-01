/* FUN_100fadb0 @ 0x100fadb0 */

undefined4 FUN_100fadb0(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[2];
  if (uVar2 < (uint)param_1[1]) {
    if ((code *)param_1[5] == (code *)0x0) {
      uVar1 = param_1[1] - uVar2;
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      FUN_1011ea40(param_2,*param_1 + uVar2,uVar1);
    }
    else {
      uVar1 = (*(code *)param_1[5])(param_1,uVar2,param_2,param_3);
    }
    param_1[2] = uVar2 + uVar1;
    if (param_3 <= uVar1) {
      return 0;
    }
  }
  return 0x55;
}

