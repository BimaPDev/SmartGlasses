/* thunk_FUN_101390b4 @ 0x101392ee */

undefined4 thunk_FUN_101390b4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  iVar1 = param_1 + 8;
  iStack_18 = param_1;
  iStack_14 = param_2;
  uStack_10 = param_3;
  FUN_1011e51c(iVar1,iVar1,param_2);
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
    (**(code **)(param_1 + 0x58))(0,0,*(undefined4 *)(param_1 + 0x60));
  }
  if ((int)((uint)*(byte *)(param_1 + 0x39) << 0x1a) < 0) {
    FUN_10114a38();
    if (1 < *(byte *)(param_1 + 0x18)) {
      *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) ^ 1;
      *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) ^ 1;
    }
    iStack_18 = CONCAT31(iStack_18._1_3_,0x30);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    iStack_14 = iVar1;
    if (*(code **)(param_1 + 0x5c) != (code *)0x0) {
      (**(code **)(param_1 + 0x5c))(2,&iStack_18,*(undefined4 *)(param_1 + 100));
    }
    FUN_101150e0();
  }
  return 0;
}

