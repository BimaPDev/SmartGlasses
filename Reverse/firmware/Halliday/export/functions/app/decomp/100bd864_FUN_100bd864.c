/* FUN_100bd864 @ 0x100bd864 */

int FUN_100bd864(uint param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_100bd8c4;
  iVar4 = 0;
  iVar5 = DAT_100bd8c4;
  do {
    if (param_1 == 0) {
      if (param_2 == 0) {
        if (*(char *)(iVar5 + 1) == '\0') {
          iVar5 = iVar4 * 0xc;
          bVar1 = *(byte *)(iVar2 + iVar5);
          *(byte *)(iVar2 + iVar5 + 1) = (byte)iVar4 | 0x80;
          *(byte *)(iVar2 + iVar5) = bVar1 & 0xfd;
          return iVar2 + iVar5;
        }
      }
      else {
        iVar3 = FUN_1011ea30(*(undefined4 *)(iVar5 + 4),param_2,0x10);
        if (iVar3 == 0) goto LAB_100bd87e;
      }
    }
    else if (*(byte *)(iVar5 + 1) == param_1) {
LAB_100bd87e:
      return iVar4 * 0xc + iVar2;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0xc;
    if (iVar4 == 4) {
      return 0;
    }
  } while( true );
}

