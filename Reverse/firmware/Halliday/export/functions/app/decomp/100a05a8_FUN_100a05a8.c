/* FUN_100a05a8 @ 0x100a05a8 */

int FUN_100a05a8(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = FUN_100a0310(param_1,2);
  if ((iVar1 == 0) || (pcVar2 = *(code **)(*(int *)(param_1 + 0x50) + 0x10), pcVar2 == (code *)0x0))
  {
    iVar1 = -0x58;
  }
  else {
    iVar1 = (*pcVar2)(param_1);
    if (iVar1 < 0) {
      FUN_100a5b78((DAT_100a05f0 - DAT_100a05ec) * 0x20 & 0xff00U | 0xff0011,DAT_100a05f8,
                   DAT_100a05f4,iVar1);
    }
  }
  return iVar1;
}

