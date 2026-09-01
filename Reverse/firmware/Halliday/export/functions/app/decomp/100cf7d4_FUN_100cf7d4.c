/* FUN_100cf7d4 @ 0x100cf7d4 */

int FUN_100cf7d4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(*(int *)*param_1 + 0xd) == '\a') {
    iVar1 = FUN_100c1b58(param_2,param_2,0,0,param_1,param_2,param_3);
    if (iVar1 == 0) {
      iVar2 = -2;
    }
    else {
      iVar2 = FUN_100cf5a4(param_1,iVar1,0);
      if (iVar2 != 0) {
        FUN_1013c984(param_2,iVar1);
      }
    }
  }
  else {
    FUN_100a5b78((DAT_100cf83c - DAT_100cf838) * 0x20 & 0xff00U | 0xde0011,DAT_100cf844,DAT_100cf840
                );
    iVar2 = -0x80;
  }
  return iVar2;
}

