/* thunk_FUN_1013c70e @ 0x1011dc4c */

bool thunk_FUN_1013c70e(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  return uVar2 != 0;
}

