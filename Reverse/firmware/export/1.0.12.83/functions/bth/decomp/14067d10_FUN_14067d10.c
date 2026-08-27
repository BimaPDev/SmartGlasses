/* FUN_14067d10 @ 0x14067d10 */

undefined4 FUN_14067d10(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_1406d034(param_1,param_3,param_3,param_4,param_4);
  if ((iVar1 == 0) || (*(byte *)(iVar1 + 0x13) != param_2)) {
    return 0x40;
  }
  if (param_4 == 0) {
    if (param_5 == 0) {
      return 0x40;
    }
    if (*(char *)(iVar1 + 0x35) != '\0') {
      return 0x43;
    }
    if ((*(ushort *)(param_5 + 6) < 7) ||
       ((*(char *)(iVar1 + 0x11) == '9' && (*(ushort *)(param_5 + 8) < 0xc)))) {
      return 0x4e;
    }
    *(undefined1 *)(iVar1 + 0x35) = 1;
    *(int *)(iVar1 + 0x24) = param_5;
    FUN_1407358c();
  }
  else {
    if (*(char *)(iVar1 + 0x35) != '\0') {
      return 0x43;
    }
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined1 *)(iVar1 + 0x35) = 1;
  }
  FUN_1406d210(param_1,iVar1,6,param_4);
  return 0;
}

