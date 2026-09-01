/* FUN_100ccbd0 @ 0x100ccbd0 */

void FUN_100ccbd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_101331f8(*(undefined1 *)(param_1 + 8));
  if (iVar1 == 0) {
    iVar1 = FUN_100cc7d4(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
    if (iVar1 != 0) {
      FUN_101347ee();
      return;
    }
  }
  else {
    iVar1 = FUN_100ccb58();
    if (iVar1 != 0) {
      FUN_100a5b78(DAT_100ccc30 | ((int)PTR_DAT_100ccc28 - (int)PTR_DAT_100ccc24) * 0x20 & 0xff00U,
                   DAT_100ccc34,PTR_s_Failed_to_clear_SC__d_100ccc2c,iVar1);
      return;
    }
  }
  return;
}

