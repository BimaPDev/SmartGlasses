/* FUN_14051640 @ 0x14051640 */

/* WARNING: Removing unreachable block (ram,0x1404a08e) */

bool FUN_14051640(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_1404a1b4(0);
  bVar1 = false;
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0x45) == '\0') {
      if (*(char *)(DAT_1404a0b4 + 6) == '\0') {
        return false;
      }
      return *(char *)(DAT_1404a0b4 + 0xda) == '\x01';
    }
    bVar1 = true;
  }
  return bVar1;
}

