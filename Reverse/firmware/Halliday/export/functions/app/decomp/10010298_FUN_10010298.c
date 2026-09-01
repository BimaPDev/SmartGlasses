/* FUN_10010298 @ 0x10010298 */

void FUN_10010298(undefined1 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  undefined1 local_38;
  undefined1 local_37;
  short local_36;
  int local_30;
  int local_2c;
  
  iVar5 = DAT_100103a4;
  uVar4 = DAT_100103a0;
  iVar3 = DAT_1001039c;
  bVar1 = true;
  bVar2 = false;
  local_2c = *DAT_1001038c;
  iVar9 = DAT_10010390 - DAT_10010394;
  local_38 = param_1;
  do {
    bVar10 = *(byte *)(iVar3 + 0x8c) & 1;
    if ((*(byte *)(iVar3 + 0x8c) & 1) != 0) {
      thunk_FUN_10136844(1);
      thunk_FUN_1013684e(1);
      FUN_100bf3ec();
      FUN_100100ac();
      if (*DAT_1001038c == local_2c) {
        return;
      }
      FUN_1013cdc0();
    }
    if (bVar1) {
      iVar7 = FUN_100b63f0(&local_37,0xb,1000);
      if (iVar7 == 0xb) {
        FUN_100a5b78(iVar9 * 0x20 & 0xff00U | 0xca0031,DAT_10010398,uVar4,local_36);
        uVar6 = local_37;
        if ((local_36 == 0x7063) && (local_30 == iVar5)) {
          thunk_FUN_10136844(bVar10);
          thunk_FUN_1013684e(bVar10);
          FUN_100bf2b8();
          FUN_10010020(uVar6,bVar10);
          bVar2 = bVar1;
        }
        else if ((bVar2) && (uVar8 = FUN_100101a8(&local_38), uVar8 != 0)) {
          FUN_10010020(uVar6,uVar8 & 0xff);
        }
        goto LAB_1001034e;
      }
LAB_1001035e:
      FUN_1011dbc8(1);
    }
    else {
LAB_1001034e:
      iVar7 = FUN_100b63f0(&local_38,1,0);
      if (iVar7 != 1) {
        bVar1 = false;
        goto LAB_1001035e;
      }
      bVar1 = true;
    }
    FUN_10116668();
  } while( true );
}

