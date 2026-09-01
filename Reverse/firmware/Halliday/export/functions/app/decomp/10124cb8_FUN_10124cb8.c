/* FUN_10124cb8 @ 0x10124cb8 */

bool FUN_10124cb8(int param_1,uint param_2)

{
  return (param_2 & ~*(uint *)(param_1 + 0x24)) == 0;
}

