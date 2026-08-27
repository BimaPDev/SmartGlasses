/* FUN_2c6481b0 @ 0x2c6481b0 */

void FUN_2c6481b0(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  
  pcVar1 = DAT_2c6482ac;
  FUN_2c648600(DAT_2c6482b0);
  uVar3 = DAT_2c6482b4;
  uVar2 = DAT_2c6482b0;
  if (pcVar1[2] != '\0') {
    pcVar7 = pcVar1 + 0x10;
    do {
      while (iVar4 = FUN_2c6484d0(), iVar4 != 0) {
        if (*pcVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x2cd,DAT_2c6482bc,DAT_2c6482b8,DAT_2c6482c0,iVar4);
        }
        if ((iVar4 != 0xd) && (iVar4 != 10)) {
          if (iVar4 == 8) {
            iVar4 = *(int *)(pcVar1 + 0xc);
            if (iVar4 != 0) {
              *(int *)(pcVar1 + 0xc) = iVar4 + -1;
              pcVar1[iVar4 + 0xf] = '\0';
              FUN_2c64849c(8);
              FUN_2c64849c(0x20);
              FUN_2c64849c(8);
            }
          }
          else {
            uVar6 = *(uint *)(pcVar1 + 0xc);
            if (uVar6 < 0x80) {
              if (pcVar1[1] != '\0') {
                FUN_2c64849c((int)(char)iVar4);
                uVar6 = *(uint *)(pcVar1 + 0xc);
              }
              *(uint *)(pcVar1 + 0xc) = uVar6 + 1;
              pcVar1[uVar6 + 0x10] = (char)iVar4;
            }
          }
          goto LAB_2c6481fe;
        }
        if (*(int *)(pcVar1 + 0xc) != 0) {
          FUN_2c648600(uVar3);
          uVar5 = FUN_2c66c4ec(pcVar7);
          FUN_2c647cd0(pcVar7,uVar5,0);
          pcVar1[0xc] = '\0';
          pcVar1[0xd] = '\0';
          pcVar1[0xe] = '\0';
          pcVar1[0xf] = '\0';
          FUN_2c674268(pcVar7,0,0x80);
        }
        if (iVar4 != 10) goto LAB_2c6481fe;
        FUN_2c648600(uVar2);
        if (pcVar1[2] == '\0') {
          return;
        }
      }
      do {
        iVar4 = FUN_2c6485a8();
        if (iVar4 != 0) break;
        iVar4 = FUN_2c6485a8();
      } while (iVar4 == 0);
LAB_2c6481fe:
    } while (pcVar1[2] != '\0');
  }
  return;
}

