/* FUN_100e333c @ 0x100e333c */

int FUN_100e333c(int param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined1 uVar9;
  undefined *puVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_4c [52];
  char *pcVar8;
  
  puVar6 = PTR_LAB_100e27c4_1_100e3614;
  puVar3 = PTR_LAB_100e280c_1_100e360c;
  puVar2 = PTR_LAB_100e2854_1_100e35fc;
  puVar10 = PTR_LAB_100e3178_1_100e35dc;
  cVar1 = *(char *)(param_1 + 0x11e);
  if (cVar1 == '\x02') goto switchD_100e339e_caseD_2;
  if (cVar1 == '\f') {
switchD_100e339e_caseD_c:
    *(undefined1 *)(param_1 + 0x11e) = 0xd;
    puVar6 = (undefined *)0x0;
    puVar10 = PTR_s_AT_CLIP_1_100e3604;
    goto LAB_100e33c2;
  }
  if (cVar1 == '\x0f') {
switchD_100e339e_caseD_f:
    *(undefined1 *)(param_1 + 0x11e) = 0x10;
    puVar10 = PTR_DAT_100e3618;
    goto LAB_100e33c2;
  }
  if (cVar1 == '\v') {
switchD_100e339e_caseD_b:
    *(undefined1 *)(param_1 + 0x11e) = 0xc;
    puVar6 = puVar2;
    puVar10 = PTR_s_AT_BTRH__100e3600;
    goto LAB_100e33c2;
  }
  if (cVar1 == '\x10') {
    if (-1 < (char)PTR_DAT_100e361c[3]) goto LAB_100e34e6;
    uVar9 = 0x11;
LAB_100e34de:
    *(undefined1 *)(param_1 + 0x11e) = uVar9;
switchD_100e339e_default:
    puVar6 = (undefined *)0x0;
LAB_100e33c0:
    puVar10 = (undefined *)0x0;
    goto LAB_100e33c2;
  }
  if (cVar1 == '\x11') {
LAB_100e34e6:
    uVar9 = 0x12;
    goto LAB_100e34de;
  }
  if (param_2 != 0) {
    FUN_100a5b78(DAT_100e35bc | (DAT_100e35b8 - DAT_100e35b4) * 0x20 & 0xff00U,
                 PTR_s_SLC_Connection_ERROR_in_response_100e35c0);
    FUN_100e2e44(param_1);
    return -0x16;
  }
  switch(cVar1) {
  case '\0':
    FUN_10138654(param_1,PTR_LAB_100e367c_1_100e35c4);
    puVar6 = PTR_LAB_100e3208_1_100e35c8;
    *(undefined1 *)(param_1 + 0x11e) = 1;
    goto LAB_100e33c0;
  case '\x01':
    *(undefined1 *)(param_1 + 0x11e) = 2;
    if ((*(int *)(param_1 + 0x14) << 0x18 < 0) && (*(int *)(param_1 + 0x18) << 0x16 < 0)) {
      puVar6 = (undefined *)0x0;
      puVar10 = PTR_s_AT_BAC_1_2_100e3620;
      break;
    }
  case '\x02':
switchD_100e339e_caseD_2:
    puVar6 = PTR_LAB_100e31c0_1_100e35d4;
    *(undefined1 *)(param_1 + 0x11e) = 3;
    puVar10 = PTR_s_AT_CIND___100e35d8;
    break;
  case '\x03':
    *(undefined1 *)(param_1 + 0x11e) = 4;
    puVar6 = puVar10;
    puVar10 = PTR_s_AT_CIND__100e35e0;
    break;
  case '\x04':
    *(undefined1 *)(param_1 + 0x11e) = 5;
    puVar6 = (undefined *)0x0;
    puVar10 = PTR_s_AT_CMER_3_0_0_1_100e35e4;
    break;
  case '\x05':
    *(undefined1 *)(param_1 + 0x11e) = 6;
    if ((*(int *)(param_1 + 0x14) << 0x1e < 0) &&
       (puVar6 = PTR_LAB_100e28e4_1_100e3624, puVar10 = PTR_s_AT_CHLD___100e3628,
       *(int *)(param_1 + 0x18) << 0x1f < 0)) break;
  case '\x06':
    *(undefined1 *)(param_1 + 0x11e) = 7;
    if ((*(int *)(param_1 + 0x14) << 0x17 < 0) && (*(int *)(param_1 + 0x18) << 0x15 < 0)) {
      puVar6 = (undefined *)0x0;
      puVar10 = PTR_s_AT_BIND_2_100e362c;
    }
    else {
switchD_100e339e_caseD_7:
      puVar6 = PTR_LAB_100e289c_1_100e35e8;
      if ((*(int *)(param_1 + 0x14) << 0x17 < 0) && (*(int *)(param_1 + 0x18) << 0x15 < 0)) {
        *(undefined1 *)(param_1 + 0x11e) = 8;
        puVar10 = PTR_s_AT_BIND___100e35ec;
      }
      else {
switchD_100e339e_caseD_8:
        if ((*(int *)(param_1 + 0x14) << 0x17 < 0) && (*(int *)(param_1 + 0x18) << 0x15 < 0)) {
          *(undefined1 *)(param_1 + 0x11e) = 9;
          puVar6 = (undefined *)0x0;
          puVar10 = PTR_s_AT_BIND__100e35f0;
        }
        else {
switchD_100e339e_caseD_9:
          *(undefined1 *)(param_1 + 0x11e) = 10;
          puVar6 = (undefined *)0x0;
          puVar10 = PTR_s_AT_COPS_3_0_100e35f4;
        }
      }
    }
    break;
  case '\a':
    goto switchD_100e339e_caseD_7;
  case '\b':
    goto switchD_100e339e_caseD_8;
  case '\t':
    goto switchD_100e339e_caseD_9;
  case '\n':
    *(undefined1 *)(param_1 + 0x11e) = 0xb;
    puVar6 = (undefined *)0x0;
    puVar10 = PTR_s_AT_CMEE_1_100e35f8;
    break;
  case '\v':
    goto switchD_100e339e_caseD_b;
  case '\f':
    goto switchD_100e339e_caseD_c;
  case '\r':
    *(undefined1 *)(param_1 + 0x11e) = 0xe;
    puVar6 = (undefined *)0x0;
    puVar10 = PTR_s_AT_CCWA_1_100e3608;
    break;
  case '\x0e':
    *(undefined1 *)(param_1 + 0x11e) = 0xf;
    puVar6 = puVar3;
    puVar10 = PTR_DAT_100e3610;
    break;
  case '\x0f':
    goto switchD_100e339e_caseD_f;
  default:
    goto switchD_100e339e_default;
  }
LAB_100e33c2:
  cVar1 = *(char *)(param_1 + 0x11e);
  if (cVar1 == '\x12') {
    bVar4 = *(byte *)(param_1 + 0x11c);
    *(byte *)(param_1 + 0x11c) = bVar4 & 0xfd;
    if ((int)((uint)bVar4 << 0x1f) < 0) {
      FUN_1013cbaa(DAT_100e35cc,puVar6,1,0);
    }
    if ((*DAT_100e35d0 != 0) && (pcVar11 = *(code **)(*DAT_100e35d0 + 4), pcVar11 != (code *)0x0)) {
      (*pcVar11)(**(undefined4 **)(param_1 + -0xa4));
    }
  }
  else {
    if (cVar1 == '\x01') {
      iVar5 = FUN_100e3250(param_1 + -0xd4,puVar6,PTR_FUN_100e333c_1_100e3630,
                           PTR_s_AT_BRSF__u_100e3634,*(undefined4 *)(param_1 + 0x14));
    }
    else {
      if (cVar1 == '\x11') {
        FUN_1011ea48(auStack_4c,0,0x32,puVar10);
        bVar4 = FUN_1011ea10(PTR_s_AT_BIA__100e3638);
        uVar13 = (uint)bVar4;
        FUN_1013d03e(auStack_4c,PTR_s_AT_BIA__100e3638,uVar13,0x32);
        pcVar8 = (char *)(param_1 + 0x1c);
        do {
          pcVar7 = pcVar8 + 1;
          if (*pcVar8 == -1) {
            auStack_4c[uVar13 - 1 & 0xff] = 0;
            break;
          }
          if (*pcVar8 == '\x04') {
            uVar9 = 0x30;
          }
          else {
            uVar9 = 0x31;
          }
          uVar12 = uVar13 + 1;
          auStack_4c[uVar13] = uVar9;
          uVar13 = uVar13 + 2 & 0xff;
          auStack_4c[uVar12 & 0xff] = 0x2c;
          pcVar8 = pcVar7;
        } while (pcVar7 != (char *)(param_1 + 0x30));
        puVar6 = (undefined *)0x0;
        puVar10 = auStack_4c;
      }
      iVar5 = FUN_100e3250(param_1 + -0xd4,puVar6,PTR_FUN_100e333c_1_100e3630,puVar10);
    }
    if (iVar5 < 0) {
      FUN_100e2e44(param_1);
      return iVar5;
    }
  }
  return 0;
}

