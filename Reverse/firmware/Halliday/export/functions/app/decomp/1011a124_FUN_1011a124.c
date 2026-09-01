/* FUN_1011a124 @ 0x1011a124 */

undefined4 FUN_1011a124(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = FUN_1011a076();
  uVar6 = param_1[1];
  uVar4 = param_1[4];
  if (*param_1 + uVar4 < uVar6 + param_2) {
    uVar2 = 0xffffffea;
  }
  else {
    if (uVar1 < uVar6) {
      uVar5 = uVar1 / uVar4;
    }
    else {
      uVar5 = 0;
    }
    uVar2 = 0;
    if (uVar1 < uVar6) {
      uVar5 = uVar4 * (uVar5 - 1);
    }
    iVar3 = (uVar6 + param_2) - uVar5;
    param_1[1] = iVar3;
    param_1[2] = iVar3;
  }
  return uVar2;
}

