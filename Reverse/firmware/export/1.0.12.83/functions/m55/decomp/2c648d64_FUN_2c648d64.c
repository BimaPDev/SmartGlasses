/* FUN_2c648d64 @ 0x2c648d64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c648d64(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int in_r3;
  undefined4 unaff_r4;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 unaff_lr;
  
  iVar5 = FUN_2c66d418(*(undefined4 *)(in_r3 + 4));
  pbVar1 = _LAB_2c649050;
  iVar10 = 10;
  FUN_2c648600(_DAT_2c64904c,iVar5);
LAB_2c648d84:
  while (iVar6 = FUN_2c648570(), iVar6 != 0) {
    FUN_2c6484d0();
  }
  FUN_2c673b08(10000);
  while (iVar7 = FUN_2c648570(), iVar6 = _LAB_2c649054, iVar7 != 0) {
    FUN_2c6484d0();
  }
  FUN_2c64849c(0x15);
  do {
    iVar7 = FUN_2c648570();
    if (iVar7 != 0) break;
    FUN_2c673b08(10);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = FUN_2c648570();
  pbVar9 = _LAB_2c649050;
  if (iVar6 != 0) {
    FUN_2c673b08(40000);
    FUN_2c674268(_LAB_2c649050,0,0x420);
    iVar6 = 0;
    do {
      iVar7 = FUN_2c648570();
      if (iVar7 < 1) break;
      iVar6 = iVar6 + 1;
      bVar2 = FUN_2c6484d0();
      *pbVar9 = bVar2;
      pbVar9 = pbVar9 + 1;
    } while (iVar6 != 0x420);
    if ((char)*pbVar1 == 0x72) {
      if (pbVar1[1] == 0x78) {
        if (iVar6 != 0) {
          for (pbVar9 = pbVar1; pbVar1 + iVar6 + -1 != pbVar9; pbVar9 = pbVar9 + 1) {
            if ((pbVar9[1] == 0xd) || (pbVar9[1] == 10)) {
              pbVar9[1] = 0;
            }
          }
        }
LAB_2c648e22:
        while (iVar10 = FUN_2c648570(), iVar10 != 0) {
          FUN_2c6484d0();
        }
        FUN_2c673b08(10000);
        while (iVar10 = FUN_2c648570(), iVar10 != 0) {
          FUN_2c6484d0();
        }
        FUN_2c64849c(0x15);
        FUN_2c648600(_DAT_2c64905c);
        if (*pbVar1 != 0) {
          FUN_2c648600(_LAB_2c649094,_LAB_2c649090);
        }
        uVar11 = 0;
        uVar12 = 0;
LAB_2c648e64:
        iVar6 = 10;
        iVar10 = _LAB_2c649054;
LAB_2c648e68:
        iVar7 = FUN_2c648570();
        if (iVar7 == 0) goto code_r0x2c648e72;
        goto LAB_2c648e7a;
      }
    }
    else if (((int)(char)*pbVar1 - 1U & 0xff) < 2) {
      *pbVar1 = 0;
      goto LAB_2c648e22;
    }
  }
  iVar10 = iVar10 + -1;
  uVar3 = _DAT_2c649058;
  if (iVar10 == 0) goto code_r0x2c648600;
  goto LAB_2c648d84;
code_r0x2c648e72:
  FUN_2c673b08(10);
  iVar10 = iVar10 + -1;
  if (iVar10 != 0) goto LAB_2c648e68;
LAB_2c648e7a:
  iVar10 = FUN_2c648570();
  if (iVar10 != 0) {
    iVar10 = FUN_2c648570();
    if ((iVar10 == 1) && (iVar10 = FUN_2c6484d0(), iVar10 == 4)) goto code_r0x2c648fb4;
    iVar10 = 4000;
    while (iVar7 = FUN_2c648570(), iVar7 != 0x84) {
      iVar8 = FUN_2c648570();
      iVar7 = 10;
      if (iVar8 == 0x404) break;
      FUN_2c673b08();
      iVar10 = iVar10 + -1;
      if (iVar10 == 0) goto LAB_2c648eaa;
    }
    iVar10 = 0;
    pbVar9 = pbVar1;
    while (iVar7 = FUN_2c648570(iVar7), 0 < iVar7) {
      iVar10 = iVar10 + 1;
      iVar7 = FUN_2c6484d0();
      *pbVar9 = (byte)iVar7;
      pbVar9 = pbVar9 + 1;
    }
    if ((*pbVar1 - 1 < 2) && (pbVar1[1] == (byte)~pbVar1[2])) {
      iVar7 = iVar10 + -1;
      if (iVar7 < 4) {
        bVar2 = 0;
      }
      else {
        bVar2 = 0;
        pbVar9 = _LAB_2c649060;
        do {
          pbVar9 = pbVar9 + 1;
          bVar2 = bVar2 + *pbVar9;
        } while (pbVar1 + iVar10 + -2 != pbVar9);
      }
      if (pbVar1[iVar7] != bVar2) goto LAB_2c648eaa;
      if (((pbVar1[iVar10 + -2] == 0x1a) && (pbVar1[iVar10 + -3] == 0x1a)) && (5 < iVar10)) {
        pbVar9 = pbVar1 + iVar10 + -3;
        do {
          iVar6 = iVar10;
          iVar10 = iVar7;
          if (iVar10 == 5) {
            iVar10 = 1;
            FUN_2c64849c(6);
            goto LAB_2c648f72;
          }
          bVar2 = *pbVar9;
          iVar7 = iVar10 + -1;
          pbVar9 = pbVar9 + -1;
        } while (bVar2 == 0x1a);
        iVar10 = iVar6 + -5;
        FUN_2c64849c(6);
      }
      else {
        iVar10 = iVar10 + -4;
        FUN_2c64849c(6);
        if (iVar10 == 0) goto LAB_2c648e64;
      }
LAB_2c648f72:
      uVar12 = uVar12 + 1;
      FUN_2c674668(iVar5,_LAB_2c649064,iVar10);
      iVar6 = iVar5 + iVar10;
      uVar11 = func_0x2c4c2878(uVar11,iVar5,iVar10);
      FUN_2c648600(_LAB_2c649068);
      iVar5 = iVar6;
      if ((uVar12 & 0x3f) == 0) {
        FUN_2c648600(_LAB_2c64906c);
      }
      goto LAB_2c648e64;
    }
  }
LAB_2c648eaa:
  iVar6 = iVar6 + -1;
  uVar3 = _DAT_2c649078;
  if (iVar6 == 0) goto code_r0x2c648600;
  while (iVar10 = FUN_2c648570(), iVar10 != 0) {
    FUN_2c6484d0();
  }
  FUN_2c673b08(10000);
  while (iVar10 = FUN_2c648570(), iVar10 != 0) {
    FUN_2c6484d0();
  }
  FUN_2c64849c(0x15);
  iVar10 = _LAB_2c649054;
  goto LAB_2c648e68;
code_r0x2c648fb4:
  FUN_2c64849c(6);
  FUN_2c648600(_DAT_2c649070);
  FUN_2c64849c(6);
  FUN_2c673b08(10000);
  FUN_2c64849c(6);
  while (iVar5 = FUN_2c648570(), iVar5 != 0) {
    FUN_2c6484d0();
  }
  FUN_2c673b08(10000);
  while (iVar5 = FUN_2c648570(), uVar3 = _DAT_2c649074, iVar5 != 0) {
    FUN_2c6484d0();
  }
code_r0x2c648600:
  iVar10 = *DAT_2c648674;
  iVar5 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar3,&stack0xfffffff4,&stack0xfffffff4,iVar10,unaff_r4,
                       unaff_lr);
  if (-1 < iVar5) {
    if (iVar5 < 0x7ff) {
      if (iVar5 == 0) goto LAB_2c648630;
    }
    else {
      iVar5 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar4 = (code *)FUN_2c648328();
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(_LAB_2c648678,iVar5);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar5);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar10) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

