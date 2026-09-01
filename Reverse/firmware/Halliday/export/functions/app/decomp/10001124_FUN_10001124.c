/* FUN_10001124 @ 0x10001124 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001124(void)

{
  int iVar1;
  
  iVar1 = DAT_10001154;
  _DAT_40000000 = _DAT_40000000 | 0x1000000;
  _DAT_40001004 = _DAT_40001004 | 0x1000000;
  *DAT_10001158 = *(undefined4 *)(DAT_10001154 + 0x3fc);
  *DAT_1000115c = *(undefined4 *)(iVar1 + 0x400);
  return;
}

