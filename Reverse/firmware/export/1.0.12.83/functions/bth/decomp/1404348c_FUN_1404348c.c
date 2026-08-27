/* FUN_1404348c @ 0x1404348c */

void FUN_1404348c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = DAT_140434c8;
  if (*(char *)(DAT_140434c8 + 0x43e) == '\x02') {
    FUN_1404320c(0,param_1,param_2);
    cVar1 = *(char *)(iVar2 + 0x476);
  }
  else {
    cVar1 = *(char *)(DAT_140434c8 + 0x476);
  }
  if (cVar1 != '\x02') {
    return;
  }
  FUN_1404320c(1,param_1,param_2);
  return;
}

