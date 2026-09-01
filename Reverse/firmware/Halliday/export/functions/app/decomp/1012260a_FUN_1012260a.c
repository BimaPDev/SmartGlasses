/* FUN_1012260a @ 0x1012260a */

undefined4 FUN_1012260a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar1 = FUN_1008630c(*(undefined1 *)(param_1 + 1),param_1 + 0x50,iVar3,1);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 3) = 0;
    uVar2 = 0;
    if ((uint)(iVar3 - *(int *)(param_1 + 0x40)) < *(uint *)(param_1 + 0x38)) {
      for (uVar4 = (uint)*(byte *)(param_1 + 2); 1 < uVar4; uVar4 = uVar4 - 1) {
        iVar3 = iVar3 + *(int *)(param_1 + 0x38);
        FUN_1008630c(*(undefined1 *)(param_1 + 1),param_1 + 0x50,iVar3,1);
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

