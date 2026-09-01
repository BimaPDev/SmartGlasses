/* FUN_100a03c0 @ 0x100a03c0 */

int FUN_100a03c0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100a0310(param_1,1);
  if ((iVar1 == 0) && (iVar1 = FUN_100a0310(param_1,3), iVar1 == 0)) {
    iVar1 = -0x58;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x50);
    if ((((int)(param_2 << 0x1f) < 0) && (*(int *)(iVar1 + 8) == 0)) ||
       (((int)(param_2 << 0x1e) < 0 && (*(int *)(iVar1 + 0x1c) == 0)))) {
      FUN_100a5b78((DAT_100a047c - DAT_100a0478) * 0x20 & 0xff00U | 0x4f0011,DAT_100a0484,
                   DAT_100a0488,param_2);
      iVar1 = -1;
    }
    else {
      iVar1 = (**(code **)(iVar1 + 4))(param_1,param_2);
      if (iVar1 == 0) {
        if ((param_2 & 0xc) != 0) {
          iVar2 = thunk_FUN_1009f30c(0x18,DAT_100a048c);
          *(int *)(param_1 + 0x18) = iVar2;
          if (iVar2 == 0) {
            return -0xc;
          }
          FUN_1013ca1a(iVar2,0,1);
          *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfd;
        }
        *(char *)(param_1 + 1) = (char)param_2;
        *(undefined1 *)(param_1 + 2) = 2;
      }
      else {
        FUN_100a5b78((DAT_100a047c - DAT_100a0478) * 0x20 & 0xff00U | 0x550011,DAT_100a0484,
                     DAT_100a0480,iVar1);
      }
    }
  }
  return iVar1;
}

