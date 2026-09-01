/* FUN_100fdde4 @ 0x100fdde4 */

void FUN_100fdde4(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((uint)param_1[6] < 0xffff) {
    uVar5 = param_1[10];
    uVar7 = param_1[6] + 1;
    iVar9 = *param_1;
    iVar8 = *(int *)(iVar9 + 0x1fc);
    iVar2 = *(int *)(iVar9 + 0x200);
    if (uVar7 < uVar5) {
      uVar7 = uVar5;
    }
LAB_100fde1c:
    uVar1 = param_1[0xb];
    if (uVar7 <= uVar1) {
      iVar10 = param_1[0xc];
      if (param_1[0xd] == 0) {
        uVar5 = *(uint *)(iVar9 + 0x10);
        if ((int)(uVar1 + iVar10) < 0) {
          uVar6 = iVar10 + uVar7;
          do {
            uVar4 = uVar6 & 0xffff;
            uVar6 = uVar6 + 1;
            if (uVar5 <= uVar4) break;
            if (uVar4 != 0) goto LAB_100fde94;
            uVar7 = uVar7 + 1;
          } while (uVar7 <= uVar1);
        }
        else if ((int)(uVar1 + iVar10) < 0x10000) {
          do {
            uVar4 = uVar7 + iVar10 & 0xffff;
            if (uVar4 < uVar5) {
              if (uVar4 != 0) {
LAB_100fde94:
                param_1[6] = uVar7;
                param_1[7] = uVar4;
                return;
              }
            }
            else {
              if (-1 < (int)(uVar7 + iVar10)) break;
              uVar7 = -iVar10;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 <= uVar1);
        }
        else {
          do {
            uVar6 = uVar7 + iVar10;
            uVar4 = uVar6 & 0xffff;
            if (uVar4 < uVar5) {
              if (uVar4 != 0) goto LAB_100fde94;
            }
            else if ((int)uVar6 < 0) {
              uVar7 = -iVar10;
            }
            else {
              if (0xffff < (int)uVar6) break;
              uVar7 = 0x10000 - iVar10;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 <= uVar1);
        }
      }
      else {
        puVar3 = (undefined1 *)(param_1[0xd] + (uVar7 - uVar5) * 2);
        if (puVar3 <= (undefined1 *)(iVar8 + iVar2)) {
          do {
            uVar5 = (uint)CONCAT11(*puVar3,puVar3[1]) + iVar10 & 0xffff;
            if ((CONCAT11(*puVar3,puVar3[1]) != 0) && (uVar5 != 0)) {
              param_1[6] = uVar7;
              param_1[7] = uVar5;
              return;
            }
            uVar7 = uVar7 + 1;
            puVar3 = puVar3 + 2;
          } while (uVar7 <= uVar1);
        }
      }
    }
    iVar10 = FUN_100fdd08(param_1,param_1[9] + 1);
    if (-1 < iVar10) {
      uVar5 = param_1[10];
      if (uVar7 < uVar5) {
        uVar7 = uVar5;
      }
      goto LAB_100fde1c;
    }
  }
  param_1[6] = -1;
  param_1[7] = 0;
  return;
}

