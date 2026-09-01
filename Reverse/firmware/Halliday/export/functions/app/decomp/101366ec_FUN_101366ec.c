/* FUN_101366ec @ 0x101366ec */

void FUN_101366ec(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    if (param_2 != 0) {
LAB_101366f4:
      uVar1 = FUN_10136428(param_1);
      FUN_100d44e4(0xd2,0x7c,uVar1,6,0,param_2);
      return;
    }
  }
  else if (param_3 == 1) {
    if (param_2 != 0) {
      return;
    }
  }
  else {
    if (param_3 == 2) {
      if (param_2 == 0) {
        return;
      }
      goto LAB_101366f4;
    }
    if (param_3 != 3) {
      return;
    }
    iVar2 = FUN_1013662e();
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_100d3f20(param_1);
  return;
}

