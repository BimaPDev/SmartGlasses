/* FUN_1409d948 @ 0x1409d948 */

void FUN_1409d948(char *param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  
  uVar7 = DAT_1409db98;
  if ((*param_1 != '\x01') && (uVar7 = DAT_1409db7c, *param_1 != '\x02')) {
    uVar7 = DAT_1409db80;
  }
  uVar12 = (uint)(byte)param_1[1];
  if (7 < param_2) {
    FUN_1402a6e8(4,0x288,DAT_1409db90,DAT_1409db8c,DAT_1409db88,uVar7,uVar12,DAT_1409db84,param_3);
    return;
  }
  uVar8 = *(undefined4 *)(DAT_1409db94 + param_2 * 4);
  iVar5 = param_3;
  FUN_1402a6e8(4,0x288,DAT_1409db90,DAT_1409db8c,DAT_1409db88,uVar7,uVar12,uVar8,param_3);
  pcVar11 = DAT_1409db9c;
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
    if (param_3 == 3) {
      FUN_1409d75c(param_2,param_1);
    }
    break;
  case 5:
    param_2 = 5;
    break;
  case 6:
    param_2 = 6;
    break;
  case 7:
    iVar13 = *(int *)(DAT_1409db9c + 8);
    if (param_3 == 1) {
      iVar4 = FUN_140b5050(iVar13,DAT_1409dba0,param_1);
      if (iVar4 != 0) {
        FUN_1402a6e8(4,0x295,DAT_1409db90,DAT_1409db8c,DAT_1409dbb0,uVar7,uVar12,uVar8,iVar5);
        return;
      }
      if ((*param_1 == *pcVar11) && (param_1[1] == pcVar11[1])) {
        return;
      }
      if (iVar13 == 0) {
        return;
      }
      puVar6 = (undefined2 *)FUN_140e53b8(*DAT_1409dbb8);
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = *(undefined2 *)param_1;
        iVar5 = FUN_140b4e20(iVar13);
        if (iVar5 == 0) {
          return;
        }
        if (pcVar11[4] != '\0' || pcVar11[2] != '\0') {
          return;
        }
        iVar5 = (**(code **)(*DAT_1409dbbc + 0x3c))();
        if (iVar5 != 0) {
          return;
        }
        FUN_1402a6e8(4,0x2a4,DAT_1409db90,DAT_1409db8c,DAT_1409dbc0);
        FUN_1409d75c(7,param_1);
        return;
      }
      uVar9 = 0x24a;
      cVar10 = param_1[1];
      uVar7 = DAT_1409dbc4;
    }
    else {
      if (param_3 != 2) {
        return;
      }
      if (iVar13 == 0) {
LAB_1409db38:
        uVar3 = DAT_1409dbac;
        uVar2 = DAT_1409dba8;
        uVar9 = DAT_1409db90;
        uVar7 = DAT_1409db8c;
        pcVar11[0] = '\0';
        pcVar11[1] = -1;
        FUN_1402a6e8(4,0xc4,uVar9,uVar7,uVar3,uVar2,uVar12,uVar8,iVar5);
      }
      else {
        iVar4 = FUN_140b5050(iVar13,DAT_1409dba0,param_1);
        if ((iVar4 != 0) && (iVar4 = FUN_140b4ef4(iVar13,iVar4), iVar4 != 0)) {
          FUN_1402a6e8(4,0x2ad,DAT_1409db90,DAT_1409db8c,DAT_1409dba4,param_1[1],uVar12,uVar8,iVar5)
          ;
          if ((*pcVar11 == *param_1) && (pcVar11[1] == param_1[1])) {
            iVar5 = FUN_140b4d50(iVar13);
            if (iVar5 == 0) {
              uVar7 = FUN_140b4da8(iVar13);
            }
            else {
              uVar7 = 0;
            }
            FUN_1409d75c(7,uVar7);
          }
          iVar5 = FUN_140b4d50(iVar13);
          if ((iVar5 == 0) && (iVar5 = FUN_140b4da8(iVar13), iVar5 != 0)) {
            return;
          }
          uVar2 = DAT_1409dbac;
          uVar9 = DAT_1409dba8;
          uVar8 = DAT_1409db90;
          uVar7 = DAT_1409db8c;
          pcVar11[0] = '\0';
          pcVar11[1] = -1;
          FUN_1402a6e8(4,0xc4,uVar8,uVar7,uVar2,uVar9);
          return;
        }
        iVar4 = FUN_140b4d50(iVar13);
        if ((iVar4 != 0) || (iVar13 = FUN_140b4da8(iVar13), iVar13 == 0)) goto LAB_1409db38;
      }
      uVar9 = 0x2be;
      cVar10 = param_1[1];
      uVar7 = DAT_1409dbb4;
    }
    FUN_1402a6e8(4,uVar9,DAT_1409db90,DAT_1409db8c,uVar7,cVar10,uVar12,uVar8,iVar5);
switchD_1409d9ae_default:
    return;
  default:
    goto switchD_1409d9ae_default;
  }
  uVar8 = DAT_1409d8f8;
  uVar7 = DAT_1409d8f4;
  if ((param_2 & 0xfd) == 1) {
    if (param_3 == 3) {
      *(undefined2 *)(LAB_1409d90c + 2) = *(undefined2 *)param_1;
      goto LAB_1409d8b2;
    }
    bVar1 = true;
    pcVar11 = DAT_1409d908;
  }
  else {
    uVar7 = uVar8;
    if (1 < param_2 - 5) {
      if (param_3 == 3) {
        *(undefined2 *)(LAB_1409d90c + 4) = *(undefined2 *)param_1;
LAB_1409d8b2:
        FUN_1402a6e8(4,0x10a,DAT_1409d904,DAT_1409d900,DAT_1409d910,uVar7,*param_1,param_1[1]);
        return;
      }
      cVar10 = *DAT_1409d8f0;
      bVar1 = false;
      pcVar11 = DAT_1409d8f0;
      if (cVar10 != *param_1) {
        return;
      }
      goto LAB_1409d866;
    }
    if (param_3 == 3) {
      *(undefined2 *)(LAB_1409d90c + 6) = *(undefined2 *)param_1;
      goto LAB_1409d8b2;
    }
    bVar1 = false;
    pcVar11 = DAT_1409d914;
  }
  cVar10 = *pcVar11;
  if (cVar10 != *param_1) {
    return;
  }
LAB_1409d866:
  if (pcVar11[1] == param_1[1]) {
    uVar7 = DAT_1409d8f4;
    if (!bVar1) {
      uVar7 = DAT_1409d8f8;
    }
    FUN_1402a6e8(4,0x112,DAT_1409d904,DAT_1409d900,DAT_1409d8fc,cVar10,pcVar11[1],uVar7);
    pcVar11[0] = '\0';
    pcVar11[1] = -1;
  }
  return;
}

