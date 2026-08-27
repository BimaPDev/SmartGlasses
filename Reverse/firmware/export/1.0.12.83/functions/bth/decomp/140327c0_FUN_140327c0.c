/* FUN_140327c0 @ 0x140327c0 */

void FUN_140327c0(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = DAT_14032810;
  if (param_1 == 2) {
    FUN_14035830(*DAT_14032810);
    FUN_1402a6e8(4,0x579,DAT_14032828,DAT_14032824,DAT_14032820,DAT_1403281c,*DAT_14032818,*puVar1);
  }
  else if (param_1 == 4) {
    FUN_140a1ac8(*DAT_14032810);
  }
  puVar2 = DAT_14032814;
  *puVar1 = 0xffff;
  *puVar2 = 0;
  return;
}

