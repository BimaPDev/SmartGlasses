/* FUN_140a367c @ 0x140a367c */

undefined4 FUN_140a367c(int param_1,undefined4 param_2)

{
  FUN_1402a6e8(4,0x3b,DAT_140a36b4,DAT_140a36b0,DAT_140a36a8,DAT_140a36ac,param_1);
  *(undefined4 *)(DAT_140a36b8 + param_1 * 4) = param_2;
  return 0;
}

