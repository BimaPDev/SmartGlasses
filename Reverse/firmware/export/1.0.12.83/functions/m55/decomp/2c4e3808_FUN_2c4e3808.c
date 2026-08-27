/* FUN_2c4e3808 @ 0x2c4e3808 */

undefined4 FUN_2c4e3808(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int *piVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((param_1 != 0) && (iVar2 = FUN_2c4df9d2(), iVar2 != 0)) {
    piVar5 = (int *)(iVar2 + 0x30);
    uVar7 = FUN_2c4de9c0(piVar5);
    uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      iVar4 = *(int *)(iVar2 + 0x34);
      if (iVar4 == 0) {
        uVar1 = 1;
      }
      else {
        if (iVar4 == 1) {
          uVar6 = *(uint *)(iVar2 + 0x34);
          uVar8 = extraout_r2;
          if ((int)uVar6 < 0) {
            do {
              uVar6 = uVar6 + 1;
              iVar4 = (**(code **)(*piVar5 + 0x18))(piVar5,uVar6);
              if (iVar4 == 0) {
                FUN_2c4e34f4(0x5bb1,10,1);
                uVar3 = 10;
LAB_2c4de94e:
                FUN_2c4e0504(DAT_2c4de9b4,0,0,0,DAT_2c4de9b0,uVar3,DAT_2c4de9ac,0x1300,DAT_2c4de9a8,
                             uVar1,uVar8,unaff_r4);
                return 0;
              }
              *(uint *)(iVar2 + 0x34) = uVar6;
            } while (0x7fffffff < uVar6);
          }
          else {
            while (0 < (int)uVar6) {
              uVar6 = uVar6 - 1;
              iVar4 = (**(code **)(*piVar5 + 0x18))(piVar5,uVar6);
              if (iVar4 == 0) {
                FUN_2c4e34f4(0x5bb1,0x13,1);
                uVar3 = 0x13;
                goto LAB_2c4de94e;
              }
              *(uint *)(iVar2 + 0x34) = uVar6;
            }
          }
          return 1;
        }
        FUN_2c4e34f4(0x5bb1,0x67,1,iVar4,piVar5,uVar1,extraout_r2,extraout_r3,unaff_r4);
        FUN_2c4e0504(DAT_2c4dea84,0,0,0,DAT_2c4dea8c,0x67,DAT_2c4dea88,0x1300,DAT_2c4dea80);
        uVar1 = 0;
      }
      return uVar1;
    }
  }
  return 0;
}

