/* FUN_1013b460 @ 0x1013b460 */

undefined4 FUN_1013b460(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (((param_2 - 1U < 0x10) && (param_3 != 0)) && (param_4 != 0)) {
    do {
      uVar4 = *(uint *)(param_4 + iVar2 * 4);
      if (uVar4 < 0x400) {
        iVar3 = *(int *)(param_1 + 0x40);
        if (iVar3 != 0) {
          iVar5 = param_1 + iVar3 * 4;
          uVar1 = *(uint *)(iVar5 + 0x40);
          if (uVar4 <= uVar1) {
            if (uVar4 == uVar1) {
              *(undefined4 *)(iVar5 + -4) = *(undefined4 *)(param_3 + iVar2 * 4);
            }
            goto LAB_1013b49e;
          }
        }
        *(uint *)(iVar3 * 4 + param_1 + 0x44) = uVar4;
        *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_3 + iVar2 * 4);
        *(int *)(param_1 + 0x40) = iVar3 + 1;
      }
LAB_1013b49e:
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return 0;
}

