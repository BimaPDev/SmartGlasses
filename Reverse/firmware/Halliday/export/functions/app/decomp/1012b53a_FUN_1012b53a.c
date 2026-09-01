/* FUN_1012b53a @ 0x1012b53a */

int FUN_1012b53a(char *param_1,uint param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  undefined1 local_2d;
  uint local_2c;
  undefined4 local_28;
  undefined4 auStack_24 [2];
  
  if (param_1 == (char *)0x0) {
    iVar2 = 0;
  }
  else if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = 0;
    iVar2 = 0;
    if (*param_1 != '\0') {
      local_2c = 0;
      local_2d = 0;
      if (param_2 == 0) {
        iVar2 = 0;
      }
      else {
        while (local_2c < param_2) {
          FUN_100950f8(param_1,&local_28,auStack_24,&local_2c);
          if ((((param_5 & 1) == 0) || (iVar2 = FUN_1012b4fe(&local_2d,local_28), iVar2 == 0)) &&
             (iVar2 = FUN_10092918(param_3,local_28,auStack_24[0]), iVar2 != 0)) {
            iVar1 = iVar1 + param_4 + iVar2;
          }
        }
        iVar2 = iVar1;
        if (0 < iVar1) {
          iVar2 = iVar1 - param_4;
        }
      }
    }
  }
  return iVar2;
}

