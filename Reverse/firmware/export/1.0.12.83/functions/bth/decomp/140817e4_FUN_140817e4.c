/* FUN_140817e4 @ 0x140817e4 */

bool FUN_140817e4(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_1407eb80();
  bVar1 = false;
  if (iVar2 != 0) {
    bVar1 = *(char *)(iVar2 + 0x27) == '\x02';
  }
  return bVar1;
}

