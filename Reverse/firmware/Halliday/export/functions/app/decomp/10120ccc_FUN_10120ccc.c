/* FUN_10120ccc @ 0x10120ccc */

bool FUN_10120ccc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(iVar4 + 0x10e0);
  if (iVar3 == -1) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_10120c8e(param_1,iVar3,*(undefined4 *)(iVar4 + 0x10e4),iVar4 + 0xc6);
    *(int *)(iVar4 + 0x10e0) = -1;
    *(undefined4 *)(iVar4 + 0x10e4) = 0;
  }
  uVar2 = FUN_10121c28(param_1);
  return (uVar2 | uVar1) == 1;
}

