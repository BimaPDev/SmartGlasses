/* FUN_100da0a4 @ 0x100da0a4 */

void FUN_100da0a4(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    pcVar1 = (char *)FUN_100d5130();
    if (pcVar1 == (char *)0x0) {
      FUN_100a5b78(DAT_100da118 | (DAT_100da114 - DAT_100da110) * 0x20 & 0xff00U,DAT_100da120,
                   DAT_100da11c);
      return;
    }
    if (((pcVar1[1] != '\0') && (*pcVar1 != '\0')) && (*pcVar1 != '\x03')) {
      *param_3 = 1;
      iVar2 = FUN_10136c54();
      if (*pcVar1 == '\x01') {
        uVar3 = 500;
      }
      else if (*pcVar1 == '\x02') {
        uVar3 = 5;
      }
      else {
        uVar3 = 0;
      }
      if (uVar3 < (uint)(iVar2 - *(int *)(pcVar1 + 4))) {
        FUN_10132172(param_1,pcVar1[1],0);
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
      }
    }
  }
  return;
}

