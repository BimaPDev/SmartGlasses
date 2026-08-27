/* FUN_14076f28 @ 0x14076f28 */

void FUN_14076f28(byte *param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r1_00;
  code *pcVar6;
  char cVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  int iVar11;
  short sVar12;
  undefined8 uVar13;
  int local_38;
  byte *local_34;
  undefined1 local_30 [3];
  bool local_2d;
  int local_2c;
  
  iVar3 = DAT_140770f0;
  local_2c = *DAT_140770ec;
  if (1 < *param_1 - 0xe) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140770f8);
  }
  if (*param_1 == 0xe) {
    bVar10 = param_1[1];
    sVar1 = *(short *)(param_1 + 3);
    if (bVar10 < 3) {
      bVar10 = 3;
    }
    cVar7 = bVar10 - 3;
    bVar2 = param_1[2];
    bVar10 = param_1[5];
    pbVar9 = param_1 + 5;
  }
  else {
    cVar7 = '\0';
    pbVar9 = (byte *)0x0;
    sVar1 = *(short *)(param_1 + 4);
    bVar2 = param_1[3];
    bVar10 = param_1[2];
  }
  if (sVar1 == 0xc35) {
    FUN_140e5148(*(undefined4 *)(DAT_140770f0 + 4),0xffffffff);
    iVar11 = *(int *)(iVar3 + 0x248);
    uVar5 = extraout_r1;
    if (iVar11 != 0) {
      uVar13 = FUN_14075258(iVar11);
      uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
      sVar12 = *(short *)((int)uVar13 + 1);
      if (sVar12 == 0xc35) {
LAB_14076f82:
        if (*(char *)(iVar3 + 0x24c) != '\0') {
          FUN_14075110(DAT_140770f4);
        }
        *(undefined4 *)(iVar3 + 0x248) = 0;
        FUN_140e52d8(*(undefined4 *)(iVar3 + 4));
        iVar4 = FUN_14075258(iVar11);
        iVar8 = *(int *)(iVar11 + 0xc);
        local_38 = iVar4 + 4;
        local_30._0_2_ = CONCAT11(cVar7,*(undefined1 *)(iVar4 + 3));
        _local_30 = CONCAT13(pbVar9 == (byte *)0x0,CONCAT12(bVar10,local_30._0_2_));
        pcVar6 = *(code **)(iVar8 + 4);
        local_34 = pbVar9;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(sVar12,&local_38);
        }
        pcVar6 = *(code **)(iVar8 + 8);
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(sVar12,&local_38);
        }
        FUN_14076ea8(0,iVar11);
        FUN_140e5148(*(undefined4 *)(iVar3 + 4),0xffffffff);
        if (*(int *)(iVar3 + 0x248) == 0) {
          FUN_14076a2c();
        }
        else {
          FUN_140e52d8(*(undefined4 *)(iVar3 + 4));
        }
        goto LAB_14077030;
      }
    }
  }
  else {
    FUN_140e5148(*(undefined4 *)(DAT_140770f0 + 4),0xffffffff);
    *(ushort *)(iVar3 + 0x24e) = (ushort)bVar2;
    FUN_140e52d8(*(undefined4 *)(iVar3 + 4));
    if (bVar2 != 0) {
      thunk_FUN_140a20f4();
    }
    if (sVar1 == 0) {
LAB_14077030:
      if (*DAT_140770ec == local_2c) {
        return;
      }
      goto LAB_1407709c;
    }
    FUN_140e5148(*(undefined4 *)(iVar3 + 4),0xffffffff);
    iVar11 = *(int *)(iVar3 + 0x248);
    if (iVar11 == 0) {
      uVar5 = extraout_r1_00;
      if (sVar1 != -0x372) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_14077100,DAT_140770fc,sVar1);
      }
    }
    else {
      uVar13 = FUN_14075258(iVar11);
      uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
      sVar12 = *(short *)((int)uVar13 + 1);
      if (sVar1 == sVar12) goto LAB_14076f82;
      if (sVar1 != -0x372) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_14077104,DAT_140770fc,sVar12,sVar1);
      }
    }
  }
  if (*DAT_140770ec == local_2c) {
    FUN_140e52d8(*(undefined4 *)(iVar3 + 4),uVar5,0,0);
    return;
  }
LAB_1407709c:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

