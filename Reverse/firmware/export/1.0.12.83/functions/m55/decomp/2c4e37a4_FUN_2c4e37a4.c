/* FUN_2c4e37a4 @ 0x2c4e37a4 */

undefined4 FUN_2c4e37a4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_r2;
  int iVar5;
  undefined4 extraout_r3;
  
  if ((param_1 == 0) || (iVar3 = FUN_2c4df9d2(), iVar3 == 0)) {
    FUN_2c4e34f4(0x8ffd,0xaa,1);
    FUN_2c4e0504(DAT_2c4e37fc,0,0,0,DAT_2c4e3804,0xaa,DAT_2c4e3800,0x1300,DAT_2c4e37f8);
    return 0;
  }
  piVar4 = (int *)(iVar3 + 0x30);
  if (param_2 != 0) {
    *(int *)(iVar3 + 0x38) = param_2;
  }
  iVar5 = *(int *)(iVar3 + 0x34);
  if (iVar5 == 1) {
    uVar2 = 1;
  }
  else {
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar3 + 0x34);
      if (iVar5 < 1) {
        do {
          iVar5 = iVar5 + 1;
          iVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,iVar5);
          if (iVar1 == 0) {
            FUN_2c4e34f4(0x5bb1,10,1);
            uVar2 = 10;
LAB_2c4de94e:
            FUN_2c4e0504(DAT_2c4de9b4,0,0,0,DAT_2c4de9b0,uVar2,DAT_2c4de9ac,0x1300,DAT_2c4de9a8);
            return 0;
          }
          *(int *)(iVar3 + 0x34) = iVar5;
        } while (iVar5 < 1);
      }
      else {
        while (1 < iVar5) {
          iVar5 = iVar5 + -1;
          iVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,iVar5);
          if (iVar1 == 0) {
            FUN_2c4e34f4(0x5bb1,0x13,1);
            uVar2 = 0x13;
            goto LAB_2c4de94e;
          }
          *(int *)(iVar3 + 0x34) = iVar5;
        }
      }
      return 1;
    }
    FUN_2c4e34f4(0x5bb1,0x62,1,iVar5,piVar4,param_2,extraout_r2,extraout_r3);
    FUN_2c4e0504(DAT_2c4dea24,0,0,0,DAT_2c4dea2c,0x62,DAT_2c4dea28,0x1300,DAT_2c4dea20);
    uVar2 = 0;
  }
  return uVar2;
}

