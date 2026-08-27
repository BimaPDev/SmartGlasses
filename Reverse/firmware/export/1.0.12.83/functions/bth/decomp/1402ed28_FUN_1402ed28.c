/* FUN_1402ed28 @ 0x1402ed28 */

void FUN_1402ed28(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  ulonglong uVar4;
  ushort local_16;
  uint local_14;
  
  uVar4 = CONCAT44(param_2,param_1);
  local_14 = *DAT_1402edc4;
  if ((param_1 & 0x18) != 0) {
    if ((param_1 & 0x18) == 0x18) {
      FUN_140e5398(2);
    }
    FUN_1402e1fc(0x5e,&local_16);
    uVar3 = ((local_16 ^ 4) & 7) >> 2;
    uVar4 = FUN_14026c5c();
    if ((int)uVar4 == 0) {
      UNRECOVERED_JUMPTABLE = (code *)*DAT_1402edc8;
      uVar1 = 0;
      uVar4 = uVar4 & 0xffffffff00000000;
    }
    else {
      uVar4 = FUN_1402a6e8(4,0x1e13,DAT_1402edd8,DAT_1402edd4,DAT_1402edd0,DAT_1402edcc,0x5e,param_1
                           ,uVar3);
      uVar1 = (undefined4)uVar4;
      UNRECOVERED_JUMPTABLE = (code *)*DAT_1402edc8;
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      uVar4 = CONCAT44(*DAT_1402edc4 ^ local_14,uVar1);
      uVar2 = 0;
      if ((*DAT_1402edc4 ^ local_14) == 0) {
                    /* WARNING: Could not recover jumptable at 0x1402ed7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uVar3);
        return;
      }
      goto LAB_1402edbe;
    }
  }
  uVar2 = *DAT_1402edc4 ^ local_14;
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  if (uVar2 == 0) {
    return;
  }
LAB_1402edbe:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc((int)uVar4,(int)(uVar4 >> 0x20),uVar2,UNRECOVERED_JUMPTABLE);
}

