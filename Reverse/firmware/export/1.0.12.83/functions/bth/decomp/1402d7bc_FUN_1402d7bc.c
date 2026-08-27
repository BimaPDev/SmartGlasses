/* FUN_1402d7bc @ 0x1402d7bc */

void FUN_1402d7bc(int param_1,uint param_2)

{
  *(uint *)(DAT_1402d7dc + 0x44) =
       *(uint *)(DAT_1402d7dc + 0x44) & ~(3 << (param_1 << 1 & 0xffU)) |
       (param_2 & 3) << (param_1 << 1 & 0xffU);
  return;
}

