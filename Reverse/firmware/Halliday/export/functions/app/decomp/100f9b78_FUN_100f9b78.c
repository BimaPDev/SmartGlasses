/* FUN_100f9b78 @ 0x100f9b78 */

int FUN_100f9b78(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int local_28;
  undefined1 local_24 [4];
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar2 = param_3;
  if ((param_2 != 0) && (uVar2 = param_2, param_3 == 0)) {
    param_3 = param_2;
  }
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  if (param_3 == 0) {
    param_3 = 1;
  }
  if (0xfffe < uVar2) {
    uVar2 = 0xffff;
  }
  if (0xfffe < param_3) {
    param_3 = 0xffff;
  }
  local_20 = uVar2 << 6;
  iStack_1c = param_3 << 6;
  local_18 = 0;
  uStack_14 = 0;
  local_24[0] = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    pcVar3 = *(code **)(*(int *)(*(int *)(param_1 + 0x60) + 0xc) + 0x58);
    *(undefined4 *)(*(int *)(iVar1 + 0x28) + 0xc) = 0;
    if (pcVar3 == (code *)0x0) {
      if ((*(uint *)(param_1 + 8) & 3) == 2) {
        if (-1 < (int)(*(uint *)(param_1 + 8) << 0x1e)) {
          return 0x23;
        }
        iVar1 = FUN_100f8278(param_1,local_24,0,&local_28);
        if (iVar1 == 0) {
          if (-1 < *(int *)(param_1 + 8) << 0x1e) {
            return 0x23;
          }
          if ((local_28 < 0) || (*(int *)(param_1 + 0x1c) <= local_28)) {
            iVar1 = 6;
          }
          else {
            pcVar3 = *(code **)(*(int *)(*(int *)(param_1 + 0x60) + 0xc) + 0x5c);
            if (pcVar3 == (code *)0x0) {
              FUN_100f991c(param_1);
            }
            else {
              iVar1 = (*pcVar3)(*(undefined4 *)(param_1 + 0x58));
            }
          }
        }
      }
      else {
        FUN_100f9988(param_1,local_24);
        iVar1 = 0;
      }
    }
    else {
      iVar1 = (*pcVar3)(iVar1,local_24);
    }
    return iVar1;
  }
  return 0x23;
}

