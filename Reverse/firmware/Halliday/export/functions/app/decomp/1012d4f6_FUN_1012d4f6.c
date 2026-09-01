/* FUN_1012d4f6 @ 0x1012d4f6 */

void FUN_1012d4f6(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[6];
  if ((uVar1 != 0) && (param_1[1] != *param_1)) {
    uVar2 = param_1[7];
    if (uVar2 <= uVar1) {
      *param_1 = uVar1;
      param_1[1] = uVar2 + param_1[2];
      return;
    }
    FUN_1011ea40(param_1[4],uVar1 + param_1[4],uVar2 - uVar1);
  }
  uVar1 = param_1[1];
  param_1[1] = uVar1 - *param_1;
  param_1[7] = uVar1 - *param_1;
  *param_1 = 0;
  param_1[6] = 0;
  return;
}

