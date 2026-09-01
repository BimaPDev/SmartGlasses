/* FUN_100a7450 @ 0x100a7450 */

char * FUN_100a7450(undefined4 param_1,int param_2,char param_3,char param_4,char param_5,
                   int param_6)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte local_3c;
  char local_3b;
  char local_3a;
  char local_39;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  byte local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  char *pcStack_24;
  
  pcVar4 = (char *)thunk_FUN_1009f30c(0x24,DAT_100a75fc);
  if (pcVar4 == (char *)0x0) {
    return (char *)0x0;
  }
  iVar5 = FUN_1011dbc4();
  if (iVar5 == 0) {
    if (param_2 < 0x11) {
      uVar3 = 0x200;
    }
    else {
      uVar3 = 0x400;
    }
  }
  else if (param_2 < 0x11) {
    uVar3 = 0x100;
  }
  else {
    uVar3 = 0x200;
  }
  *(undefined2 *)(pcVar4 + 0x12) = uVar3;
  iVar5 = thunk_FUN_1009f30c(*(undefined2 *)(pcVar4 + 0x12),DAT_100a75fc);
  *(int *)(pcVar4 + 0x14) = iVar5;
  if (iVar5 == 0) goto LAB_100a7572;
  pcVar4[2] = param_5;
  *pcVar4 = (char)param_1;
  pcVar4[1] = param_4;
  pcVar4[7] = param_3;
  cVar2 = FUN_1012df30(param_1);
  pcVar4[3] = cVar2;
  cVar2 = FUN_1012df0c(param_1);
  pcVar4[5] = cVar2;
  uVar3 = FUN_1012df08(param_1);
  *(undefined2 *)(pcVar4 + 0xc) = uVar3;
  uVar3 = FUN_100a7204(param_1);
  *(undefined2 *)(pcVar4 + 0xe) = uVar3;
  pcVar4[9] = pcVar4[9] | 4;
  pcVar4[6] = (char)param_2;
  if (pcVar4[2] == '\0') {
    cVar2 = FUN_100a71e4(param_1);
    pcVar4[2] = cVar2;
  }
  if (pcVar4[2] == '\x01') {
    cVar2 = '\x02';
LAB_100a74e4:
    pcVar4[8] = cVar2;
  }
  else if (pcVar4[2] == '\x02') {
    cVar2 = '\x04';
    goto LAB_100a74e4;
  }
  FUN_1011ea48(&local_3c,0,0x1c);
  local_3a = pcVar4[6];
  local_34 = *(undefined4 *)(pcVar4 + 0xc);
  local_30 = local_30 & 0xfe;
  local_3b = pcVar4[2];
  local_36 = 0x10;
  local_3c = local_3c | 0x20;
  local_2c = *(undefined4 *)(pcVar4 + 0x14);
  local_2e = *(undefined2 *)(pcVar4 + 0x12);
  local_39 = pcVar4[3];
  local_38 = FUN_1012dec8(*pcVar4);
  local_28 = DAT_100a7600;
  pcStack_24 = pcVar4;
  iVar5 = FUN_100640bc(&local_3c);
  *(int *)(pcVar4 + 0x1c) = iVar5;
  if (iVar5 != 0) {
    if (param_6 == 0) {
      uVar6 = FUN_1012e06e(8,param_1);
      uVar7 = FUN_1012e0a2(8,param_1);
      uVar6 = FUN_100a166c(uVar6,uVar7);
    }
    else {
      uVar6 = FUN_100a1660(param_6);
    }
    iVar1 = DAT_100a7608;
    iVar5 = DAT_100a7604;
    *(undefined4 *)(pcVar4 + 0x20) = uVar6;
    uVar8 = (iVar5 - iVar1) * 0x20 & 0xff00;
    if (*(int *)(pcVar4 + 0x20) == 0) {
      uVar8 = uVar8 | 0xa50000;
      uVar6 = DAT_100a7610;
      uVar7 = DAT_100a760c;
    }
    else {
      iVar5 = FUN_100a03c0(*(int *)(pcVar4 + 0x20),3);
      if (iVar5 == 0) {
        iVar5 = FUN_100a7a50(pcVar4);
        if (iVar5 == 0) {
          iVar5 = FUN_1011dbc4();
          if (((iVar5 != 0) && (*pcVar4 == '\x05')) && (param_2 == 0x10)) {
            FUN_1011ea48(*(undefined4 *)(pcVar4 + 0x14),0,*(undefined2 *)(pcVar4 + 0x12));
            FUN_100a07a0(*(undefined4 *)(pcVar4 + 0x20),*(undefined4 *)(pcVar4 + 0x14),0x100);
            FUN_100a07a0(*(undefined4 *)(pcVar4 + 0x20),*(undefined4 *)(pcVar4 + 0x14),0x100);
            FUN_100a07a0(*(undefined4 *)(pcVar4 + 0x20),*(undefined4 *)(pcVar4 + 0x14),0xd0);
          }
          iVar5 = FUN_1012df42();
          if ((iVar5 == 2) && (*pcVar4 == '\x05')) {
            FUN_10064218(*(undefined4 *)(pcVar4 + 0x1c),1);
          }
          FUN_100a5b78(uVar8 | 0xc70031,DAT_100a777c,DAT_100a7778,*pcVar4);
          FUN_100a5b78(uVar8 | 0xc80031,DAT_100a777c,DAT_100a7780,pcVar4[1]);
          FUN_100a5b78(uVar8 | 0xc90031,DAT_100a777c,DAT_100a7784,pcVar4[2]);
          FUN_100a5b78(uVar8 | 0xca0031,DAT_100a777c,DAT_100a7788,pcVar4[3]);
          FUN_100a5b78(uVar8 | 0xcb0031,DAT_100a777c,DAT_100a778c,pcVar4[4]);
          FUN_100a5b78(uVar8 | 0xcc0031,DAT_100a777c,DAT_100a7790,pcVar4[5]);
          FUN_100a5b78(uVar8 | 0xcd0031,DAT_100a777c,DAT_100a7794,pcVar4[6]);
          FUN_100a5b78(uVar8 | 0xce0031,DAT_100a777c,DAT_100a7798,pcVar4[7]);
          FUN_100a5b78(uVar8 | 0xcf0031,DAT_100a777c,DAT_100a779c,*(undefined2 *)(pcVar4 + 0x10));
          FUN_100a5b78(uVar8 | 0xd00031,DAT_100a777c,DAT_100a77a0,*(undefined4 *)(pcVar4 + 0x1c));
          FUN_100a5b78(uVar8 | 0xd10031,DAT_100a777c,DAT_100a77a4,*(undefined4 *)(pcVar4 + 0x20));
          FUN_100a5b78(uVar8 | 0xd20031,DAT_100a777c,DAT_100a77a8,(int)*(short *)(pcVar4 + 0xc));
          FUN_100a5b78(uVar8 | 0xd30031,DAT_100a777c,DAT_100a77ac,(int)*(short *)(pcVar4 + 0xe));
          if (param_6 == 0) {
            return pcVar4;
          }
          FUN_100a5b78(uVar8 | 0xd50031,DAT_100a777c,DAT_100a77b0,*(undefined4 *)(param_6 + 0x10));
          return pcVar4;
        }
        FUN_100a5b78(uVar8 | 0xb10011,DAT_100a7610,DAT_100a7618);
        FUN_100a0a70(*(undefined4 *)(pcVar4 + 0x20));
        FUN_100a0b00(*(undefined4 *)(pcVar4 + 0x20));
        goto LAB_100a7572;
      }
      FUN_100a0b00(*(undefined4 *)(pcVar4 + 0x20));
      uVar7 = DAT_100a7614;
      uVar6 = DAT_100a7610;
      pcVar4[0x20] = '\0';
      pcVar4[0x21] = '\0';
      pcVar4[0x22] = '\0';
      pcVar4[0x23] = '\0';
      uVar8 = uVar8 | 0xac0000;
    }
    FUN_100a5b78(uVar8 | 0x11,uVar6,uVar7);
  }
LAB_100a7572:
  if (*(int *)(pcVar4 + 0x14) != 0) {
    FUN_1012d1f4();
  }
  FUN_1012d1f4(pcVar4);
  return (char *)0x0;
}

