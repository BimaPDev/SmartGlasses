/* FUN_100da1f4 @ 0x100da1f4 */

undefined4 FUN_100da1f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar1 = FUN_101364ca(), iVar1 != 0)) {
    FUN_100a5b78((DAT_100da240 - DAT_100da23c) * 0x20 & 0xff00U | 0x19c0031,DAT_100da248,
                 DAT_100da244);
    FUN_10132156(param_1);
  }
  iVar1 = FUN_100d6414(param_1);
  if ((iVar1 != 0) && (iVar2 = FUN_101165e0(), iVar2 != 0)) {
    FUN_10116598(iVar1);
  }
  return 0;
}

