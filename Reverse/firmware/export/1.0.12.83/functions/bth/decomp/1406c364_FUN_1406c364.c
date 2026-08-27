/* FUN_1406c364 @ 0x1406c364 */

undefined4
FUN_1406c364(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5)

{
  int iVar1;
  
  iVar1 = FUN_1406d034(param_1,param_3,param_3,param_4,param_4);
  if ((iVar1 == 0) || (*(byte *)(iVar1 + 0x13) != param_2)) {
    return 0x40;
  }
  if ((*(char *)(iVar1 + 0x11) != '\x15') && ((int)((uint)*(byte *)(iVar1 + 0x12) << 0x1a) < 0)) {
    return 0x43;
  }
  *(byte *)(iVar1 + 0x12) = *(byte *)(iVar1 + 0x12) | 0x20;
  *(undefined2 *)(iVar1 + 0x24) = param_5;
  *(undefined1 *)(iVar1 + 0x13) = 0xff;
  FUN_1406d210(param_1,iVar1,6,param_4);
  return 0;
}

