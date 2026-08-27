/* FUN_14051378 @ 0x14051378 */

bool FUN_14051378(int param_1)

{
  int iVar1;
  char cVar2;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = FUN_1404a1b4(0);
  cVar2 = '\0';
  if (*(char *)(iVar1 + 0xda) != '\x01') {
    cVar2 = -1;
  }
  if (cVar2 != -1) {
    FUN_14050de0(0);
    FUN_14050d50(param_1,1);
  }
  return cVar2 != -1;
}

