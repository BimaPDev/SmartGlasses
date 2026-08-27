/* FUN_2c4d4b5c @ 0x2c4d4b5c */

void FUN_2c4d4b5c(byte *param_1,uint *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte *pbVar18;
  undefined1 auStack_74 [72];
  int local_2c;
  
  bVar13 = 0;
  local_2c = *DAT_2c4d4e58;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  uVar9 = param_2[1];
  uVar2 = 4 - uVar9;
  if ((int)uVar2 < 1) {
    uVar2 = *param_2;
  }
  else {
    bVar13 = 0;
    if (uVar2 != 0x20) {
      bVar13 = (byte)(*param_2 << (uVar2 & 0xff));
    }
    uVar2 = FUN_2c4d74d4(param_2 + 2);
    *param_2 = uVar2;
    uVar9 = param_2[1] + 0x20;
  }
  iVar6 = DAT_2c4d4e5c;
  puVar12 = param_2 + 2;
  param_2[1] = uVar9 - 4;
  bVar16 = (byte)*(undefined4 *)(iVar6 + 0x10);
  *param_1 = ((byte)(uVar2 >> (uVar9 - 4 & 0xff)) | bVar13) & bVar16;
  uVar2 = param_2[1];
  uVar9 = 2 - uVar2;
  if ((int)uVar9 < 1) {
    uVar9 = *param_2;
    bVar13 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      bVar13 = 0;
    }
    else {
      bVar13 = (byte)(*param_2 << (uVar9 & 0xff));
    }
    uVar9 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar9;
    uVar2 = param_2[1] + 0x20;
  }
  param_2[1] = uVar2 - 2;
  uVar10 = *(uint *)(iVar6 + 8);
  bVar15 = (byte)uVar10;
  param_1[1] = ((byte)(uVar9 >> (uVar2 - 2 & 0xff)) | bVar13) & bVar15;
  uVar2 = param_2[1];
  uVar9 = 4 - uVar2;
  if ((int)uVar9 < 1) {
    uVar9 = *param_2;
    bVar13 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      bVar13 = 0;
    }
    else {
      bVar13 = (byte)(*param_2 << (uVar9 & 0xff));
    }
    uVar9 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar9;
    uVar2 = param_2[1] + 0x20;
  }
  param_2[1] = uVar2 - 4;
  param_1[2] = ((byte)(uVar9 >> (uVar2 - 4 & 0xff)) | bVar13) & bVar16;
  uVar2 = param_2[1];
  uVar9 = 4 - uVar2;
  if ((int)uVar9 < 1) {
    uVar9 = *param_2;
    bVar13 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      bVar13 = 0;
    }
    else {
      bVar13 = (byte)(*param_2 << (uVar9 & 0xff));
    }
    uVar9 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar9;
    uVar2 = param_2[1] + 0x20;
  }
  param_2[1] = uVar2 - 4;
  param_1[3] = ((byte)(uVar9 >> (uVar2 - 4 & 0xff)) | bVar13) & bVar16;
  uVar2 = param_2[1];
  uVar9 = 4 - uVar2;
  if ((int)uVar9 < 1) {
    uVar9 = *param_2;
    bVar13 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      bVar13 = 0;
    }
    else {
      bVar13 = (byte)(*param_2 << (uVar9 & 0xff));
    }
    uVar9 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar9;
    uVar2 = param_2[1] + 0x20;
  }
  param_2[1] = uVar2 - 4;
  param_1[4] = ((byte)(uVar9 >> (uVar2 - 4 & 0xff)) | bVar13) & bVar16;
  uVar2 = param_2[1];
  uVar9 = 4 - uVar2;
  if ((int)uVar9 < 1) {
    uVar9 = *param_2;
    bVar13 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      bVar13 = 0;
    }
    else {
      bVar13 = (byte)(*param_2 << (uVar9 & 0xff));
    }
    uVar9 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar9;
    uVar2 = param_2[1] + 0x20;
  }
  param_2[1] = uVar2 - 4;
  param_1[5] = ((byte)(uVar9 >> (uVar2 - 4 & 0xff)) | bVar13) & bVar16;
  uVar2 = param_2[1];
  uVar9 = 2 - uVar2;
  if ((int)uVar9 < 1) {
    uVar9 = *param_2;
    bVar13 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      bVar13 = 0;
    }
    else {
      bVar13 = (byte)(*param_2 << (uVar9 & 0xff));
    }
    uVar9 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar9;
    uVar2 = param_2[1] + 0x20;
  }
  param_2[1] = uVar2 - 2;
  param_1[6] = ((byte)(uVar9 >> (uVar2 - 2 & 0xff)) | bVar13) & bVar15;
  uVar2 = param_2[1];
  uVar9 = 3 - uVar2;
  if ((int)uVar9 < 1) {
    uVar9 = *param_2;
    bVar13 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      bVar13 = 0;
    }
    else {
      bVar13 = (byte)(*param_2 << (uVar9 & 0xff));
    }
    uVar9 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar9;
    uVar2 = param_2[1] + 0x20;
  }
  param_2[1] = uVar2 - 3;
  param_1[7] = ((byte)(uVar9 >> (uVar2 - 3 & 0xff)) | bVar13) & (byte)*(undefined4 *)(iVar6 + 0xc);
  uVar2 = param_2[1];
  uVar9 = 4 - uVar2;
  if ((int)uVar9 < 1) {
    uVar9 = *param_2;
    bVar13 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      bVar13 = 0;
    }
    else {
      bVar13 = (byte)(*param_2 << (uVar9 & 0xff));
    }
    uVar9 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar9;
    uVar2 = param_2[1] + 0x20;
  }
  param_2[1] = uVar2 - 4;
  param_1[8] = ((byte)(uVar9 >> (uVar2 - 4 & 0xff)) | bVar13) & bVar16;
  uVar2 = param_2[1];
  uVar9 = 1 - uVar2;
  if ((int)uVar9 < 1) {
    uVar3 = *param_2;
    uVar9 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = *param_2 << (uVar9 & 0xff);
    }
    uVar3 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar3;
    uVar2 = param_2[1] + 0x20;
  }
  param_2[1] = uVar2 - 1;
  uVar14 = *(uint *)(iVar6 + 4);
  uVar2 = (uVar3 >> (uVar2 - 1 & 0xff) | uVar9) & uVar14;
  param_1[9] = (byte)uVar2;
  if ((uVar2 & 0xff) != 0) {
    uVar2 = param_2[1];
    uVar9 = 4 - uVar2;
    if ((int)uVar9 < 1) {
      uVar9 = *param_2;
      bVar13 = 0;
    }
    else {
      if (uVar9 == 0x20) {
        bVar13 = 0;
      }
      else {
        bVar13 = (byte)(*param_2 << (uVar9 & 0xff));
      }
      uVar9 = FUN_2c4d74d4(puVar12);
      *param_2 = uVar9;
      uVar2 = param_2[1] + 0x20;
    }
    param_2[1] = uVar2 - 4;
    param_1[10] = ((byte)(uVar9 >> (uVar2 - 4 & 0xff)) | bVar13) & bVar16;
  }
  uVar2 = param_2[1];
  uVar9 = 1 - uVar2;
  if ((int)uVar9 < 1) {
    uVar3 = *param_2;
    uVar9 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = *param_2 << (uVar9 & 0xff);
    }
    uVar3 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar3;
    uVar2 = param_2[1] + 0x20;
  }
  param_2[1] = uVar2 - 1;
  uVar2 = (uVar3 >> (uVar2 - 1 & 0xff) | uVar9) & uVar14;
  param_1[0xb] = (byte)uVar2;
  if ((uVar2 & 0xff) != 0) {
    uVar2 = param_2[1];
    uVar9 = 4 - uVar2;
    if ((int)uVar9 < 1) {
      uVar9 = *param_2;
      bVar13 = 0;
    }
    else {
      if (uVar9 == 0x20) {
        bVar13 = 0;
      }
      else {
        bVar13 = (byte)(*param_2 << (uVar9 & 0xff));
      }
      uVar9 = FUN_2c4d74d4(puVar12);
      *param_2 = uVar9;
      uVar2 = param_2[1] + 0x20;
    }
    param_2[1] = uVar2 - 4;
    param_1[0xc] = ((byte)(uVar9 >> (uVar2 - 4 & 0xff)) | bVar13) & bVar16;
  }
  uVar2 = param_2[1];
  uVar9 = 1 - uVar2;
  if ((int)uVar9 < 1) {
    uVar3 = *param_2;
    uVar9 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = *param_2 << (uVar9 & 0xff);
    }
    uVar3 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar3;
    uVar2 = param_2[1] + 0x20;
  }
  param_2[1] = uVar2 - 1;
  uVar2 = (uVar3 >> (uVar2 - 1 & 0xff) | uVar9) & uVar14;
  param_1[0xd] = (byte)uVar2;
  bVar13 = (byte)uVar14;
  if ((uVar2 & 0xff) != 0) {
    uVar2 = param_2[1];
    uVar9 = 2 - uVar2;
    if ((int)uVar9 < 1) {
      uVar9 = *param_2;
      bVar17 = 0;
    }
    else {
      if (uVar9 == 0x20) {
        bVar17 = 0;
      }
      else {
        bVar17 = (byte)(*param_2 << (uVar9 & 0xff));
      }
      uVar9 = FUN_2c4d74d4(puVar12);
      *param_2 = uVar9;
      uVar2 = param_2[1] + 0x20;
    }
    param_2[1] = uVar2 - 2;
    param_1[0xe] = ((byte)(uVar9 >> (uVar2 - 2 & 0xff)) | bVar17) & bVar15;
    uVar2 = param_2[1];
    uVar9 = 1 - uVar2;
    if ((int)uVar9 < 1) {
      uVar9 = *param_2;
      bVar15 = 0;
    }
    else {
      if (uVar9 == 0x20) {
        bVar15 = 0;
      }
      else {
        bVar15 = (byte)(*param_2 << (uVar9 & 0xff));
      }
      uVar9 = FUN_2c4d74d4(puVar12);
      *param_2 = uVar9;
      uVar2 = param_2[1] + 0x20;
    }
    param_2[1] = uVar2 - 1;
    param_1[0xf] = ((byte)(uVar9 >> (uVar2 - 1 & 0xff)) | bVar15) & bVar13;
  }
  if (param_1[3] != 0) {
    pbVar18 = param_1 + 0xf;
    do {
      uVar9 = param_2[1];
      uVar2 = 1 - uVar9;
      if ((int)uVar2 < 1) {
        uVar2 = *param_2;
        bVar15 = 0;
      }
      else {
        if (uVar2 == 0x20) {
          bVar15 = 0;
        }
        else {
          bVar15 = (byte)(*param_2 << (uVar2 & 0xff));
        }
        uVar2 = FUN_2c4d74d4(puVar12);
        *param_2 = uVar2;
        uVar9 = param_2[1] + 0x20;
      }
      param_2[1] = uVar9 - 1;
      pbVar18[1] = ((byte)(uVar2 >> (uVar9 - 1 & 0xff)) | bVar15) & bVar13;
      uVar9 = param_2[1];
      uVar2 = 4 - uVar9;
      if ((int)uVar2 < 1) {
        uVar2 = *param_2;
        bVar15 = 0;
      }
      else {
        if (uVar2 == 0x20) {
          bVar15 = 0;
        }
        else {
          bVar15 = (byte)(*param_2 << (uVar2 & 0xff));
        }
        uVar2 = FUN_2c4d74d4(puVar12);
        *param_2 = uVar2;
        uVar9 = param_2[1] + 0x20;
      }
      param_2[1] = uVar9 - 4;
      pbVar18[0x11] = ((byte)(uVar2 >> (uVar9 - 4 & 0xff)) | bVar15) & bVar16;
      pbVar18 = pbVar18 + 1;
      if (*pbVar18 == 0) {
        cVar7 = '\x01';
      }
      else {
        cVar7 = '\x02';
      }
      param_1[0xce] = param_1[0xce] + cVar7;
    } while ((int)(pbVar18 + (-0xf - (int)param_1)) < (int)(uint)param_1[3]);
  }
  if (param_1[4] != 0) {
    pbVar18 = param_1 + 0x3f;
    do {
      uVar9 = param_2[1];
      uVar2 = 1 - uVar9;
      if ((int)uVar2 < 1) {
        uVar2 = *param_2;
        bVar15 = 0;
      }
      else {
        if (uVar2 == 0x20) {
          bVar15 = 0;
        }
        else {
          bVar15 = (byte)(*param_2 << (uVar2 & 0xff));
        }
        uVar2 = FUN_2c4d74d4(puVar12);
        *param_2 = uVar2;
        uVar9 = param_2[1] + 0x20;
      }
      param_2[1] = uVar9 - 1;
      pbVar18[1] = ((byte)(uVar2 >> (uVar9 - 1 & 0xff)) | bVar15) & bVar13;
      uVar9 = param_2[1];
      uVar2 = 4 - uVar9;
      if ((int)uVar2 < 1) {
        uVar2 = *param_2;
        bVar15 = 0;
      }
      else {
        if (uVar2 == 0x20) {
          bVar15 = 0;
        }
        else {
          bVar15 = (byte)(*param_2 << (uVar2 & 0xff));
        }
        uVar2 = FUN_2c4d74d4(puVar12);
        *param_2 = uVar2;
        uVar9 = param_2[1] + 0x20;
      }
      param_2[1] = uVar9 - 4;
      pbVar18[0x11] = ((byte)(uVar2 >> (uVar9 - 4 & 0xff)) | bVar15) & bVar16;
      pbVar18 = pbVar18 + 1;
      if (*pbVar18 == 0) {
        cVar7 = '\x01';
      }
      else {
        cVar7 = '\x02';
      }
      param_1[0xce] = param_1[0xce] + cVar7;
    } while ((int)(pbVar18 + (-0x3f - (int)param_1)) < (int)(uint)param_1[4]);
  }
  if (param_1[5] == 0) {
    bVar15 = param_1[0xce];
  }
  else {
    pbVar18 = param_1 + 0x6f;
    do {
      uVar9 = param_2[1];
      uVar2 = 1 - uVar9;
      if ((int)uVar2 < 1) {
        uVar2 = *param_2;
        bVar15 = 0;
      }
      else {
        if (uVar2 == 0x20) {
          bVar15 = 0;
        }
        else {
          bVar15 = (byte)(*param_2 << (uVar2 & 0xff));
        }
        uVar2 = FUN_2c4d74d4(puVar12);
        *param_2 = uVar2;
        uVar9 = param_2[1] + 0x20;
      }
      param_2[1] = uVar9 - 1;
      pbVar18[1] = ((byte)(uVar2 >> (uVar9 - 1 & 0xff)) | bVar15) & bVar13;
      uVar9 = param_2[1];
      uVar2 = 4 - uVar9;
      if ((int)uVar2 < 1) {
        uVar2 = *param_2;
        bVar15 = 0;
      }
      else {
        if (uVar2 == 0x20) {
          bVar15 = 0;
        }
        else {
          bVar15 = (byte)(*param_2 << (uVar2 & 0xff));
        }
        uVar2 = FUN_2c4d74d4(puVar12);
        *param_2 = uVar2;
        uVar9 = param_2[1] + 0x20;
      }
      param_2[1] = uVar9 - 4;
      pbVar18[0x11] = ((byte)(uVar2 >> (uVar9 - 4 & 0xff)) | bVar15) & bVar16;
      pbVar18 = pbVar18 + 1;
      if (*pbVar18 == 0) {
        cVar7 = '\x01';
      }
      else {
        cVar7 = '\x02';
      }
      bVar15 = param_1[0xce] + cVar7;
      param_1[0xce] = bVar15;
    } while ((int)(pbVar18 + (-0x6f - (int)param_1)) < (int)(uint)param_1[5]);
  }
  param_1[0xcf] = bVar15;
  if (param_1[6] != 0) {
    pbVar18 = param_1 + 0x9f;
    do {
      uVar2 = param_2[1];
      uVar9 = 4 - uVar2;
      if ((int)uVar9 < 1) {
        uVar9 = *param_2;
        bVar15 = 0;
      }
      else {
        if (uVar9 == 0x20) {
          bVar15 = 0;
        }
        else {
          bVar15 = (byte)(*param_2 << (uVar9 & 0xff));
        }
        uVar9 = FUN_2c4d74d4(puVar12);
        *param_2 = uVar9;
        uVar2 = param_2[1] + 0x20;
      }
      param_2[1] = uVar2 - 4;
      pbVar11 = pbVar18 + (-0x9e - (int)param_1);
      pbVar18[1] = ((byte)(uVar9 >> (uVar2 - 4 & 0xff)) | bVar15) & bVar16;
      param_1[0xce] = param_1[0xce] + 1;
      pbVar18 = pbVar18 + 1;
    } while ((int)pbVar11 < (int)(uint)param_1[6]);
  }
  if (param_1[7] != 0) {
    pbVar18 = param_1 + 0xa3;
    do {
      uVar2 = param_2[1];
      uVar9 = 4 - uVar2;
      if ((int)uVar9 < 1) {
        uVar9 = *param_2;
        bVar15 = 0;
      }
      else {
        if (uVar9 == 0x20) {
          bVar15 = 0;
        }
        else {
          bVar15 = (byte)(*param_2 << (uVar9 & 0xff));
        }
        uVar9 = FUN_2c4d74d4(puVar12);
        *param_2 = uVar9;
        uVar2 = param_2[1] + 0x20;
      }
      param_2[1] = uVar2 - 4;
      pbVar11 = pbVar18 + (-0xa2 - (int)param_1);
      pbVar18[1] = ((byte)(uVar9 >> (uVar2 - 4 & 0xff)) | bVar15) & bVar16;
      pbVar18 = pbVar18 + 1;
    } while ((int)pbVar11 < (int)(uint)param_1[7]);
  }
  if (param_1[8] != 0) {
    pbVar18 = param_1 + 0xab;
    do {
      uVar2 = param_2[1];
      uVar9 = 1 - uVar2;
      if ((int)uVar9 < 1) {
        uVar9 = *param_2;
        bVar15 = 0;
      }
      else {
        if (uVar9 == 0x20) {
          bVar15 = 0;
        }
        else {
          bVar15 = (byte)(*param_2 << (uVar9 & 0xff));
        }
        uVar9 = FUN_2c4d74d4(puVar12);
        *param_2 = uVar9;
        uVar2 = param_2[1] + 0x20;
      }
      param_2[1] = uVar2 - 1;
      pbVar18[1] = ((byte)(uVar9 >> (uVar2 - 1 & 0xff)) | bVar15) & bVar13;
      uVar2 = param_2[1];
      uVar9 = 4 - uVar2;
      if ((int)uVar9 < 1) {
        uVar9 = *param_2;
        bVar15 = 0;
      }
      else {
        if (uVar9 == 0x20) {
          bVar15 = 0;
        }
        else {
          bVar15 = (byte)(*param_2 << (uVar9 & 0xff));
        }
        uVar9 = FUN_2c4d74d4(puVar12);
        *param_2 = uVar9;
        uVar2 = param_2[1] + 0x20;
      }
      param_2[1] = uVar2 - 4;
      pbVar11 = pbVar18 + (-0xaa - (int)param_1);
      pbVar18[0x11] = ((byte)(uVar9 >> (uVar2 - 4 & 0xff)) | bVar15) & bVar16;
      pbVar18 = pbVar18 + 1;
    } while ((int)pbVar11 < (int)(uint)param_1[8]);
  }
  if (param_2[9] == 0) {
    FUN_2c4d766c(puVar12,param_2[1]);
    uVar2 = param_2[9];
LAB_2c4d549c:
    *param_2 = 0;
    param_2[1] = 0;
    if (uVar2 != 0) goto LAB_2c4d51f8;
    iVar4 = FUN_2c4d76a8(puVar12);
    FUN_2c4d768c(puVar12,iVar4 - param_3 & 7,(char)param_2[9]);
  }
  else {
    if (param_2[1] != 0) {
      FUN_2c4d7598(puVar12,*param_2);
      uVar2 = param_2[9];
      goto LAB_2c4d549c;
    }
    *param_2 = 0;
LAB_2c4d51f8:
    iVar4 = FUN_2c4d76a8(puVar12);
    FUN_2c4d7598(puVar12,0,param_3 - iVar4 & 7);
  }
  uVar2 = param_2[1];
  uVar9 = 8 - uVar2;
  if ((int)uVar9 < 1) {
    uVar9 = *param_2;
    bVar13 = 0;
  }
  else {
    if (uVar9 == 0x20) {
      bVar13 = 0;
    }
    else {
      bVar13 = (byte)(*param_2 << (uVar9 & 0xff));
    }
    uVar9 = FUN_2c4d74d4(puVar12);
    *param_2 = uVar9;
    uVar2 = param_2[1] + 0x20;
  }
  uVar3 = *(uint *)(iVar6 + 0x20);
  param_2[1] = uVar2 - 8;
  bVar13 = ((byte)(uVar9 >> (uVar2 - 8 & 0xff)) | bVar13) & (byte)uVar3;
  param_1[0xcc] = bVar13;
  FUN_2c4d8244(auStack_74,7,0xff,8);
  uVar5 = FUN_2c4d82e0(auStack_74,param_2,0);
  if (param_2[9] == 0) {
    FUN_2c4d766c(puVar12,param_2[1]);
  }
  else if (param_2[1] != 0) {
    FUN_2c4d7598(puVar12,*param_2);
  }
  uVar14 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = FUN_2c4d76a8(puVar12);
  uVar9 = param_2[1];
  if ((uVar2 < 0x18) || (bVar13 < 3)) {
LAB_2c4d5296:
    if (param_2[9] == 0) {
      FUN_2c4d766c(puVar12,uVar9);
    }
    else if (uVar9 != 0) {
      FUN_2c4d7598(puVar12,*param_2,uVar9);
    }
    *param_2 = 0;
    param_2[1] = 0;
    iVar6 = FUN_2c4d76a8(puVar12);
    uVar9 = param_2[1];
    uVar10 = param_2[9];
    uVar3 = (uVar2 - iVar6) + uVar9;
    if (uVar3 < 0x20) {
      if (uVar10 == 0) {
        param_2[1] = uVar3;
        FUN_2c4d766c(puVar12,uVar3);
        *param_2 = 0;
        param_2[1] = 0;
        bVar16 = 1;
        if (param_2[9] == 0) {
          FUN_2c4d766c(puVar12,0,0);
          bVar16 = 1;
        }
        goto LAB_2c4d52f4;
      }
LAB_2c4d52c6:
      if (uVar9 != 0) {
        FUN_2c4d7598(puVar12,*param_2,uVar9);
        uVar10 = param_2[9];
      }
    }
    else {
      if (uVar10 != 0) goto LAB_2c4d52c6;
      FUN_2c4d766c(puVar12);
      uVar10 = param_2[9];
    }
    bVar16 = 1;
    *param_2 = 0;
    param_2[1] = 0;
    FUN_2c4d766c(puVar12,uVar2 - iVar6,uVar10 & 0xff);
  }
  else {
    uVar8 = 8 - uVar9;
    if ((int)uVar8 < 1) {
      uVar8 = *param_2;
    }
    else {
      if (uVar8 != 0x20) {
        uVar14 = *param_2 << (uVar8 & 0xff);
      }
      uVar8 = FUN_2c4d74d4(puVar12);
      *param_2 = uVar8;
      uVar9 = param_2[1] + 0x20;
    }
    uVar9 = uVar9 - 8;
    param_2[1] = uVar9;
    if (((uVar8 >> (uVar9 & 0xff) | uVar14) & uVar3) != 0xac) goto LAB_2c4d5296;
    if (param_1[3] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      pbVar18 = param_1;
      while( true ) {
        uVar14 = 2 - uVar9;
        if ((int)uVar14 < 1) {
          uVar8 = *param_2;
          uVar14 = 0;
        }
        else {
          if (uVar14 == 0x20) {
            uVar14 = 0;
          }
          else {
            uVar14 = *param_2 << (uVar14 & 0xff);
          }
          uVar8 = FUN_2c4d74d4(puVar12);
          *param_2 = uVar8;
          uVar9 = param_2[1] + 0x20;
        }
        param_2[1] = uVar9 - 2;
        uVar9 = (uVar8 >> (uVar9 - 2 & 0xff) | uVar14) & uVar10;
        pbVar18[0x30] = (byte)uVar9;
        if (2 < (uVar9 & 0xff)) {
          iVar6 = -2;
        }
        if ((int)(uint)param_1[3] <= (int)(pbVar18 + 1) - (int)param_1) break;
        uVar9 = param_2[1];
        pbVar18 = pbVar18 + 1;
      }
      uVar9 = param_2[1];
    }
    pbVar18 = param_1;
    if (param_1[4] != 0) {
      while( true ) {
        uVar14 = 2 - uVar9;
        if ((int)uVar14 < 1) {
          uVar8 = *param_2;
          uVar14 = 0;
        }
        else {
          if (uVar14 == 0x20) {
            uVar14 = 0;
          }
          else {
            uVar14 = *param_2 << (uVar14 & 0xff);
          }
          uVar8 = FUN_2c4d74d4(puVar12);
          *param_2 = uVar8;
          uVar9 = param_2[1] + 0x20;
        }
        param_2[1] = uVar9 - 2;
        uVar9 = (uVar8 >> (uVar9 - 2 & 0xff) | uVar14) & uVar10;
        pbVar18[0x60] = (byte)uVar9;
        if (2 < (uVar9 & 0xff)) {
          iVar6 = -2;
        }
        if ((int)(uint)param_1[4] <= (int)(pbVar18 + 1) - (int)param_1) break;
        uVar9 = param_2[1];
        pbVar18 = pbVar18 + 1;
      }
      uVar9 = param_2[1];
    }
    pbVar18 = param_1;
    if (param_1[5] != 0) {
      while( true ) {
        uVar14 = 2 - uVar9;
        if ((int)uVar14 < 1) {
          uVar8 = *param_2;
          uVar14 = 0;
        }
        else {
          if (uVar14 == 0x20) {
            uVar14 = 0;
          }
          else {
            uVar14 = *param_2 << (uVar14 & 0xff);
          }
          uVar8 = FUN_2c4d74d4(puVar12);
          *param_2 = uVar8;
          uVar9 = param_2[1] + 0x20;
        }
        param_2[1] = uVar9 - 2;
        uVar9 = (uVar8 >> (uVar9 - 2 & 0xff) | uVar14) & uVar10;
        pbVar18[0x90] = (byte)uVar9;
        if (2 < (uVar9 & 0xff)) {
          iVar6 = -2;
        }
        if ((int)(uint)param_1[5] <= (int)(pbVar18 + 1) - (int)param_1) break;
        uVar9 = param_2[1];
        pbVar18 = pbVar18 + 1;
      }
      uVar9 = param_2[1];
    }
    if (param_2[9] == 0) {
      FUN_2c4d766c(puVar12,uVar9);
      uVar9 = param_2[9];
LAB_2c4d583a:
      *param_2 = 0;
      param_2[1] = 0;
      if (uVar9 != 0) goto LAB_2c4d57a4;
      iVar4 = FUN_2c4d76a8(puVar12);
      FUN_2c4d768c(puVar12,iVar4 - param_3 & 7,(char)param_2[9]);
    }
    else {
      if (uVar9 != 0) {
        FUN_2c4d7598(puVar12,*param_2,uVar9);
        uVar9 = param_2[9];
        goto LAB_2c4d583a;
      }
      *param_2 = 0;
      param_2[1] = 0;
LAB_2c4d57a4:
      iVar4 = FUN_2c4d76a8(puVar12);
      FUN_2c4d7598(puVar12,0,param_3 - iVar4 & 7);
    }
    FUN_2c4d835c(auStack_74,param_2,uVar5);
    uVar9 = param_2[1];
    uVar10 = 8 - uVar9;
    if ((int)uVar10 < 1) {
      uVar14 = *param_2;
      uVar10 = 0;
    }
    else {
      if (uVar10 == 0x20) {
        uVar10 = 0;
      }
      else {
        uVar10 = *param_2 << (uVar10 & 0xff);
      }
      uVar14 = FUN_2c4d74d4(puVar12);
      *param_2 = uVar14;
      uVar9 = param_2[1] + 0x20;
    }
    param_2[1] = uVar9 - 8;
    uVar8 = FUN_2c4d8838(auStack_74);
    if ((((uVar14 >> (uVar9 - 8 & 0xff) | uVar10) & uVar3 & 0xffff) == uVar8) && (iVar6 == 0)) {
      bVar16 = 1;
    }
    else {
      bVar16 = 0;
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
    FUN_2c4d766c(puVar12,param_2[1],0);
  }
  else if (param_2[1] != 0) {
    FUN_2c4d7598(puVar12,*param_2);
  }
LAB_2c4d52f4:
  iVar4 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar6 = FUN_2c4d76a8(puVar12);
  iVar6 = (uint)bVar13 - ((int)(uVar2 - iVar6) >> 3);
  if (0 < iVar6) {
    uVar2 = param_2[1];
    do {
      if (0 < (int)(8 - uVar2)) {
        uVar2 = FUN_2c4d74d4(puVar12);
        *param_2 = uVar2;
        uVar2 = param_2[1] + 0x20;
      }
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 - 8;
      param_2[1] = uVar2;
    } while (iVar4 != iVar6);
  }
  piVar1 = DAT_2c4d563c;
  param_1[0xcd] = bVar16;
  if (*piVar1 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

