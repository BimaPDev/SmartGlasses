/* FUN_2c4de6fc @ 0x2c4de6fc */

undefined4 FUN_2c4de6fc(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[1];
  if (param_2 <= iVar1) {
    if (iVar1 <= param_2) {
      return 1;
    }
    switch(iVar1) {
    case 0:
      FUN_2c4e34f4(0x5bb1,0x34,1);
      iVar1 = param_1[1];
      uVar3 = 0x34;
      goto LAB_2c4de7d4;
    case 1:
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar1 != 0) {
        return 1;
      }
      FUN_2c4e34f4(0x5bb1,0x37,1);
      uVar2 = 0x37;
      uVar3 = DAT_2c4de908;
      break;
    case 2:
      iVar1 = (**(code **)(*param_1 + 0xc))();
      if (iVar1 != 0) {
        return 1;
      }
      FUN_2c4e34f4(0x5bb1,0x3a,1);
      uVar2 = 0x3a;
      uVar3 = DAT_2c4de90c;
      break;
    case 3:
      iVar1 = (**(code **)(*param_1 + 0x14))();
      if (iVar1 != 0) {
        return 1;
      }
      FUN_2c4e34f4(0x5bb1,0x3d,1);
      uVar2 = 0x3d;
      uVar3 = DAT_2c4de910;
      break;
    case 4:
      FUN_2c4e34f4(0x5bb1,0x40,1);
      iVar1 = param_1[1];
      uVar3 = 0x40;
      goto LAB_2c4de7d4;
    default:
      return 1;
    }
LAB_2c4de746:
    FUN_2c4e0504(DAT_2c4de8f8,0,0,0,DAT_2c4de8f4,uVar2,DAT_2c4de8f0,0x1300,uVar3);
    return 0;
  }
  switch(iVar1) {
  case 0:
    iVar1 = (**(code **)*param_1)(param_1,param_1[2]);
    if (iVar1 == 0) {
      FUN_2c4e34f4(0x5bb1,0x21,1);
      uVar2 = 0x21;
      uVar3 = DAT_2c4de8ec;
      goto LAB_2c4de746;
    }
    break;
  case 1:
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 == 0) {
      FUN_2c4e34f4(0x5bb1,0x24,1);
      uVar2 = 0x24;
      uVar3 = DAT_2c4de8fc;
      goto LAB_2c4de746;
    }
    break;
  case 2:
    iVar1 = (**(code **)(*param_1 + 0x10))();
    if (iVar1 == 0) {
      FUN_2c4e34f4(0x5bb1,0x27,1);
      uVar2 = 0x27;
      uVar3 = DAT_2c4de900;
      goto LAB_2c4de746;
    }
    break;
  case 3:
    FUN_2c4e34f4(0x5bb1,0x2a,1);
    iVar1 = param_1[1];
    uVar3 = 0x2a;
    goto LAB_2c4de7d4;
  case 4:
    FUN_2c4e34f4(0x5bb1,0x2d,1);
    iVar1 = param_1[1];
    uVar3 = 0x2d;
LAB_2c4de7d4:
    FUN_2c4e0504(DAT_2c4de8f8,0,0,0,DAT_2c4de8f4,uVar3,DAT_2c4de8f0,0x1300,DAT_2c4de904,iVar1,
                 param_2);
    return 0;
  }
  return 1;
}

