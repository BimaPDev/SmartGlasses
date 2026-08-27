/* FUN_2c48d554 @ 0x2c48d554 */

int * FUN_2c48d554(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  if (*param_1 == 0) {
    return (int *)0x0;
  }
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  if (uVar3 <= uVar2) {
    return param_1;
  }
  pbVar1 = (byte *)(*param_1 + (uVar2 - 1));
  do {
    pbVar1 = pbVar1 + 1;
    if (0x20 < *pbVar1) {
      if (uVar3 != uVar2) {
        return param_1;
      }
      break;
    }
    uVar2 = uVar2 + 1;
    param_1[2] = uVar2;
  } while (uVar3 != uVar2);
  param_1[2] = uVar3 - 1;
  return param_1;
}

