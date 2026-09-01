/* FUN_100bc840 @ 0x100bc840 */

void FUN_100bc840(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10131468();
  if ((param_1 == 0) && ((uint)(iVar1 - *DAT_100bc868) < 0x259)) {
    return;
  }
  *DAT_100bc868 = iVar1;
  thunk_FUN_10136ad2(DAT_100bc86c,1);
  return;
}

