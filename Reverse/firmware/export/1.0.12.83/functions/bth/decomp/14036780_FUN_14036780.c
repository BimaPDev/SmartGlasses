/* FUN_14036780 @ 0x14036780 */

void FUN_14036780(void)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2e;
  int local_2c;
  
  pcVar5 = DAT_14036aa0;
  local_2c = *DAT_14036a44;
  FUN_140a2d2c();
  FUN_140a2e68(DAT_14036a48,0x400);
  FUN_140a2e68(DAT_14036a4c,0x400);
  if (*pcVar5 == '\0') {
    FUN_1402d69c();
    thunk_FUN_1402d6a4();
    FUN_14029f40(2);
    iVar9 = FUN_1402c6c8(*pcVar5,DAT_14036a50);
    piVar1 = DAT_14036a48;
    uVar10 = DAT_14036a94;
  }
  else {
    thunk_FUN_1402d6a4();
    FUN_14029f40(1);
    FUN_1402d69c();
    iVar9 = FUN_1402c6c8(*pcVar5,DAT_14036a50);
    piVar1 = DAT_14036a48;
    uVar10 = DAT_14036a94;
  }
  DAT_14036a48 = piVar1;
  DAT_14036a94 = uVar10;
  if (iVar9 == 0) {
    FUN_1402ca08(*pcVar5,DAT_14036a58,DAT_14036a54);
    local_38 = 0x7c0;
    FUN_1402ca40(*pcVar5,*piVar1,0x400,0,0,&local_38);
    iVar9 = FUN_14026764(*DAT_14036a5c,0,DAT_14036a64,DAT_14036a60,0);
    pcVar3 = DAT_14036a68;
    if (iVar9 == 0) {
      FUN_14026a60(*DAT_14036a5c);
      FUN_1402a6e8(4,0x107,DAT_14036a70,DAT_14036a74,DAT_14036a6c);
      FUN_14032660();
      piVar6 = DAT_14036aa4;
      pcVar4 = DAT_14036a78;
LAB_14036840:
      pcVar12 = DAT_14036a84;
      if (*pcVar3 == '\0') goto LAB_14036912;
      do {
        *pcVar3 = '\0';
        pcVar13 = DAT_14036a8c;
        pcVar12 = DAT_14036a84;
        if (*piVar6 == 0) {
          *DAT_14036a8c = '\x01';
        }
        else {
          pcVar12 = (char *)*piVar1;
          if ((((*pcVar12 == '\x01') && (pcVar12[1] == '\x03')) && (pcVar12[2] == '\f')) &&
             ((pcVar12[3] == '\x01' && (*piVar6 == 4)))) {
            FUN_140b49a4();
            FUN_140b37b0();
            goto LAB_14036962;
          }
          iVar9 = FUN_140dd3b4(pcVar12,DAT_14036a7c,10);
          if (iVar9 != 0) {
            iVar9 = FUN_140326ac(pcVar12);
            if (iVar9 == 0) {
              iVar9 = FUN_14032780(*piVar1);
              if (iVar9 == 0) {
                FUN_14026af8(*DAT_14036a5c,0,*piVar1,*piVar6);
                pcVar12 = DAT_14036a84;
                *piVar6 = 0;
                goto LAB_14036912;
              }
              *piVar6 = 0;
            }
            else {
              *piVar6 = 0;
            }
            goto LAB_14036840;
          }
          FUN_1402a6e8(4,0x117,DAT_14036a70,DAT_14036a74,DAT_14036a80);
          cVar7 = FUN_140366c0(*piVar1 + 10,*piVar6 + -10);
          piVar2 = DAT_14036a4c;
          *(undefined1 *)*DAT_14036a4c = 0x2d;
          pcVar12 = DAT_14036a84;
          *(char *)(*piVar2 + 1) = -cVar7;
          pcVar13 = DAT_14036a8c;
          piVar2 = DAT_14036a88;
          *pcVar12 = '\x01';
          *piVar2 = 2;
          *piVar6 = 0;
        }
        cVar7 = *pcVar4;
        piVar2 = DAT_14036a88;
        while( true ) {
          DAT_14036a88 = piVar2;
          if (cVar7 != '\0') {
            uVar8 = *DAT_14036a5c;
            *pcVar4 = '\0';
            *piVar2 = 0;
            FUN_14026a60(uVar8);
          }
          piVar2 = DAT_14036a88;
          if (*pcVar12 != '\0') {
            *pcVar12 = '\0';
            if (*piVar2 == 0) {
              *pcVar4 = '\x01';
            }
            else {
              FUN_1402cba0(*pcVar5,*DAT_14036a4c,*piVar2,0,0);
            }
          }
          if (*pcVar13 != '\0') {
            iVar9 = *piVar1;
            cVar7 = *pcVar5;
            *pcVar13 = '\0';
            FUN_1402ca40(cVar7,iVar9,0x400,0,0,&local_38);
          }
          iVar9 = FUN_140326a0();
          if (iVar9 != 0) {
            uVar8 = FUN_140326a0();
            FUN_14032710(uVar8);
            local_34 = *DAT_14036a9c;
            local_30 = (undefined2)DAT_14036a9c[1];
            local_2e = (undefined1)((uint)DAT_14036a9c[1] >> 0x10);
            FUN_14036528(&local_34,7);
          }
          iVar9 = FUN_14032774();
          if (iVar9 == 0) goto LAB_14036840;
          uVar8 = FUN_14032774();
          FUN_140327c0(uVar8);
          local_34 = *DAT_14036a90;
          local_30 = (undefined2)DAT_14036a90[1];
          local_2e = (undefined1)((uint)DAT_14036a90[1] >> 0x10);
          FUN_14036528(&local_34,7);
          pcVar12 = DAT_14036a84;
          if (*pcVar3 != '\0') break;
LAB_14036912:
          cVar7 = *pcVar4;
          pcVar13 = DAT_14036a8c;
          piVar2 = DAT_14036a88;
        }
      } while( true );
    }
    uVar11 = 0x103;
    uVar10 = DAT_14036a98;
  }
  else {
    uVar11 = 0xf4;
  }
  FUN_1402a6e8(4,uVar11,DAT_14036a70,DAT_14036a74,uVar10);
LAB_14036962:
  if (*DAT_14036a44 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

