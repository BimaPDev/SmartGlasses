/* FUN_100de8b4 @ 0x100de8b4 */

/* WARNING: Removing unreachable block (ram,0x100cbc06) */

int FUN_100de8b4(int param_1,int param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  
  if (param_2 == 0) {
    return -0x16;
  }
  bVar1 = *(byte *)(param_2 + 0x60);
  *(byte *)(param_2 + 0x60) = (param_3 & 7) << 3 | bVar1 & 0x87;
  *(undefined4 *)(param_2 + 4) = DAT_100de904;
  if ((((bVar1 & 7) == 1) && (param_2 != -0x6c)) && (*(char *)(param_2 + 0x6d) == '\x02')) {
    uVar3 = 0x37f;
  }
  else {
    uVar3 = *(undefined2 *)(DAT_100de908 + 8);
  }
  *(undefined2 *)(param_2 + 0x52) = uVar3;
  *(undefined1 *)(param_2 + 0x49) = 2;
  if ((param_1 == 0) || (*(char *)(param_1 + 0xd) != '\a')) {
    return -0x80;
  }
  if (param_2 != 0) {
    if (*(char *)(param_1 + 2) == '\x02') {
      iVar2 = FUN_100e2194();
      return iVar2;
    }
    if (*(byte *)(param_2 + 0x49) < 5) {
      if (*(byte *)(param_2 + 0x49) == 0) {
        *(undefined1 *)(param_2 + 0x49) = 1;
      }
      FUN_100cb6b4(param_2);
      FUN_100cb614(param_2);
      iVar2 = FUN_100cba10(param_1,param_2,DAT_100cbc30);
      if (iVar2 != 0) {
        *(undefined2 *)(param_2 + 0x46) = 0x19;
        if (*(byte *)(param_1 + 9) < *(byte *)(param_2 + 0x49)) {
          iVar2 = FUN_101336aa(param_1);
          if (iVar2 == 0) {
            *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 4;
            return 0;
          }
        }
        else {
          iVar2 = FUN_10134174(param_2);
          if (iVar2 == 0) {
            return 0;
          }
        }
        FUN_10133f62(param_1,param_2);
        FUN_10133f9e(param_2);
        return iVar2;
      }
      return -0xc;
    }
  }
  return -0x16;
}

