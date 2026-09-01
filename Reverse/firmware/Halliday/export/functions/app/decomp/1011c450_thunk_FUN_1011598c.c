/* thunk_FUN_1011598c @ 0x1011c450 */

void thunk_FUN_1011598c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_10061948();
    uVar2 = FUN_10004238((int)((ulonglong)param_1 * (ulonglong)DAT_101159b4),
                         (int)((ulonglong)param_1 * (ulonglong)DAT_101159b4 >> 0x20),DAT_101159b8,0,
                         param_4);
    do {
      iVar3 = FUN_10061948();
    } while ((uint)(iVar3 - iVar1) < uVar2);
  }
  return;
}

