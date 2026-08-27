/* FUN_2c4e45b0 @ 0x2c4e45b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e45b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c4de6ca(param_1,0x54f1,0x30,1);
    uVar2 = 0x30;
    uVar3 = _LAB_2c4e4644;
  }
  else if (*(code **)(param_1 + 0x38) == (code *)0x0) {
    FUN_2c4de6ca(param_1,0x54f1,0x31,1);
    uVar2 = 0x31;
    uVar3 = _LAB_2c4e4654;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x38))(*(int *)(param_1 + 0x30));
    if (iVar1 == 0) {
      iVar1 = FUN_2c4df914();
      if (iVar1 == 0) {
        FUN_2c4e0504(_LAB_2c4df9b8,7,0,0,_LAB_2c4df9b4,0x13,_LAB_2c4df9b0,0x1300,_LAB_2c4df9ac);
      }
      else {
        func_0x2c4df4ee(param_1 + 0x10,1);
      }
      return 1;
    }
    FUN_2c4de6ca(param_1,0x54f1,0x32,1);
    uVar2 = 0x32;
    uVar3 = _LAB_2c4e4658;
  }
  FUN_2c4e0504(_LAB_2c4e4650,0,0,0,_LAB_2c4e464c,uVar2,_LAB_2c4e4648,0x1300,uVar3);
  return 0;
}

