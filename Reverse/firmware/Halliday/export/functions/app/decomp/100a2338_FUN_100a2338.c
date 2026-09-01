/* FUN_100a2338 @ 0x100a2338 */

bool FUN_100a2338(void)

{
  bool bVar1;
  
  bVar1 = false;
  if (*DAT_100a2348 != 0) {
    bVar1 = *(char *)(*DAT_100a2348 + 8) == '\0';
  }
  return bVar1;
}

