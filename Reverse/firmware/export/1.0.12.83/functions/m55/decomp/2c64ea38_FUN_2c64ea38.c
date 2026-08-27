/* FUN_2c64ea38 @ 0x2c64ea38 */

undefined4 FUN_2c64ea38(undefined4 *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  char in_CY;
  
  puVar5 = (ushort *)*param_1;
  if (in_CY == '\0') {
    if ((ushort *)param_1[1] == puVar5) {
      return 0;
    }
    uVar1 = (ushort)param_2;
    if (-1 < (int)(param_3 << 0x1f)) {
      uVar1 = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
    }
    *param_1 = puVar5 + 1;
    *puVar5 = uVar1;
  }
  else {
    if ((uint)((int)param_1[1] - (int)puVar5) < 3) {
      return 0;
    }
    uVar4 = (param_2 >> 10) - 0x2840;
    uVar2 = (param_2 & 0x3ff) - 0x2400;
    uVar3 = (ushort)uVar4;
    uVar1 = (ushort)uVar2;
    if ((param_3 & 1) == 0) {
      uVar3 = (ushort)((uVar4 & 0xff) << 8) | (ushort)(uVar4 >> 8) & 0xff;
    }
    *puVar5 = uVar3;
    if ((param_3 & 1) == 0) {
      uVar1 = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
    }
    *param_1 = puVar5 + 2;
    puVar5[1] = uVar1;
  }
  return 1;
}

