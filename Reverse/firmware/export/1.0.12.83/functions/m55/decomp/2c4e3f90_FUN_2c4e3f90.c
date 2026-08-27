/* FUN_2c4e3f90 @ 0x2c4e3f90 */

int FUN_2c4e3f90(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    FUN_2c4e0504(DAT_2c4e4008,6,0,0,DAT_2c4e4010,0xa9,DAT_2c4e400c,0x1300,DAT_2c4e4004);
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)param_1[0xc] + 0x2c))();
    if (iVar1 == 0) {
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
      FUN_2c4e0504(DAT_2c4e4008,6,0,0,DAT_2c4e4010,0xab,DAT_2c4e400c,0x1300,DAT_2c4e4014,uVar2);
    }
    else {
      param_1[0x17] = param_1[0x17] + iVar1;
    }
  }
  return iVar1;
}

