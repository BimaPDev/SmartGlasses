/* FUN_2c62b108 @ 0x2c62b108 */

undefined4 FUN_2c62b108(int *param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)*(ushort *)(param_1 + 1);
  if (uVar4 == 0xffff) {
    puVar2 = (ushort *)*param_1;
    uVar1 = *puVar2;
    while (uVar4 = (uint)uVar1, uVar4 != 0) {
      if (param_2 == (uVar4 & 0x3fff)) {
        if ((int)(uVar4 << 0x10) < 0) {
          return 2;
        }
        if (-1 < (int)(uVar4 << 0x11)) {
          *param_3 = *(int *)(puVar2 + 2);
          return 1;
        }
        goto LAB_2c62b196;
      }
      puVar2 = puVar2 + 4;
      uVar1 = *puVar2;
    }
  }
  else {
    uVar5 = (uint)*(byte *)((int)param_1 + 7);
    if (uVar5 == 0) {
      return 0;
    }
    if (uVar5 == 1) {
      if (param_2 == (uVar4 & 0x3fff)) {
        if ((int)(uVar4 << 0x10) < 0) {
          return 2;
        }
        if ((int)(uVar4 << 0x11) < 0) {
          uVar3 = FUN_2c62b068(param_2);
          *extraout_r2_00 = uVar3;
          return 1;
        }
        *param_3 = *param_1;
        return 1;
      }
    }
    else {
      uVar4 = 0;
      puVar2 = (ushort *)(*param_1 + uVar5 * 4 + -2);
      do {
        puVar2 = puVar2 + 1;
        uVar1 = *puVar2;
        if (param_2 == (uVar1 & 0x3fff)) {
          if ((uVar1 & 0x8000) != 0) {
            return 2;
          }
          if ((uVar1 & 0x4000) == 0) {
            *param_3 = *(int *)(*param_1 + uVar4 * 4);
            return 1;
          }
LAB_2c62b196:
          uVar3 = FUN_2c62b068(param_2);
          *extraout_r2 = uVar3;
          return 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
  return 0;
}

