/* FUN_1011af68 @ 0x1011af68 */

void FUN_1011af68(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_1011ad32(iVar1 + 0x20,*(undefined2 *)(iVar1 + 0x3e),*(undefined2 *)(iVar1 + 0x3c));
  FUN_100596dc(param_1,1 - (uint)*(ushort *)(*(int *)(param_1 + 8) + 0x20));
  FUN_100596bc(param_1,*(ushort *)(*(int *)(param_1 + 8) + 0x24) - 1);
  FUN_1011ae5e(*(undefined4 *)(param_1 + 0x14),DAT_100596b8,DAT_100596b4);
  return;
}

