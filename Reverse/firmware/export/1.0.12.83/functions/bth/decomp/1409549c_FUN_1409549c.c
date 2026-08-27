/* FUN_1409549c @ 0x1409549c */

void FUN_1409549c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_130;
  undefined2 local_12c;
  undefined1 auStack_128 [7];
  char local_121;
  uint local_14;
  
  local_14 = *DAT_14095510;
  local_130 = *DAT_1409550c;
  uVar3 = DAT_1409550c[1];
  local_12c = (undefined2)uVar3;
  if ((*(char *)(DAT_14095508 + 0x12) != '\0') && (*DAT_14095514 != '\0')) {
    cVar1 = *DAT_14095514;
    if (*(char *)(DAT_14095508 + 0x14) == '\0') goto LAB_140954ec;
    if ((param_1 == 0) || (iVar2 = FUN_140db784(&local_130,param_1,6), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_1409551c,DAT_14095518);
    }
    uVar4 = thunk_FUN_140a15a4(param_1,auStack_128);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    cVar1 = local_121;
    if ((int)uVar4 == 0) goto LAB_140954ec;
  }
  cVar1 = '\0';
LAB_140954ec:
  if ((*DAT_14095510 ^ local_14) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(cVar1,uVar3,*DAT_14095510 ^ local_14,0);
  }
  return;
}

