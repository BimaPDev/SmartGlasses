/* FUN_10092f78 @ 0x10092f78 */

void FUN_10092f78(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_1012a754(param_1,0x20);
  uVar1 = DAT_10092f90;
  *param_1 = 0;
  uVar2 = DAT_10092f94;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  return;
}

