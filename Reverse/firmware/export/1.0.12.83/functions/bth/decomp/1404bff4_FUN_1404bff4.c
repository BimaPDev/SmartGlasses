/* FUN_1404bff4 @ 0x1404bff4 */

void FUN_1404bff4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short sVar7;
  short local_24;
  short local_22;
  undefined4 local_20;
  int local_1c;
  int local_18;
  
  iVar1 = DAT_1404c03c;
  if (param_1 != 0) {
    local_20 = DAT_1404c044;
    local_1c = DAT_1404c040;
    local_18 = param_1;
    FUN_1402a6e8(4,0x5b1,DAT_1404c04c,DAT_1404c048);
    return;
  }
  if ((*(char *)(DAT_1404c03c + 0x1a) != '\x01') && (*(char *)(DAT_1404c03c + 0x19) != '\x01')) {
    return;
  }
  FUN_1404bf78(0);
  sVar7 = *(short *)(iVar1 + 8);
  local_1c = *DAT_1404ac4c;
  local_24 = 0x31c;
  local_22 = 0x31c;
  local_20 = 0x10003;
  FUN_14048724(sVar7,&local_24,0);
  uVar2 = FUN_14095748();
  if (1 < uVar2) {
    iVar3 = FUN_14095080(sVar7);
    iVar1 = DAT_1404ac60;
    if (*(char *)(DAT_1404ac60 + 6) == '\0') {
      sVar7 = *(short *)(DAT_1404ac60 + 8);
    }
    else if (*(short *)(DAT_1404ac60 + 8) != sVar7) {
      iVar4 = FUN_14095028();
      if ((iVar4 != 0) && (iVar3 != 0)) {
        psVar5 = (short *)FUN_14094d1c();
        psVar6 = (short *)FUN_14094d1c(iVar3);
        if (*psVar6 == *psVar5) {
          local_24 = *psVar6 + -0x14;
          local_22 = psVar5[1] + -0x14;
          local_20 = 0x10003;
          FUN_14048724(*(undefined2 *)(iVar1 + 8),&local_24);
        }
      }
      goto LAB_1404abb0;
    }
    FUN_1402a6e8(4,0xadf,DAT_1404ac5c,DAT_1404ac58,DAT_1404ac54,DAT_1404ac50,0,
                 *(char *)(DAT_1404ac60 + 6),sVar7);
  }
LAB_1404abb0:
  if (*DAT_1404ac4c == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

