/* FUN_2c4e4980 @ 0x2c4e4980 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e4980(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = _LAB_2c4e4aa8;
  uVar1 = _LAB_2c4e4aa4;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*param_2 == 0) {
      FUN_2c4de6ca(param_1,0x54f1,0x27,1);
      uVar4 = 0x27;
      uVar5 = _LAB_2c4e4ab4;
    }
    else if (param_2[1] == 0) {
      FUN_2c4de6ca(param_1,0x54f1,0x28,1);
      uVar4 = 0x28;
      uVar5 = _LAB_2c4e4ab8;
    }
    else if (*(code **)(param_1 + 0x34) == (code *)0x0) {
      FUN_2c4de6ca(param_1,0x54f1,0x29,1);
      uVar4 = 0x29;
      uVar5 = _LAB_2c4e4abc;
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x34))(*param_2,param_2[1]);
      *(int *)(param_1 + 0x30) = iVar3;
      if (iVar3 != 0) {
        FUN_2c4e0504(_LAB_2c4e4ac8,6,0,0,uVar2,0x2c,uVar1,0x1300,_LAB_2c4e4ac4,iVar3,param_2[1],
                     *param_2);
        iVar3 = FUN_2c4df914(param_1,param_2);
        if (iVar3 == 0) {
          FUN_2c4df4e6(param_1 + 0x10,1);
        }
        else {
          FUN_2c4e0504(_LAB_2c4df960,7,0,0,_LAB_2c4df968,0xe,_LAB_2c4df964,0x1300,_LAB_2c4df95c);
        }
        return 1;
      }
      FUN_2c4de6ca(param_1,0x54f1,0x2b,1);
      uVar4 = 0x2b;
      uVar5 = _LAB_2c4e4ac0;
    }
  }
  else {
    FUN_2c4de6ca(param_1,0x54f1,0x25,1);
    uVar4 = 0x25;
    uVar5 = _LAB_2c4e4aac;
  }
  FUN_2c4e0504(_LAB_2c4e4ab0,0,0,0,uVar2,uVar4,uVar1,0x1300,uVar5);
  return 0;
}

