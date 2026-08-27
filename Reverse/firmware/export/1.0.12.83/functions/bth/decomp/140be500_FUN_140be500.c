/* FUN_140be500 @ 0x140be500 */

void FUN_140be500(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  
  pcVar1 = DAT_140be618;
  FUN_140be984(DAT_140be61c);
  uVar3 = DAT_140be628;
  uVar2 = DAT_140be61c;
  if (pcVar1[2] != '\0') {
    pcVar7 = pcVar1 + 0x10;
    do {
      while (iVar4 = FUN_140be800(), iVar4 != 0) {
        if (*pcVar1 != '\0') {
          FUN_1402a6e8(4,0x2cd,DAT_140be624,DAT_140be620,DAT_140be62c,iVar4);
        }
        if (iVar4 != 0xd) {
          if (iVar4 == 10) {
            if (*(int *)(pcVar1 + 0xc) != 0) {
              FUN_140be984(uVar3);
              uVar5 = FUN_140dd3a4(pcVar7);
              FUN_140be020(pcVar7,uVar5,0);
              pcVar1[0xc] = '\0';
              pcVar1[0xd] = '\0';
              pcVar1[0xe] = '\0';
              pcVar1[0xf] = '\0';
              FUN_140e5658(pcVar7,0,0x80);
            }
            FUN_140be984(uVar2);
          }
          else {
            uVar6 = *(uint *)(pcVar1 + 0xc);
            if (iVar4 == 8) {
              if (uVar6 != 0) {
                *(uint *)(pcVar1 + 0xc) = uVar6 - 1;
                pcVar1[uVar6 + 0xf] = '\0';
                FUN_140be7cc(8);
                FUN_140be7cc(0x20);
                FUN_140be7cc(8);
              }
            }
            else if (uVar6 < 0x80) {
              if (pcVar1[1] != '\0') {
                FUN_140be7cc((int)(char)iVar4);
                uVar6 = *(uint *)(pcVar1 + 0xc);
              }
              *(uint *)(pcVar1 + 0xc) = uVar6 + 1;
              pcVar1[uVar6 + 0x10] = (char)iVar4;
            }
          }
          goto LAB_140be546;
        }
        if (*(int *)(pcVar1 + 0xc) == 0) goto LAB_140be546;
        FUN_140be984(uVar3);
        uVar5 = FUN_140dd3a4(pcVar7);
        FUN_140be020(pcVar7,uVar5,0);
        pcVar1[0xc] = '\0';
        pcVar1[0xd] = '\0';
        pcVar1[0xe] = '\0';
        pcVar1[0xf] = '\0';
        FUN_140e5658(pcVar7,0,0x80);
        if (pcVar1[2] == '\0') {
          return;
        }
      }
      do {
        iVar4 = FUN_140be92c();
        if (iVar4 != 0) break;
        iVar4 = FUN_140be92c();
      } while (iVar4 == 0);
LAB_140be546:
    } while (pcVar1[2] != '\0');
  }
  return;
}

