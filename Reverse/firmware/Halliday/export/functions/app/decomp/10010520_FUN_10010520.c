/* FUN_10010520 @ 0x10010520 */

void FUN_10010520(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_100105c0;
  iVar3 = *DAT_100105c0;
  iVar4 = *DAT_100105c4;
  if (iVar3 == 0) {
    if (*DAT_100105c4 == iVar4) {
      return;
    }
  }
  else {
    if (*(int *)(iVar3 + 0x40) != 0) {
      FUN_10116598(iVar3 + 0x20);
      FUN_1012dfba(*(undefined4 *)(*piVar1 + 0x40));
      FUN_100a77b4(*(undefined4 *)(*piVar1 + 0x40));
    }
    if (*(int *)*piVar1 != 0) {
      FUN_1012d1f4();
      *(undefined4 *)*piVar1 = 0;
    }
    if (*(int *)(*piVar1 + 4) != 0) {
      FUN_1012d1f4();
      *(undefined4 *)(*piVar1 + 4) = 0;
    }
    if (*(int *)(*piVar1 + 8) != 0) {
      FUN_1012d1f4();
      *(undefined4 *)(*piVar1 + 8) = 0;
    }
    if (*(int *)(*piVar1 + 0x44) != 0) {
      FUN_1012d27c();
    }
    piVar2 = DAT_100105c8;
    if (*DAT_100105c8 != 0) {
      FUN_100edcc4();
      *piVar2 = 0;
    }
    if (*DAT_100105c4 == iVar4) goto LAB_100105a4;
  }
  FUN_1013cdc0();
LAB_100105a4:
  FUN_1012d1f4(*piVar1);
  return;
}

