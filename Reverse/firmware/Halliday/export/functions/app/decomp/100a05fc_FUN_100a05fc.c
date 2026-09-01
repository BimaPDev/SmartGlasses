/* FUN_100a05fc @ 0x100a05fc */

int FUN_100a05fc(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = FUN_100a0310(param_1,2);
  if (iVar1 == 0) {
    iVar1 = -0x58;
  }
  else {
    pcVar2 = *(code **)(*(int *)(param_1 + 0x50) + 0x20);
    if ((pcVar2 == (code *)0x0) || (iVar1 = (*pcVar2)(param_1), -1 < iVar1)) {
      iVar1 = 0;
    }
    else {
      FUN_100a5b78((DAT_100a0648 - DAT_100a0644) * 0x20 & 0xff00U | 0x16a0011,DAT_100a0650,
                   DAT_100a064c,iVar1);
    }
  }
  return iVar1;
}

