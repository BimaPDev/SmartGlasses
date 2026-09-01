/* FUN_1012124a @ 0x1012124a */

undefined4 FUN_1012124a(int param_1,ushort *param_2,ushort *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint local_5c;
  undefined1 auStack_50 [9];
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 auStack_3c [9];
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  
  uVar5 = 0;
  local_33 = 0;
  local_32 = 0;
  local_31 = 0;
  local_30 = 0;
  local_47 = 0;
  local_46 = 0;
  local_45 = 0;
  local_44 = 0;
  local_2f = 0;
  local_2e = 0;
  local_2d = 0;
  local_2c = 0;
  local_43 = 0;
  local_42 = 0;
  local_41 = 0;
  local_40 = 0;
  piVar8 = *(int **)(param_1 + 0xc);
  if (*(ushort *)(*piVar8 + 0xe) == 0) {
LAB_101212a2:
    uVar1 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)((int)piVar8 + 0xc2) / (uint)*(ushort *)(*piVar8 + 0xe);
    local_5c = 0;
    for (; uVar7 = uVar5 & 0xffff, uVar6 = uVar7, uVar9 = uVar7, uVar7 < uVar4; uVar5 = uVar5 + 1) {
      for (; uVar9 < *(ushort *)((int)piVar8 + 0xc2); uVar9 = uVar9 + uVar4 & 0xffff) {
        uVar3 = *(ushort *)(*(int *)(piVar8[0x23] + 8) + uVar9 * 2) & 0xfff;
        if (uVar3 != 0xfff) {
          if (uVar6 == 0) {
            iVar2 = FUN_1012116e(param_1,param_2,param_3,uVar3,0);
          }
          else {
            FUN_10120a74(param_1,auStack_50,*(undefined1 *)piVar8[0x1d],*param_2 & 0xfff,uVar3);
            FUN_10120a74(param_1,auStack_3c,*(undefined1 *)piVar8[0x1d],*param_3 & 0xfff,uVar6);
            iVar2 = FUN_10120a4a(param_1,auStack_50,auStack_3c);
          }
          if (iVar2 != 1) goto LAB_101212a2;
          *(ushort *)(*(int *)(piVar8[0x23] + 8) + uVar9 * 2) =
               *(ushort *)(*(int *)(piVar8[0x23] + 8) + uVar9 * 2) & 0xf000 | (ushort)uVar6 & 0xfff;
          uVar6 = uVar6 + uVar4 & 0xffff;
        }
      }
      if (uVar6 == 0 && uVar7 == 0) {
        iVar2 = FUN_1012116e(param_1,param_2,param_3,0,0);
        if (iVar2 != 1) goto LAB_101212a2;
      }
      else if ((int)local_5c < (int)(uVar6 - uVar4)) {
        local_5c = uVar6 - uVar4 & 0xffff;
      }
    }
    uVar1 = 1;
    *(short *)(*(int *)(piVar8[0x1d] + 0xc) + param_4 * 8 + 4) = (short)local_5c;
  }
  return uVar1;
}

