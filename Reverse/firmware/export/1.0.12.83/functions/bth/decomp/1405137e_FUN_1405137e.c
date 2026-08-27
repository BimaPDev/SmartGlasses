/* FUN_1405137e @ 0x1405137e */

bool FUN_1405137e(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  
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

