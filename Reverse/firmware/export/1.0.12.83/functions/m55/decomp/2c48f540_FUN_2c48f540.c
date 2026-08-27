/* FUN_2c48f540 @ 0x2c48f540 */

/* WARNING: Removing unreachable block (ram,0x2c4c40bc) */
/* WARNING: Removing unreachable block (ram,0x2c4c40b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c48f540(void)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  
  func_0x2c4fab50();
  uVar2 = func_0x2c4f8748();
  puVar1 = DAT_2c4c40c8;
  if (*_LAB_2c49001c != '\x01') {
    return uVar2;
  }
  FUN_2c644044(*DAT_2c4c40c8,0xffffffff);
  if ((int)((uint)*(byte *)(DAT_2c4c40cc + 2) << 0x1e) < 0) {
    bVar3 = *(char *)(DAT_2c4c40cc + 3) == '\x02';
    if (bVar3) {
      FUN_2c4b5cfc(0,6,0);
    }
    FUN_2c4b9448(0,0);
    FUN_2c644080(*puVar1);
    return (uint)!bVar3;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x9a5,DAT_2c4c40dc,DAT_2c4c40d8,DAT_2c4c40d4,DAT_2c4c40d0,
        (uint)*(byte *)(DAT_2c4c40cc + 2));
}

