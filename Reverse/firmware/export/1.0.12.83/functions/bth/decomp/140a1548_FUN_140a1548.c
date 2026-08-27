/* FUN_140a1548 @ 0x140a1548 */

undefined4 FUN_140a1548(uint param_1,undefined4 param_2)

{
  if (*(uint *)(*DAT_140a1578 + 0x16c) <= param_1) {
    return 1;
  }
  FUN_140e5278(param_2,param_1 * 0x118 + *DAT_140a1578 + 0x170,0x112);
  return 0;
}

