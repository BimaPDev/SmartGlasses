/* FUN_2c550258 @ 0x2c550258 */

int FUN_2c550258(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x80);
  uVar4 = *(uint *)(param_2 + 0x80);
  uVar3 = uVar6;
  if (uVar4 <= uVar6) {
    uVar3 = uVar4;
  }
  if (((uVar3 == 0) ||
      (iVar1 = FUN_2c66960c(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_2 + 0x7c),uVar3,
                            param_4,param_4), iVar1 == 0)) && (uVar6 == uVar4)) {
    iVar5 = *(int *)(param_2 + 0xb4);
    iVar1 = *(int *)(param_2 + 0xb0);
    do {
      if (iVar5 == iVar1) goto LAB_2c550294;
      iVar2 = FUN_2c55010c(param_1,iVar1);
      iVar1 = iVar1 + 0x58;
    } while (iVar2 == 0);
  }
  else {
LAB_2c550294:
    iVar2 = 0;
  }
  return iVar2;
}

