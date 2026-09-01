/* FUN_10105bf8 @ 0x10105bf8 */

void FUN_10105bf8(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int local_30;
  undefined4 local_2c;
  
  iVar5 = *(int *)(param_1 + 0x134);
  if (*(int *)(param_1 + 0x10) < iVar5) {
LAB_10105c80:
    if (*(char *)(param_1 + 0x235) == '\0') {
      iVar7 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0xc) = 0x86;
    }
  }
  else {
    if (((*(short *)(param_1 + 0x15c) == 0) || (*(short *)(param_1 + 0x15e) == 0)) ||
       (*(short *)(param_1 + 0x160) == 0)) {
      uVar6 = (uint)*(ushort *)(param_1 + 0x122);
      if (*(ushort *)(param_1 + 0x2c) <= uVar6) goto LAB_10105c80;
      uVar4 = (uint)*(ushort *)(param_1 + 0x124);
      piVar9 = (int *)(*(int *)(param_1 + 0x30) + uVar6 * 8);
      piVar8 = (int *)(*(int *)(param_1 + 0x34) + uVar6 * 8);
      if (uVar4 < *(ushort *)(param_1 + 0x50)) {
        local_30 = (**(code **)(param_1 + 0x244))
                             (param_1,*(int *)(*(int *)(param_1 + 0x54) + uVar4 * 8) -
                                      *(int *)(*(int *)(param_1 + 0x30) + uVar6 * 8),
                              *(int *)(*(int *)(param_1 + 0x54) + uVar4 * 8 + 4) - piVar9[1]);
        bVar3 = true;
        goto LAB_10105c58;
      }
      bVar3 = true;
      local_2c = 0;
      local_30 = 0;
    }
    else {
      uVar6 = (uint)*(ushort *)(param_1 + 0x122);
      if (*(ushort *)(param_1 + 0x2c) <= uVar6) goto LAB_10105c80;
      iVar7 = *(int *)(param_1 + 0x38);
      uVar4 = (uint)*(ushort *)(param_1 + 0x124);
      piVar9 = (int *)(iVar7 + uVar6 * 8);
      piVar8 = (int *)(*(int *)(param_1 + 0x34) + uVar6 * 8);
      if (uVar4 < *(ushort *)(param_1 + 0x50)) {
        if (*(int *)(param_1 + 0xe0) == *(int *)(param_1 + 0xe4)) {
          local_30 = (**(code **)(param_1 + 0x244))
                               (param_1,*(int *)(*(int *)(param_1 + 0x5c) + uVar4 * 8) -
                                        *(int *)(iVar7 + uVar6 * 8),
                                *(int *)(*(int *)(param_1 + 0x5c) + uVar4 * 8 + 4) - piVar9[1]);
          bVar3 = false;
        }
        else {
          lVar1 = (longlong)*(int *)(param_1 + 0xe0) *
                  (longlong)
                  (*(int *)(*(int *)(param_1 + 0x5c) + uVar4 * 8) - *(int *)(iVar7 + uVar6 * 8));
          lVar1 = lVar1 + (ulonglong)((int)(lVar1 >> 0x3f) + 0x8000);
          lVar2 = (longlong)*(int *)(param_1 + 0xe4) *
                  (longlong)(*(int *)(*(int *)(param_1 + 0x5c) + uVar4 * 8 + 4) - piVar9[1]);
          lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
          local_30 = (**(code **)(param_1 + 0x244))
                               (param_1,(uint)lVar1 >> 0x10 |
                                        (int)((ulonglong)lVar1 >> 0x20) * 0x10000,
                                (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000);
          bVar3 = false;
        }
LAB_10105c58:
        local_2c = (**(code **)(param_1 + 0x240))
                             (param_1,*(int *)(*(int *)(param_1 + 0x58) +
                                              (uint)*(ushort *)(param_1 + 0x124) * 8) - *piVar8,
                              *(int *)(*(int *)(param_1 + 0x58) +
                                       (uint)*(ushort *)(param_1 + 0x124) * 8 + 4) - piVar8[1]);
        iVar5 = *(int *)(param_1 + 0x134);
      }
      else {
        bVar3 = false;
        local_30 = 0;
        local_2c = 0;
      }
    }
    iVar7 = *(int *)(param_1 + 0x1c);
    if (0 < iVar5) {
      do {
        iVar7 = iVar7 + -1;
        *(int *)(param_1 + 0x1c) = iVar7;
        uVar6 = *(uint *)(*(int *)(param_1 + 0x18) + iVar7 * 4);
        if (uVar6 < *(ushort *)(param_1 + 0x74)) {
          if (bVar3) {
            iVar5 = *(int *)(param_1 + 0x78);
LAB_10105d20:
            iVar5 = (**(code **)(param_1 + 0x244))
                              (param_1,*(int *)(iVar5 + uVar6 * 8) - *piVar9,
                               *(int *)(iVar5 + uVar6 * 8 + 4) - piVar9[1]);
          }
          else {
            if (*(int *)(param_1 + 0xe0) == *(int *)(param_1 + 0xe4)) {
              iVar5 = *(int *)(param_1 + 0x80);
              goto LAB_10105d20;
            }
            lVar1 = (longlong)*(int *)(param_1 + 0xe0) *
                    (longlong)(*(int *)(*(int *)(param_1 + 0x80) + uVar6 * 8) - *piVar9);
            lVar1 = lVar1 + (ulonglong)((int)(lVar1 >> 0x3f) + 0x8000);
            lVar2 = (longlong)*(int *)(param_1 + 0xe4) *
                    (longlong)(*(int *)(*(int *)(param_1 + 0x80) + uVar6 * 8 + 4) - piVar9[1]);
            lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
            iVar5 = (**(code **)(param_1 + 0x244))
                              (param_1,(uint)lVar1 >> 0x10 |
                                       (int)((ulonglong)lVar1 >> 0x20) * 0x10000,
                               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000);
          }
          iVar7 = (**(code **)(param_1 + 0x240))
                            (param_1,*(int *)(*(int *)(param_1 + 0x7c) + uVar6 * 8) - *piVar8,
                             *(int *)(*(int *)(param_1 + 0x7c) + uVar6 * 8 + 4) - piVar8[1]);
          if ((iVar5 != 0) && (local_30 != 0)) {
            iVar5 = FUN_100f85ec(iVar5,local_2c,local_30);
          }
          (**(code **)(param_1 + 0x24c))(param_1,param_1 + 0x6c,uVar6 & 0xffff,iVar5 - iVar7);
          iVar7 = *(int *)(param_1 + 0x1c);
          iVar5 = *(int *)(param_1 + 0x134);
        }
        else if (*(char *)(param_1 + 0x235) != '\0') {
          *(undefined4 *)(param_1 + 0xc) = 0x86;
          return;
        }
        iVar5 = iVar5 + -1;
        *(int *)(param_1 + 0x134) = iVar5;
      } while (0 < iVar5);
    }
  }
  *(int *)(param_1 + 0x20) = iVar7;
  *(undefined4 *)(param_1 + 0x134) = 1;
  return;
}

