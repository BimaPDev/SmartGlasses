/* FUN_2c62d4fc @ 0x2c62d4fc */

uint FUN_2c62d4fc(code *param_1,int param_2,uint param_3,char *param_4,uint *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  char *pcVar12;
  uint *puVar13;
  int *piVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  bool bVar18;
  ulonglong uVar19;
  uint local_40;
  
  if (param_2 == 0) {
    param_1 = DAT_2c62d734;
  }
  iVar2 = (int)*param_4;
  iVar4 = *DAT_2c62d738;
  if (iVar2 == 0) {
    uVar16 = 0;
LAB_2c62d54a:
    uVar7 = uVar16;
    if (param_3 <= uVar16) {
      uVar7 = param_3 - 1;
    }
    (*param_1)(0,param_2,uVar7,param_3);
    if (*DAT_2c62d738 == iVar4) {
      return uVar16;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  uVar7 = 0;
LAB_2c62d52e:
  puVar11 = param_5;
  if (iVar2 == 0x25) {
    uVar16 = 0;
    param_4 = param_4 + 1;
    do {
      pcVar5 = param_4 + 1;
      iVar2 = (int)*param_4;
      switch(iVar2) {
      case 0x20:
        uVar16 = uVar16 | 8;
        param_4 = pcVar5;
        break;
      default:
        goto switchD_2c62d58a_caseD_21;
      case 0x23:
        uVar16 = uVar16 | 0x10;
        param_4 = pcVar5;
        break;
      case 0x2b:
        uVar16 = uVar16 | 4;
        param_4 = pcVar5;
        break;
      case 0x2d:
        uVar16 = uVar16 | 2;
        param_4 = pcVar5;
        break;
      case 0x30:
        uVar16 = uVar16 | 1;
        param_4 = pcVar5;
      }
    } while( true );
  }
  param_4 = param_4 + 1;
  (*param_1)(iVar2,param_2,uVar7,param_3);
  uVar16 = uVar7 + 1;
  goto LAB_2c62d540;
switchD_2c62d58a_caseD_21:
  if ((iVar2 - 0x30U & 0xff) < 10) {
    uVar8 = 0;
    do {
      iVar9 = iVar2 + uVar8 * 10;
      param_4 = param_4 + 1;
      iVar2 = (int)*param_4;
      uVar8 = iVar9 - 0x30;
    } while ((iVar2 - 0x30U & 0xff) < 10);
LAB_2c62d5b4:
    pcVar5 = param_4;
    if (iVar2 != 0x2e) goto LAB_2c62d5ba;
LAB_2c62d6e2:
    iVar2 = (int)pcVar5[1];
    uVar16 = uVar16 | 0x400;
    param_4 = pcVar5 + 1;
    if ((iVar2 - 0x30U & 0xff) < 10) {
      uVar10 = 0;
      do {
        uVar10 = (iVar2 + uVar10 * 10) - 0x30;
        param_4 = param_4 + 1;
        iVar2 = (int)*param_4;
      } while ((iVar2 - 0x30U & 0xff) < 10);
    }
    else {
      if (iVar2 != 0x2a) goto LAB_2c62d5ba;
      param_4 = pcVar5 + 2;
      iVar2 = (int)*param_4;
      uVar10 = *puVar11 & ~((int)*puVar11 >> 0x1f);
      puVar11 = puVar11 + 1;
    }
  }
  else {
    if (iVar2 != 0x2a) {
      uVar8 = 0;
      goto LAB_2c62d5b4;
    }
    puVar11 = param_5 + 1;
    uVar8 = *param_5;
    if ((int)uVar8 < 0) {
      uVar16 = uVar16 | 2;
      uVar8 = -uVar8;
    }
    iVar2 = (int)param_4[1];
    param_4 = param_4 + 1;
    pcVar5 = param_4;
    if (iVar2 == 0x2e) goto LAB_2c62d6e2;
LAB_2c62d5ba:
    uVar10 = 0;
  }
  switch(iVar2) {
  case 0x68:
    iVar2 = (int)param_4[1];
    if (iVar2 == 0x68) {
      iVar2 = (int)param_4[2];
      uVar16 = uVar16 | 0xc0;
      param_4 = param_4 + 2;
    }
    else {
      uVar16 = uVar16 | 0x80;
      param_4 = param_4 + 1;
    }
    break;
  case 0x6a:
    iVar2 = (int)param_4[1];
    uVar16 = uVar16 | 0x200;
    param_4 = param_4 + 1;
    break;
  case 0x6c:
    iVar2 = (int)param_4[1];
    if (iVar2 == 0x6c) {
      iVar2 = (int)param_4[2];
      uVar16 = uVar16 | 0x300;
      param_4 = param_4 + 2;
    }
    else {
      uVar16 = uVar16 | 0x100;
      param_4 = param_4 + 1;
    }
    break;
  case 0x74:
  case 0x7a:
    iVar2 = (int)param_4[1];
    uVar16 = uVar16 | 0x100;
    param_4 = param_4 + 1;
  }
  bVar1 = (byte)iVar2;
  switch(iVar2) {
  case 0x25:
    uVar16 = uVar7 + 1;
    param_4 = param_4 + 1;
    (*param_1)(0x25,param_2,uVar7,param_3);
    break;
  default:
    param_4 = param_4 + 1;
    (*param_1)(iVar2,param_2,uVar7,param_3);
    uVar16 = uVar7 + 1;
    break;
  case 0x45:
  case 0x47:
  case 0x65:
  case 0x67:
    puVar15 = (undefined8 *)((int)puVar11 + 7U & 0xfffffff8);
    param_4 = param_4 + 1;
    if ((bVar1 & 0xdf) == 0x47) {
      uVar16 = uVar16 | 0x800;
    }
    if ((bVar1 & 0xfd) == 0x45) {
      uVar16 = uVar16 | 0x20;
    }
    puVar11 = (uint *)(puVar15 + 1);
    uVar16 = FUN_2c62ce58((int)*puVar15,param_1,param_2,uVar7,param_3,uVar10,uVar8,uVar16);
    break;
  case 0x46:
  case 0x66:
    if (iVar2 == 0x46) {
      uVar16 = uVar16 | 0x20;
    }
    puVar15 = (undefined8 *)((int)puVar11 + 7U & 0xfffffff8);
    param_4 = param_4 + 1;
    puVar11 = (uint *)(puVar15 + 1);
    uVar16 = FUN_2c62d190((int)*puVar15,param_1,param_2,uVar7,param_3,uVar10,uVar8,uVar16);
    break;
  case 0x50:
  case 0x58:
  case 0x62:
  case 100:
  case 0x69:
  case 0x6f:
  case 0x70:
  case 0x75:
  case 0x78:
    if ((bVar1 & 0xdf) == 0x58) {
LAB_2c62d97a:
      if ((bVar1 & 0xf7) == 0x50) {
        uVar16 = uVar16 | 0x20;
        uVar17 = 0x10;
        goto LAB_2c62d98e;
      }
      uVar17 = 0x10;
LAB_2c62d762:
      if ((iVar2 != 0x69) && (iVar2 != 100)) goto LAB_2c62d98e;
      uVar6 = uVar16;
      if ((uVar16 & 0x400) != 0) goto LAB_2c62d772;
LAB_2c62d776:
      if ((iVar2 != 0x69) && (uVar6 = uVar16, iVar2 != 100)) goto LAB_2c62d782;
      if ((uVar16 & 0x200) == 0) {
        if ((uVar16 & 0x100) != 0) {
          puVar13 = puVar11 + 1;
          uVar6 = *puVar11;
          uVar3 = uVar6 >> 0x1f;
          if ((int)uVar6 < 0) {
            uVar6 = -uVar6;
          }
          uVar16 = FUN_2c62ccc0(param_1,param_2,uVar7,param_3,uVar6,uVar3,uVar17,uVar10,uVar8,uVar16
                               );
          goto LAB_2c62d9da;
        }
        uVar6 = *puVar11;
        if ((uVar16 & 0x40) == 0) {
          if ((uVar16 & 0x80) != 0) {
            uVar6 = (uint)(short)uVar6;
          }
        }
        else {
          uVar6 = (uint)(char)uVar6;
        }
        uVar3 = uVar6 >> 0x1f;
        if ((int)uVar6 < 0) {
          uVar6 = -uVar6;
        }
        uVar19 = CONCAT44(uVar3,uVar6);
LAB_2c62d9ce:
        puVar13 = puVar11 + 1;
        uVar16 = FUN_2c62ccc0(param_1,param_2,uVar7,param_3,uVar19,uVar17,uVar10,uVar8,uVar16);
      }
      else {
        piVar14 = (int *)((int)puVar11 + 7U & 0xfffffff8);
        uVar8 = piVar14[1];
        puVar13 = (uint *)(piVar14 + 2);
        iVar2 = *piVar14;
        uVar16 = uVar8 >> 0x1f;
        if ((int)uVar8 < 0) {
          bVar18 = iVar2 != 0;
          iVar2 = -iVar2;
          uVar8 = -uVar8 - (uint)bVar18;
        }
        uVar16 = FUN_2c62cd70(param_1,param_2,uVar7,param_3,iVar2,uVar8,uVar16);
      }
    }
    else {
      if ((bVar1 & 0xdf) == 0x50) {
        uVar16 = uVar16 | 0x110;
        if (param_4[1] != 'V') goto LAB_2c62d97a;
        param_4 = param_4 + 1;
        uVar17 = 0x10;
        iVar2 = 0x56;
      }
      else if (iVar2 == 0x6f) {
        uVar17 = 8;
      }
      else {
        if (iVar2 != 0x62) {
          uVar16 = uVar16 & 0xffffffef;
          uVar17 = 10;
          goto LAB_2c62d762;
        }
        uVar17 = 2;
      }
LAB_2c62d98e:
      uVar6 = uVar16 & 0xfffffff3;
      if ((int)(uVar16 << 0x15) < 0) {
LAB_2c62d772:
        uVar16 = uVar6 & 0xfffffffe;
        goto LAB_2c62d776;
      }
LAB_2c62d782:
      if (iVar2 == 0x56) {
        puVar13 = puVar11 + 1;
        iVar2 = FUN_2c62d4fc(param_1,param_2 + uVar7,param_3 - uVar7,*(undefined4 *)*puVar11);
        uVar16 = uVar7 + iVar2;
      }
      else if ((uVar6 & 0x200) == 0) {
        if ((uVar6 & 0x100) == 0) {
          uVar16 = *puVar11;
          if ((uVar6 & 0x40) == 0) {
            if ((uVar6 & 0x80) != 0) {
              uVar16 = uVar16 & 0xffff;
            }
          }
          else {
            uVar16 = uVar16 & 0xff;
          }
          uVar19 = (ulonglong)uVar16;
          uVar16 = uVar6;
          goto LAB_2c62d9ce;
        }
        puVar13 = puVar11 + 1;
        uVar16 = FUN_2c62ccc0(param_1,param_2,uVar7,param_3,*puVar11,0,uVar17,uVar10,uVar8,uVar6);
      }
      else {
        puVar15 = (undefined8 *)((int)puVar11 + 7U & 0xfffffff8);
        puVar13 = (uint *)(puVar15 + 1);
        uVar16 = FUN_2c62cd70(param_1,param_2,uVar7,param_3,*puVar15,0);
      }
    }
LAB_2c62d9da:
    param_4 = param_4 + 1;
    puVar11 = puVar13;
    break;
  case 99:
    if ((uVar16 & 2) == 0) {
      if (1 < uVar8) {
        uVar8 = uVar8 + (uVar7 - 1);
        uVar16 = uVar7;
        do {
          uVar10 = uVar16 + 1;
          (*param_1)(0x20,param_2,uVar16,param_3);
          uVar16 = uVar10;
          uVar7 = uVar8;
        } while (uVar10 != uVar8);
      }
      puVar13 = puVar11 + 1;
      (*param_1)((int)(char)*puVar11,param_2,uVar7,param_3);
      uVar16 = uVar7 + 1;
    }
    else {
      puVar13 = puVar11 + 1;
      (*param_1)((int)(char)*puVar11,param_2,uVar7,param_3);
      uVar16 = uVar7 + 1;
      if (1 < uVar8) {
        uVar16 = uVar7 + uVar8;
        uVar7 = uVar7 + 1;
        do {
          uVar8 = uVar7 + 1;
          (*param_1)(0x20,param_2,uVar7,param_3);
          uVar7 = uVar8;
        } while (uVar8 != uVar16);
      }
    }
    goto LAB_2c62d9da;
  case 0x73:
    pcVar5 = (char *)*puVar11;
    if (uVar10 == 0) {
      iVar2 = (int)*pcVar5;
      local_40 = uVar10;
      if (iVar2 != 0) {
        iVar9 = -2;
LAB_2c62d892:
        pcVar12 = pcVar5;
        do {
          pcVar12 = pcVar12 + 1;
          if (*pcVar12 == '\0') {
            local_40 = (int)pcVar12 - (int)pcVar5;
            goto LAB_2c62d8b2;
          }
        } while (pcVar5 + iVar9 + 1 != pcVar12);
        local_40 = (int)(pcVar5 + iVar9 + 1) - (int)pcVar5;
      }
    }
    else {
      iVar2 = (int)*pcVar5;
      if (iVar2 != 0) {
        iVar9 = uVar10 - 1;
        goto LAB_2c62d892;
      }
      local_40 = 0;
    }
LAB_2c62d8b2:
    if (((uVar16 & 0x400) != 0) && (uVar10 <= local_40)) {
      local_40 = uVar10;
    }
    if ((uVar16 & 2) == 0) {
      if (local_40 < uVar8) {
        iVar2 = uVar8 + uVar7;
        uVar6 = uVar7;
        do {
          uVar7 = uVar6 + 1;
          (*param_1)(0x20,param_2,uVar6,param_3);
          uVar6 = uVar7;
        } while (uVar7 != iVar2 - local_40);
        iVar2 = (int)*pcVar5;
        local_40 = uVar8;
      }
      local_40 = local_40 + 1;
      if (iVar2 != 0) {
LAB_2c62d8e2:
        do {
          uVar6 = uVar10;
          if (((uVar16 & 0x400) != 0) && (uVar6 = uVar10 - 1, uVar10 == 0)) break;
          (*param_1)(iVar2,param_2,uVar7,param_3);
          pcVar5 = pcVar5 + 1;
          iVar2 = (int)*pcVar5;
          uVar7 = uVar7 + 1;
          uVar10 = uVar6;
        } while (iVar2 != 0);
        uVar6 = uVar7;
        if ((uVar16 & 2) != 0) goto LAB_2c62daca;
      }
    }
    else {
      uVar6 = uVar7;
      if (iVar2 != 0) goto LAB_2c62d8e2;
LAB_2c62daca:
      uVar7 = uVar6;
      if (local_40 < uVar8) {
        uVar7 = (uVar8 + uVar6) - local_40;
        do {
          uVar16 = uVar6 + 1;
          (*param_1)(0x20,param_2,uVar6,param_3);
          uVar6 = uVar16;
        } while (uVar16 != uVar7);
      }
    }
    param_4 = param_4 + 1;
    uVar16 = uVar7;
    puVar11 = puVar11 + 1;
  }
LAB_2c62d540:
  iVar2 = (int)*param_4;
  uVar7 = uVar16;
  param_5 = puVar11;
  if (iVar2 == 0) goto LAB_2c62d54a;
  goto LAB_2c62d52e;
}

