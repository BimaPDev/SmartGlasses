/* FUN_10065364 @ 0x10065364 */

undefined4 FUN_10065364(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffea;
  }
  else {
    FUN_1011ea48(param_1,0,0x8c,param_4,param_4);
    iVar1 = FUN_100652e4(param_2);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0xffffffed;
    }
    else {
      iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 4))(iVar1,0);
      param_1[1] = iVar1;
      if (iVar1 < 0) {
        uVar2 = 0xfffffff0;
      }
      else {
        (**(code **)(*(int *)(*param_1 + 8) + 0x10))(*param_1,iVar1,DAT_100653c4,param_1);
        uVar2 = 0;
        param_1[2] = 0;
        param_1[0x22] = 0;
      }
    }
  }
  return uVar2;
}

