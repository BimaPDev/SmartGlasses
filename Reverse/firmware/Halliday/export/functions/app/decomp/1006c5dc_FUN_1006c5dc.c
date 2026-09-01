/* FUN_1006c5dc @ 0x1006c5dc */

int FUN_1006c5dc(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  piVar10 = param_1;
  if ((param_1 == (int *)0x0) || (param_1[3] == 0)) {
    uVar2 = (DAT_1006c744 - DAT_1006c748) * 0x20 & 0xff00 | 0x2d40011;
    uVar5 = DAT_1006c74c;
    uVar3 = DAT_1006c748;
  }
  else {
    uVar3 = FUN_1011ea10();
    piVar1 = DAT_1006c75c;
    if ((1 < uVar3) && (*(char *)param_1[3] == '/')) {
      FUN_1006b9c8(0xffffffff,0xffffffff);
      piVar8 = (int *)*piVar1;
      if (piVar8 != piVar1) {
        for (; piVar8 != (undefined4 *)0x0; piVar8 = (int *)*piVar8) {
          if ((piVar8[6] == uVar3) && (iVar4 = FUN_1011ea20(param_1[3],piVar8[3],uVar3), iVar4 == 0)
             ) {
            uVar3 = (DAT_1006c744 - DAT_1006c748) * 0x20 & 0xff00;
            FUN_100a5b78(DAT_1006c768 | uVar3,DAT_1006c750,DAT_1006c76c,uVar3,piVar10,param_2);
            iVar4 = -0x10;
            goto LAB_1006c6b6;
          }
          if (piVar8 == (undefined4 *)piVar1[1]) break;
        }
      }
      iVar6 = param_1[2];
      iVar4 = FUN_1006b990(iVar6);
      if ((iVar4 == 0) || (iVar9 = *(int *)(iVar4 + 4), iVar9 == 0)) {
        uVar3 = (DAT_1006c744 - DAT_1006c748) * 0x20 & 0xff00;
        FUN_100a5b78(DAT_1006c760 | uVar3,DAT_1006c750,DAT_1006c764,uVar3,piVar10);
        iVar4 = -2;
      }
      else if (*(int *)(iVar9 + 0x2c) == 0) {
        FUN_100a5b78(DAT_1006c770 | (DAT_1006c744 - DAT_1006c748) * 0x20 & 0xff00,DAT_1006c750,
                     DAT_1006c774,iVar6,piVar10);
        iVar4 = -0x86;
      }
      else {
        if (*(int *)(iVar9 + 0x30) == 0) {
          FUN_100a5b78(DAT_1006c778 | (DAT_1006c744 - DAT_1006c748) * 0x20 & 0xff00,DAT_1006c750,
                       DAT_1006c77c,param_1[3],piVar10);
        }
        iVar4 = (**(code **)(iVar9 + 0x2c))(param_1);
        if (iVar4 < 0) {
          FUN_100a5b78(DAT_1006c780 | (DAT_1006c744 - DAT_1006c748) * 0x20 & 0xff00,DAT_1006c750,
                       DAT_1006c784,iVar4);
        }
        else {
          puVar7 = (undefined4 *)piVar1[1];
          param_1[6] = uVar3;
          param_1[7] = iVar9;
          *param_1 = (int)piVar1;
          param_1[1] = (int)puVar7;
          *puVar7 = param_1;
          piVar1[1] = (int)param_1;
        }
      }
LAB_1006c6b6:
      FUN_1006b9bc();
      return iVar4;
    }
    uVar3 = (DAT_1006c744 - DAT_1006c748) * 0x20 & 0xff00;
    uVar2 = DAT_1006c754 | uVar3;
    uVar5 = DAT_1006c758;
  }
  FUN_100a5b78(uVar2,DAT_1006c750,uVar5,uVar3,piVar10,param_2);
  return -0x16;
}

