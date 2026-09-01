/* FUN_1012b1e4 @ 0x1012b1e4 */

undefined4 FUN_1012b1e4(int *param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *extraout_r2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar2 = (uint)*(ushort *)(param_1 + 1);
  uVar3 = (uint)*(byte *)((int)param_1 + 7);
  if (uVar2 == 0xffff) {
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      uVar5 = (uint)*(ushort *)(*param_1 + uVar2 * 8);
      if (param_2 == (uVar5 & 0x3fff)) {
        if ((int)(uVar5 << 0x10) < 0) {
          return 2;
        }
        if ((int)(uVar5 << 0x11) < 0) goto LAB_1012b21a;
        iVar4 = *(int *)(*param_1 + uVar2 * 8 + 4);
        goto LAB_1012b224;
      }
    }
  }
  else {
    if (uVar3 == 0) {
      return 0;
    }
    if (uVar3 < 2) {
      if (param_2 == (uVar2 & 0x3fff)) {
        if ((int)(uVar2 << 0x10) < 0) {
          return 2;
        }
        if ((int)(uVar2 << 0x11) < 0) {
LAB_1012b21a:
          uVar1 = FUN_10094720();
          *extraout_r2 = uVar1;
        }
        else {
          iVar4 = *param_1;
LAB_1012b224:
          *param_3 = iVar4;
        }
        return 1;
      }
    }
    else {
      uVar2 = 0;
      puVar6 = (ushort *)(*param_1 + uVar3 * 4);
      do {
        uVar5 = (uint)*puVar6;
        if (param_2 == (uVar5 & 0x3fff)) {
          if ((int)(uVar5 << 0x10) < 0) {
            return 2;
          }
          if ((int)(uVar5 << 0x11) < 0) goto LAB_1012b21a;
          iVar4 = *(int *)(*param_1 + uVar2 * 4);
          goto LAB_1012b224;
        }
        uVar2 = uVar2 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return 0;
}

