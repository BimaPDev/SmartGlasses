/* FUN_101317dc @ 0x101317dc */

uint FUN_101317dc(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x54);
  iVar6 = iVar5 + 0x40;
  FUN_1011dbf4(iVar6,0xffffffff);
  if ((*(char *)(iVar5 + 0x2c) == '\0') || (*(int *)(iVar5 + 0x3c) == 0)) {
    thunk_FUN_10113e2c(iVar6);
    uVar3 = 0xfffffffb;
  }
  else {
    if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(iVar5 + 0x30) != 0)) {
      FUN_101140ac(iVar5 + 0x54);
      thunk_FUN_10113e2c(iVar6);
      FUN_1011dbde(iVar5 + 0x54,*(undefined4 *)(iVar5 + 0x30));
      FUN_1011dbf4(iVar6,0xffffffff);
    }
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar3 = 0;
    if (uVar4 != 0) {
      if (uVar4 <= param_3) {
        param_3 = uVar4;
      }
      iVar2 = *(int *)(param_1 + 4);
      uVar3 = param_3 & 0xffff;
      iVar1 = *(int *)(iVar5 + 0x3c) + iVar2;
      if (*(uint *)(param_1 + 0x14) < iVar2 + uVar3) {
        uVar4 = *(uint *)(param_1 + 0x14) - iVar2 & 0xffff;
        FUN_1011ea40(param_2,iVar1,uVar4);
        FUN_1011ea40(param_2 + uVar4,*(undefined4 *)(iVar5 + 0x3c),uVar3 - uVar4);
        *(uint *)(param_1 + 4) = uVar3 - uVar4;
        *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar3;
      }
      else {
        FUN_1011ea40(param_2,iVar1,uVar3);
        *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar3;
        *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + uVar3;
      }
    }
    thunk_FUN_10113e2c(iVar6);
  }
  return uVar3;
}

