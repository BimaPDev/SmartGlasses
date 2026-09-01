/* FUN_100c7518 @ 0x100c7518 */

void FUN_100c7518(int param_1)

{
  int iVar1;
  
  FUN_10131952(1,param_1);
  if ((((*(char *)(param_1 + 0x14) == '\x02') && (*DAT_100c7558 == '\0')) && (*DAT_100c755c != 0))
     && (iVar1 = FUN_10061fd0(DAT_100c7560), iVar1 == 0)) {
    FUN_10061c80(DAT_100c7560,DAT_100c7564,0);
  }
                    /* WARNING: Could not recover jumptable at 0x100c7556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(DAT_100c7568 + 0x174) + 0x10))(param_1);
  return;
}

