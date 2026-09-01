/* FUN_1011a160 @ 0x1011a160 */

void FUN_1011a160(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 4);
  if (uVar5 < *(uint *)(param_1 + 0xc)) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar1 = FUN_1011a076();
    uVar5 = uVar3 * (uVar1 / uVar3 - 1) + uVar5;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x18) == 0) {
    uVar4 = uVar1 - uVar3 * (uVar1 / uVar3);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x18) & uVar1;
  }
  uVar2 = uVar5 - uVar1;
  if (param_3 <= uVar5 - uVar1) {
    uVar2 = param_3;
  }
  uVar5 = uVar3 - uVar4;
  if (uVar2 <= uVar3 - uVar4) {
    uVar5 = uVar2;
  }
  *param_2 = uVar4 + *(int *)(param_1 + 0x14);
  *(uint *)(param_1 + 0xc) = uVar1 + uVar5;
  return;
}

