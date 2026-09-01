/* FUN_101217c0 @ 0x101217c0 */

undefined4 FUN_101217c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x74);
  if (*(char *)(iVar1 + 4) == '\0') {
    FUN_101215fc(param_1,*(undefined1 *)(iVar1 + 1));
    *(undefined1 *)(*(int *)(iVar2 + 0x74) + 4) = 1;
  }
  return 1;
}

