/* FUN_140b9760 @ 0x140b9760 */

int FUN_140b9760(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x3c);
  *(undefined1 *)(param_1 + iVar5 * 0x10) = 1;
  *(undefined4 *)(param_1 + iVar5 * 0x10 + 4) = param_3;
  if (param_2[9] == 0) {
    FUN_140e5408(param_2 + 2,param_2[1]);
  }
  else if (param_2[1] != 0) {
    FUN_140e5168(param_2 + 2,*param_2);
  }
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_140e52b8(param_2 + 2);
  iVar4 = iVar5 * 0x10 + param_1;
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0xc) = uVar1;
  uVar3 = *(int *)(param_1 + 0x3c) + 1;
  uVar2 = (uint)((ulonglong)DAT_140b97d8 * (ulonglong)uVar3 >> 0x20);
  *(uint *)(param_1 + 0x3c) = uVar3 - ((uVar2 & 0xfffffffe) + (uVar2 >> 1));
  return iVar5;
}

