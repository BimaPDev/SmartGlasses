/* FUN_100bf488 @ 0x100bf488 */

bool FUN_100bf488(void)

{
  if ((*DAT_100bf4a4 != 0) && (*(char *)((int)DAT_100bf4a4 + 0x12) != '\x02')) {
    return true;
  }
  return (char)DAT_100bf4a4[5] != '\0';
}

