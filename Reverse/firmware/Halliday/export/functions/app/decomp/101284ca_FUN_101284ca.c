/* FUN_101284ca @ 0x101284ca */

int FUN_101284ca(int param_1)

{
  return (*(int *)(param_1 + 0xc) * 2 + 3U & 0xfffffffc) + *(int *)(param_1 + 0x10) * 4 + 0x18;
}

