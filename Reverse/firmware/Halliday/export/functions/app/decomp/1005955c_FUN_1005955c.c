/* FUN_1005955c @ 0x1005955c */

code * FUN_1005955c(int param_1,uint param_2,code *param_3,undefined4 param_4)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  
  if (param_1 == 0) {
    if (param_2 < (uint)(DAT_100595c4 - DAT_100595c0) >> 3) {
      return *(code **)(DAT_100595c0 + param_2 * 8 + 4);
    }
  }
  else {
    if (param_3 == (code *)0x0) {
      FUN_10119dc2(DAT_100595d0,DAT_100595cc,DAT_100595c8,0x103,param_1,param_2);
      FUN_1011a1f0(DAT_100595c8,0x103,0,param_4);
    }
    pcVar1 = *(char **)(param_1 + 8);
    if (pcVar1 != (char *)0x0) {
      pcVar2 = *(code **)(pcVar1 + 4);
      if (*pcVar1 == '\0') {
        param_3 = pcVar2 + param_2 * 0x14;
        iVar3 = *(int *)(pcVar2 + param_2 * 0x14);
      }
      else {
        (*pcVar2)(param_2,param_3);
        iVar3 = *(int *)param_3;
      }
      if (iVar3 != 0) {
        return param_3;
      }
    }
  }
  return (code *)0x0;
}

