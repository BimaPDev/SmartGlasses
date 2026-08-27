/* FUN_2c4d58e4 @ 0x2c4d58e4 */

void FUN_2c4d58e4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  byte bVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  
  FUN_2c674268(param_1,0,0xd1,param_4,param_4);
  *(undefined1 *)(param_1 + 2) = 0xf;
  *(undefined1 *)(param_1 + 1) = 1;
  switch(param_2) {
  case 1:
    uVar10 = 1;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)(param_1 + 0xce) = 1;
    *(undefined1 *)(param_1 + 0xcf) = 1;
    *(undefined1 *)(param_1 + 0xcd) = 1;
    break;
  case 2:
    uVar10 = 1;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(undefined1 *)(param_1 + 0xce) = 2;
    *(undefined1 *)(param_1 + 0xcf) = 2;
    *(undefined1 *)(param_1 + 0xcd) = 1;
    break;
  case 3:
    uVar10 = 2;
    cVar6 = '\x03';
    bVar8 = 2;
    cVar2 = cVar6;
    goto LAB_2c4d5956;
  case 4:
  case 5:
    cVar6 = '\0';
    cVar2 = '\0';
    *(undefined1 *)(param_1 + 5) = 1;
    if (4 < param_2) goto LAB_2c4d59e2;
    goto LAB_2c4d5944;
  case 6:
    cVar2 = '\0';
    cVar6 = '\x01';
    goto LAB_2c4d59d4;
  default:
    goto switchD_2c4d5900_caseD_8;
  case 0xb:
    uVar9 = 6;
    uVar4 = 7;
    goto LAB_2c4d59f4;
  case 0xc:
    uVar9 = 7;
    uVar4 = 8;
    *(undefined1 *)(param_1 + 0x71) = 1;
LAB_2c4d59f4:
    *(undefined1 *)(param_1 + 0xcf) = uVar9;
    uVar10 = 2;
    *(undefined1 *)(param_1 + 0xce) = uVar4;
    *(undefined1 *)(param_1 + 3) = 2;
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 0xcd) = 1;
    break;
  case 0xe:
    *(undefined1 *)(param_1 + 0x32) = 1;
  case 7:
    cVar2 = '\x02';
    cVar6 = '\x03';
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)(param_1 + 0x12) = 1;
LAB_2c4d59d4:
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
    if (param_2 < 5) {
LAB_2c4d5944:
      cVar3 = '\x01';
    }
    else {
LAB_2c4d59e2:
      cVar3 = '\x02';
      *(undefined1 *)(param_1 + 0x70) = 1;
    }
    bVar8 = *(char *)(param_1 + 3) + 2;
    cVar6 = cVar6 + cVar3 + '\x03';
    uVar10 = (uint)bVar8;
    cVar2 = cVar2 + cVar3 + '\x03';
LAB_2c4d5956:
    *(byte *)(param_1 + 3) = bVar8;
    *(char *)(param_1 + 0xce) = cVar6;
    *(char *)(param_1 + 0xcf) = cVar2;
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined1 *)(param_1 + 0xcd) = 1;
    if (uVar10 != 0) break;
    cVar2 = '\0';
    cVar6 = '\0';
    goto LAB_2c4d596e;
  case 0x20:
    uVar10 = 2;
    *(undefined1 *)(param_1 + 3) = 2;
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 0xce) = 8;
    *(undefined1 *)(param_1 + 0xcf) = 7;
    *(undefined1 *)(param_1 + 0xcd) = 1;
  }
  cVar6 = '\0';
  pcVar7 = (char *)(param_1 + 0xf);
  cVar3 = '\0';
  do {
    pcVar12 = pcVar7 + 1;
    if (*pcVar12 == '\0') {
      cVar5 = cVar6;
      cVar2 = cVar3;
      cVar6 = cVar6 + '\x01';
    }
    else {
      cVar2 = cVar3 + '\x01';
      cVar5 = cVar3;
    }
    pcVar7[0x11] = cVar5;
    pcVar7 = pcVar12;
    cVar3 = cVar2;
  } while (pcVar12 != (char *)(param_1 + 0xf) + uVar10);
LAB_2c4d596e:
  if (*(byte *)(param_1 + 4) != 0) {
    pcVar12 = (char *)(param_1 + 0x3f) + *(byte *)(param_1 + 4);
    pcVar7 = (char *)(param_1 + 0x3f);
    cVar3 = cVar2;
    do {
      while (pcVar1 = pcVar7 + 1, *pcVar1 != '\0') {
        cVar2 = cVar3 + '\x01';
        pcVar7[0x11] = cVar3;
        pcVar7 = pcVar1;
        cVar3 = cVar2;
        if (pcVar12 == pcVar1) goto LAB_2c4d599c;
      }
      cVar5 = cVar6 + '\x01';
      pcVar7[0x11] = cVar6;
      pcVar7 = pcVar1;
      cVar2 = cVar3;
      cVar6 = cVar5;
    } while (pcVar12 != pcVar1);
  }
LAB_2c4d599c:
  bVar8 = *(byte *)(param_1 + 5);
  if (bVar8 != 0) {
    pcVar7 = (char *)(param_1 + 0x6f);
    do {
      pcVar12 = pcVar7 + 1;
      if (*pcVar12 == '\0') {
        cVar3 = cVar6;
        cVar6 = cVar6 + '\x01';
      }
      else {
        cVar3 = cVar2;
        cVar2 = cVar2 + '\x01';
      }
      pcVar7[0x11] = cVar3;
      pcVar7 = pcVar12;
    } while ((char *)(param_1 + 0x6f) + bVar8 != pcVar12);
  }
  bVar8 = *(byte *)(param_1 + 6);
  if (bVar8 != 0) {
    puVar11 = (undefined1 *)(param_1 + 0x9f);
    uVar10 = 0;
    do {
      puVar11 = puVar11 + 1;
      *puVar11 = (char)uVar10;
      uVar10 = uVar10 + 1;
    } while (bVar8 != uVar10);
  }
switchD_2c4d5900_caseD_8:
  return;
}

