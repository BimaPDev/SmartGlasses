/* FUN_10039a30 @ 0x10039a30 */

void FUN_10039a30(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = CONCAT44(DAT_10039a74,param_1);
  if ((*(char *)(DAT_10039a74 + 0xb) == '\0') || (param_1 == 0)) {
    if (*DAT_10039a70 == *DAT_10039a70) {
      return;
    }
  }
  else if (*DAT_10039a70 == *DAT_10039a70) goto LAB_10039a52;
  uVar1 = FUN_1013cdc0();
LAB_10039a52:
  FUN_1011e9f0((int)uVar1,(int)((ulonglong)uVar1 >> 0x20) + 1);
  return;
}

