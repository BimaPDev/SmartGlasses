/* FUN_14081900 @ 0x14081900 */

undefined4 FUN_14081900(int param_1)

{
  FUN_140e5658(param_1,0,0x100);
  *(int *)(param_1 + 0x14) = param_1 + 0x14;
  *(int *)(param_1 + 0x18) = param_1 + 0x14;
  *(undefined1 *)(param_1 + 0xec) = 1;
  FUN_14075168(param_1 + 0x24,3000,DAT_14081938,param_1,1);
  return 0;
}

