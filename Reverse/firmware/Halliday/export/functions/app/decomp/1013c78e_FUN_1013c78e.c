/* FUN_1013c78e @ 0x1013c78e */

undefined4 FUN_1013c78e(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20))) {
    if ((*(int *)(param_2 + 0x1c) == 0) || (*(int *)(param_2 + 0x1c) == *(int *)(param_1 + 0x1c))) {
      *(int *)(param_2 + 0x1c) = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      uVar2 = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
      uVar1 = *(uint *)(param_2 + 4);
      *(undefined4 *)(param_1 + 8) = uVar2;
      iVar3 = *(int *)(param_1 + 0xc);
      if (*(uint *)(param_1 + 4) < uVar1) {
        *(uint *)(param_2 + 4) = *(uint *)(param_1 + 4);
      }
      *(int *)(param_2 + 0xc) = iVar3;
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      if (iVar3 == 0) {
        if (*(int *)(param_2 + 0x14) != 0) {
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0x14);
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x14) = 0;
      }
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      return 0;
    }
  }
  return 0xffffffff;
}

