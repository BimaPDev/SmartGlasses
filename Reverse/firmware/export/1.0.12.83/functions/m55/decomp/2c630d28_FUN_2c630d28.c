/* FUN_2c630d28 @ 0x2c630d28 */

void FUN_2c630d28(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined2 *)(param_2 + 0x28) = 0;
  *(byte *)(param_2 + 0x2a) = *(byte *)(param_2 + 0x2a) & 0xfe;
  FUN_2c606abc(param_2,0x10);
  FUN_2c606abc(param_2,0x200);
  FUN_2c5fefc8(DAT_2c630d6c,param_2);
  FUN_2c5ff0b8();
  FUN_2c630c30(param_2,DAT_2c630d70,0,param_4);
  return;
}

