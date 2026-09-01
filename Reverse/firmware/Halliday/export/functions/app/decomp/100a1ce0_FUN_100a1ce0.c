/* FUN_100a1ce0 @ 0x100a1ce0 */

void FUN_100a1ce0(undefined2 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint local_14 [2];
  
  local_14[0] = 0;
  iVar1 = FUN_10055524(local_14);
  if (iVar1 == 0) {
    *param_2 = 0;
    if ((int)(local_14[0] << 0x1c) < 0) {
      uVar3 = 5;
    }
    else if ((int)((local_14[0] >> 8) << 0x1e) < 0) {
      uVar3 = 1;
    }
    else if ((int)((local_14[0] >> 8) << 0x1d) < 0) {
      uVar3 = 3;
    }
    else {
      iVar1 = FUN_1011a668(param_1,param_2);
      if (iVar1 != 0) {
        *param_1 = 2;
        if ((int)(local_14[0] << 0x1e) < 0) {
          uVar2 = 1;
        }
        else {
          if ((int)(local_14[0] << 0x1f) < 0) {
            *param_2 = 2;
            goto LAB_100a1d02;
          }
          if ((int)(local_14[0] << 0x1b) < 0) {
            uVar2 = 3;
          }
          else if ((int)(local_14[0] << 0x1a) < 0) {
            uVar2 = 4;
          }
          else if ((int)((local_14[0] >> 8) << 0x1f) < 0) {
            uVar2 = 5;
          }
          else {
            uVar2 = 0;
          }
        }
        *param_2 = uVar2;
        goto LAB_100a1d02;
      }
      uVar3 = 4;
    }
    *param_1 = uVar3;
  }
LAB_100a1d02:
  FUN_100a5b78((DAT_100a1d88 - DAT_100a1d84) * 0x20 & 0xff00U | 0xa60032,DAT_100a1d90,DAT_100a1d8c,
               *param_1,*param_2);
  return;
}

