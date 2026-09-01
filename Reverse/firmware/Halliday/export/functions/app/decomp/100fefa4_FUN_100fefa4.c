/* FUN_100fefa4 @ 0x100fefa4 */

int FUN_100fefa4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  ushort *puVar11;
  int *piVar12;
  int local_30;
  int local_2c [2];
  
  uVar9 = *(undefined4 *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x170) = param_2;
  local_30 = (**(code **)(param_1 + 0x204))(param_1,DAT_100ff1f4,param_2,local_2c);
  if (local_30 == 0) {
    iVar1 = FUN_100fadac(param_2);
    local_30 = FUN_100fb104(param_2,DAT_100ff1f8,param_1 + 0x158);
    if (local_30 == 0) {
      iVar5 = *(int *)(param_1 + 0x15c);
      iVar6 = iVar1 + iVar5 * 0xc;
      uVar7 = iVar6 + 6;
      uVar8 = iVar1 + local_2c[0];
      if (uVar8 < uVar7) {
        return 0x91;
      }
      if (*(short *)(param_1 + 0x158) == 1) {
        local_30 = FUN_100fad58(param_2,uVar7);
        if (local_30 != 0) {
          return local_30;
        }
        piVar12 = &local_30;
        iVar5 = FUN_100fb070(param_2,&local_30);
        *(int *)(param_1 + 0x168) = iVar5;
        if (local_30 != 0) {
          return local_30;
        }
        uVar2 = FUN_100fb280(uVar9,0xc,0,iVar5,0,&local_30);
        *(undefined4 *)(param_1 + 0x16c) = uVar2;
        if (local_30 != 0) {
          return local_30;
        }
        iVar10 = FUN_100faf14(param_2,*(int *)(param_1 + 0x168) << 2);
        uVar2 = DAT_100ff204;
        if (iVar10 != 0) {
          return iVar10;
        }
        puVar4 = *(ushort **)(param_1 + 0x16c);
        uVar7 = iVar6 + 8 + iVar5 * 4;
        local_30 = 0;
        if ((puVar4 != (ushort *)0x0) &&
           (puVar11 = puVar4 + *(int *)(param_1 + 0x168) * 6, puVar4 < puVar11)) {
          local_30 = 0;
          do {
            local_30 = FUN_100fb104(param_2,uVar2,puVar4);
            uVar3 = *(int *)(param_1 + 0x160) + iVar1 + *(int *)(puVar4 + 2);
            *(uint *)(puVar4 + 2) = uVar3;
            if ((uVar3 < uVar7) || (uVar8 < uVar3 + *puVar4)) {
              *puVar4 = 0;
            }
            puVar4 = puVar4 + 6;
          } while (puVar4 < puVar11);
        }
        FUN_100fafbc(param_2);
        local_30 = FUN_100fad58(param_2,iVar1 + 6);
        iVar5 = *(int *)(param_1 + 0x15c);
      }
      else {
        piVar12 = &local_30;
      }
      uVar2 = FUN_100fb280(uVar9,0x14,0,iVar5,0,piVar12,piVar12);
      *(undefined4 *)(param_1 + 0x164) = uVar2;
      if ((local_30 == 0) &&
         (local_30 = FUN_100faf14(param_2,*(int *)(param_1 + 0x15c) * 0xc), local_30 == 0)) {
        iVar6 = *(int *)(param_1 + 0x15c);
        iVar5 = *(int *)(param_1 + 0x164);
        if (iVar6 == 0) {
          iVar1 = 0;
          uVar2 = 0;
        }
        else {
          local_30 = 0;
          uVar2 = DAT_100ff1fc;
          iVar10 = iVar5;
          do {
            local_30 = FUN_100fb104(param_2,uVar2,iVar10);
            uVar2 = DAT_100ff1fc;
            if ((local_30 == 0) && (*(ushort *)(iVar10 + 8) != 0)) {
              uVar3 = *(int *)(iVar10 + 0xc) + *(int *)(param_1 + 0x160) + iVar1;
              *(uint *)(iVar10 + 0xc) = uVar3;
              if ((uVar7 <= uVar3) && (*(ushort *)(iVar10 + 8) + uVar3 <= uVar8)) {
                if (*(short *)(param_1 + 0x158) == 1) {
                  if ((*(short *)(iVar10 + 4) < 0) &&
                     ((*(uint *)(param_1 + 0x168) <= *(ushort *)(iVar10 + 4) - 0x8000 ||
                      (*(short *)(*(int *)(param_1 + 0x16c) + (uint)*(ushort *)(iVar10 + 4) * 0xc +
                                 -0x60000) == 0)))) goto LAB_100ff08c;
                }
                iVar10 = iVar10 + 0x14;
              }
            }
LAB_100ff08c:
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          iVar5 = *(int *)(param_1 + 0x164);
          iVar1 = DAT_100ff200 * (iVar10 - iVar5 >> 2);
          uVar2 = *(undefined4 *)(param_1 + 0x15c);
        }
        uVar9 = FUN_100fb280(uVar9,0x14,uVar2,iVar1,iVar5,piVar12);
        *(int *)(param_1 + 0x15c) = iVar1;
        *(undefined4 *)(param_1 + 0x164) = uVar9;
        FUN_100fafbc(param_2);
        *(short *)(param_1 + 0x154) = (short)*(undefined4 *)(param_1 + 0x15c);
      }
    }
  }
  return local_30;
}

