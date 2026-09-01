/* FUN_101305e6 @ 0x101305e6 */

undefined4 FUN_101305e6(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  int local_14;
  undefined4 uStack_10;
  
  if (param_1 == 0) {
    return 0xffffffea;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    return 0;
  }
  local_18 = 0;
  local_14 = 0;
  uStack_10 = param_3;
  (**(code **)(*(int *)(param_1 + 0xc) + 0xa8))
            (*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xac),5,&local_18);
  if (0 < local_14) {
    FUN_100a07a0(*(undefined4 *)(param_1 + 0xcc),local_18);
    FUN_100a5b78(DAT_100b3efc | (DAT_100b3ef4 - DAT_100b3ef8) * 0x20 & 0xff00U,DAT_100b3f00,
                 *(undefined1 *)(param_1 + 0x9a),local_14);
  }
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) & 0xfee3 | 8;
  return 0;
}

