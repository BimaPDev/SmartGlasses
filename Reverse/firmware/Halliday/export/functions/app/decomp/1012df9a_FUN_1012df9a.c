/* FUN_1012df9a @ 0x1012df9a */

undefined4 FUN_1012df9a(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    FUN_1011dc6a(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x14),
                 *(undefined2 *)(param_1 + 0x12));
    FUN_10064150(*(undefined4 *)(param_1 + 0x1c));
    uVar1 = 0;
  }
  return uVar1;
}

