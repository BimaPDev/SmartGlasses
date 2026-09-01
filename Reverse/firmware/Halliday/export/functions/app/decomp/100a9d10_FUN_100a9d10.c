/* FUN_100a9d10 @ 0x100a9d10 */

int FUN_100a9d10(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_28;
  int local_24;
  undefined1 auStack_20 [16];
  
  uVar2 = DAT_100a9db0;
  if (param_1 == 5) {
    iVar3 = 0x14a;
    local_28 = *DAT_100a9dac;
  }
  else if (param_1 == 6) {
    iVar3 = 0x400;
    local_28 = *DAT_100a9db4;
    uVar2 = DAT_100a9db8;
  }
  else {
    if (param_1 == 4) {
      return 0;
    }
    iVar3 = 0x400;
    local_28 = *DAT_100a9dcc;
  }
  if (local_28 == 0) {
    local_24 = local_28;
    FUN_1011e9f8(auStack_20,uVar2,0x10);
    FUN_1011b81c(auStack_20,&local_28,&local_24);
    iVar3 = local_24;
    uVar1 = (DAT_100a9dc0 - DAT_100a9dbc) * 0x20 & 0xff00;
    if ((local_28 == 0) || (local_24 == 0)) {
      FUN_100a5b78(uVar1 | 0x3a0011,DAT_100a9dc8,DAT_100a9dc4);
      return 0;
    }
    FUN_100a5b78(uVar1 | 0x400031,DAT_100a9dc8,DAT_100a9dd0,auStack_20);
    if (local_28 == 0) {
      return 0;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  return local_28;
}

