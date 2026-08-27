/* FUN_1409d5c8 @ 0x1409d5c8 */

void FUN_1409d5c8(uint param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 auStack_44 [9];
  char local_3b;
  char local_39;
  undefined1 auStack_2c [9];
  char local_23;
  char local_21;
  char local_20;
  int local_14;
  
  local_14 = *DAT_1409d6cc;
  iVar4 = FUN_1409dbc8();
  FUN_1403d038(auStack_44,param_1);
  puVar1 = DAT_1409d6d0;
  if ((local_3b == '\0' && local_39 == '\0') && (*(byte *)(iVar4 + 1) != param_1)) {
    FUN_1402a6e8(4,0x2d0,DAT_1409d6dc,DAT_1409d6d8,DAT_1409d6e0);
  }
  else {
    *DAT_1409d6d0 = 1;
    puVar1[2] = 0xff;
    puVar1[1] = (char)param_1;
    FUN_1403d038(auStack_2c,param_1);
    uVar3 = DAT_1409d6d8;
    uVar2 = DAT_1409d6d4;
    if (local_23 == '\0') {
      if (local_21 == '\x01') {
        uVar5 = 0;
      }
      else if (local_21 == '\x02') {
        uVar5 = 8;
      }
      else if (local_21 == '\x03') {
        uVar5 = 2;
      }
      else {
        if (local_20 == '\x02') goto LAB_1409d6b0;
        uVar5 = 7;
      }
    }
    else if (local_20 == '\x01') {
      uVar5 = 10;
    }
    else if (local_20 == '\x02') {
LAB_1409d6b0:
      uVar5 = 4;
    }
    else if (local_21 == '\x01') {
      uVar5 = 9;
    }
    else {
      uVar5 = 3;
    }
    puVar1[3] = uVar5;
    FUN_1402a6e8(4,0x2da,DAT_1409d6dc,uVar3,uVar2,puVar1[1],uVar5);
    if ((puVar1[1] != -1) && (puVar1[3] != '\a')) {
      if (*DAT_1409d6cc == local_14) {
        FUN_1409d518(param_1,8);
        return;
      }
      goto LAB_1409d6c8;
    }
  }
  if (*DAT_1409d6cc == local_14) {
    return;
  }
LAB_1409d6c8:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

