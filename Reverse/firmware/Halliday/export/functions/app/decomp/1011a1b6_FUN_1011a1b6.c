/* FUN_1011a1b6 @ 0x1011a1b6 */

undefined4 FUN_1011a1b6(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1[1];
  if (uVar5 < (uint)param_1[3]) {
    uVar4 = param_1[4];
    uVar1 = FUN_1011a076();
    iVar2 = uVar4 * (uVar1 / uVar4 - 1);
    uVar5 = uVar5 + iVar2;
  }
  else {
    iVar2 = 0;
  }
  if (uVar5 < (uint)(*param_1 + param_2)) {
    uVar3 = 0xffffffea;
  }
  else {
    iVar2 = (*param_1 + param_2) - iVar2;
    uVar3 = 0;
    *param_1 = iVar2;
    param_1[3] = iVar2;
  }
  return uVar3;
}

