/* FUN_1007676c @ 0x1007676c */

undefined4 FUN_1007676c(int param_1)

{
  *(uint *)(**(int **)(param_1 + 4) + 0xc) = *(uint *)(**(int **)(param_1 + 4) + 0xc) & 0xfffffffc;
  *DAT_10076788 = *DAT_10076788 & 0xfeffffff;
  return 0;
}

