/* FUN_2c012f74 @ 0x2c012f74 */

void FUN_2c012f74(int param_1,ushort *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort local_18;
  ushort local_16;
  int local_14;
  
  local_14 = *DAT_2c013048;
  iVar1 = FUN_2c008f74(0x8046,8,param_3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_2c008f74(0x8046,0x18);
    uVar4 = 0;
    if (iVar1 == 0) {
      uVar3 = param_1 << 6 | 0x18;
      iVar1 = FUN_2c008f74(0x8046,uVar3);
      if (iVar1 == 0) {
        iVar1 = FUN_2c008f74(0x8046,param_1 << 6 | 0x38);
        if (iVar1 == 0) {
          iVar1 = FUN_2c008f74(0x8046,uVar3);
          if (((iVar1 == 0) && (iVar1 = FUN_2c008e4c(0x804d,&local_18), iVar1 == 0)) &&
             (iVar1 = FUN_2c008e4c(0x804c,&local_16), iVar1 == 0)) {
            uVar2 = 8;
            uVar4 = 0;
            *param_2 = local_18 | local_16;
          }
          else {
            uVar2 = 8;
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0x20;
          uVar2 = 0x28;
        }
      }
      else {
        uVar2 = 8;
      }
    }
    else {
      uVar2 = 8;
    }
  }
  else {
    uVar4 = 0;
    uVar2 = 8;
  }
  FUN_2c008f74(0x8046,uVar2);
  FUN_2c008f74(0x8046,uVar4);
  if (*DAT_2c013048 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

