/* FUN_140b8070 @ 0x140b8070 */

void FUN_140b8070(byte *param_1,uint *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  byte bVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined1 auStack_74 [72];
  int local_2c;
  
  bVar12 = 0;
  local_2c = *DAT_140b8388;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  uVar8 = param_2[1];
  uVar3 = 4 - uVar8;
  if ((int)uVar3 < 1) {
    uVar3 = *param_2;
  }
  else {
    bVar12 = 0;
    if (uVar3 != 0x20) {
      bVar12 = (byte)(*param_2 << (uVar3 & 0xff));
    }
    uVar3 = FUN_140e5948(param_2 + 2);
    *param_2 = uVar3;
    uVar8 = param_2[1] + 0x20;
  }
  iVar6 = DAT_140b838c;
  puVar10 = param_2 + 2;
  uVar11 = *(undefined4 *)(DAT_140b838c + 0x10);
  param_2[1] = uVar8 - 4;
  bVar14 = (byte)uVar11;
  *param_1 = ((byte)(uVar3 >> (uVar8 - 4 & 0xff)) | bVar12) & bVar14;
  uVar3 = param_2[1];
  uVar8 = 2 - uVar3;
  if ((int)uVar8 < 1) {
    bVar12 = 0;
    uVar8 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)(*param_2 << (uVar8 & 0xff));
    }
    uVar8 = FUN_140e5948(puVar10);
    *param_2 = uVar8;
    uVar3 = param_2[1] + 0x20;
  }
  param_2[1] = uVar3 - 2;
  uVar9 = *(uint *)(iVar6 + 8);
  bVar16 = (byte)uVar9;
  param_1[1] = ((byte)(uVar8 >> (uVar3 - 2 & 0xff)) | bVar12) & bVar16;
  uVar3 = param_2[1];
  uVar8 = 4 - uVar3;
  if ((int)uVar8 < 1) {
    bVar12 = 0;
    uVar8 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)(*param_2 << (uVar8 & 0xff));
    }
    uVar8 = FUN_140e5948(puVar10);
    *param_2 = uVar8;
    uVar3 = param_2[1] + 0x20;
  }
  param_2[1] = uVar3 - 4;
  param_1[2] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar12) & bVar14;
  uVar3 = param_2[1];
  uVar8 = 4 - uVar3;
  if ((int)uVar8 < 1) {
    bVar12 = 0;
    uVar8 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)(*param_2 << (uVar8 & 0xff));
    }
    uVar8 = FUN_140e5948(puVar10);
    *param_2 = uVar8;
    uVar3 = param_2[1] + 0x20;
  }
  param_2[1] = uVar3 - 4;
  param_1[3] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar12) & bVar14;
  uVar3 = param_2[1];
  uVar8 = 4 - uVar3;
  if ((int)uVar8 < 1) {
    bVar12 = 0;
    uVar8 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)(*param_2 << (uVar8 & 0xff));
    }
    uVar8 = FUN_140e5948(puVar10);
    *param_2 = uVar8;
    uVar3 = param_2[1] + 0x20;
  }
  param_2[1] = uVar3 - 4;
  param_1[4] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar12) & bVar14;
  uVar3 = param_2[1];
  uVar8 = 4 - uVar3;
  if ((int)uVar8 < 1) {
    bVar12 = 0;
    uVar8 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)(*param_2 << (uVar8 & 0xff));
    }
    uVar8 = FUN_140e5948(puVar10);
    *param_2 = uVar8;
    uVar3 = param_2[1] + 0x20;
  }
  param_2[1] = uVar3 - 4;
  param_1[5] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar12) & bVar14;
  uVar3 = param_2[1];
  uVar8 = 2 - uVar3;
  if ((int)uVar8 < 1) {
    bVar12 = 0;
    uVar8 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)(*param_2 << (uVar8 & 0xff));
    }
    uVar8 = FUN_140e5948(puVar10);
    *param_2 = uVar8;
    uVar3 = param_2[1] + 0x20;
  }
  param_2[1] = uVar3 - 2;
  param_1[6] = ((byte)(uVar8 >> (uVar3 - 2 & 0xff)) | bVar12) & bVar16;
  uVar3 = param_2[1];
  uVar8 = 3 - uVar3;
  if ((int)uVar8 < 1) {
    bVar12 = 0;
    uVar8 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)(*param_2 << (uVar8 & 0xff));
    }
    uVar8 = FUN_140e5948(puVar10);
    *param_2 = uVar8;
    uVar3 = param_2[1] + 0x20;
  }
  param_2[1] = uVar3 - 3;
  param_1[7] = ((byte)(uVar8 >> (uVar3 - 3 & 0xff)) | bVar12) & (byte)*(undefined4 *)(iVar6 + 0xc);
  uVar3 = param_2[1];
  uVar8 = 4 - uVar3;
  if ((int)uVar8 < 1) {
    bVar12 = 0;
    uVar8 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)(*param_2 << (uVar8 & 0xff));
    }
    uVar8 = FUN_140e5948(puVar10);
    *param_2 = uVar8;
    uVar3 = param_2[1] + 0x20;
  }
  param_2[1] = uVar3 - 4;
  param_1[8] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar12) & bVar14;
  uVar3 = param_2[1];
  uVar8 = 1 - uVar3;
  if ((int)uVar8 < 1) {
    uVar8 = 0;
    uVar4 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      uVar8 = 0;
    }
    else {
      uVar8 = *param_2 << (uVar8 & 0xff);
    }
    uVar4 = FUN_140e5948(puVar10);
    *param_2 = uVar4;
    uVar3 = param_2[1] + 0x20;
  }
  uVar13 = *(uint *)(iVar6 + 4);
  param_2[1] = uVar3 - 1;
  uVar3 = (uVar4 >> (uVar3 - 1 & 0xff) | uVar8) & uVar13;
  param_1[9] = (byte)uVar3;
  if ((uVar3 & 0xff) != 0) {
    uVar3 = param_2[1];
    uVar8 = 4 - uVar3;
    if ((int)uVar8 < 1) {
      bVar12 = 0;
      uVar8 = *param_2;
    }
    else {
      if (uVar8 == 0x20) {
        bVar12 = 0;
      }
      else {
        bVar12 = (byte)(*param_2 << (uVar8 & 0xff));
      }
      uVar8 = FUN_140e5948(puVar10);
      *param_2 = uVar8;
      uVar3 = param_2[1] + 0x20;
    }
    param_2[1] = uVar3 - 4;
    param_1[10] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar12) & bVar14;
  }
  uVar3 = param_2[1];
  uVar8 = 1 - uVar3;
  if ((int)uVar8 < 1) {
    uVar8 = 0;
    uVar4 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      uVar8 = 0;
    }
    else {
      uVar8 = *param_2 << (uVar8 & 0xff);
    }
    uVar4 = FUN_140e5948(puVar10);
    *param_2 = uVar4;
    uVar3 = param_2[1] + 0x20;
  }
  uVar8 = (uVar4 >> (uVar3 - 1 & 0xff) | uVar8) & uVar13;
  param_2[1] = uVar3 - 1;
  param_1[0xb] = (byte)uVar8;
  if ((uVar8 & 0xff) != 0) {
    uVar3 = param_2[1];
    uVar8 = 4 - uVar3;
    if ((int)uVar8 < 1) {
      bVar12 = 0;
      uVar8 = *param_2;
    }
    else {
      if (uVar8 == 0x20) {
        bVar12 = 0;
      }
      else {
        bVar12 = (byte)(*param_2 << (uVar8 & 0xff));
      }
      uVar8 = FUN_140e5948(puVar10);
      *param_2 = uVar8;
      uVar3 = param_2[1] + 0x20;
    }
    param_2[1] = uVar3 - 4;
    param_1[0xc] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar12) & bVar14;
  }
  uVar3 = param_2[1];
  uVar8 = 1 - uVar3;
  if ((int)uVar8 < 1) {
    uVar8 = 0;
    uVar4 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      uVar8 = 0;
    }
    else {
      uVar8 = *param_2 << (uVar8 & 0xff);
    }
    uVar4 = FUN_140e5948(puVar10);
    *param_2 = uVar4;
    uVar3 = param_2[1] + 0x20;
  }
  uVar8 = (uVar4 >> (uVar3 - 1 & 0xff) | uVar8) & uVar13;
  param_2[1] = uVar3 - 1;
  param_1[0xd] = (byte)uVar8;
  bVar12 = (byte)uVar13;
  if ((uVar8 & 0xff) != 0) {
    uVar3 = param_2[1];
    uVar8 = 2 - uVar3;
    if ((int)uVar8 < 1) {
      bVar15 = 0;
      uVar8 = *param_2;
    }
    else {
      if (uVar8 == 0x20) {
        bVar15 = 0;
      }
      else {
        bVar15 = (byte)(*param_2 << (uVar8 & 0xff));
      }
      uVar8 = FUN_140e5948(puVar10);
      *param_2 = uVar8;
      uVar3 = param_2[1] + 0x20;
    }
    param_2[1] = uVar3 - 2;
    param_1[0xe] = ((byte)(uVar8 >> (uVar3 - 2 & 0xff)) | bVar15) & bVar16;
    uVar3 = param_2[1];
    uVar8 = 1 - uVar3;
    if ((int)uVar8 < 1) {
      bVar16 = 0;
      uVar8 = *param_2;
    }
    else {
      if (uVar8 == 0x20) {
        bVar16 = 0;
      }
      else {
        bVar16 = (byte)(*param_2 << (uVar8 & 0xff));
      }
      uVar8 = FUN_140e5948(puVar10);
      *param_2 = uVar8;
      uVar3 = param_2[1] + 0x20;
    }
    param_2[1] = uVar3 - 1;
    param_1[0xf] = ((byte)(uVar8 >> (uVar3 - 1 & 0xff)) | bVar16) & bVar12;
  }
  if (param_1[3] != 0) {
    pbVar18 = param_1 + 0xf;
    do {
      uVar3 = param_2[1];
      uVar8 = 1 - uVar3;
      if ((int)uVar8 < 1) {
        bVar16 = 0;
        uVar8 = *param_2;
      }
      else {
        if (uVar8 == 0x20) {
          bVar16 = 0;
        }
        else {
          bVar16 = (byte)(*param_2 << (uVar8 & 0xff));
        }
        uVar8 = FUN_140e5948(puVar10);
        *param_2 = uVar8;
        uVar3 = param_2[1] + 0x20;
      }
      param_2[1] = uVar3 - 1;
      pbVar18[1] = ((byte)(uVar8 >> (uVar3 - 1 & 0xff)) | bVar16) & bVar12;
      uVar3 = param_2[1];
      uVar8 = 4 - uVar3;
      if ((int)uVar8 < 1) {
        bVar16 = 0;
        uVar8 = *param_2;
      }
      else {
        if (uVar8 == 0x20) {
          bVar16 = 0;
        }
        else {
          bVar16 = (byte)(*param_2 << (uVar8 & 0xff));
        }
        uVar8 = FUN_140e5948(puVar10);
        *param_2 = uVar8;
        uVar3 = param_2[1] + 0x20;
      }
      param_2[1] = uVar3 - 4;
      pbVar18[0x11] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar16) & bVar14;
      pbVar18 = pbVar18 + 1;
      if (*pbVar18 == 0) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\x02';
      }
      param_1[0xce] = param_1[0xce] + cVar2;
    } while ((int)(pbVar18 + (-0xf - (int)param_1)) < (int)(uint)param_1[3]);
  }
  if (param_1[4] != 0) {
    pbVar18 = param_1 + 0x3f;
    do {
      uVar3 = param_2[1];
      uVar8 = 1 - uVar3;
      if ((int)uVar8 < 1) {
        bVar16 = 0;
        uVar8 = *param_2;
      }
      else {
        if (uVar8 == 0x20) {
          bVar16 = 0;
        }
        else {
          bVar16 = (byte)(*param_2 << (uVar8 & 0xff));
        }
        uVar8 = FUN_140e5948(puVar10);
        *param_2 = uVar8;
        uVar3 = param_2[1] + 0x20;
      }
      param_2[1] = uVar3 - 1;
      pbVar18[1] = ((byte)(uVar8 >> (uVar3 - 1 & 0xff)) | bVar16) & bVar12;
      uVar3 = param_2[1];
      uVar8 = 4 - uVar3;
      if ((int)uVar8 < 1) {
        bVar16 = 0;
        uVar8 = *param_2;
      }
      else {
        if (uVar8 == 0x20) {
          bVar16 = 0;
        }
        else {
          bVar16 = (byte)(*param_2 << (uVar8 & 0xff));
        }
        uVar8 = FUN_140e5948(puVar10);
        *param_2 = uVar8;
        uVar3 = param_2[1] + 0x20;
      }
      param_2[1] = uVar3 - 4;
      pbVar18[0x11] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar16) & bVar14;
      pbVar18 = pbVar18 + 1;
      if (*pbVar18 == 0) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\x02';
      }
      param_1[0xce] = param_1[0xce] + cVar2;
    } while ((int)(pbVar18 + (-0x3f - (int)param_1)) < (int)(uint)param_1[4]);
  }
  if (param_1[5] == 0) {
    bVar16 = param_1[0xce];
  }
  else {
    pbVar18 = param_1 + 0x6f;
    do {
      uVar3 = param_2[1];
      uVar8 = 1 - uVar3;
      if ((int)uVar8 < 1) {
        bVar16 = 0;
        uVar8 = *param_2;
      }
      else {
        if (uVar8 == 0x20) {
          bVar16 = 0;
        }
        else {
          bVar16 = (byte)(*param_2 << (uVar8 & 0xff));
        }
        uVar8 = FUN_140e5948(puVar10);
        *param_2 = uVar8;
        uVar3 = param_2[1] + 0x20;
      }
      param_2[1] = uVar3 - 1;
      pbVar18[1] = ((byte)(uVar8 >> (uVar3 - 1 & 0xff)) | bVar16) & bVar12;
      uVar3 = param_2[1];
      uVar8 = 4 - uVar3;
      if ((int)uVar8 < 1) {
        bVar16 = 0;
        uVar8 = *param_2;
      }
      else {
        if (uVar8 == 0x20) {
          bVar16 = 0;
        }
        else {
          bVar16 = (byte)(*param_2 << (uVar8 & 0xff));
        }
        uVar8 = FUN_140e5948(puVar10);
        *param_2 = uVar8;
        uVar3 = param_2[1] + 0x20;
      }
      param_2[1] = uVar3 - 4;
      pbVar18[0x11] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar16) & bVar14;
      pbVar18 = pbVar18 + 1;
      if (*pbVar18 == 0) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\x02';
      }
      bVar16 = param_1[0xce] + cVar2;
      param_1[0xce] = bVar16;
    } while ((int)(pbVar18 + (-0x6f - (int)param_1)) < (int)(uint)param_1[5]);
  }
  param_1[0xcf] = bVar16;
  pbVar18 = param_1 + 0x9f;
  if (param_1[6] != 0) {
    do {
      uVar3 = param_2[1];
      uVar8 = 4 - uVar3;
      if ((int)uVar8 < 1) {
        bVar16 = 0;
        uVar8 = *param_2;
      }
      else {
        if (uVar8 == 0x20) {
          bVar16 = 0;
        }
        else {
          bVar16 = (byte)(*param_2 << (uVar8 & 0xff));
        }
        uVar8 = FUN_140e5948(puVar10);
        *param_2 = uVar8;
        uVar3 = param_2[1] + 0x20;
      }
      param_2[1] = uVar3 - 4;
      pbVar18[1] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar16) & bVar14;
      pbVar17 = pbVar18 + (-0x9e - (int)param_1);
      param_1[0xce] = param_1[0xce] + 1;
      pbVar18 = pbVar18 + 1;
    } while ((int)pbVar17 < (int)(uint)param_1[6]);
  }
  pbVar18 = param_1 + 0xa3;
  if (param_1[7] != 0) {
    do {
      uVar3 = param_2[1];
      uVar8 = 4 - uVar3;
      if ((int)uVar8 < 1) {
        bVar16 = 0;
        uVar8 = *param_2;
      }
      else {
        if (uVar8 == 0x20) {
          bVar16 = 0;
        }
        else {
          bVar16 = (byte)(*param_2 << (uVar8 & 0xff));
        }
        uVar8 = FUN_140e5948(puVar10);
        *param_2 = uVar8;
        uVar3 = param_2[1] + 0x20;
      }
      param_2[1] = uVar3 - 4;
      pbVar18[1] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar16) & bVar14;
      pbVar17 = pbVar18 + (-0xa2 - (int)param_1);
      pbVar18 = pbVar18 + 1;
    } while ((int)pbVar17 < (int)(uint)param_1[7]);
  }
  if (param_1[8] != 0) {
    pbVar18 = param_1 + 0xab;
    do {
      uVar3 = param_2[1];
      uVar8 = 1 - uVar3;
      if ((int)uVar8 < 1) {
        bVar16 = 0;
        uVar8 = *param_2;
      }
      else {
        if (uVar8 == 0x20) {
          bVar16 = 0;
        }
        else {
          bVar16 = (byte)(*param_2 << (uVar8 & 0xff));
        }
        uVar8 = FUN_140e5948(puVar10);
        *param_2 = uVar8;
        uVar3 = param_2[1] + 0x20;
      }
      param_2[1] = uVar3 - 1;
      pbVar18[1] = ((byte)(uVar8 >> (uVar3 - 1 & 0xff)) | bVar16) & bVar12;
      uVar3 = param_2[1];
      uVar8 = 4 - uVar3;
      if ((int)uVar8 < 1) {
        bVar16 = 0;
        uVar8 = *param_2;
      }
      else {
        if (uVar8 == 0x20) {
          bVar16 = 0;
        }
        else {
          bVar16 = (byte)(*param_2 << (uVar8 & 0xff));
        }
        uVar8 = FUN_140e5948(puVar10);
        *param_2 = uVar8;
        uVar3 = param_2[1] + 0x20;
      }
      param_2[1] = uVar3 - 4;
      pbVar18[0x11] = ((byte)(uVar8 >> (uVar3 - 4 & 0xff)) | bVar16) & bVar14;
      pbVar17 = pbVar18 + (-0xaa - (int)param_1);
      pbVar18 = pbVar18 + 1;
    } while ((int)pbVar17 < (int)(uint)param_1[8]);
  }
  if (param_2[9] == 0) {
    FUN_140e5408(puVar10,param_2[1]);
    uVar3 = param_2[9];
LAB_140b8868:
    *param_2 = 0;
    param_2[1] = 0;
    if (uVar3 != 0) goto LAB_140b8704;
    iVar5 = FUN_140e52b8(puVar10);
    FUN_140e5108(puVar10,iVar5 - param_3 & 7,(char)param_2[9]);
    uVar3 = param_2[1];
    uVar8 = 8 - uVar3;
    if ((int)uVar8 < 1) goto LAB_140b889c;
LAB_140b872a:
    if (uVar8 == 0x20) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)(*param_2 << (uVar8 & 0xff));
    }
    uVar8 = FUN_140e5948(puVar10);
    *param_2 = uVar8;
    uVar3 = param_2[1] + 0x20;
  }
  else {
    if (param_2[1] != 0) {
      FUN_140e5168(puVar10,*param_2);
      uVar3 = param_2[9];
      goto LAB_140b8868;
    }
    *param_2 = 0;
LAB_140b8704:
    iVar5 = FUN_140e52b8(puVar10);
    FUN_140e5168(puVar10,0,param_3 - iVar5 & 7);
    uVar3 = param_2[1];
    uVar8 = 8 - uVar3;
    if (0 < (int)uVar8) goto LAB_140b872a;
LAB_140b889c:
    bVar12 = 0;
    uVar8 = *param_2;
  }
  uVar4 = *(uint *)(iVar6 + 0x20);
  bVar12 = ((byte)(uVar8 >> (uVar3 - 8 & 0xff)) | bVar12) & (byte)uVar4;
  param_2[1] = uVar3 - 8;
  param_1[0xcc] = bVar12;
  FUN_140b96d8(auStack_74,7,0xff,8);
  uVar11 = FUN_140b9760(auStack_74,param_2,0);
  if (param_2[9] == 0) {
    FUN_140e5408(puVar10,param_2[1]);
  }
  else if (param_2[1] != 0) {
    FUN_140e5168(puVar10,*param_2);
  }
  uVar8 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = FUN_140e52b8(puVar10);
  if ((uVar3 < 0x18) || (bVar12 < 3)) {
    uVar13 = param_2[1];
LAB_140b87a8:
    if (param_2[9] == 0) {
      FUN_140e5408(puVar10,uVar13);
    }
    else if (uVar13 != 0) {
      FUN_140e5168(puVar10,*param_2,uVar13);
    }
    *param_2 = 0;
    param_2[1] = 0;
    iVar6 = FUN_140e52b8(puVar10);
    uVar8 = param_2[1];
    uVar4 = (uVar3 - iVar6) + uVar8;
    uVar9 = param_2[9];
    if (uVar4 < 0x20) {
      if (uVar9 == 0) {
        param_2[1] = uVar4;
        FUN_140e5408(puVar10,uVar4);
        *param_2 = 0;
        param_2[1] = 0;
        bVar14 = 1;
        if (param_2[9] == 0) {
          FUN_140e5408(puVar10,0,0);
          bVar14 = 1;
        }
        goto LAB_140b8808;
      }
LAB_140b87da:
      if (uVar8 != 0) {
        FUN_140e5168(puVar10,*param_2,uVar8);
        uVar9 = param_2[9];
      }
    }
    else {
      if (uVar9 != 0) goto LAB_140b87da;
      FUN_140e5408(puVar10);
      uVar9 = param_2[9];
    }
    *param_2 = 0;
    param_2[1] = 0;
    bVar14 = 1;
    FUN_140e5408(puVar10,uVar3 - iVar6,uVar9 & 0xff);
  }
  else {
    uVar13 = param_2[1];
    uVar7 = 8 - uVar13;
    if ((int)uVar7 < 1) {
      uVar7 = *param_2;
    }
    else {
      if (uVar7 != 0x20) {
        uVar8 = *param_2 << (uVar7 & 0xff);
      }
      uVar7 = FUN_140e5948(puVar10);
      *param_2 = uVar7;
      uVar13 = param_2[1] + 0x20;
    }
    uVar13 = uVar13 - 8;
    param_2[1] = uVar13;
    if (((uVar7 >> (uVar13 & 0xff) | uVar8) & uVar4) != 0xac) goto LAB_140b87a8;
    if (param_1[3] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      pbVar18 = param_1;
      while( true ) {
        uVar8 = 2 - uVar13;
        if ((int)uVar8 < 1) {
          uVar8 = 0;
          uVar7 = *param_2;
        }
        else {
          if (uVar8 == 0x20) {
            uVar8 = 0;
          }
          else {
            uVar8 = *param_2 << (uVar8 & 0xff);
          }
          uVar7 = FUN_140e5948(puVar10);
          *param_2 = uVar7;
          uVar13 = param_2[1] + 0x20;
        }
        uVar8 = (uVar7 >> (uVar13 - 2 & 0xff) | uVar8) & uVar9;
        param_2[1] = uVar13 - 2;
        pbVar18[0x30] = (byte)uVar8;
        pbVar18 = pbVar18 + 1;
        if (2 < (uVar8 & 0xff)) {
          iVar6 = -2;
        }
        if ((int)(uint)param_1[3] <= (int)pbVar18 - (int)param_1) break;
        uVar13 = param_2[1];
      }
      uVar13 = param_2[1];
    }
    pbVar18 = param_1;
    if (param_1[4] != 0) {
      while( true ) {
        uVar8 = 2 - uVar13;
        if ((int)uVar8 < 1) {
          uVar8 = 0;
          uVar7 = *param_2;
        }
        else {
          if (uVar8 == 0x20) {
            uVar8 = 0;
          }
          else {
            uVar8 = *param_2 << (uVar8 & 0xff);
          }
          uVar7 = FUN_140e5948(puVar10);
          *param_2 = uVar7;
          uVar13 = param_2[1] + 0x20;
        }
        uVar8 = (uVar7 >> (uVar13 - 2 & 0xff) | uVar8) & uVar9;
        param_2[1] = uVar13 - 2;
        pbVar18[0x60] = (byte)uVar8;
        if (2 < (uVar8 & 0xff)) {
          iVar6 = -2;
        }
        if ((int)(uint)param_1[4] <= (int)(pbVar18 + 1) - (int)param_1) break;
        uVar13 = param_2[1];
        pbVar18 = pbVar18 + 1;
      }
      uVar13 = param_2[1];
    }
    pbVar18 = param_1;
    if (param_1[5] != 0) {
      while( true ) {
        uVar8 = 2 - uVar13;
        if ((int)uVar8 < 1) {
          uVar8 = 0;
          uVar7 = *param_2;
        }
        else {
          if (uVar8 == 0x20) {
            uVar8 = 0;
          }
          else {
            uVar8 = *param_2 << (uVar8 & 0xff);
          }
          uVar7 = FUN_140e5948(puVar10);
          *param_2 = uVar7;
          uVar13 = param_2[1] + 0x20;
        }
        uVar8 = (uVar7 >> (uVar13 - 2 & 0xff) | uVar8) & uVar9;
        param_2[1] = uVar13 - 2;
        pbVar18[0x90] = (byte)uVar8;
        if (2 < (uVar8 & 0xff)) {
          iVar6 = -2;
        }
        if ((int)(uint)param_1[5] <= (int)(pbVar18 + 1) - (int)param_1) break;
        uVar13 = param_2[1];
        pbVar18 = pbVar18 + 1;
      }
      uVar13 = param_2[1];
    }
    if (param_2[9] == 0) {
      FUN_140e5408(puVar10,uVar13);
      uVar8 = param_2[9];
LAB_140b8d00:
      *param_2 = 0;
      param_2[1] = 0;
      if (uVar8 != 0) goto LAB_140b8c7c;
      iVar5 = FUN_140e52b8(puVar10);
      FUN_140e5108(puVar10,iVar5 - param_3 & 7,(char)param_2[9]);
    }
    else {
      if (uVar13 != 0) {
        FUN_140e5168(puVar10,*param_2,uVar13);
        uVar8 = param_2[9];
        goto LAB_140b8d00;
      }
      *param_2 = 0;
      param_2[1] = 0;
LAB_140b8c7c:
      iVar5 = FUN_140e52b8(puVar10);
      FUN_140e5168(puVar10,0,param_3 - iVar5 & 7);
    }
    FUN_140b97dc(auStack_74,param_2,uVar11);
    uVar8 = param_2[1];
    uVar9 = 8 - uVar8;
    if ((int)uVar9 < 1) {
      uVar9 = 0;
      uVar13 = *param_2;
    }
    else {
      if (uVar9 == 0x20) {
        uVar9 = 0;
      }
      else {
        uVar9 = *param_2 << (uVar9 & 0xff);
      }
      uVar13 = FUN_140e5948(puVar10);
      *param_2 = uVar13;
      uVar8 = param_2[1] + 0x20;
    }
    param_2[1] = uVar8 - 8;
    uVar7 = FUN_140b9c98(auStack_74);
    if ((((uVar13 >> (uVar8 - 8 & 0xff) | uVar9) & uVar4 & 0xffff) == uVar7) && (iVar6 == 0)) {
      bVar14 = 1;
    }
    else {
      bVar14 = 0;
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      param_1[0x34] = 0;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      param_1[0x38] = 0;
      param_1[0x39] = 0;
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      param_1[0x60] = 0;
      param_1[0x61] = 0;
      param_1[0x62] = 0;
      param_1[99] = 0;
      param_1[100] = 0;
      param_1[0x65] = 0;
      param_1[0x66] = 0;
      param_1[0x67] = 0;
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      param_1[0x6c] = 0;
      param_1[0x6d] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
      param_1[0x90] = 0;
      param_1[0x91] = 0;
      param_1[0x92] = 0;
      param_1[0x93] = 0;
      param_1[0x94] = 0;
      param_1[0x95] = 0;
      param_1[0x96] = 0;
      param_1[0x97] = 0;
      param_1[0x98] = 0;
      param_1[0x99] = 0;
      param_1[0x9a] = 0;
      param_1[0x9b] = 0;
      param_1[0x9c] = 0;
      param_1[0x9d] = 0;
      param_1[0x9e] = 0;
      param_1[0x9f] = 0;
    }
  }
  if (param_2[9] == 0) {
    FUN_140e5408(puVar10,param_2[1],0);
  }
  else if (param_2[1] != 0) {
    FUN_140e5168(puVar10,*param_2);
  }
LAB_140b8808:
  iVar5 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar6 = FUN_140e52b8(puVar10);
  iVar6 = (uint)bVar12 - ((int)(uVar3 - iVar6) >> 3);
  if (0 < iVar6) {
    uVar3 = param_2[1];
    do {
      if (0 < (int)(8 - uVar3)) {
        uVar3 = FUN_140e5948(puVar10);
        *param_2 = uVar3;
        uVar3 = param_2[1] + 0x20;
      }
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 - 8;
      param_2[1] = uVar3;
    } while (iVar5 != iVar6);
  }
  piVar1 = DAT_140b8b4c;
  param_1[0xcd] = bVar14;
  if (*piVar1 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

