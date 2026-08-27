/* FUN_14000494 @ 0x14000494 */

int FUN_14000494(void)

{
  byte bVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  local_14 = *DAT_14000500;
  bVar1 = FUN_1400051c();
  local_20 = *DAT_14000504;
  uStack_1c = DAT_14000504[1];
  uStack_18 = DAT_14000504[2];
  *DAT_14000508 = bVar1;
  if (bVar1 < 2) {
    FUN_14027604(&local_20,DAT_14000510);
    local_20 = DAT_14000514;
    FUN_14027604(&local_20,DAT_14000518);
  }
  iVar2 = FUN_14000018(&local_20);
  if (iVar2 == 0) {
    *DAT_1400050c = 8;
    FUN_14027890();
  }
  if (*DAT_14000500 == local_14) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

