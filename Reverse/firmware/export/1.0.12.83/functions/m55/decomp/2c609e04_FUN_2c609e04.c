/* FUN_2c609e04 @ 0x2c609e04 */

undefined4
FUN_2c609e04(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
            char param_6)

{
  undefined4 uVar1;
  
  if ((param_5 & 0x3f) == 0) {
    if ((param_6 == '\0') || (uVar1 = 0, (param_4 & 0x3f) == 0)) {
      *param_1 = param_2;
      *(undefined1 *)((int)param_1 + 0x52) = 0;
      *(undefined1 *)(param_1 + 0x2a) = 0;
      param_1[1] = param_3;
      param_1[2] = param_4;
      *(undefined2 *)(param_1 + 3) = 0x100;
      *(undefined2 *)(param_1 + 0x14) = 0x1f00;
      FUN_2c62c3b0(param_1 + 7,0x34);
      uVar1 = 1;
      param_1[4] = 0;
      param_1[5] = param_5;
      param_1[6] = param_5;
    }
    return uVar1;
  }
  return 0;
}

