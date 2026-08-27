/* FUN_140407ec @ 0x140407ec */

/* WARNING: Instruction at (ram,0x1405096a) overlaps instruction at (ram,0x14050968)
    */

undefined4 FUN_140407ec(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  char *unaff_r7;
  int unaff_r8;
  undefined1 *unaff_r9;
  int unaff_r10;
  int unaff_r11;
  bool bVar13;
  undefined8 uVar14;
  undefined1 *local_128;
  undefined4 local_124;
  uint local_120;
  uint uStack_11c;
  int local_1c;
  
  uVar12 = (uint)*(byte *)((int)param_2 + 1);
  local_1c = *DAT_14040a58;
  FUN_1402a6e8(4,0x220,DAT_14040a60,DAT_14040a5c,DAT_14040a54,uVar12);
  cVar11 = (char)*param_2;
  if (*(char *)((int)param_2 + 1) == '\n') {
    puVar9 = (undefined1 *)0x0;
    local_120 = param_2[1];
    local_124 = CONCAT31(local_124._1_3_,cVar11);
    local_128 = (undefined1 *)CONCAT31(local_128._1_3_,3);
    FUN_14041ad8(&local_128,0);
  }
  else {
    uVar14 = FUN_14074378(0xe52,param_4,0,0x48);
    iVar6 = (int)((ulonglong)uVar14 >> 0x20);
    puVar9 = (undefined1 *)uVar14;
    *puVar9 = (char)*param_2;
    uVar8 = (uint)*(byte *)((int)param_2 + 1);
    puVar7 = &switchD_14040876::switchdataD_1404087c;
    switch(uVar8) {
    case 0:
switchD_14040876_caseD_0:
      cVar11 = '\x02';
      unaff_r7 = (char *)(unaff_r8 + uVar8 * 0x400);
      cVar1 = unaff_r7[1];
      local_128 = puVar9;
      do {
        if (cVar1 == '\x01') {
          unaff_r10 = uVar8 << 10;
          unaff_r11 = *(int *)(unaff_r7 + 2);
          if (unaff_r11 - 0x100000U < 0xf00000) {
            unaff_r9 = (undefined1 *)0x0;
switchD_14040876_caseD_4:
            pcVar10 = DAT_14050a18;
            do {
              FUN_140e5148(*(undefined4 *)(pcVar10 + 4),0xffffffff);
              pcVar3 = DAT_14050a18;
              if (((pcVar10[1] != '\0') && (unaff_r11 == *(int *)(pcVar10 + 0xc))) &&
                 (*pcVar10 == *unaff_r7)) {
                FUN_140e52d8(*(undefined4 *)(DAT_14050a18 + (int)unaff_r9 * 0x14 + 4));
                *(undefined4 *)(pcVar3 + (int)unaff_r9 * 0x14 + 0x10) =
                     *(undefined4 *)(unaff_r10 + unaff_r8 + 6);
                FUN_140e51b8(*(undefined4 *)(pcVar3 + (int)unaff_r9 * 0x14 + 8));
                goto LAB_14050948;
              }
              FUN_140e52d8(*(undefined4 *)(pcVar10 + 4));
              pcVar10 = pcVar10 + 0x14;
              bVar13 = unaff_r9 == (undefined1 *)0x0;
              unaff_r9 = local_128;
            } while (bVar13);
            uVar14 = 0xe700000004;
            uVar12 = DAT_14050a1c;
switchD_14040876_caseD_5:
            FUN_1402a6e8((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_14050a0c,DAT_14050a08,
                         DAT_14050a20,uVar12);
          }
          else {
            FUN_14046450(unaff_r7);
          }
LAB_14050948:
          iVar6 = 0;
          bVar13 = (bool)isCurrentModePrivileged();
          if (bVar13) {
            iVar6 = getBasePriority();
          }
          if (iVar6 != 0x40) {
code_r0x14050950:
            pbVar5 = DAT_14050a28;
            puVar4 = DAT_14050a24;
            *DAT_14050a24 = 0x14050954;
            puVar4[1] = local_124;
            uVar12 = (uint)*pbVar5;
            *(undefined4 *)(DAT_14050a2c + uVar12 * 4) = local_124;
            uVar12 = uVar12 + 1;
            *pbVar5 = (char)uVar12 +
                      (char)(uint)((ulonglong)DAT_14050a30 * (ulonglong)uVar12 >> 0x23) * -10;
          }
          bVar13 = (bool)isCurrentModePrivileged();
          if (bVar13) {
            setBasePriority(0x40);
          }
switchD_14040876_caseD_7:
          *(undefined1 *)(unaff_r8 + *param_2 * 0x400 + 1) = 0;
          if (iVar6 == 0) {
            *DAT_14050a24 = 0xffffffff;
          }
          pbVar5 = DAT_14050a34;
          bVar2 = *DAT_14050a34;
          *(undefined4 *)(DAT_14050a38 + (uint)bVar2 * 4) = local_124;
          uVar12 = bVar2 + 1;
          *pbVar5 = (char)uVar12 +
                    (char)(uint)((ulonglong)DAT_14050a30 * (ulonglong)uVar12 >> 0x23) * -10;
          bVar13 = (bool)isCurrentModePrivileged();
          if (bVar13) {
            setBasePriority(iVar6);
          }
          uVar8 = *param_2;
        }
        uVar12 = uVar8 + 1;
        uVar8 = uVar12 & 1;
        if ((int)uVar12 < 0) {
          uVar8 = -uVar8;
        }
        *param_2 = uVar8;
        if (cVar11 == '\x01') goto LAB_140508a2;
        unaff_r7 = (char *)(unaff_r8 + uVar8 * 0x400);
        cVar1 = unaff_r7[1];
        cVar11 = '\x01';
      } while( true );
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
      goto switchD_14040876_caseD_1;
    case 4:
      goto switchD_14040876_caseD_4;
    case 5:
      goto switchD_14040876_caseD_5;
    case 6:
      goto code_r0x14050950;
    case 7:
      goto switchD_14040876_caseD_7;
    default:
      FUN_1402a6e8(4,0x2be,DAT_14040a60,DAT_14040a5c,DAT_14040a68,0x2be,DAT_14040a64);
    }
  }
  if (*(char *)((int)param_2 + 1) != '\n') {
    FUN_140743d0(puVar9);
  }
  if (*DAT_14040a58 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
LAB_140508a2:
  do {
    do {
      puVar7 = (uint *)0xffffffff;
      iVar6 = 0;
switchD_14040876_caseD_1:
      FUN_140e53d8(&local_120,iVar6,puVar7);
      uVar12 = uStack_11c;
    } while (local_120 != 8);
    if ((int)(uStack_11c << 0x1e) < 0) {
      FUN_14050868();
    }
    puVar9 = (undefined1 *)(uVar12 & 1);
  } while (puVar9 == (undefined1 *)0x0);
  uVar8 = *param_2;
  goto switchD_14040876_caseD_0;
}

