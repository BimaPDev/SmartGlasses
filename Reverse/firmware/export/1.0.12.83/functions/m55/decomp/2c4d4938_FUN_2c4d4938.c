/* FUN_2c4d4938 @ 0x2c4d4938 */

undefined4 FUN_2c4d4938(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = (uint)*(byte *)(param_2 + 3);
  if (uVar4 == *(byte *)(param_1 + 3)) {
    if (uVar4 == 0) {
      uVar3 = 1;
      goto LAB_2c4d4944;
    }
    pcVar2 = (char *)(param_1 + 0xf);
    iVar7 = 0;
    pcVar1 = (char *)(param_2 + 0xf);
    pcVar6 = pcVar2 + uVar4;
    iVar8 = 0;
    do {
      if (pcVar2[0x21] != pcVar1[0x21]) {
        uVar3 = 2;
        goto LAB_2c4d49aa;
      }
      pcVar2 = pcVar2 + 1;
      pcVar1 = pcVar1 + 1;
      if (*pcVar2 == '\0') {
        iVar5 = 1;
      }
      else {
        iVar5 = 2;
      }
      iVar8 = iVar8 + iVar5;
      if (*pcVar1 == '\0') {
        iVar5 = 1;
      }
      else {
        iVar5 = 2;
      }
      iVar7 = iVar7 + iVar5;
    } while (pcVar2 != pcVar6);
    uVar3 = 1;
LAB_2c4d49aa:
    if (iVar7 != iVar8) {
      uVar3 = 2;
    }
    uVar4 = (uint)*(byte *)(param_2 + 4);
    if (uVar4 == *(byte *)(param_1 + 4)) goto LAB_2c4d49b8;
LAB_2c4d494c:
    uVar3 = 2;
LAB_2c4d494e:
    uVar4 = (uint)*(byte *)(param_2 + 5);
    if (uVar4 == *(byte *)(param_1 + 5)) {
LAB_2c4d4a0a:
      if (uVar4 != 0) {
        pcVar2 = (char *)(param_1 + 0x6f);
        iVar7 = 0;
        pcVar1 = (char *)(param_2 + 0x6f);
        pcVar6 = pcVar2 + uVar4;
        iVar8 = 0;
        do {
          if (pcVar2[0x21] != pcVar1[0x21]) {
            uVar3 = 2;
            break;
          }
          pcVar2 = pcVar2 + 1;
          pcVar1 = pcVar1 + 1;
          if (*pcVar2 == '\0') {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
          iVar8 = iVar8 + iVar5;
          if (*pcVar1 == '\0') {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
          iVar7 = iVar7 + iVar5;
        } while (pcVar2 != pcVar6);
        if (iVar8 != iVar7) {
          uVar3 = 2;
        }
      }
      goto LAB_2c4d4958;
    }
  }
  else {
    uVar3 = 2;
LAB_2c4d4944:
    uVar4 = (uint)*(byte *)(param_2 + 4);
    if (uVar4 != *(byte *)(param_1 + 4)) goto LAB_2c4d494c;
LAB_2c4d49b8:
    if (uVar4 == 0) goto LAB_2c4d494e;
    pcVar2 = (char *)(param_1 + 0x3f);
    iVar7 = 0;
    pcVar1 = (char *)(param_2 + 0x3f);
    pcVar6 = pcVar2 + uVar4;
    iVar8 = 0;
    do {
      if (pcVar2[0x21] != pcVar1[0x21]) {
        uVar3 = 2;
        break;
      }
      pcVar2 = pcVar2 + 1;
      pcVar1 = pcVar1 + 1;
      if (*pcVar2 == '\0') {
        iVar5 = 1;
      }
      else {
        iVar5 = 2;
      }
      iVar8 = iVar8 + iVar5;
      if (*pcVar1 == '\0') {
        iVar5 = 1;
      }
      else {
        iVar5 = 2;
      }
      iVar7 = iVar7 + iVar5;
    } while (pcVar2 != pcVar6);
    if (iVar8 != iVar7) {
      uVar3 = 2;
    }
    uVar4 = (uint)*(byte *)(param_2 + 5);
    if (uVar4 == *(byte *)(param_1 + 5)) goto LAB_2c4d4a0a;
  }
  uVar3 = 2;
LAB_2c4d4958:
  if (*(char *)(param_1 + 6) != *(char *)(param_2 + 6)) {
    uVar3 = 2;
  }
  return uVar3;
}

