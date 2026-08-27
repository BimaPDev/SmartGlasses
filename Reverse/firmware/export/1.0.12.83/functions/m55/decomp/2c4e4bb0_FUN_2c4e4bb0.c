/* FUN_2c4e4bb0 @ 0x2c4e4bb0 */

int FUN_2c4e4bb0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  iVar2 = (**(code **)(*param_1 + 0x24))(param_1);
  if (iVar2 < param_2 + iVar1) {
    FUN_2c4dfb10(0x4d42,0x1c,1);
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar5 = (**(code **)(*param_1 + 0x24))(param_1);
    FUN_2c4e0504(DAT_2c4e4c80,0,0,0,DAT_2c4e4c7c,0x1c,DAT_2c4e4c78,0x1300,DAT_2c4e4c74,uVar3,param_2
                 ,uVar4,uVar5);
  }
  else {
    if (((code *)param_1[9] != (code *)0x0) && (iVar1 = (*(code *)param_1[9])(param_2), iVar1 != 0))
    {
      FUN_2c4e4e98(param_1,iVar1,param_2);
      return iVar1;
    }
    FUN_2c4dfb10(0x4d42,0x20,1);
    FUN_2c4e0504(DAT_2c4e4c80,0,0,0,DAT_2c4e4c7c,0x20,DAT_2c4e4c78,0x1300,DAT_2c4e4c84,param_2);
  }
  return 0;
}

