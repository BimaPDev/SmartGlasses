/* FUN_1404bf78 @ 0x1404bf78 */

void FUN_1404bf78(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_lr;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  if (0 < param_1) {
    local_20 = DAT_1404bff0;
    local_1c = DAT_1404bfec;
    local_18 = param_1;
    FUN_1402a6e8(4,0x5b1,DAT_1404bfe8,DAT_1404bfe4);
    return;
  }
  iVar2 = FUN_14051640();
  if (iVar2 == 0) {
    iVar3 = *DAT_1404bf58;
    iVar2 = FUN_14096b4c(*(undefined2 *)(DAT_1404bfd8 + param_1 * 0x120 + 8));
    if (iVar2 == 0) {
      FUN_1402a6e8(4,0x1375,DAT_1404bf6c,DAT_1404bf68,DAT_1404bf74,DAT_1404bf70,0x1375);
    }
    else {
      iVar1 = FUN_14095328();
      iVar2 = DAT_1404bf5c;
      if (iVar1 == 0) {
        if (*(char *)(DAT_1404bf5c + 6) != '\0') {
          iVar1 = FUN_14095028(*(undefined2 *)(DAT_1404bf5c + 8));
          local_1c = 10000;
          local_22 = 0x31c;
          local_24 = 0x31c;
          local_20 = 0x10003;
          local_18 = 1;
          if (iVar1 != 0) {
            FUN_14094bac(iVar1,&local_24,&local_1c);
          }
          FUN_1404866c(*(undefined2 *)(iVar2 + 8),5);
        }
      }
      else {
        FUN_1402a6e8(4,0x5b1,DAT_1404bf6c,DAT_1404bf68,DAT_1404bf64,DAT_1404bf60,iVar1,unaff_lr);
      }
    }
    if (*DAT_1404bf58 == iVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  local_20 = DAT_1404bfe0;
  local_1c = DAT_1404bfdc;
  local_18 = 0x1399;
  FUN_1402a6e8(4,0x1399,DAT_1404bfe8,DAT_1404bfe4);
  return;
}

