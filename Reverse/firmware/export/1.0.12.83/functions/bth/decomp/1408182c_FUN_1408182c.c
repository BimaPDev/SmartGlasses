/* FUN_1408182c @ 0x1408182c */

void FUN_1408182c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  
  iVar6 = DAT_140818dc;
  if (*DAT_140818d8 == '\0') {
    *DAT_140818d8 = '\x01';
    if ((*(char *)(iVar6 + 6) == '\0') || (*(char *)(iVar6 + 9) != '\0')) {
      *DAT_140818e0 = 1;
    }
    *DAT_140818e4 = param_1;
    puVar2 = DAT_140818ec;
    *DAT_140818e8 = param_2;
    cVar1 = *(char *)(iVar6 + 0x14);
    *puVar2 = param_3;
    iVar3 = DAT_140818f0;
    if (cVar1 != '\0') {
      if (*(char *)(iVar6 + 7) == '\0') {
        bVar7 = 0x3f;
      }
      else {
        bVar7 = 0x3b;
      }
      if (*(char *)(iVar6 + 8) != '\0') {
        bVar7 = bVar7 & 0x1f | 0x20;
      }
      *(byte *)(DAT_140818f0 + 2) = bVar7;
      uVar5 = DAT_140818f8;
      uVar4 = DAT_140818f4;
      *(undefined1 *)(iVar3 + 1) = 0;
      iVar6 = FUN_14084d98(3,uVar5,uVar4,6);
      if (iVar6 != 1) {
        FUN_14084e28(3,0,0xcf,0x14);
        FUN_14084e94(3,1,DAT_140818f8);
        iVar6 = FUN_14084d98(1,DAT_140818f8,DAT_140818fc,5);
        if (iVar6 != 1) {
          FUN_14084e28(1,0,0xcf,0x14);
          FUN_14084e94(1,1,DAT_140818f8,param_4);
          return;
        }
      }
    }
  }
  return;
}

