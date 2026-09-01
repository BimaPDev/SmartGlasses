/* FUN_1005cc5c @ 0x1005cc5c */

undefined4 FUN_1005cc5c(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  
  iVar4 = DAT_1005ce10;
  piVar1 = DAT_1005ce04;
  piVar8 = (int *)*DAT_1005ce04;
  if (param_4 < 0x7c01) {
    piVar6 = piVar8;
    if (piVar8 == DAT_1005ce04) {
      piVar6 = (int *)0x0;
    }
    if (piVar6 != (int *)0x0) {
      do {
        if (((uint)piVar6[2] <= param_3) && (param_3 + param_4 <= (uint)(piVar6[2] + piVar6[3]))) {
          *DAT_1005ce08 = *DAT_1005ce08 + 1;
          piVar6[5] = piVar6[5] + 1;
          if (piVar8 != piVar6) {
            iVar4 = *piVar6;
            piVar8 = (int *)piVar6[1];
            *piVar8 = iVar4;
            *(int **)(iVar4 + 4) = piVar8;
            *piVar6 = 0;
            iVar4 = *piVar1;
            *piVar6 = iVar4;
            piVar6[1] = (int)piVar1;
            *(int **)(iVar4 + 4) = piVar6;
            *piVar1 = (int)piVar6;
          }
          goto LAB_1005cca6;
        }
      } while ((piVar6 != (int *)DAT_1005ce04[1]) && (piVar6 = (int *)*piVar6, piVar6 != (int *)0x0)
              );
    }
    if (piVar8 != DAT_1005ce04) goto LAB_1005cdc2;
    piVar6 = (int *)0x0;
  }
  else {
    if (piVar8 == DAT_1005ce04) goto LAB_1005cddc;
LAB_1005cdc2:
    piVar6 = (int *)DAT_1005ce04[1];
    if (0x7c00 < param_4) goto LAB_1005cddc;
  }
  if (param_4 < 0x401) {
    uVar5 = 0x800;
  }
  else {
    uVar5 = 0x8000;
  }
  for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
    if (piVar6[3] == uVar5) {
      *DAT_1005ce0c = *DAT_1005ce0c + 1;
      piVar6[2] = param_3 & 0xfffffc00;
      piVar6[5] = 0;
      if (piVar8 != piVar6) {
        iVar4 = *piVar6;
        piVar8 = (int *)piVar6[1];
        *piVar8 = iVar4;
        *(int **)(iVar4 + 4) = piVar8;
        *piVar6 = 0;
        iVar4 = *piVar1;
        *piVar6 = iVar4;
        piVar6[1] = (int)piVar1;
        *(int **)(iVar4 + 4) = piVar6;
        *piVar1 = (int)piVar6;
      }
      iVar4 = FUN_1011b850(param_1,(param_3 & 0xfffffc03) >> 9,piVar6[4],uVar5 >> 9);
      if (iVar4 < 0) {
        return 0xffffffff;
      }
LAB_1005cca6:
      FUN_1011ea40(param_2,(param_3 - piVar6[2]) + piVar6[4],param_4);
      return 0;
    }
    if (piVar8 == piVar6) break;
  }
LAB_1005cddc:
  uVar5 = param_3 & 0x1ff;
  param_3 = param_3 >> 9;
  if (uVar5 != 0) {
    iVar3 = FUN_1011b850(param_1,param_3,DAT_1005ce10,1);
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    FUN_1011ea40(param_2,iVar4 + uVar5,0x200 - uVar5);
    param_3 = param_3 + 1;
    param_2 = param_2 + (0x200 - uVar5);
    param_4 = (param_4 - 0x200) + uVar5;
  }
  if (0x1ff < param_4) {
    iVar4 = FUN_1011b850(param_1,param_3,param_2,param_4 >> 9);
    if (iVar4 < 0) {
      return 0xffffffff;
    }
    param_3 = param_3 + (param_4 >> 9);
    param_2 = param_2 + (param_4 & 0xfffffe00);
    param_4 = param_4 - (param_4 & 0xfffffe00);
  }
  if (param_4 != 0) {
    iVar4 = FUN_1011b850(param_1,param_3,DAT_1005ce10,1);
    if (iVar4 < 0) {
      return 0xffffffff;
    }
    FUN_1011ea40(param_2,DAT_1005ce10,param_4);
  }
  puVar2 = DAT_1005ce14;
  iVar4 = *DAT_1005ce08;
  uVar7 = iVar4 + *DAT_1005ce0c;
  uVar5 = 0;
  if (uVar7 != 0) {
    uVar5 = (uint)(iVar4 * 100) / uVar7;
  }
  if (*DAT_1005ce14 != uVar5) {
    FUN_10119dc2(DAT_1005ce18,iVar4,*DAT_1005ce0c,uVar5);
    *puVar2 = uVar5;
  }
  return 0;
}

