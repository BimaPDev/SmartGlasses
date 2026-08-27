/* FUN_2c017ff8 @ 0x2c017ff8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c017ff8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = _DAT_2c018024;
  iVar3 = *(int *)(_DAT_2c018024 + 4);
  uVar2 = func_0x2c0153e4();
  do {
  } while ((uint)(iVar3 - *(int *)(iVar1 + 4)) <
           (uint)((ulonglong)_DAT_2c01802c *
                  (ulonglong)
                  (param_1 * (uint)((ulonglong)_DAT_2c018028 * (ulonglong)(uVar2 >> 5) >> 0x27)) >>
                 0x2d));
  return;
}

