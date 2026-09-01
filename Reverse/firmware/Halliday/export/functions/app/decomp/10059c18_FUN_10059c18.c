/* FUN_10059c18 @ 0x10059c18 */

void FUN_10059c18(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  FUN_10059990(param_1,3,DAT_10059c44,**(undefined4 **)(param_1 + 8));
  if (*(int *)(*(int *)(param_1 + 8) + 0x260) << 0x1d < 0) {
    FUN_100597e8(param_1);
    iVar4 = *(int *)(param_1 + 8);
    FUN_1011ad32(iVar4 + 0x20,*(undefined2 *)(iVar4 + 0x3e),*(undefined2 *)(iVar4 + 0x3c));
    sVar2 = *(short *)(iVar4 + 0x24);
    sVar1 = *(short *)(iVar4 + 0x26);
    iVar3 = FUN_1011ae78((int *)(param_1 + 8));
    if (iVar3 != 0) {
      FUN_1011ae5e(*(undefined4 *)(param_1 + 0x14),DAT_10059774);
    }
    if (sVar2 != sVar1) {
      FUN_100596bc(param_1,(uint)*(ushort *)(iVar4 + 0x26) - (uint)*(ushort *)(iVar4 + 0x24));
    }
    FUN_100596dc(param_1,(uint)*(ushort *)(iVar4 + 0x20) - (uint)*(ushort *)(iVar4 + 0x22));
    return;
  }
  return;
}

