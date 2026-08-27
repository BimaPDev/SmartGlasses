/* FUN_2c5ef646 @ 0x2c5ef646 */

void FUN_2c5ef646(undefined4 *param_1,int param_2)

{
  int iVar1;
  char in_ZR;
  
  if (in_ZR == '\0') {
    if (param_2 == 5) {
      if (*(char *)(param_1 + 3) != '\x02') {
        return;
      }
    }
    else {
      if (param_2 != 6) {
        if (param_2 != 4) {
          return;
        }
        if (*(char *)(param_1 + 3) == '\x02') {
          *(undefined1 *)(param_1 + 3) = 1;
        }
        iVar1 = param_1[4];
        FUN_2c62be74();
        *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfe;
        return;
      }
      if (*(char *)(param_1 + 3) != '\x01') {
        return;
      }
    }
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)(0,param_1[1]);
    }
  }
  else {
    if (*(char *)(param_1 + 3) != '\x01') {
      return;
    }
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)(1,param_1[1]);
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_2c6043d8();
    param_1[2] = 0;
  }
  *(byte *)(param_1[4] + 0x14) = *(byte *)(param_1[4] + 0x14) | 1;
  return;
}

