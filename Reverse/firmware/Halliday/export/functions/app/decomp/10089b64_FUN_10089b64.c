/* FUN_10089b64 @ 0x10089b64 */

void FUN_10089b64(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = FUN_10126fd2();
  for (iVar4 = 0; iVar4 != iVar2; iVar4 = iVar4 + 1) {
    FUN_10089b64(*(undefined4 *)(**(int **)(param_1 + 8) + iVar4 * 4));
  }
  if ((int)((uint)*(byte *)(param_1 + 0x2a) << 0x1f) < 0) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xfe;
    FUN_10089680(param_1);
    FUN_10125c28(param_1);
    if (iVar4 != 0) {
      uVar1 = FUN_1012691c(param_1,0,10);
      uVar3 = (uint)uVar1;
      if ((uVar3 != 0) && (uVar3 <= *DAT_10089bf0)) {
        (**(code **)(*DAT_10089bf4 + (uVar3 + 0x1fffffff) * 8))
                  (param_1,*(undefined4 *)(*DAT_10089bf4 + (uVar3 + 0x1fffffff) * 8 + 4));
      }
    }
  }
  if ((int)((uint)*(byte *)(param_1 + 0x2a) << 0x1e) < 0) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xfd;
    FUN_10126844(param_1,0);
    return;
  }
  return;
}

