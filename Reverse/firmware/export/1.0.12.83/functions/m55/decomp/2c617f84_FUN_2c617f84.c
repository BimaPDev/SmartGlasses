/* FUN_2c617f84 @ 0x2c617f84 */

void FUN_2c617f84(uint param_1,uint param_2,uint param_3,undefined1 *param_4,undefined1 *param_5,
                 undefined1 *param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  uVar4 = param_1 >> 8;
  puVar2 = param_4;
  if ((param_1 & 0x200) != 0) {
    puVar2 = param_6;
    param_6 = param_4;
  }
  puVar3 = param_5;
  if ((uVar4 & 4) != 0) {
    puVar3 = param_6;
    param_6 = param_5;
  }
  puVar1 = puVar2;
  if ((uVar4 & 6) == 0) {
    puVar1 = puVar3;
    puVar3 = puVar2;
  }
  if ((uVar4 & 1) == 0) {
    *puVar3 = (char)param_3;
    *param_6 = (char)(param_3 * (~param_2 & 0xff) >> 8);
    puVar3 = puVar1;
    if ((param_1 & 0xff) == 0) {
      uVar4 = param_2 << 8;
    }
    else {
      uVar4 = (-(param_1 & 0xff) & 0xff) * param_2;
    }
  }
  else {
    *puVar1 = (char)param_3;
    uVar4 = (param_1 & 0xff) * param_2;
    *param_6 = (char)(param_3 * (~param_2 & 0xff) >> 8);
  }
  *puVar3 = (char)((param_3 & 0xffff) * (~(uVar4 >> 8) & 0xff) >> 8);
  return;
}

