/* FUN_10101794 @ 0x10101794 */

uint * FUN_10101794(int param_1,undefined4 param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *local_38;
  uint *local_34;
  int local_2c [2];
  
  iVar6 = *(int *)(param_1 + 0x18);
  uVar11 = iVar6 + 1;
  iVar9 = *(int *)(param_1 + 0x10);
  local_2c[0] = 0;
  if (*(uint *)(param_1 + 0x1c) < uVar11) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
    local_34 = (uint *)FUN_100fb280(param_2,4,*(uint *)(param_1 + 0x1c),uVar11,
                                    *(undefined4 *)(param_1 + 0x20),local_2c);
    *(uint **)(param_1 + 0x20) = local_34;
    if (local_2c[0] != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x1c) = uVar11;
  }
  else {
    local_34 = *(uint **)(param_1 + 0x20);
  }
  local_38 = local_34;
  if (iVar6 != 0) {
    pbVar1 = (byte *)(iVar9 + 10);
    do {
      uVar3 = *(uint *)(pbVar1 + 3);
      uVar7 = *(uint *)(pbVar1 + 7);
      uVar11 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
               uVar3 >> 0x18;
      pbVar2 = pbVar1 + 0xb;
      uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18;
      if (uVar3 == 0) {
LAB_101017de:
        if (uVar7 != 0) {
          uVar3 = 0;
          uVar11 = *(uint *)(*(int *)(param_1 + 0x10) + uVar7);
          iVar8 = uVar7 + *(int *)(param_1 + 0x10);
          uVar11 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                   uVar11 >> 0x18;
          while( true ) {
            uVar7 = uVar11;
            uVar11 = uVar7 + uVar3 >> 1;
            iVar13 = uVar11 * 5 + 4;
            iVar10 = iVar8 + iVar13;
            if (uVar7 <= uVar3) break;
            uVar5 = (uint)*(byte *)(iVar10 + 1) << 8 | (uint)*(byte *)(iVar8 + iVar13) << 0x10 |
                    (uint)*(byte *)(iVar10 + 2);
            if (uVar5 <= param_3) {
              if (param_3 == uVar5) {
                if (CONCAT11(*(undefined1 *)(iVar10 + 3),*(undefined1 *)(iVar10 + 4)) != 0)
                goto LAB_10101848;
                break;
              }
              uVar3 = uVar11 + 1;
              uVar11 = uVar7;
            }
          }
        }
      }
      else {
        uVar3 = *(uint *)(*(int *)(param_1 + 0x10) + uVar11);
        iVar8 = *(int *)(param_1 + 0x10) + uVar11;
        uVar11 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                 uVar3 >> 0x18;
        uVar3 = 0;
        do {
          uVar5 = uVar11 + uVar3 >> 1;
          uVar12 = uVar5 + 1;
          iVar10 = iVar8 + uVar12 * 4;
          if (uVar11 <= uVar3) goto LAB_101017de;
          uVar4 = (uint)*(byte *)(iVar10 + 1) << 8 | (uint)*(byte *)(iVar8 + uVar12 * 4) << 0x10 |
                  (uint)*(byte *)(iVar10 + 2);
          if (param_3 < uVar4) {
            uVar11 = uVar5;
          }
        } while ((param_3 < uVar4) || (uVar3 = uVar12, uVar4 + *(byte *)(iVar10 + 3) < param_3));
LAB_10101848:
        *local_38 = (uint)pbVar1[1] << 8 | (uint)*pbVar1 << 0x10 | (uint)pbVar1[2];
        local_38 = local_38 + 1;
      }
      pbVar1 = pbVar2;
    } while (pbVar2 != (byte *)(iVar6 * 0xb + 10 + iVar9));
  }
  *local_38 = 0;
  return local_34;
}

