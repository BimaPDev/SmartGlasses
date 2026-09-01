/* FUN_100119bc @ 0x100119bc */

byte * FUN_100119bc(uint param_1,int param_2,ushort *param_3)

{
  char cVar1;
  ushort *puVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  int extraout_r2;
  int iVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  
  iVar6 = *DAT_10011b88;
  FUN_100a5b78((DAT_10011b8c - DAT_10011b90) * 0x20 & 0xff00U | 0x1820032,DAT_10011b94,DAT_10011b98,
               param_1,param_2);
  pbVar4 = (byte *)FUN_100a9a7c();
  puVar2 = DAT_10011ba4;
  if (pbVar4 == (byte *)0x0) goto switchD_10011a06_caseD_a;
  if (0xb < param_1) {
    if (param_1 == 0x61) {
      if (*pbVar4 == 3) {
        FUN_1013d03e(DAT_10011ba0,param_3,param_2,0x328);
        if (*(int *)DAT_10011ba4 != 0) {
          *(undefined1 *)(*(int *)DAT_10011ba4 + 0x4b4) = 1;
        }
LAB_10011a80:
        if (*DAT_10011b88 == iVar6) {
          pbVar4 = (byte *)FUN_100a9600(pbVar4,0x11,param_3,param_2);
          return pbVar4;
        }
        goto LAB_10011a54;
      }
    }
    else if (param_1 == 0x62) {
      if (*pbVar4 == 3) {
        FUN_1013d03e(DAT_10011ba8,param_3,param_2,0x128);
        if (*(int *)puVar2 != 0) {
          *(undefined1 *)(*(int *)puVar2 + 0x4b4) = 1;
        }
        pbVar4 = (byte *)FUN_10010a24(5,1);
        iVar7 = *(int *)puVar2;
        param_3 = puVar2;
        if (iVar7 != 0) {
          *(undefined1 *)(iVar7 + 0x4b4) = 1;
          if (*DAT_10011b88 == iVar6) {
            pbVar4 = (byte *)FUN_10011924(*(undefined1 *)(iVar7 + 0x472),
                                          *(undefined4 *)(iVar7 + 0x46c));
            return pbVar4;
          }
          goto LAB_10011a54;
        }
      }
    }
    else if ((param_1 == 0x60) && ((*pbVar4 & 0xfb) == 1)) {
      FUN_1013d03e(DAT_10011b9c,param_3,param_2,0x728);
      goto LAB_10011a80;
    }
    goto switchD_10011a06_caseD_a;
  }
  switch(param_1) {
  case 7:
    if ((*pbVar4 != 3) || (param_2 != 2)) break;
    uVar9 = 0xd;
    bVar8 = false;
    if ((char)*param_3 != '\0') {
      bVar8 = true;
    }
LAB_10011ab2:
    FUN_100a9600(pbVar4,uVar9,bVar8);
    if (*DAT_10011b88 == iVar6) {
      param_2 = 5;
      cVar1 = *(char *)((int)param_3 + 1);
      goto LAB_10011a5e;
    }
    goto LAB_10011a54;
  case 8:
    if ((*pbVar4 == 3) && (param_2 == 2)) {
      uVar9 = 0x24;
      bVar8 = (char)*param_3 != '\0';
      goto LAB_10011ab2;
    }
    break;
  case 9:
    if ((*pbVar4 == 3) && (param_2 == 4)) {
      FUN_100a9130(5,(char)param_3[1],0);
      piVar3 = DAT_100a7eb0;
      if (*DAT_10011b88 == iVar6) {
        uVar5 = (uint)*param_3;
        uVar9 = 5;
        iVar6 = *DAT_100a7eb0;
        if (iVar6 == 0) {
          pbVar4 = (byte *)0xfffffffd;
        }
        else {
          uVar10 = uVar5;
          if (*(int *)(iVar6 + 0x18) != 0) {
            FUN_100a7838();
            iVar6 = extraout_r2;
          }
          iVar7 = *(int *)(*piVar3 + 0x1c);
          if (iVar7 != 0) {
            FUN_100a7838(iVar7,uVar5,iVar6,*piVar3,uVar9,uVar10,unaff_r4,unaff_r5,unaff_r6,unaff_lr)
            ;
          }
          FUN_100a5b78((DAT_100a7eb8 - DAT_100a7eb4) * 0x20 & 0xff00U | 0x21c0032,DAT_100a7ec0,
                       DAT_100a7ebc,uVar5,0);
          pbVar4 = (byte *)0x0;
        }
        return pbVar4;
      }
      goto LAB_10011a54;
    }
    break;
  case 0xb:
    if (((*pbVar4 & 0xfb) != 1) || (param_2 != 2)) break;
    FUN_100a9600(pbVar4,0xd,(char)*param_3 != '\0');
    if (*DAT_10011b88 != iVar6) goto LAB_10011a54;
    goto LAB_10011a58;
  }
switchD_10011a06_caseD_a:
  if (*DAT_10011b88 == iVar6) {
    return pbVar4;
  }
LAB_10011a54:
  FUN_1013cdc0();
LAB_10011a58:
  cVar1 = *(char *)((int)param_3 + 1);
LAB_10011a5e:
  pbVar4 = (byte *)FUN_100a9130(param_2,cVar1,0);
  return pbVar4;
}

