/* FUN_1400d368 @ 0x1400d368 */

undefined4 FUN_1400d368(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) < param_3) {
    return 1;
  }
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(int *)(param_1 + 8) - iVar1;
  if (param_3 < uVar2) {
    if (param_2 != 0) {
      func_0x13f43328(iVar1 + *(int *)(param_1 + 0x10));
      iVar1 = *(int *)(param_1 + 4);
    }
    *(uint *)(param_1 + 4) = param_3 + iVar1;
    return 0;
  }
  if (param_2 != 0) {
    func_0x13f43328(iVar1 + *(int *)(param_1 + 0x10),param_2,uVar2,*(int *)(param_1 + 0x10),param_4)
    ;
    func_0x13f43328(*(undefined4 *)(param_1 + 0x10),param_2 + uVar2,param_3 - uVar2);
  }
  *(uint *)(param_1 + 4) = param_3 - uVar2;
  return 0;
}

