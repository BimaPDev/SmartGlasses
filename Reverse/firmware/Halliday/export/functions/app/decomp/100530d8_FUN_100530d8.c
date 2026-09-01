/* FUN_100530d8 @ 0x100530d8 */

void FUN_100530d8(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_10053114;
  if (10 < param_1) goto LAB_10053108;
  if (*(byte *)(DAT_10053118 + param_1) <= param_2) goto LAB_10053108;
  uVar1 = *(undefined4 *)(*(int *)(DAT_1005311c + param_1 * 4) + param_2 * 4);
  while( true ) {
    if (*DAT_10053114 == iVar2) break;
    FUN_1013cdc0(uVar1);
LAB_10053108:
    uVar1 = 0;
  }
  return;
}

