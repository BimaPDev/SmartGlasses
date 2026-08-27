/* FUN_14065550 @ 0x14065550 */

void FUN_14065550(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int in_stack_00000004;
  
  uVar2 = *DAT_1406559c;
  if (in_stack_00000004 == 0) {
    uVar1 = 0x40;
  }
  else {
    uVar3 = FUN_14064e94();
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar1 = (undefined4)uVar3;
  }
  if ((*DAT_1406559c ^ uVar2) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar1,param_2,*DAT_1406559c ^ uVar2,0);
}

