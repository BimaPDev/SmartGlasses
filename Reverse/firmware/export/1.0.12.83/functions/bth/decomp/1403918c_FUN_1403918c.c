/* FUN_1403918c @ 0x1403918c */

void FUN_1403918c(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_18;
  int local_14;
  
  iVar3 = FUN_14000528();
  local_14 = FUN_140e5888();
  local_18 = iVar3;
  uVar4 = FUN_1402a6e8(4,0x518,DAT_140391cc,DAT_140391c8,DAT_140391c4,DAT_140391c0);
  piVar1 = DAT_14039174;
  local_14 = *DAT_14039170;
  *DAT_14039174 = 0;
  FUN_140a2d2c((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
  uVar2 = FUN_140a2e48();
  if (uVar2 < 0x13800) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x20,DAT_14039178);
  }
  FUN_140a2e68(&local_18,0x13800);
  if (local_18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14039188,DAT_1403917c,0x13800);
  }
  iVar3 = FUN_140a26ac(local_18,0x13800);
  *piVar1 = iVar3;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14039184,DAT_1403917c,local_18,0x13800);
  }
  if (*DAT_14039170 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

