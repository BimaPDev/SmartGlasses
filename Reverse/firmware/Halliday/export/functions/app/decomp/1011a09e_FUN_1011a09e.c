/* FUN_1011a09e @ 0x1011a09e */

int FUN_1011a09e(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  uVar2 = param_1[1];
  if (uVar2 < uVar3) {
    uVar4 = param_1[4];
    uVar1 = FUN_1011a076();
    uVar2 = uVar4 * (uVar1 / uVar4 - 1) + uVar2;
  }
  return uVar2 - uVar3;
}

