/* FUN_2c4e4018 @ 0x2c4e4018 */

int FUN_2c4e4018(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x17] == param_1[0x14]) {
    iVar1 = 1;
  }
  else {
    iVar1 = (**(code **)(*(int *)param_1[0xc] + 0x20))((int *)param_1[0xc],param_1[0x14],0);
    if (iVar1 == 0) {
      FUN_2c4de6ca(param_1,0xa4c5,0xb1,1);
      iVar3 = param_1[0x14];
      uVar2 = (**(code **)(*param_1 + 0x24))(param_1);
      FUN_2c4e0504(DAT_2c4e4090,0,0,0,DAT_2c4e408c,0xb1,DAT_2c4e4088,0x1300,DAT_2c4e4084,iVar3,uVar2
                  );
    }
    else {
      param_1[0x17] = param_1[0x14];
    }
  }
  return iVar1;
}

