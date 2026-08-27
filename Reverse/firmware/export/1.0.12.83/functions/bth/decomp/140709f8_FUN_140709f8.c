/* FUN_140709f8 @ 0x140709f8 */

char FUN_140709f8(uint param_1,int param_2,uint param_3,int *param_4)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  
  if (1 < param_1) {
    return -1;
  }
  iVar3 = *(int *)(DAT_14070a4c + (param_1 + 6) * 4);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x3c) != '\0')) {
    piVar5 = (int *)(iVar3 + 0x3c);
    cVar2 = '\0';
    do {
      piVar5 = piVar5 + 1;
      iVar4 = *piVar5;
      cVar6 = cVar2 + '\x01';
      if (iVar4 != 0) {
        if (param_2 == 0) {
          uVar1 = *(ushort *)(iVar4 + 0x14);
        }
        else {
          if (param_2 != 1) goto LAB_14070a1c;
          uVar1 = *(ushort *)(iVar4 + 0x16);
        }
        if (uVar1 == param_3) {
          if (param_4 != (int *)0x0) {
            *param_4 = iVar4;
          }
          return cVar2;
        }
      }
LAB_14070a1c:
      cVar2 = cVar6;
    } while (cVar6 != *(char *)(iVar3 + 0x3c));
  }
  return -1;
}

