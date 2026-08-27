/* FUN_1409ffb4 @ 0x1409ffb4 */

undefined4 FUN_1409ffb4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (*DAT_1409ffdc != 0)) {
    uVar1 = FUN_140e5278(DAT_1409ffe0,*DAT_1409ffdc + 0x10,0x15c);
    *param_1 = uVar1;
    return 0;
  }
  return 0xffffffff;
}

