/* FUN_10119f9e @ 0x10119f9e */

undefined4 FUN_10119f9e(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if ((param_2 != 0) && (param_2 >> 3 < *(uint *)(iVar5 + 8))) {
    uVar1 = FUN_10119e76(iVar5);
    iVar2 = FUN_10053ce8(iVar5,uVar1);
    if (iVar2 != 0) {
      uVar3 = FUN_10119e3a(iVar5,iVar2);
      if (uVar1 < uVar3) {
        FUN_10053b8c(iVar5,iVar2,uVar1 + iVar2);
        FUN_10053dd4(iVar5,uVar1 + iVar2);
      }
      uVar4 = FUN_10119e46(iVar5,iVar2,1);
      uVar4 = FUN_10053b4c(uVar4,iVar2);
      return uVar4;
    }
  }
  return 0;
}

