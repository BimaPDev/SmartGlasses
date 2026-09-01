/* FUN_100e491c @ 0x100e491c */

/* WARNING: Removing unreachable block (ram,0x100cbc06) */

int FUN_100e491c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return -0x16;
  }
  *(undefined4 *)(param_2 + 4) = DAT_100e493c;
  *(undefined2 *)(param_2 + 0x52) = 0x2a0;
  *(undefined1 *)(param_2 + 0x49) = 2;
  if ((param_1 == 0) || (*(char *)(param_1 + 0xd) != '\a')) {
    return -0x80;
  }
  if (param_2 != 0) {
    if (*(char *)(param_1 + 2) == '\x02') {
      iVar1 = FUN_100e2194();
      return iVar1;
    }
    if (*(byte *)(param_2 + 0x49) < 5) {
      if (*(byte *)(param_2 + 0x49) == 0) {
        *(undefined1 *)(param_2 + 0x49) = 1;
      }
      FUN_100cb6b4(param_2);
      FUN_100cb614(param_2);
      iVar1 = FUN_100cba10(param_1,param_2,DAT_100cbc30);
      if (iVar1 != 0) {
        *(undefined2 *)(param_2 + 0x46) = 0x17;
        if (*(byte *)(param_1 + 9) < *(byte *)(param_2 + 0x49)) {
          iVar1 = FUN_101336aa(param_1);
          if (iVar1 == 0) {
            *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 4;
            return 0;
          }
        }
        else {
          iVar1 = FUN_10134174(param_2);
          if (iVar1 == 0) {
            return 0;
          }
        }
        FUN_10133f62(param_1,param_2);
        FUN_10133f9e(param_2);
        return iVar1;
      }
      return -0xc;
    }
  }
  return -0x16;
}

