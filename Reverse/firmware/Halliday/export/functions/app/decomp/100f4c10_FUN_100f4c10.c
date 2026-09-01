/* FUN_100f4c10 @ 0x100f4c10 */

void FUN_100f4c10(byte *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 != 0) {
    if (param_2 == 0) {
      if ((-1 < (int)((uint)param_1[1] << 0x1f)) && (uVar1 - 1 < 2)) {
LAB_100f4c46:
        *param_1 = 0;
        FUN_100f1c7c();
        FUN_100f2354();
        if (*(code **)(param_1 + 0x24) != (code *)0x0) {
          (**(code **)(param_1 + 0x24))(*(undefined2 *)(param_1 + 2),param_1 + 0x18);
        }
        FUN_100a5b78((DAT_100f4c98 - DAT_100f4c94) * 0x20 & 0xff00U | 0x2e0031,DAT_100f4c9c);
        return;
      }
    }
    else if (uVar1 - 1 < 2) {
      if ((int)((uint)param_1[1] << 0x1f) < 0) {
        FUN_100f1570(*(undefined2 *)(param_1 + 2),(int)*(short *)(param_1 + 0x18),
                     (int)*(short *)(param_1 + 0x1a));
        if (*(short *)(param_1 + 4) != 0) {
          FUN_100f1570(*(short *)(param_1 + 4),
                       (int)(short)(*(short *)(param_1 + 6) + *(short *)(param_1 + 0x18)),
                       (int)(short)(*(short *)(param_1 + 8) + *(short *)(param_1 + 0x1a)));
        }
      }
      goto LAB_100f4c46;
    }
  }
  return;
}

