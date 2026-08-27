/* FUN_14050180 @ 0x14050180 */

void FUN_14050180(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_14050218;
  local_1c = FUN_14039098();
  local_18 = FUN_140390b4();
  local_14 = FUN_1405017c();
  if (local_14 == 0) {
    local_14 = FUN_140390bc();
  }
  local_14 = FUN_140390bc();
  local_10 = FUN_140390d4();
  FUN_140a1958(&local_1c);
  iVar1 = local_14;
  cVar2 = FUN_140dd3a4(local_14);
  FUN_1409249c(iVar1,cVar2 + '\x01');
  uVar3 = FUN_140dc0a0();
  FUN_140924c0((uVar3 & 0x1f) << 0xc);
  iVar1 = local_14;
  cVar2 = FUN_140dd3a4(local_14);
  FUN_1409265c(iVar1,cVar2 + '\x01');
  thunk_FUN_14043554(local_10);
  FUN_140b36d0(1);
  if (*DAT_14050218 != local_c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

