/* FUN_1011a0c8 @ 0x1011a0c8 */

void FUN_1011a0c8(uint *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar5 = param_1[2];
  if (uVar5 < uVar3) {
    uVar4 = param_1[4];
    uVar1 = FUN_1011a076();
    uVar5 = uVar4 * (uVar1 / uVar4 - 1) + uVar5;
  }
  uVar4 = param_1[2];
  uVar1 = param_1[4];
  if (param_1[6] == 0) {
    uVar2 = uVar4 - uVar1 * (uVar4 / uVar1);
  }
  else {
    uVar2 = param_1[6] & uVar4;
  }
  uVar5 = (uVar3 + uVar1) - uVar5;
  if (param_3 <= uVar5) {
    uVar5 = param_3;
  }
  uVar3 = uVar1 - uVar2;
  if (uVar5 <= uVar1 - uVar2) {
    uVar3 = uVar5;
  }
  *param_2 = uVar2 + param_1[5];
  param_1[2] = uVar4 + uVar3;
  return;
}

