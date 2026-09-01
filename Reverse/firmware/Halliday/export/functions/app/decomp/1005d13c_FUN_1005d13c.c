/* FUN_1005d13c @ 0x1005d13c */

void FUN_1005d13c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char local_5c;
  undefined1 auStack_5b [71];
  
  iVar3 = FUN_10057234();
  iVar2 = DAT_1005d1ac;
  if (iVar3 == 0) {
    if (*(char *)(DAT_1005d1ac + 0x18) != '\0') {
      cVar1 = *(char *)(DAT_1005d1ac + 0x19);
      if (cVar1 == '\0') {
        local_5c = cVar1;
        FUN_1011a066(DAT_1005d1b4,&local_5c,param_1,param_2);
        if (local_5c != '\0') {
          FUN_1005cf54(auStack_5b);
          local_5c = cVar1;
        }
        FUN_1011b9ae(DAT_1005d1ac);
        return;
      }
      FUN_1005d0f4();
      FUN_1011598c(DAT_1005d1b0);
      FUN_1005d040(0);
      *(undefined1 *)(iVar2 + 0x18) = 0;
    }
    FUN_10053974(param_1,param_2);
  }
  else {
    FUN_1013da00(param_1);
  }
  return;
}

