/* FUN_2c4e3df4 @ 0x2c4e3df4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e3df4(int param_1,int *param_2,int param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = _LAB_2c4e3f20;
  uVar5 = _LAB_2c4e3f1c;
  *(undefined1 *)(param_1 + 0x34) = param_5;
  *(int **)(param_1 + 0x30) = param_2;
  if (param_2 == (int *)0x0) {
    FUN_2c4de6ca(param_1,0xa4c5,0x29,1);
    FUN_2c4e0504(_LAB_2c4e3f04,0,0,0,uVar1,0x29,uVar5,0x1300,_LAB_2c4e3f00);
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x3c) != param_3) {
      if (*(int *)(param_1 + 0x38) != 0) {
        FUN_2c4de692(param_1,param_1 + 0x38);
      }
      iVar2 = FUN_2c4de67a(param_1,param_3);
      *(int *)(param_1 + 0x38) = iVar2;
      if (iVar2 == 0) {
        FUN_2c4e0504(_LAB_2c4e3f0c,5,0,0,uVar1,0x2e,uVar5,0x1300,_LAB_2c4e3f08);
        return 0;
      }
      *(int *)(param_1 + 0x3c) = param_3;
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x38) + param_3;
    uVar3 = (**(code **)(*param_2 + 0x24))(param_2);
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    *(int *)(param_1 + 0x48) = param_4 + -1;
    uVar3 = _LAB_2c4e3f10;
    *(int *)(param_1 + 0x4c) = param_3 + -1;
    FUN_2c4e0504(uVar3,7,0,0,uVar1,0x35,uVar5,0x1300,_LAB_2c4e3f14,param_4 + -1,param_3 + -1);
    uVar4 = (**(code **)(**(int **)(param_1 + 0x30) + 0x28))();
    uVar3 = _LAB_2c4e3f18;
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    FUN_2c4e0504(_LAB_2c4e3f10,7,0,0,uVar1,0x39,uVar5,0x1300,uVar3,uVar4,
                 *(undefined4 *)(param_1 + 0x44));
    uVar5 = 1;
  }
  return uVar5;
}

