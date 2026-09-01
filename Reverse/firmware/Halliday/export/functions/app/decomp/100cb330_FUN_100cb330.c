/* FUN_100cb330 @ 0x100cb330 */

undefined4 FUN_100cb330(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 2) == '\x02') && (*(char *)(param_1 + 0xd) == '\a')) {
    iVar1 = FUN_1013344a(param_1 + 0x38);
    if (iVar1 < (int)(*(ushort *)(DAT_100cb35c + 0x11e) - 2)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

