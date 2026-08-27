/* FUN_1404a2d4 @ 0x1404a2d4 */

void FUN_1404a2d4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int local_18;
  int local_14;
  
  local_14 = *DAT_1404a354;
  cVar3 = *(char *)(DAT_1404a358 + 0x181);
  local_18 = 0;
  if ((cVar3 != -0x43) ||
     (((*(char *)(DAT_1404a358 + 0x182) != '\0' &&
       (iVar2 = FUN_140a1718(param_1,&local_18), iVar2 == 0)) &&
      (cVar3 = *(char *)(local_18 + 0x117), cVar3 != -0x43)))) {
    uVar1 = DAT_1404a360;
    if ((cVar3 == '\0') || (uVar1 = DAT_1404a35c, cVar3 == '\x02')) goto LAB_1404a304;
    FUN_1402a6e8(4,0x62e,DAT_1404a370,DAT_1404a36c,DAT_1404a368,DAT_1404a364,cVar3);
  }
  uVar1 = 0;
LAB_1404a304:
  FUN_14048780(uVar1,param_1);
  if (*DAT_1404a354 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

