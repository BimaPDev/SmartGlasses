/* FUN_1008c354 @ 0x1008c354 */

void FUN_1008c354(undefined4 *param_1)

{
  undefined2 uVar1;
  
  FUN_1011ea48(param_1 + 3,0,0x20);
  *(undefined1 *)(param_1 + 9) = 0xff;
  *param_1 = DAT_1008c384;
  param_1[1] = 0xffff;
  param_1[2] = 0xffff;
  uVar1 = FUN_10093bf0(5);
  *(undefined2 *)(param_1 + 4) = uVar1;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  return;
}

