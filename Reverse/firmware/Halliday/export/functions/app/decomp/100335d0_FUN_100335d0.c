/* FUN_100335d0 @ 0x100335d0 */

void FUN_100335d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *DAT_1003365c;
  iVar3 = *DAT_10033660;
  if (iVar3 == 0) {
LAB_1003364c:
    if (*DAT_1003365c == iVar2) {
      return;
    }
  }
  else {
    iVar1 = (**(code **)(DAT_10033664 + 4))();
    if (iVar1 == 0) {
      FUN_10124cea(*(undefined4 *)(iVar3 + 0xc),1);
      FUN_10124cea(*(undefined4 *)(iVar3 + 4),1);
      if (*DAT_1003365c == iVar2) goto LAB_1003360c;
    }
    else {
      if (((*(char *)(iVar3 + 0x16d) != '\0') && (*(int *)(iVar3 + 0x158) != 0)) &&
         (-1 < (int)((uint)*(byte *)(*(int *)(iVar3 + 0x158) + 0x14) << 0x1f))) goto LAB_1003364c;
      FUN_1008a2b0(*(undefined4 *)(iVar3 + 0x14),0);
      if (*DAT_1003365c == iVar2) {
        FUN_10033204(param_1);
        return;
      }
    }
  }
  FUN_1013cdc0();
LAB_1003360c:
  FUN_10124c20(*(undefined4 *)(iVar3 + 0x18),1);
  return;
}

