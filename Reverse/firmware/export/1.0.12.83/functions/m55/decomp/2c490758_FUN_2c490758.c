/* FUN_2c490758 @ 0x2c490758 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c490758(int param_1,undefined1 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_68 [3];
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined4 local_4c;
  undefined4 local_24;
  
  pcVar1 = DAT_2c490a00;
  local_24 = *DAT_2c4909fc;
  if (*DAT_2c490a00 == '\0') {
    FUN_2c4f4ba4();
    thunk_FUN_2c4e4fb8();
    FUN_2c4e36d4();
    FUN_2c4e054c(DAT_2c490a64);
  }
  FUN_2c4c3288(DAT_2c490a04,0xf800);
  uVar2 = DAT_2c490a08;
  if (*pcVar1 != '\0') {
    uVar6 = *(undefined4 *)(DAT_2c490a0c + param_1 * 4);
    iVar3 = FUN_2c4e2628(uVar6);
    if ((iVar3 != 0) &&
       ((iVar4 = FUN_2c66b624(iVar3,DAT_2c490a10), iVar4 == 0 ||
        (iVar4 = FUN_2c66b624(iVar3,DAT_2c490a14), iVar4 == 0)))) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x211,_LAB_2c490aec,_LAB_2c490ae8,_LAB_2c490af8,uVar2,iVar3);
    }
    uVar5 = FUN_2c4e3bb4(iVar3);
    FUN_2c674268(local_68,0,0x44);
    local_5b = 1;
    local_5a = 1;
    local_5c = param_2;
    local_4c = uVar6;
    iVar3 = FUN_2c4e37a4(uVar5,local_68);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x226,DAT_2c490a1c,DAT_2c490a20,DAT_2c490a18,uVar2,0x226,local_68[0]);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x220,DAT_2c490a1c,DAT_2c490a20,DAT_2c490a38,uVar2,0x220);
  }
  FUN_2c4e33d8(DAT_2c490a40,DAT_2c490a3c);
  FUN_2c4e3330(DAT_2c490a40,DAT_2c490a3c);
  uVar2 = DAT_2c490a08;
  FUN_2c4e3558(DAT_2c490a50,DAT_2c490a4c,DAT_2c490a5c,DAT_2c490a58,DAT_2c490a54,DAT_2c490a48,
               DAT_2c490a44);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x206,DAT_2c490a1c,DAT_2c490a20,DAT_2c490a60,uVar2);
}

