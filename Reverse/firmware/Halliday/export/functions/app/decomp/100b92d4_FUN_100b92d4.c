/* FUN_100b92d4 @ 0x100b92d4 */

bool FUN_100b92d4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_100b92ec;
  *param_1 = *(int *)(DAT_100b92ec + 0xc) - *(int *)(DAT_100b92ec + 8);
  return *(int *)(iVar1 + 0xc) == *(int *)(iVar1 + 0x10);
}

