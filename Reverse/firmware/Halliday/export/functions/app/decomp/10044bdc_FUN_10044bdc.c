/* FUN_10044bdc @ 0x10044bdc */

void FUN_10044bdc(void)

{
  ushort uVar1;
  undefined4 local_1c;
  ushort *local_18;
  undefined4 local_14;
  ushort local_10;
  ushort local_e;
  int local_c;
  
  local_c = *(int *)PTR_DAT_10044c58;
  uVar1 = *(ushort *)(DAT_10044c54 + 0x3b0);
  local_e = *(ushort *)(DAT_10044c54 + 0x3b2) << 8 | *(ushort *)(DAT_10044c54 + 0x3b2) >> 8;
  local_10 = uVar1 << 8 | uVar1 >> 8;
  local_1c = 0x4fd;
  local_18 = &local_10;
  local_14 = 4;
  FUN_100a5b78(DAT_10044c64 | ((int)PTR_DAT_10044c5c - (int)PTR_DAT_10044c60) * 0x20 & 0xff00U,
               DAT_10044c6c,DAT_10044c68,uVar1,*(undefined2 *)(DAT_10044c54 + 0x3b2));
  FUN_100506fc(&local_1c);
  if (*(int *)PTR_DAT_10044c58 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

