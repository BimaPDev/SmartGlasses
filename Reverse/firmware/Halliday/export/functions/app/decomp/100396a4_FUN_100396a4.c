/* FUN_100396a4 @ 0x100396a4 */

void FUN_100396a4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_100396f0;
  iVar2 = *DAT_100396e4;
  FUN_100a5b78((DAT_100396e8 - DAT_100396ec) * 0x20 & 0xff00U | 0x8a0031,DAT_100396f8,DAT_100396f4,
               *(undefined1 *)(DAT_100396f0 + 10),param_1);
  if (*DAT_100396e4 != iVar2) {
    FUN_1013cdc0(*(undefined1 *)(iVar1 + 10));
  }
  return;
}

