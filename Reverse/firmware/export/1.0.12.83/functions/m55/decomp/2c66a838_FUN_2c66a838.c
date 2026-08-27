/* FUN_2c66a838 @ 0x2c66a838 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c66a8b6) */
/* WARNING: Removing unreachable block (ram,0x2c66aac6) */
/* WARNING: Removing unreachable block (ram,0x2c66a8a2) */
/* WARNING: Removing unreachable block (ram,0x2c66abe2) */
/* WARNING: Removing unreachable block (ram,0x2c66abf6) */
/* WARNING: Removing unreachable block (ram,0x2c66ac00) */
/* WARNING: Removing unreachable block (ram,0x2c66ac04) */

undefined4 FUN_2c66a838(undefined4 param_1,uint *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  uint *local_38;
  
  uVar5 = 0;
  if (0x15c < param_2[2] - 1) {
    param_2[2] = 0x15d;
  }
  puVar9 = param_2 + 7;
  *param_2 = *param_2 | 0x780;
  puVar6 = puVar9;
LAB_2c66a882:
  do {
    puVar7 = puVar6;
    if (param_2[2] == 0) break;
    uVar2 = (uint)*(byte *)*param_3;
    if (uVar2 < 0x4f) {
      if (uVar2 < 0x41) {
        if ((uVar2 - 0x2b & 0xff) < 0xf) {
          switch(uVar2 - 0x2b) {
          case 0:
          case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 1:
          case 4:
            goto switchD_2c66a918_caseD_1;
          case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
      else {
        iVar3 = -0x41;
LAB_2c66a8ca:
        switch(uVar2 + iVar3) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
switchD_2c66a918_caseD_1:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      break;
    }
    if (uVar2 < 0x6f) {
      if (0x60 < uVar2) {
        iVar3 = -0x61;
        goto LAB_2c66a8ca;
      }
      if (uVar2 == 0x54) goto LAB_2c66aa54;
      bVar10 = uVar2 == 0x59;
LAB_2c66a966:
      if ((!bVar10) || (uVar5 != 7)) break;
      uVar5 = 8;
    }
    else {
      if (uVar2 != 0x74) {
        bVar10 = uVar2 == 0x79;
        goto LAB_2c66a966;
      }
LAB_2c66aa54:
      if (uVar5 != 6) break;
      uVar5 = 7;
    }
    puVar7 = (uint *)((int)puVar6 + 1);
    *(byte *)puVar6 = *(byte *)*param_3;
    param_2[2] = param_2[2] - 1;
    param_2[4] = param_2[4] + 1;
    iVar3 = param_3[1];
    param_3[1] = iVar3 + -1;
    puVar6 = puVar7;
    if (0 < iVar3 + -1) {
      *param_3 = *param_3 + 1;
      goto LAB_2c66a882;
    }
    iVar3 = (*(code *)param_2[0x60])(param_1,param_3);
  } while (iVar3 == 0);
  if (uVar5 - 1 < 7) {
    uVar2 = uVar5;
    local_38 = puVar7;
    if (uVar5 < 3) {
      while (puVar9 < puVar7) {
        puVar7 = (uint *)((int)puVar7 + -1);
        (*(code *)param_2[0x5f])(param_1,*(byte *)puVar7,param_3);
        param_2[4] = param_2[4] - 1;
      }
      return 1;
    }
    while (uVar2 = uVar2 - 1 & 0xff, uVar2 != 2) {
      (*(code *)param_2[0x5f])(param_1,*(byte *)((int)local_38 + -1),param_3);
      param_2[4] = param_2[4] - 1;
      local_38 = (uint *)((int)local_38 + -1);
    }
    puVar7 = (uint *)((int)puVar7 - (uVar5 - 3 & 0xff));
  }
  puVar6 = puVar7;
  if ((int)(*param_2 << 0x17) < 0) {
    if ((int)(*param_2 << 0x15) < 0) {
      while (puVar9 < puVar7) {
        puVar7 = (uint *)((int)puVar7 + -1);
        (*(code *)param_2[0x5f])(param_1,*(byte *)puVar7,param_3);
        param_2[4] = param_2[4] - 1;
      }
      return 1;
    }
    bVar1 = *(byte *)((int)puVar7 + -1);
    puVar6 = (uint *)((int)puVar7 + -1);
    param_2[4] = param_2[4] - 1;
    if ((bVar1 != 0x65) && (bVar1 != 0x45)) {
      puVar6 = (uint *)((int)puVar7 + -2);
      (*(code *)param_2[0x5f])(param_1,bVar1,param_3);
      bVar1 = *(byte *)((int)puVar7 + -2);
      param_2[4] = param_2[4] - 1;
    }
    (*(code *)param_2[0x5f])(param_1,bVar1,param_3);
  }
  if ((*param_2 & 0x10) != 0) {
    return 0;
  }
  *(byte *)puVar6 = 0;
  dVar12 = (double)FUN_2c66d1ac(param_1,puVar9,0);
  uVar5 = *param_2;
  puVar4 = (undefined4 *)*param_4;
  if ((uVar5 & 2) == 0) {
    *param_4 = (int)(puVar4 + 1);
    if ((uVar5 & 4) == 0) {
      pfVar8 = (float *)*puVar4;
      if (NAN(dVar12) || NAN(dVar12)) {
        fVar11 = (float)FUN_2c668468(DAT_2c66ac40);
      }
      else {
        fVar11 = (float)dVar12;
      }
      *pfVar8 = fVar11;
      goto LAB_2c66abd4;
    }
  }
  else {
    *param_4 = (int)(puVar4 + 1);
  }
  *(double *)*puVar4 = dVar12;
LAB_2c66abd4:
  param_2[3] = param_2[3] + 1;
  return 0;
}

