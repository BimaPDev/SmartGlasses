/* FUN_14001520 @ 0x14001520 */

void FUN_14001520(undefined4 param_1,int param_2)

{
  do {
  } while ((*(uint *)(DAT_14001538 + 0xc) & 1) != 0);
  *(uint *)(DAT_14001538 + 4) = *(uint *)(DAT_14001538 + 4) & 0xfffff00f | param_2 << 4;
  return;
}

