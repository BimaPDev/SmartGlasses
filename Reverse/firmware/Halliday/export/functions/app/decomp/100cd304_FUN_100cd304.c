/* FUN_100cd304 @ 0x100cd304 */

void FUN_100cd304(uint param_1,uint param_2,int param_3,int param_4,short param_5,code *param_6,
                 undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar1 = DAT_100cd494;
  uVar8 = CONCAT44(param_2,param_1);
  if (param_5 == 0) {
    param_5 = -1;
  }
  if (param_1 <= *DAT_100cd478) {
    uVar7 = 1;
    iVar3 = param_3;
    piVar5 = DAT_100cd490;
    while( true ) {
      piVar6 = DAT_100cd480;
      if (DAT_100cd480 < piVar5) {
        FUN_10119dc2(DAT_100cd488,DAT_100cd484,uVar1,0x661,uVar8);
        FUN_10119dc2(DAT_100cd48c);
        uVar8 = FUN_1011a1f0(uVar1,0x661,iVar3,piVar6);
        iVar3 = extraout_r2;
      }
      if (DAT_100cd480 <= piVar5) break;
      if (piVar5[1] + uVar7 < param_1) {
        uVar7 = piVar5[1] + uVar7 & 0xffff;
      }
      else {
        for (uVar4 = 0; uVar4 < (uint)piVar5[1]; uVar4 = uVar4 + 1) {
          if (param_2 < uVar7) {
            return;
          }
          if (param_1 <= uVar7) {
            iVar2 = *piVar5 + uVar4 * 0x14;
            if (((param_3 == 0) ||
                (uVar8 = FUN_10132c82(param_3,*(undefined4 *)(*piVar5 + uVar4 * 0x14)),
                iVar3 = extraout_r2_00, (int)uVar8 == 0)) &&
               ((param_4 == 0 || (iVar3 = param_4, param_4 == *(int *)(iVar2 + 0xc))))) {
              param_5 = param_5 + -1;
              uVar8 = (*param_6)(iVar2,uVar7,param_7);
              if (param_5 == 0) {
                return;
              }
              iVar3 = extraout_r2_01;
              if ((int)uVar8 == 0) {
                return;
              }
            }
          }
          uVar7 = uVar7 + 1 & 0xffff;
        }
      }
      piVar5 = piVar5 + 2;
    }
  }
  piVar5 = (int *)*DAT_100cd47c;
  if (piVar5 != (int *)0x0) {
    while (piVar6 = piVar5 + -2, piVar6 != (int *)0x0) {
      if (piVar5 == (int *)0x0) {
LAB_100cd358:
        uVar7 = 0;
LAB_100cd35a:
        for (; uVar7 < (uint)piVar5[-1]; uVar7 = uVar7 + 1) {
          iVar3 = *piVar6 + uVar7 * 0x14;
          uVar4 = (uint)*(ushort *)(iVar3 + 0x10);
          if (param_2 < uVar4) {
            return;
          }
          if (((param_1 <= uVar4) &&
              ((param_3 == 0 ||
               (iVar2 = FUN_10132c82(param_3,*(undefined4 *)(*piVar6 + uVar7 * 0x14)), iVar2 == 0)))
              ) && ((param_4 == 0 || (param_4 == *(int *)(iVar3 + 0xc))))) {
            param_5 = param_5 + -1;
            iVar3 = (*param_6)(iVar3,uVar4,param_7);
            if (param_5 == 0) {
              return;
            }
            if (iVar3 == 0) {
              return;
            }
          }
        }
        if (piVar6 == (int *)0xfffffff8) {
          return;
        }
      }
      else {
        iVar3 = *piVar5;
        if (iVar3 == 0) {
          uVar7 = 0;
          goto LAB_100cd35a;
        }
        uVar7 = 0;
        if (iVar3 == 8) goto LAB_100cd35a;
        if (param_1 < *(ushort *)(*(int *)(iVar3 + -8) + 0x10)) goto LAB_100cd358;
      }
      piVar5 = (int *)*piVar5;
      if (piVar5 == (int *)0x0) {
        return;
      }
    }
  }
  return;
}

