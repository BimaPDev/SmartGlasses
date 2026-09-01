/* FUN_100652c4 @ 0x100652c4 */

bool FUN_100652c4(int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((param_1 != 0) && (cVar1 = *DAT_100652dc, cVar1 == '\0')) {
    return *DAT_100652e0 != param_1;
  }
  return (bool)cVar1;
}

