/* FUN_2c4dea30 @ 0x2c4dea30 */

undefined4 FUN_2c4dea30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    if (iVar2 == 1) {
      uVar3 = param_1[1];
      if ((int)uVar3 < 0) {
        do {
          uVar3 = uVar3 + 1;
          iVar2 = (**(code **)(*param_1 + 0x18))(param_1,uVar3);
          if (iVar2 == 0) {
            FUN_2c4e34f4(0x5bb1,10,1);
            uVar1 = 10;
LAB_2c4de94e:
            FUN_2c4e0504(DAT_2c4de9b4,0,0,0,DAT_2c4de9b0,uVar1,DAT_2c4de9ac,0x1300,DAT_2c4de9a8);
            return 0;
          }
          param_1[1] = uVar3;
        } while (0x7fffffff < uVar3);
      }
      else {
        while (0 < (int)uVar3) {
          uVar3 = uVar3 - 1;
          iVar2 = (**(code **)(*param_1 + 0x18))(param_1,uVar3);
          if (iVar2 == 0) {
            FUN_2c4e34f4(0x5bb1,0x13,1);
            uVar1 = 0x13;
            goto LAB_2c4de94e;
          }
          param_1[1] = uVar3;
        }
      }
      return 1;
    }
    FUN_2c4e34f4(0x5bb1,0x67,1,iVar2,param_1,param_2,param_3,param_4);
    FUN_2c4e0504(DAT_2c4dea84,0,0,0,DAT_2c4dea8c,0x67,DAT_2c4dea88,0x1300,DAT_2c4dea80);
    uVar1 = 0;
  }
  return uVar1;
}

