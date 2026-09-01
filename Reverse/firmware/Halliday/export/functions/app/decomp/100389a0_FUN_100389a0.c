/* FUN_100389a0 @ 0x100389a0 */

void FUN_100389a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_100389e0;
  iVar2 = *DAT_100389dc;
  FUN_10097998(*(undefined4 *)(*DAT_100389e0 + 0x10),*(undefined4 *)(DAT_100389e4 + param_1 * 4),
               DAT_100389e4,*DAT_100389e0,param_1,iVar2,param_3);
  if (param_1 != 2) {
    *(char *)(*piVar1 + 0x57) = (char)param_1;
  }
  if (*DAT_100389dc != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

